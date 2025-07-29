CFLAGS="-O3"
CC=clang
jvlm=jvlm

VERSION=1.0.0
export VERSION


build/zeeraket-$(VERSION).jar: build/llvm_ir.bc
	jvlm $< $@

build/llvm_ir.bc: $(wildcard *.c) build/resources.c
	mkdir -p build
	${CC} ${CFLAGS} -emit-llvm -c $(wildcard *.c) -o build/llvm_ir.bc

resources = $(shell find resources -type f -print)
build/resources.c: $(patsubst %,build/%.c,$(resources))
	@echo '$(foreach f,$(resources),__attribute((used))\n__attribute((annotate(("jvlm::include_as_resource($(patsubst resources/%,%,$(f)))"))))\n#include "$(f).c"\n)' > $@


build/resources/%.c: resources/%
	mkdir -p $(dir $@)
	@# In order:
	@# - if the file is in lang/, we process it and automatically generate "item" keys for any "block" key
	@# - if the file is .json, we minify it
	@# - if the file is .mod.json, we substitute the VERSION environment variable
	@# Then we write the file in C format, and make the fields static so clang can potentially optimize them away
	cat $< \
		$(if $(patsubst %/lang/,,$(dir $<)),, | jq 'to_entries | map([., {key: .key | sub("^block"; "item"), value: .value}]) | flatten | from_entries') \
		$(if $(patsubst %.json,,$(dir $<)),, | jq -c '.') \
		$(if $(patsubst %.mod.json,,$(dir $<)),, | envsubst '$${VERSION}') \
		| xxd -i -n "$<" \
		| sed "s/unsigned/static unsigned/" > $@

build/resources/assets/zeeraket/lang/%.c: resources/assets/zeeraket/lang/%.json
	mkdir -p $(dir $@)
	echo e > $@
	# 

.PHONY: clean

clean:
	rm -r build/*
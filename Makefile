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

resources = $(wildcard resources/**)
build/resources.c: $(patsubst %,build/%.c,$(resources))
	echo '$(foreach f,$(resources),__attribute((annotate(("jvlm::include_as_resource($(patsubst resources/%,%,$(f)))"))))\n#include "$(f).c"\n)' > $@

build/resources/%.c: resources/%
	mkdir -p $(dir $@)
	cat $< | envsubst '$${VERSION}' | xxd -i -n $(notdir $<) > $@

.PHONY: clean

clean:
	rm -r build/*
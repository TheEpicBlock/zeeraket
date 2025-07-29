#include <inttypes.h>
#define JInt __int32_t

// Include resources in the jar (very javascript-esque)
#include "build/resources.c"

typedef struct MojangBlockSettings __attribute__((address_space(1))) * MojangBlockSettings_t;
typedef struct MojangBlock __attribute__((address_space(1))) * MojangBlock_t;
typedef struct MojangRegistry __attribute__((address_space(1))) * MojangRegistry_t;
typedef struct MojangRegistryKey __attribute__((address_space(1))) * MojangRegistryKey_t;
typedef struct MojangIdentifier __attribute__((address_space(1))) * MojangIdentifier_t;
typedef struct JavaLangString __attribute__((address_space(1))) * JavaLangString_t;
typedef struct JavaLangObject __attribute__((address_space(1))) * JavaLangObject_t;
typedef struct JavaLangStringBuilder __attribute__((address_space(1))) * StringBuilder_t;

// new Block
MojangBlock_t jvlm_extern_new__net_minecraft_class\u022C2248();
// Block.<init>()
void jvlm_extern_invokespecial__net_minecraft_class\u022C2248_\u022Ainit\u022B$jvlm_param$net_minecraft_class\u022C4970$class\u022C2251(MojangBlock_t this, MojangBlockSettings_t settings);
// AbstractBlock.Settings.copy()
#define blockSettingsFromCopy jvlm_extern__net_minecraft_class\u022C4970$class\u022C2251_method\u022C9630$jvlm_param$net_minecraft_class\u022C4970\u0229net_minecraft_class\u022C4970$class\u022C2251
MojangBlockSettings_t blockSettingsFromCopy(MojangBlock_t block);
// new StringBuilder
StringBuilder_t jvlm_extern_new__java_lang_StringBuilder();
// StringBuilder.<init>()
void jvlm_extern_invokespecial__java_lang_StringBuilder_\u022Ainit\u022B(StringBuilder_t this);
// StringBuilder.appendCodePoint
StringBuilder_t jvlm_extern_invokevirtual__java_lang_StringBuilder_appendCodePoint$jvlm_param$java_lang_StringBuilder(StringBuilder_t this, JInt a);
// Object.toString()
JavaLangString_t jvlm_extern_invokevirtual__java_lang_Object_toString$jvlm_param$java_lang_String(JavaLangObject_t this);
// Registry.register
#define registryRegister jvlm_extern_interfacestaticmeth__net_minecraft_class\u022C2378_method\u022C39197$jvlm_param$net_minecraft_class\u022C2378\u0229net_minecraft_class\u022C5321\u0229java_lang_Object\u0229java_lang_Object
JavaLangObject_t registryRegister(MojangRegistry_t registry, MojangRegistryKey_t name, JavaLangObject_t value);
// RegistryKey.of
#define registryKey jvlm_extern__net_minecraft_class\u022C5321_method\u022C29179$jvlm_param$net_minecraft_class\u022C5321\u0229net_minecraft_class\u022C2960\u0229net_minecraft_class\u022C5321
MojangRegistryKey_t registryKey(MojangRegistryKey_t registry, MojangIdentifier_t id);
// Identifier.of(string, string)
#define createIdentifier jvlm_extern__net_minecraft_class\u022C2960_method\u022C60655$jvlm_param$java_lang_String\u0229java_lang_String\u0229net_minecraft_class\u022C2960
MojangIdentifier_t createIdentifier(JavaLangString_t a, JavaLangString_t b);

#define REGISTRY$BLOCK jvlm__net_minecraft_class\u022C7923_field\u022C41175$jvlm_param$net_minecraft_class\u022C7922
extern MojangRegistry_t REGISTRY$BLOCK;
#define REGISTRYKEYS$BLOCK jvlm__net_minecraft_class\u022C7924_field\u022C41254$jvlm_param$net_minecraft_class\u022C5321
extern MojangRegistryKey_t REGISTRYKEYS$BLOCK;
#define LILY_OF_THE_VALLEY jvlm__net_minecraft_class\u022C2246_field\u022C10548$jvlm_param$net_minecraft_class\u022C2248
extern MojangBlock_t LILY_OF_THE_VALLEY;

#define makeString makeString$jvlm_param$java_lang_String
static JavaLangString_t makeString(char * input) {
    StringBuilder_t builder = jvlm_extern_new__java_lang_StringBuilder();
    jvlm_extern_invokespecial__java_lang_StringBuilder_\u022Ainit\u022B(builder);

    for (int i = 0;; i++) {
        if (input[i] == 0) {
            break;
        } else {
            jvlm_extern_invokevirtual__java_lang_StringBuilder_appendCodePoint$jvlm_param$java_lang_StringBuilder(builder, input[i]);
        }
    }

    return jvlm_extern_invokevirtual__java_lang_Object_toString$jvlm_param$java_lang_String((JavaLangObject_t)builder);
}

#define newBlock newBlock$jvlm_param$net_minecraft_class\u022C4970$class\u022C2251\u0229net_minecraft_class\u022C2248
static MojangBlock_t newBlock(MojangBlockSettings_t settings) {
    MojangBlock_t block = jvlm_extern_new__net_minecraft_class\u022C2248();
    jvlm_extern_invokespecial__net_minecraft_class\u022C2248_\u022Ainit\u022B$jvlm_param$net_minecraft_class\u022C4970$class\u022C2251(block, settings);
    return block;
}

void zeeraket_onInitialize() {
    JavaLangString_t modName = makeString("zeeraket");
    JavaLangString_t blockName = makeString("cakile_maritima");
    MojangIdentifier_t identifier = createIdentifier(modName, blockName);
    MojangRegistryKey_t key = registryKey(REGISTRYKEYS$BLOCK, identifier);

    MojangBlock_t block = newBlock(blockSettingsFromCopy(LILY_OF_THE_VALLEY));
    registryRegister(REGISTRY$BLOCK, key, (JavaLangObject_t)block);
}
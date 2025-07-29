#include <inttypes.h>
#define JInt __int32_t

// Include resources in the jar (very javascript-esque)
#include "build/resources.c"

typedef struct MojangBlock __attribute__((address_space(1))) * MojangBlock_t;
typedef struct MojangBlockSettings __attribute__((address_space(1))) * MojangBlockSettings_t;
typedef struct MojangItem __attribute__((address_space(1))) * MojangItem_t;
typedef struct MojangItemSettings __attribute__((address_space(1))) * MojangItemSettings_t;
typedef struct MojangRegistry __attribute__((address_space(1))) * MojangRegistry_t;
typedef struct MojangRegistryKey __attribute__((address_space(1))) * MojangRegistryKey_t;
typedef struct MojangIdentifier __attribute__((address_space(1))) * MojangIdentifier_t;
typedef struct JavaLangString __attribute__((address_space(1))) * JavaLangString_t;
typedef struct JavaLangObject __attribute__((address_space(1))) * JavaLangObject_t;
typedef struct JavaLangStringBuilder __attribute__((address_space(1))) * StringBuilder_t;

// new Item.Settings()
MojangItemSettings_t jvlm_extern_new__net_minecraft_class\u022C1792$class\u022C1793();
// Item$Settings.<init>()
void jvlm_extern_invokespecial__net_minecraft_class\u022C1792$class\u022C1793_\u022Ainit\u022B(MojangItemSettings_t this);
// Item$Settings.registryKey
#define Item$Settings$registryKey jvlm_extern_invokevirtual__net_minecraft_class\u022C1792$class\u022C1793_method\u022C63686$jvlm_param$net_minecraft_class\u022C5321\u0229net_minecraft_class\u022C1792$class\u022C1793
MojangItemSettings_t Item$Settings$registryKey(MojangItemSettings_t this, MojangRegistryKey_t key);
// new BlockItem
MojangItem_t jvlm_extern_new__net_minecraft_class\u022C1747();
// BlockItem.<init>()
void jvlm_extern_invokespecial__net_minecraft_class\u022C1747_\u022Ainit\u022B$jvlm_param$net_minecraft_class\u022C2248\u0229net_minecraft_class\u022C1792$class\u022C1793(MojangItem_t this, MojangBlock_t block, MojangItemSettings_t settings);
// new Block
MojangBlock_t jvlm_extern_new__net_minecraft_class\u022C2248();
// Block.<init>()
void jvlm_extern_invokespecial__net_minecraft_class\u022C2248_\u022Ainit\u022B$jvlm_param$net_minecraft_class\u022C4970$class\u022C2251(MojangBlock_t this, MojangBlockSettings_t settings);
// AbstractBlock.Settings.copy()
#define blockSettingsFromCopy jvlm_extern__net_minecraft_class\u022C4970$class\u022C2251_method\u022C9630$jvlm_param$net_minecraft_class\u022C4970\u0229net_minecraft_class\u022C4970$class\u022C2251
MojangBlockSettings_t blockSettingsFromCopy(MojangBlock_t block);
// AbstractBlock.Settings.registryKey()
#define blockSettingsSetKey jvlm_extern_invokevirtual__net_minecraft_class\u022C4970$class\u022C2251_method\u022C63500$jvlm_param$net_minecraft_class\u022C5321\u0229net_minecraft_class\u022C4970$class\u022C2251
MojangBlockSettings_t blockSettingsSetKey(MojangBlockSettings_t this, MojangRegistryKey_t key);
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
#define REGISTRY$ITEM jvlm__net_minecraft_class\u022C7923_field\u022C41178$jvlm_param$net_minecraft_class\u022C7922
extern MojangRegistry_t REGISTRY$ITEM;
#define REGISTRYKEYS$ITEM jvlm__net_minecraft_class\u022C7924_field\u022C41197$jvlm_param$net_minecraft_class\u022C5321
extern MojangRegistryKey_t REGISTRYKEYS$ITEM;
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
#define newBlockItem newBlockItem$jvlm_param$net_minecraft_class\u022C4970$class\u022C2251\u0229net_minecraft_class\u022C2248
static MojangItem_t newBlockItem(MojangBlock_t block, MojangItemSettings_t settings) {
    MojangItem_t item = jvlm_extern_new__net_minecraft_class\u022C1747();
    jvlm_extern_invokespecial__net_minecraft_class\u022C1747_\u022Ainit\u022B$jvlm_param$net_minecraft_class\u022C2248\u0229net_minecraft_class\u022C1792$class\u022C1793(item, block, settings);
    return item;
}
#define itemSettingsFromRegistryKey itemSettingsFromRegistryKey$jvlm_param$net_minecraft_class\u022C2248\u0229net_minecraft_class\u022C4970$class\u022C2251
static MojangItemSettings_t itemSettingsFromRegistryKey(MojangRegistryKey_t key) {
    MojangItemSettings_t settings = jvlm_extern_new__net_minecraft_class\u022C1792$class\u022C1793();
    jvlm_extern_invokespecial__net_minecraft_class\u022C1792$class\u022C1793_\u022Ainit\u022B(settings);
    settings = Item$Settings$registryKey(settings, key);
    return settings;
}

void zeeraket_onInitialize() {
    JavaLangString_t modName = makeString("zeeraket");
    JavaLangString_t blockName = makeString("cakile_maritima");
    MojangIdentifier_t identifier = createIdentifier(modName, blockName);
    MojangRegistryKey_t blockKey = registryKey(REGISTRYKEYS$BLOCK, identifier);
    MojangRegistryKey_t itemKey = registryKey(REGISTRYKEYS$ITEM, identifier);

    MojangBlockSettings_t bSettings = blockSettingsFromCopy(LILY_OF_THE_VALLEY);
    MojangBlock_t block = newBlock(blockSettingsSetKey(bSettings, blockKey));
    MojangItem_t item = newBlockItem(block, itemSettingsFromRegistryKey(itemKey));
    registryRegister(REGISTRY$BLOCK, blockKey, (JavaLangObject_t)block);
    registryRegister(REGISTRY$ITEM, itemKey, (JavaLangObject_t)item);
}
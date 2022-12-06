// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
  // Forward declaring type: TMP_StyleSheet
  class TMP_StyleSheet;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Settings
  class TMP_Settings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_Settings);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Settings*, "TMPro", "TMP_Settings");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Settings
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_Settings : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::TMPro::TMP_Settings::LineBreakingTable
    class LineBreakingTable;
    public:
    // private System.Boolean m_enableWordWrapping
    // Size: 0x1
    // Offset: 0x18
    bool m_enableWordWrapping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_enableKerning
    // Size: 0x1
    // Offset: 0x19
    bool m_enableKerning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_enableExtraPadding
    // Size: 0x1
    // Offset: 0x1A
    bool m_enableExtraPadding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_enableTintAllSprites
    // Size: 0x1
    // Offset: 0x1B
    bool m_enableTintAllSprites;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_enableParseEscapeCharacters
    // Size: 0x1
    // Offset: 0x1C
    bool m_enableParseEscapeCharacters;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_EnableRaycastTarget
    // Size: 0x1
    // Offset: 0x1D
    bool m_EnableRaycastTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_GetFontFeaturesAtRuntime
    // Size: 0x1
    // Offset: 0x1E
    bool m_GetFontFeaturesAtRuntime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_GetFontFeaturesAtRuntime and: m_missingGlyphCharacter
    char __padding6[0x1] = {};
    // private System.Int32 m_missingGlyphCharacter
    // Size: 0x4
    // Offset: 0x20
    int m_missingGlyphCharacter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_warningsDisabled
    // Size: 0x1
    // Offset: 0x24
    bool m_warningsDisabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_warningsDisabled and: m_defaultFontAsset
    char __padding8[0x3] = {};
    // private TMPro.TMP_FontAsset m_defaultFontAsset
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TMP_FontAsset* m_defaultFontAsset;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_FontAsset*) == 0x8);
    // private System.String m_defaultFontAssetPath
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_defaultFontAssetPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single m_defaultFontSize
    // Size: 0x4
    // Offset: 0x38
    float m_defaultFontSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_defaultAutoSizeMinRatio
    // Size: 0x4
    // Offset: 0x3C
    float m_defaultAutoSizeMinRatio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_defaultAutoSizeMaxRatio
    // Size: 0x4
    // Offset: 0x40
    float m_defaultAutoSizeMaxRatio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 m_defaultTextMeshProTextContainerSize
    // Size: 0x8
    // Offset: 0x44
    ::UnityEngine::Vector2 m_defaultTextMeshProTextContainerSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_defaultTextMeshProUITextContainerSize
    // Size: 0x8
    // Offset: 0x4C
    ::UnityEngine::Vector2 m_defaultTextMeshProUITextContainerSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Boolean m_autoSizeTextContainer
    // Size: 0x1
    // Offset: 0x54
    bool m_autoSizeTextContainer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_autoSizeTextContainer and: m_fallbackFontAssets
    char __padding16[0x3] = {};
    // private System.Collections.Generic.List`1<TMPro.TMP_FontAsset> m_fallbackFontAssets
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* m_fallbackFontAssets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*) == 0x8);
    // private System.Boolean m_matchMaterialPreset
    // Size: 0x1
    // Offset: 0x60
    bool m_matchMaterialPreset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_matchMaterialPreset and: m_defaultSpriteAsset
    char __padding18[0x7] = {};
    // private TMPro.TMP_SpriteAsset m_defaultSpriteAsset
    // Size: 0x8
    // Offset: 0x68
    ::TMPro::TMP_SpriteAsset* m_defaultSpriteAsset;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_SpriteAsset*) == 0x8);
    // private System.String m_defaultSpriteAssetPath
    // Size: 0x8
    // Offset: 0x70
    ::StringW m_defaultSpriteAssetPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_defaultColorGradientPresetsPath
    // Size: 0x8
    // Offset: 0x78
    ::StringW m_defaultColorGradientPresetsPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean m_enableEmojiSupport
    // Size: 0x1
    // Offset: 0x80
    bool m_enableEmojiSupport;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_enableEmojiSupport and: m_defaultStyleSheet
    char __padding22[0x7] = {};
    // private TMPro.TMP_StyleSheet m_defaultStyleSheet
    // Size: 0x8
    // Offset: 0x88
    ::TMPro::TMP_StyleSheet* m_defaultStyleSheet;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_StyleSheet*) == 0x8);
    // private UnityEngine.TextAsset m_leadingCharacters
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::TextAsset* m_leadingCharacters;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    // private UnityEngine.TextAsset m_followingCharacters
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::TextAsset* m_followingCharacters;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    // private TMPro.TMP_Settings/TMPro.LineBreakingTable m_linebreakingRules
    // Size: 0x8
    // Offset: 0xA0
    ::TMPro::TMP_Settings::LineBreakingTable* m_linebreakingRules;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_Settings::LineBreakingTable*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private TMPro.TMP_Settings s_Instance
    static ::TMPro::TMP_Settings* _get_s_Instance();
    // Set static field: static private TMPro.TMP_Settings s_Instance
    static void _set_s_Instance(::TMPro::TMP_Settings* value);
    // Get instance field reference: private System.Boolean m_enableWordWrapping
    [[deprecated("Use field access instead!")]] bool& dyn_m_enableWordWrapping();
    // Get instance field reference: private System.Boolean m_enableKerning
    [[deprecated("Use field access instead!")]] bool& dyn_m_enableKerning();
    // Get instance field reference: private System.Boolean m_enableExtraPadding
    [[deprecated("Use field access instead!")]] bool& dyn_m_enableExtraPadding();
    // Get instance field reference: private System.Boolean m_enableTintAllSprites
    [[deprecated("Use field access instead!")]] bool& dyn_m_enableTintAllSprites();
    // Get instance field reference: private System.Boolean m_enableParseEscapeCharacters
    [[deprecated("Use field access instead!")]] bool& dyn_m_enableParseEscapeCharacters();
    // Get instance field reference: private System.Boolean m_EnableRaycastTarget
    [[deprecated("Use field access instead!")]] bool& dyn_m_EnableRaycastTarget();
    // Get instance field reference: private System.Boolean m_GetFontFeaturesAtRuntime
    [[deprecated("Use field access instead!")]] bool& dyn_m_GetFontFeaturesAtRuntime();
    // Get instance field reference: private System.Int32 m_missingGlyphCharacter
    [[deprecated("Use field access instead!")]] int& dyn_m_missingGlyphCharacter();
    // Get instance field reference: private System.Boolean m_warningsDisabled
    [[deprecated("Use field access instead!")]] bool& dyn_m_warningsDisabled();
    // Get instance field reference: private TMPro.TMP_FontAsset m_defaultFontAsset
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_FontAsset*& dyn_m_defaultFontAsset();
    // Get instance field reference: private System.String m_defaultFontAssetPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_defaultFontAssetPath();
    // Get instance field reference: private System.Single m_defaultFontSize
    [[deprecated("Use field access instead!")]] float& dyn_m_defaultFontSize();
    // Get instance field reference: private System.Single m_defaultAutoSizeMinRatio
    [[deprecated("Use field access instead!")]] float& dyn_m_defaultAutoSizeMinRatio();
    // Get instance field reference: private System.Single m_defaultAutoSizeMaxRatio
    [[deprecated("Use field access instead!")]] float& dyn_m_defaultAutoSizeMaxRatio();
    // Get instance field reference: private UnityEngine.Vector2 m_defaultTextMeshProTextContainerSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_defaultTextMeshProTextContainerSize();
    // Get instance field reference: private UnityEngine.Vector2 m_defaultTextMeshProUITextContainerSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_defaultTextMeshProUITextContainerSize();
    // Get instance field reference: private System.Boolean m_autoSizeTextContainer
    [[deprecated("Use field access instead!")]] bool& dyn_m_autoSizeTextContainer();
    // Get instance field reference: private System.Collections.Generic.List`1<TMPro.TMP_FontAsset> m_fallbackFontAssets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*& dyn_m_fallbackFontAssets();
    // Get instance field reference: private System.Boolean m_matchMaterialPreset
    [[deprecated("Use field access instead!")]] bool& dyn_m_matchMaterialPreset();
    // Get instance field reference: private TMPro.TMP_SpriteAsset m_defaultSpriteAsset
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_SpriteAsset*& dyn_m_defaultSpriteAsset();
    // Get instance field reference: private System.String m_defaultSpriteAssetPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_defaultSpriteAssetPath();
    // Get instance field reference: private System.String m_defaultColorGradientPresetsPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_defaultColorGradientPresetsPath();
    // Get instance field reference: private System.Boolean m_enableEmojiSupport
    [[deprecated("Use field access instead!")]] bool& dyn_m_enableEmojiSupport();
    // Get instance field reference: private TMPro.TMP_StyleSheet m_defaultStyleSheet
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_StyleSheet*& dyn_m_defaultStyleSheet();
    // Get instance field reference: private UnityEngine.TextAsset m_leadingCharacters
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_m_leadingCharacters();
    // Get instance field reference: private UnityEngine.TextAsset m_followingCharacters
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_m_followingCharacters();
    // Get instance field reference: private TMPro.TMP_Settings/TMPro.LineBreakingTable m_linebreakingRules
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_Settings::LineBreakingTable*& dyn_m_linebreakingRules();
    // static public System.String get_version()
    // Offset: 0x14BC710
    static ::StringW get_version();
    // static public System.Boolean get_enableWordWrapping()
    // Offset: 0x14BC758
    static bool get_enableWordWrapping();
    // static public System.Boolean get_enableKerning()
    // Offset: 0x14BC830
    static bool get_enableKerning();
    // static public System.Boolean get_enableExtraPadding()
    // Offset: 0x14BC850
    static bool get_enableExtraPadding();
    // static public System.Boolean get_enableTintAllSprites()
    // Offset: 0x14BC870
    static bool get_enableTintAllSprites();
    // static public System.Boolean get_enableParseEscapeCharacters()
    // Offset: 0x14BC890
    static bool get_enableParseEscapeCharacters();
    // static public System.Boolean get_enableRaycastTarget()
    // Offset: 0x14BC8B0
    static bool get_enableRaycastTarget();
    // static public System.Boolean get_getFontFeaturesAtRuntime()
    // Offset: 0x14BC8D0
    static bool get_getFontFeaturesAtRuntime();
    // static public System.Int32 get_missingGlyphCharacter()
    // Offset: 0x14BC8F0
    static int get_missingGlyphCharacter();
    // static public System.Void set_missingGlyphCharacter(System.Int32 value)
    // Offset: 0x14BC910
    static void set_missingGlyphCharacter(int value);
    // static public System.Boolean get_warningsDisabled()
    // Offset: 0x14BC93C
    static bool get_warningsDisabled();
    // static public TMPro.TMP_FontAsset get_defaultFontAsset()
    // Offset: 0x14BC95C
    static ::TMPro::TMP_FontAsset* get_defaultFontAsset();
    // static public System.String get_defaultFontAssetPath()
    // Offset: 0x14BC97C
    static ::StringW get_defaultFontAssetPath();
    // static public System.Single get_defaultFontSize()
    // Offset: 0x14BC99C
    static float get_defaultFontSize();
    // static public System.Single get_defaultTextAutoSizingMinRatio()
    // Offset: 0x14BC9BC
    static float get_defaultTextAutoSizingMinRatio();
    // static public System.Single get_defaultTextAutoSizingMaxRatio()
    // Offset: 0x14BC9DC
    static float get_defaultTextAutoSizingMaxRatio();
    // static public UnityEngine.Vector2 get_defaultTextMeshProTextContainerSize()
    // Offset: 0x14BC9FC
    static ::UnityEngine::Vector2 get_defaultTextMeshProTextContainerSize();
    // static public UnityEngine.Vector2 get_defaultTextMeshProUITextContainerSize()
    // Offset: 0x14BCA1C
    static ::UnityEngine::Vector2 get_defaultTextMeshProUITextContainerSize();
    // static public System.Boolean get_autoSizeTextContainer()
    // Offset: 0x14BCA3C
    static bool get_autoSizeTextContainer();
    // static public System.Collections.Generic.List`1<TMPro.TMP_FontAsset> get_fallbackFontAssets()
    // Offset: 0x14BCA5C
    static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* get_fallbackFontAssets();
    // static public System.Boolean get_matchMaterialPreset()
    // Offset: 0x14BCA7C
    static bool get_matchMaterialPreset();
    // static public TMPro.TMP_SpriteAsset get_defaultSpriteAsset()
    // Offset: 0x14BCA9C
    static ::TMPro::TMP_SpriteAsset* get_defaultSpriteAsset();
    // static public System.String get_defaultSpriteAssetPath()
    // Offset: 0x14BCABC
    static ::StringW get_defaultSpriteAssetPath();
    // static public System.String get_defaultColorGradientPresetsPath()
    // Offset: 0x14BCADC
    static ::StringW get_defaultColorGradientPresetsPath();
    // static public System.Boolean get_enableEmojiSupport()
    // Offset: 0x14BCAFC
    static bool get_enableEmojiSupport();
    // static public System.Void set_enableEmojiSupport(System.Boolean value)
    // Offset: 0x14BCB1C
    static void set_enableEmojiSupport(bool value);
    // static public TMPro.TMP_StyleSheet get_defaultStyleSheet()
    // Offset: 0x14BCB4C
    static ::TMPro::TMP_StyleSheet* get_defaultStyleSheet();
    // static public UnityEngine.TextAsset get_leadingCharacters()
    // Offset: 0x14BCB6C
    static ::UnityEngine::TextAsset* get_leadingCharacters();
    // static public UnityEngine.TextAsset get_followingCharacters()
    // Offset: 0x14BCB8C
    static ::UnityEngine::TextAsset* get_followingCharacters();
    // static public TMPro.TMP_Settings/TMPro.LineBreakingTable get_linebreakingRules()
    // Offset: 0x14BCBAC
    static ::TMPro::TMP_Settings::LineBreakingTable* get_linebreakingRules();
    // static public TMPro.TMP_Settings get_instance()
    // Offset: 0x14BC778
    static ::TMPro::TMP_Settings* get_instance();
    // public System.Void .ctor()
    // Offset: 0x14BD140
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Settings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_Settings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Settings*, creationType>()));
    }
    // static public TMPro.TMP_Settings LoadDefaultSettings()
    // Offset: 0x14BCCEC
    static ::TMPro::TMP_Settings* LoadDefaultSettings();
    // static public TMPro.TMP_Settings GetSettings()
    // Offset: 0x14BCDE0
    static ::TMPro::TMP_Settings* GetSettings();
    // static public TMPro.TMP_FontAsset GetFontAsset()
    // Offset: 0x14BCE6C
    static ::TMPro::TMP_FontAsset* GetFontAsset();
    // static public TMPro.TMP_SpriteAsset GetSpriteAsset()
    // Offset: 0x14BCF00
    static ::TMPro::TMP_SpriteAsset* GetSpriteAsset();
    // static public TMPro.TMP_StyleSheet GetStyleSheet()
    // Offset: 0x14BCF94
    static ::TMPro::TMP_StyleSheet* GetStyleSheet();
    // static public System.Void LoadLinebreakingRules()
    // Offset: 0x14BCBE0
    static void LoadLinebreakingRules();
    // static private System.Collections.Generic.Dictionary`2<System.Int32,System.Char> GetCharacters(UnityEngine.TextAsset file)
    // Offset: 0x14BD030
    static ::System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>* GetCharacters(::UnityEngine::TextAsset* file);
  }; // TMPro.TMP_Settings
  #pragma pack(pop)
  static check_size<sizeof(TMP_Settings), 160 + sizeof(::TMPro::TMP_Settings::LineBreakingTable*)> __TMPro_TMP_SettingsSizeCheck;
  static_assert(sizeof(TMP_Settings) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&TMPro::TMP_Settings::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_enableWordWrapping
// Il2CppName: get_enableWordWrapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_enableWordWrapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_enableWordWrapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_enableKerning
// Il2CppName: get_enableKerning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_enableKerning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_enableKerning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_enableExtraPadding
// Il2CppName: get_enableExtraPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_enableExtraPadding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_enableExtraPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_enableTintAllSprites
// Il2CppName: get_enableTintAllSprites
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_enableTintAllSprites)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_enableTintAllSprites", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_enableParseEscapeCharacters
// Il2CppName: get_enableParseEscapeCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_enableParseEscapeCharacters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_enableParseEscapeCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_enableRaycastTarget
// Il2CppName: get_enableRaycastTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_enableRaycastTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_enableRaycastTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_getFontFeaturesAtRuntime
// Il2CppName: get_getFontFeaturesAtRuntime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_getFontFeaturesAtRuntime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_getFontFeaturesAtRuntime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_missingGlyphCharacter
// Il2CppName: get_missingGlyphCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&TMPro::TMP_Settings::get_missingGlyphCharacter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_missingGlyphCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::set_missingGlyphCharacter
// Il2CppName: set_missingGlyphCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&TMPro::TMP_Settings::set_missingGlyphCharacter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "set_missingGlyphCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_warningsDisabled
// Il2CppName: get_warningsDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_warningsDisabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_warningsDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultFontAsset
// Il2CppName: get_defaultFontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset* (*)()>(&TMPro::TMP_Settings::get_defaultFontAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultFontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultFontAssetPath
// Il2CppName: get_defaultFontAssetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&TMPro::TMP_Settings::get_defaultFontAssetPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultFontAssetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultFontSize
// Il2CppName: get_defaultFontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&TMPro::TMP_Settings::get_defaultFontSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultFontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultTextAutoSizingMinRatio
// Il2CppName: get_defaultTextAutoSizingMinRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&TMPro::TMP_Settings::get_defaultTextAutoSizingMinRatio)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultTextAutoSizingMinRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultTextAutoSizingMaxRatio
// Il2CppName: get_defaultTextAutoSizingMaxRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&TMPro::TMP_Settings::get_defaultTextAutoSizingMaxRatio)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultTextAutoSizingMaxRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultTextMeshProTextContainerSize
// Il2CppName: get_defaultTextMeshProTextContainerSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&TMPro::TMP_Settings::get_defaultTextMeshProTextContainerSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultTextMeshProTextContainerSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultTextMeshProUITextContainerSize
// Il2CppName: get_defaultTextMeshProUITextContainerSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&TMPro::TMP_Settings::get_defaultTextMeshProUITextContainerSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultTextMeshProUITextContainerSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_autoSizeTextContainer
// Il2CppName: get_autoSizeTextContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_autoSizeTextContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_autoSizeTextContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_fallbackFontAssets
// Il2CppName: get_fallbackFontAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* (*)()>(&TMPro::TMP_Settings::get_fallbackFontAssets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_fallbackFontAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_matchMaterialPreset
// Il2CppName: get_matchMaterialPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_matchMaterialPreset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_matchMaterialPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultSpriteAsset
// Il2CppName: get_defaultSpriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SpriteAsset* (*)()>(&TMPro::TMP_Settings::get_defaultSpriteAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultSpriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultSpriteAssetPath
// Il2CppName: get_defaultSpriteAssetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&TMPro::TMP_Settings::get_defaultSpriteAssetPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultSpriteAssetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultColorGradientPresetsPath
// Il2CppName: get_defaultColorGradientPresetsPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&TMPro::TMP_Settings::get_defaultColorGradientPresetsPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultColorGradientPresetsPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_enableEmojiSupport
// Il2CppName: get_enableEmojiSupport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&TMPro::TMP_Settings::get_enableEmojiSupport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_enableEmojiSupport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::set_enableEmojiSupport
// Il2CppName: set_enableEmojiSupport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&TMPro::TMP_Settings::set_enableEmojiSupport)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "set_enableEmojiSupport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_defaultStyleSheet
// Il2CppName: get_defaultStyleSheet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_StyleSheet* (*)()>(&TMPro::TMP_Settings::get_defaultStyleSheet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_defaultStyleSheet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_leadingCharacters
// Il2CppName: get_leadingCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (*)()>(&TMPro::TMP_Settings::get_leadingCharacters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_leadingCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_followingCharacters
// Il2CppName: get_followingCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (*)()>(&TMPro::TMP_Settings::get_followingCharacters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_followingCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_linebreakingRules
// Il2CppName: get_linebreakingRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Settings::LineBreakingTable* (*)()>(&TMPro::TMP_Settings::get_linebreakingRules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_linebreakingRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Settings* (*)()>(&TMPro::TMP_Settings::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Settings::LoadDefaultSettings
// Il2CppName: LoadDefaultSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Settings* (*)()>(&TMPro::TMP_Settings::LoadDefaultSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "LoadDefaultSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::GetSettings
// Il2CppName: GetSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Settings* (*)()>(&TMPro::TMP_Settings::GetSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "GetSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::GetFontAsset
// Il2CppName: GetFontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset* (*)()>(&TMPro::TMP_Settings::GetFontAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "GetFontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::GetSpriteAsset
// Il2CppName: GetSpriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SpriteAsset* (*)()>(&TMPro::TMP_Settings::GetSpriteAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "GetSpriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::GetStyleSheet
// Il2CppName: GetStyleSheet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_StyleSheet* (*)()>(&TMPro::TMP_Settings::GetStyleSheet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "GetStyleSheet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::LoadLinebreakingRules
// Il2CppName: LoadLinebreakingRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_Settings::LoadLinebreakingRules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "LoadLinebreakingRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Settings::GetCharacters
// Il2CppName: GetCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>* (*)(::UnityEngine::TextAsset*)>(&TMPro::TMP_Settings::GetCharacters)> {
  static const MethodInfo* get() {
    static auto* file = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Settings*), "GetCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{file});
  }
};

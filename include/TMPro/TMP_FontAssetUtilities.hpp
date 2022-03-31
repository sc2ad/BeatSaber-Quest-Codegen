// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Character
  class TMP_Character;
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: FontStyles
  struct FontStyles;
  // Forward declaring type: FontWeight
  struct FontWeight;
}
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAssetUtilities
  class TMP_FontAssetUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_FontAssetUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontAssetUtilities*, "TMPro", "TMP_FontAssetUtilities");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_FontAssetUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_FontAssetUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly TMPro.TMP_FontAssetUtilities s_Instance
    static ::TMPro::TMP_FontAssetUtilities* _get_s_Instance();
    // Set static field: static private readonly TMPro.TMP_FontAssetUtilities s_Instance
    static void _set_s_Instance(::TMPro::TMP_FontAssetUtilities* value);
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> k_SearchedFontAssets
    static ::System::Collections::Generic::List_1<int>* _get_k_SearchedFontAssets();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> k_SearchedFontAssets
    static void _set_k_SearchedFontAssets(::System::Collections::Generic::List_1<int>* value);
    // Get static field: static private System.Boolean k_IsFontEngineInitialized
    static bool _get_k_IsFontEngineInitialized();
    // Set static field: static private System.Boolean k_IsFontEngineInitialized
    static void _set_k_IsFontEngineInitialized(bool value);
    // static public TMPro.TMP_FontAssetUtilities get_instance()
    // Offset: 0x143DB54
    static ::TMPro::TMP_FontAssetUtilities* get_instance();
    // static private System.Void .cctor()
    // Offset: 0x143DAE8
    static void _cctor();
    // static public TMPro.TMP_Character GetCharacterFromFontAsset(System.UInt32 unicode, TMPro.TMP_FontAsset sourceFontAsset, System.Boolean includeFallbacks, TMPro.FontStyles fontStyle, TMPro.FontWeight fontWeight, out System.Boolean isAlternativeTypeface, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x143DBBC
    static ::TMPro::TMP_Character* GetCharacterFromFontAsset(uint unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ByRef<bool> isAlternativeTypeface, ByRef<::TMPro::TMP_FontAsset*> fontAsset);
    // static private TMPro.TMP_Character GetCharacterFromFontAsset_Internal(System.UInt32 unicode, TMPro.TMP_FontAsset sourceFontAsset, System.Boolean includeFallbacks, TMPro.FontStyles fontStyle, TMPro.FontWeight fontWeight, out System.Boolean isAlternativeTypeface, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x143DD2C
    static ::TMPro::TMP_Character* GetCharacterFromFontAsset_Internal(uint unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ByRef<bool> isAlternativeTypeface, ByRef<::TMPro::TMP_FontAsset*> fontAsset);
    // static public TMPro.TMP_Character GetCharacterFromFontAssets(System.UInt32 unicode, System.Collections.Generic.List`1<TMPro.TMP_FontAsset> fontAssets, System.Boolean includeFallbacks, TMPro.FontStyles fontStyle, TMPro.FontWeight fontWeight, out System.Boolean isAlternativeTypeface, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x143E138
    static ::TMPro::TMP_Character* GetCharacterFromFontAssets(uint unicode, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* fontAssets, bool includeFallbacks, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ByRef<bool> isAlternativeTypeface, ByRef<::TMPro::TMP_FontAsset*> fontAsset);
    // static private System.Boolean TryGetCharacterFromFontFile(System.UInt32 unicode, TMPro.TMP_FontAsset fontAsset, out TMPro.TMP_Character character)
    // Offset: 0x143E360
    static bool TryGetCharacterFromFontFile(uint unicode, ::TMPro::TMP_FontAsset* fontAsset, ByRef<::TMPro::TMP_Character*> character);
    // static public System.Boolean TryGetGlyphFromFontFile(System.UInt32 glyphIndex, TMPro.TMP_FontAsset fontAsset, out UnityEngine.TextCore.Glyph glyph)
    // Offset: 0x143E56C
    static bool TryGetGlyphFromFontFile(uint glyphIndex, ::TMPro::TMP_FontAsset* fontAsset, ByRef<::UnityEngine::TextCore::Glyph*> glyph);
    // public System.Void .ctor()
    // Offset: 0x143DB4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_FontAssetUtilities* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_FontAssetUtilities::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_FontAssetUtilities*, creationType>()));
    }
  }; // TMPro.TMP_FontAssetUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_FontAssetUtilities::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAssetUtilities* (*)()>(&TMPro::TMP_FontAssetUtilities::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAssetUtilities*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAssetUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_FontAssetUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAssetUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset
// Il2CppName: GetCharacterFromFontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Character* (*)(uint, ::TMPro::TMP_FontAsset*, bool, ::TMPro::FontStyles, ::TMPro::FontWeight, ByRef<bool>, ByRef<::TMPro::TMP_FontAsset*>)>(&TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* sourceFontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    static auto* includeFallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fontStyle = &::il2cpp_utils::GetClassFromName("TMPro", "FontStyles")->byval_arg;
    static auto* fontWeight = &::il2cpp_utils::GetClassFromName("TMPro", "FontWeight")->byval_arg;
    static auto* isAlternativeTypeface = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAssetUtilities*), "GetCharacterFromFontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface, fontAsset});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset_Internal
// Il2CppName: GetCharacterFromFontAsset_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Character* (*)(uint, ::TMPro::TMP_FontAsset*, bool, ::TMPro::FontStyles, ::TMPro::FontWeight, ByRef<bool>, ByRef<::TMPro::TMP_FontAsset*>)>(&TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset_Internal)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* sourceFontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    static auto* includeFallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fontStyle = &::il2cpp_utils::GetClassFromName("TMPro", "FontStyles")->byval_arg;
    static auto* fontWeight = &::il2cpp_utils::GetClassFromName("TMPro", "FontWeight")->byval_arg;
    static auto* isAlternativeTypeface = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAssetUtilities*), "GetCharacterFromFontAsset_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface, fontAsset});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAssets
// Il2CppName: GetCharacterFromFontAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Character* (*)(uint, ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*, bool, ::TMPro::FontStyles, ::TMPro::FontWeight, ByRef<bool>, ByRef<::TMPro::TMP_FontAsset*>)>(&TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAssets)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* fontAssets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")})->byval_arg;
    static auto* includeFallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fontStyle = &::il2cpp_utils::GetClassFromName("TMPro", "FontStyles")->byval_arg;
    static auto* fontWeight = &::il2cpp_utils::GetClassFromName("TMPro", "FontWeight")->byval_arg;
    static auto* isAlternativeTypeface = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAssetUtilities*), "GetCharacterFromFontAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode, fontAssets, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface, fontAsset});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAssetUtilities::TryGetCharacterFromFontFile
// Il2CppName: TryGetCharacterFromFontFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint, ::TMPro::TMP_FontAsset*, ByRef<::TMPro::TMP_Character*>)>(&TMPro::TMP_FontAssetUtilities::TryGetCharacterFromFontFile)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    static auto* character = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Character")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAssetUtilities*), "TryGetCharacterFromFontFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode, fontAsset, character});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAssetUtilities::TryGetGlyphFromFontFile
// Il2CppName: TryGetGlyphFromFontFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint, ::TMPro::TMP_FontAsset*, ByRef<::UnityEngine::TextCore::Glyph*>)>(&TMPro::TMP_FontAssetUtilities::TryGetGlyphFromFontFile)> {
  static const MethodInfo* get() {
    static auto* glyphIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    static auto* glyph = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore", "Glyph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontAssetUtilities*), "TryGetGlyphFromFontFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{glyphIndex, fontAsset, glyph});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontAssetUtilities::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

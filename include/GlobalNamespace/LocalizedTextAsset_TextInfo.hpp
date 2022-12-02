// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalizedTextAsset
#include "GlobalNamespace/LocalizedTextAsset.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalizedTextAsset::TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedTextAsset::TextInfo*, "", "LocalizedTextAsset/TextInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LocalizedTextAsset/TextInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalizedTextAsset::TextInfo : public ::Il2CppObject {
    public:
    public:
    // public Polyglot.Language language
    // Size: 0x4
    // Offset: 0x10
    ::Polyglot::Language language;
    // Field size check
    static_assert(sizeof(::Polyglot::Language) == 0x4);
    // Padding between fields: language and: localizedText
    char __padding0[0x4] = {};
    // public UnityEngine.TextAsset localizedText
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::TextAsset* localizedText;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    public:
    // Get instance field reference: public Polyglot.Language language
    [[deprecated("Use field access instead!")]] ::Polyglot::Language& dyn_language();
    // Get instance field reference: public UnityEngine.TextAsset localizedText
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_localizedText();
    // public System.Void .ctor()
    // Offset: 0x13381D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextAsset::TextInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalizedTextAsset::TextInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextAsset::TextInfo*, creationType>()));
    }
  }; // LocalizedTextAsset/TextInfo
  #pragma pack(pop)
  static check_size<sizeof(LocalizedTextAsset::TextInfo), 24 + sizeof(::UnityEngine::TextAsset*)> __GlobalNamespace_LocalizedTextAsset_TextInfoSizeCheck;
  static_assert(sizeof(LocalizedTextAsset::TextInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalizedTextAsset::TextInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

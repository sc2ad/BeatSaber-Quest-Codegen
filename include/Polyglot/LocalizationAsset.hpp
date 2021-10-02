// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Polyglot.GoogleDriveDownloadFormat
#include "Polyglot/GoogleDriveDownloadFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LocalizationAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalizationAsset : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.TextAsset textAsset
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::TextAsset* textAsset;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAsset*) == 0x8);
    // private Polyglot.GoogleDriveDownloadFormat format
    // Size: 0x4
    // Offset: 0x18
    Polyglot::GoogleDriveDownloadFormat format;
    // Field size check
    static_assert(sizeof(Polyglot::GoogleDriveDownloadFormat) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.TextAsset textAsset
    UnityEngine::TextAsset*& dyn_textAsset();
    // Get instance field reference: private Polyglot.GoogleDriveDownloadFormat format
    Polyglot::GoogleDriveDownloadFormat& dyn_format();
    // public UnityEngine.TextAsset get_TextAsset()
    // Offset: 0x2583650
    UnityEngine::TextAsset* get_TextAsset();
    // public System.Void set_TextAsset(UnityEngine.TextAsset value)
    // Offset: 0x2583658
    void set_TextAsset(UnityEngine::TextAsset* value);
    // public Polyglot.GoogleDriveDownloadFormat get_Format()
    // Offset: 0x2583660
    Polyglot::GoogleDriveDownloadFormat get_Format();
    // public System.Void set_Format(Polyglot.GoogleDriveDownloadFormat value)
    // Offset: 0x2583668
    void set_Format(Polyglot::GoogleDriveDownloadFormat value);
    // public System.Void .ctor()
    // Offset: 0x2583670
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizationAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationAsset*, creationType>()));
    }
  }; // Polyglot.LocalizationAsset
  #pragma pack(pop)
  static check_size<sizeof(LocalizationAsset), 24 + sizeof(Polyglot::GoogleDriveDownloadFormat)> __Polyglot_LocalizationAssetSizeCheck;
  static_assert(sizeof(LocalizationAsset) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationAsset*, "Polyglot", "LocalizationAsset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LocalizationAsset::get_TextAsset
// Il2CppName: get_TextAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextAsset* (Polyglot::LocalizationAsset::*)()>(&Polyglot::LocalizationAsset::get_TextAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationAsset*), "get_TextAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationAsset::set_TextAsset
// Il2CppName: set_TextAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizationAsset::*)(UnityEngine::TextAsset*)>(&Polyglot::LocalizationAsset::set_TextAsset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationAsset*), "set_TextAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationAsset::get_Format
// Il2CppName: get_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Polyglot::GoogleDriveDownloadFormat (Polyglot::LocalizationAsset::*)()>(&Polyglot::LocalizationAsset::get_Format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationAsset*), "get_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationAsset::set_Format
// Il2CppName: set_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizationAsset::*)(Polyglot::GoogleDriveDownloadFormat)>(&Polyglot::LocalizationAsset::set_Format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Polyglot", "GoogleDriveDownloadFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizationAsset*), "set_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizationAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

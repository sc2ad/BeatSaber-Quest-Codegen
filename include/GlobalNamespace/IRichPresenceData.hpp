// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRichPresenceData*, "", "IRichPresenceData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IRichPresenceData
  // [TokenAttribute] Offset: FFFFFFFF
  class IRichPresenceData {
    public:
    // public System.String get_apiName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_localizedDescription();
  }; // IRichPresenceData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IRichPresenceData::get_apiName
// Il2CppName: get_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IRichPresenceData::*)()>(&GlobalNamespace::IRichPresenceData::get_apiName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRichPresenceData*), "get_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IRichPresenceData::get_localizedDescription
// Il2CppName: get_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IRichPresenceData::*)()>(&GlobalNamespace::IRichPresenceData::get_localizedDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRichPresenceData*), "get_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

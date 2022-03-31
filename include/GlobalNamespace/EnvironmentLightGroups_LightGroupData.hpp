// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EnvironmentLightGroups
#include "GlobalNamespace/EnvironmentLightGroups.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightGroups::LightGroupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightGroups::LightGroupData*, "", "EnvironmentLightGroups/LightGroupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentLightGroups/LightGroupData
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentLightGroups::LightGroupData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Int32 _groupId
    // Size: 0x4
    // Offset: 0x10
    int groupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _numberOfElements
    // Size: 0x4
    // Offset: 0x14
    int numberOfElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 _groupId
    int& dyn__groupId();
    // Get instance field reference: private System.Int32 _numberOfElements
    int& dyn__numberOfElements();
    // public System.Int32 get_groupId()
    // Offset: 0x1383E40
    int get_groupId();
    // public System.Int32 get_numberOfElements()
    // Offset: 0x1383E48
    int get_numberOfElements();
    // public System.Void .ctor()
    // Offset: 0x1383E50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentLightGroups::LightGroupData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentLightGroups::LightGroupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentLightGroups::LightGroupData*, creationType>()));
    }
  }; // EnvironmentLightGroups/LightGroupData
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentLightGroups::LightGroupData), 20 + sizeof(int)> __GlobalNamespace_EnvironmentLightGroups_LightGroupDataSizeCheck;
  static_assert(sizeof(EnvironmentLightGroups::LightGroupData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::LightGroupData::get_groupId
// Il2CppName: get_groupId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::EnvironmentLightGroups::LightGroupData::*)()>(&GlobalNamespace::EnvironmentLightGroups::LightGroupData::get_groupId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentLightGroups::LightGroupData*), "get_groupId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::LightGroupData::get_numberOfElements
// Il2CppName: get_numberOfElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::EnvironmentLightGroups::LightGroupData::*)()>(&GlobalNamespace::EnvironmentLightGroups::LightGroupData::get_numberOfElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentLightGroups::LightGroupData*), "get_numberOfElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::LightGroupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRControllersRecorderSaveData::NodeInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*, "", "VRControllersRecorderSaveData/NodeInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData/NodeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderSaveData::NodeInfo : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.XR.XRNode nodeType
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::XR::XRNode nodeType;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::XRNode) == 0x4);
    // public System.Int32 nodeIdx
    // Size: 0x4
    // Offset: 0x14
    int nodeIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.XR.XRNode nodeType
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::XRNode& dyn_nodeType();
    // Get instance field reference: public System.Int32 nodeIdx
    [[deprecated("Use field access instead!")]] int& dyn_nodeIdx();
    // public System.Void .ctor()
    // Offset: 0x1666C94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData::NodeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRControllersRecorderSaveData::NodeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData::NodeInfo*, creationType>()));
    }
  }; // VRControllersRecorderSaveData/NodeInfo
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderSaveData::NodeInfo), 20 + sizeof(int)> __GlobalNamespace_VRControllersRecorderSaveData_NodeInfoSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData::NodeInfo) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveData::NodeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

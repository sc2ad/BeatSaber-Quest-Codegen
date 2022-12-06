// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRControllersRecorderData
#include "GlobalNamespace/VRControllersRecorderData.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRControllersRecorderData::NodeInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorderData::NodeInfo*, "", "VRControllersRecorderData/NodeInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderData/NodeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderData::NodeInfo : public ::Il2CppObject {
    public:
    public:
    // public readonly UnityEngine.XR.XRNode nodeType
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::XR::XRNode nodeType;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::XRNode) == 0x4);
    // public readonly System.Int32 nodeIdx
    // Size: 0x4
    // Offset: 0x14
    int nodeIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly UnityEngine.XR.XRNode nodeType
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::XRNode& dyn_nodeType();
    // Get instance field reference: public readonly System.Int32 nodeIdx
    [[deprecated("Use field access instead!")]] int& dyn_nodeIdx();
    // public System.Void .ctor(UnityEngine.XR.XRNode nodeType, System.Int32 nodeIdx)
    // Offset: 0x166636C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderData::NodeInfo* New_ctor(::UnityEngine::XR::XRNode nodeType, int nodeIdx) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRControllersRecorderData::NodeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderData::NodeInfo*, creationType>(nodeType, nodeIdx)));
    }
  }; // VRControllersRecorderData/NodeInfo
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderData::NodeInfo), 20 + sizeof(int)> __GlobalNamespace_VRControllersRecorderData_NodeInfoSizeCheck;
  static_assert(sizeof(VRControllersRecorderData::NodeInfo) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderData::NodeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRControllerTransformOffset
  class VRControllerTransformOffset;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VRController
  class VRController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRController*, "", "VRController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: VRController
  // [TokenAttribute] Offset: FFFFFFFF
  class VRController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.XR.XRNode _node
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::XR::XRNode node;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::XRNode) == 0x4);
    // private System.Int32 _nodeIdx
    // Size: 0x4
    // Offset: 0x1C
    int nodeIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NullAllowed] Offset: 0x10D3454
    // private VRControllerTransformOffset _transformOffset
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::VRControllerTransformOffset* transformOffset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRControllerTransformOffset*) == 0x8);
    // [InjectAttribute] Offset: 0x10D348C
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [InjectAttribute] Offset: 0x10D349C
    // private readonly VRControllersInputManager _vrControllersInputManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRControllersInputManager*) == 0x8);
    // private UnityEngine.Vector3 _lastTrackedPosition
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 lastTrackedPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.XR.XRNode _node
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::XRNode& dyn__node();
    // Get instance field reference: private System.Int32 _nodeIdx
    [[deprecated("Use field access instead!")]] int& dyn__nodeIdx();
    // Get instance field reference: private VRControllerTransformOffset _transformOffset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRControllerTransformOffset*& dyn__transformOffset();
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private readonly VRControllersInputManager _vrControllersInputManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRControllersInputManager*& dyn__vrControllersInputManager();
    // Get instance field reference: private UnityEngine.Vector3 _lastTrackedPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__lastTrackedPosition();
    // public UnityEngine.XR.XRNode get_node()
    // Offset: 0x2A86E14
    ::UnityEngine::XR::XRNode get_node();
    // public System.Void set_node(UnityEngine.XR.XRNode value)
    // Offset: 0x2A86E1C
    void set_node(::UnityEngine::XR::XRNode value);
    // public System.Int32 get_nodeIdx()
    // Offset: 0x2A86E24
    int get_nodeIdx();
    // public System.Void set_nodeIdx(System.Int32 value)
    // Offset: 0x2A86E2C
    void set_nodeIdx(int value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x2A86E34
    ::UnityEngine::Vector3 get_position();
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x2A86E58
    ::UnityEngine::Quaternion get_rotation();
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0x2A86E7C
    ::UnityEngine::Vector3 get_forward();
    // public System.Single get_triggerValue()
    // Offset: 0x2A86EA0
    float get_triggerValue();
    // public System.Single get_verticalAxisValue()
    // Offset: 0x2A87044
    float get_verticalAxisValue();
    // public System.Single get_horizontalAxisValue()
    // Offset: 0x2A870DC
    float get_horizontalAxisValue();
    // public System.Boolean get_active()
    // Offset: 0x2A87174
    bool get_active();
    // public System.Void .ctor()
    // Offset: 0x2A87544
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRController*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x2A87198
    void Update();
  }; // VRController
  #pragma pack(pop)
  static check_size<sizeof(VRController), 56 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_VRControllerSizeCheck;
  static_assert(sizeof(VRController) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRController::get_node
// Il2CppName: get_node
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRNode (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::get_node)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "get_node", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::set_node
// Il2CppName: set_node
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRController::*)(::UnityEngine::XR::XRNode)>(&GlobalNamespace::VRController::set_node)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "set_node", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::get_nodeIdx
// Il2CppName: get_nodeIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::get_nodeIdx)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "get_nodeIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::set_nodeIdx
// Il2CppName: set_nodeIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRController::*)(int)>(&GlobalNamespace::VRController::set_nodeIdx)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "set_nodeIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::get_forward
// Il2CppName: get_forward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::get_forward)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "get_forward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::get_triggerValue
// Il2CppName: get_triggerValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::get_triggerValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "get_triggerValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::get_verticalAxisValue
// Il2CppName: get_verticalAxisValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::get_verticalAxisValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "get_verticalAxisValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::get_horizontalAxisValue
// Il2CppName: get_horizontalAxisValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::get_horizontalAxisValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "get_horizontalAxisValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::get_active
// Il2CppName: get_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::get_active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "get_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VRController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRController::*)()>(&GlobalNamespace::VRController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

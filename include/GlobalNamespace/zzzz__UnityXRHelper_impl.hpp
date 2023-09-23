#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__EulerPose_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName::Undefined{0};
constexpr GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName::HTC{1};
constexpr GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName::Oculus{2};
constexpr GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName::Valve{3};
constexpr GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName::Microsoft{4};
constexpr GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName::Unknown{5};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.add_inputFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::add_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8be00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.remove_inputFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::remove_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8be9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.add_inputFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::add_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8bf38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.remove_inputFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::remove_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8bfd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.add_vrFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::add_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.remove_vrFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::remove_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.add_vrFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::add_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.remove_vrFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::remove_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.add_hmdUnmountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::add_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.remove_hmdUnmountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::remove_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.add_hmdMountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::add_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.remove_hmdMountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::remove_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.add_controllersDidChangeReferenceEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::add_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.remove_controllersDidChangeReferenceEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(System::Action)>(&GlobalNamespace::UnityXRHelper::remove_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8c5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.get_hasInputFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8c688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.get_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::get_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8c690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.set_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(bool)>(&GlobalNamespace::UnityXRHelper::set_hasVrFocus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f8c698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "set_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.get_isAlwaysWireless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::get_isAlwaysWireless)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8c6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_isAlwaysWireless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.get_vrPlatformSDK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VRPlatformSDK (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::get_vrPlatformSDK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8c6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_vrPlatformSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.get_loggerPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::get_loggerPrefix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1f8c6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_loggerPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.set_userPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(bool)>(&GlobalNamespace::UnityXRHelper::set_userPresence)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1f8c6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "set_userPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::Start)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1f8c774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.OnTrackingOriginUpdated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRInputSubsystem)>(&GlobalNamespace::UnityXRHelper::OnTrackingOriginUpdated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f8cb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnTrackingOriginUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRInputSubsystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.OnboundaryChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRInputSubsystem)>(&GlobalNamespace::UnityXRHelper::OnboundaryChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f8cbc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnboundaryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRInputSubsystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::OnDestroy)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1f8cbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.OnUserPresenceCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext)>(&GlobalNamespace::UnityXRHelper::OnUserPresenceCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8cd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnUserPresenceCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.OnUserPresenceStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext)>(&GlobalNamespace::UnityXRHelper::OnUserPresenceStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8cd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnUserPresenceStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.OnApplicationPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(bool)>(&GlobalNamespace::UnityXRHelper::OnApplicationPause)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1f8cd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.HandleNewXRNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNodeState)>(&GlobalNamespace::UnityXRHelper::HandleNewXRNode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1f8cda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "HandleNewXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNodeState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.UpdateManufacturerOnNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::UnityXRHelper::UpdateManufacturerOnNode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1f8caf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "UpdateManufacturerOnNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.HandleRemovedXRNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNodeState)>(&GlobalNamespace::UnityXRHelper::HandleRemovedXRNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1f8cdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "HandleRemovedXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNodeState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.ControllerFromNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityXRController (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::UnityXRHelper::ControllerFromNode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1f8ce10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "ControllerFromNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.TriggerHapticPulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNode, float_t, float_t, float_t)>(&GlobalNamespace::UnityXRHelper::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1f8ce3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.StopHaptics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::UnityXRHelper::StopHaptics)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1f8cf1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetPoseOffsetForNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Pose (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::UnityXRHelper::GetPoseOffsetForNode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1f8cfe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetPoseOffsetForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetPoseOffsetForManufacturer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Pose (GlobalNamespace::UnityXRHelper::*)(GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName)>(&GlobalNamespace::UnityXRHelper::GetPoseOffsetForManufacturer)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1f8d0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetPoseOffsetForManufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetNodePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNode, int32_t, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Quaternion>)>(&GlobalNamespace::UnityXRHelper::GetNodePose)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x1f8d204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetNodePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetAnyJoystickMaxAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::GetAnyJoystickMaxAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8d490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetAnyJoystickMaxAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetTriggerValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::UnityXRHelper::GetTriggerValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f8d498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetTriggerValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetThumbstickValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::UnityXRHelper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::UnityXRHelper::GetThumbstickValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1f8d4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetThumbstickValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::GetMenuButton)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1f8d51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetMenuButtonDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::GetMenuButtonDown)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1f8d6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetMenuButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetMenuButtonNameForLeftController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::GetMenuButtonNameForLeftController)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1f8d590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetMenuButtonNameForLeftController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetMenuButtonNameForRightController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::GetMenuButtonNameForRightController)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f8d64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetMenuButtonNameForRightController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&GlobalNamespace::UnityXRHelper::GetButton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1f8d61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.GetButtonDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&GlobalNamespace::UnityXRHelper::GetButtonDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1f8d75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.RefreshControllersReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::RefreshControllersReference)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f8cba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "RefreshControllersReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper.ReadHeadPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)(ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Quaternion>)>(&GlobalNamespace::UnityXRHelper::ReadHeadPose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1f8d3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "ReadHeadPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityXRHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityXRHelper::*)()>(&GlobalNamespace::UnityXRHelper::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1f8d78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IVRPlatformHelper
constexpr  GlobalNamespace::UnityXRHelper::operator GlobalNamespace::IVRPlatformHelper() const noexcept {
return GlobalNamespace::IVRPlatformHelper(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IVerboseLogger
constexpr  GlobalNamespace::UnityXRHelper::operator GlobalNamespace::IVerboseLogger() const noexcept {
return GlobalNamespace::IVerboseLogger(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_inputFocusWasCapturedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::UnityXRHelper::__get_inputFocusWasCapturedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_inputFocusWasReleasedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::UnityXRHelper::__get_inputFocusWasReleasedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_vrFocusWasCapturedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::UnityXRHelper::__get_vrFocusWasCapturedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_vrFocusWasReleasedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::UnityXRHelper::__get_vrFocusWasReleasedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_hmdUnmountedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::UnityXRHelper::__get_hmdUnmountedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_hmdMountedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::UnityXRHelper::__get_hmdMountedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_controllersDidChangeReferenceEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::UnityXRHelper::__get_controllersDidChangeReferenceEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__hasVrFocus_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::UnityXRHelper::__get__hasVrFocus_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__oculusPoseOffset(GlobalNamespace::EulerPose value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EulerPose, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EulerPose>(value));
}
constexpr GlobalNamespace::EulerPose GlobalNamespace::UnityXRHelper::__get__oculusPoseOffset() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EulerPose, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__valveIndexPoseOffset(GlobalNamespace::EulerPose value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EulerPose, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EulerPose>(value));
}
constexpr GlobalNamespace::EulerPose GlobalNamespace::UnityXRHelper::__get__valveIndexPoseOffset() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EulerPose, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__htcVivePoseOffset(GlobalNamespace::EulerPose value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EulerPose, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EulerPose>(value));
}
constexpr GlobalNamespace::EulerPose GlobalNamespace::UnityXRHelper::__get__htcVivePoseOffset() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EulerPose, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__leftControllerConfiguration(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration>(value));
}
constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration GlobalNamespace::UnityXRHelper::__get__leftControllerConfiguration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__rightControllerConfiguration(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration>(value));
}
constexpr GlobalNamespace::GlobalNamespace__UnityXRController__Configuration GlobalNamespace::UnityXRHelper::__get__rightControllerConfiguration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__UnityXRController__Configuration, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__userPresenceActionReference(UnityEngine::InputSystem::InputActionReference value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionReference, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionReference>(value));
}
constexpr UnityEngine::InputSystem::InputActionReference GlobalNamespace::UnityXRHelper::__get__userPresenceActionReference() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionReference, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__headPositionActionReference(UnityEngine::InputSystem::InputActionReference value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionReference, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionReference>(value));
}
constexpr UnityEngine::InputSystem::InputActionReference GlobalNamespace::UnityXRHelper::__get__headPositionActionReference() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionReference, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__headOrientationActionReference(UnityEngine::InputSystem::InputActionReference value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionReference, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionReference>(value));
}
constexpr UnityEngine::InputSystem::InputActionReference GlobalNamespace::UnityXRHelper::__get__headOrientationActionReference() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionReference, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__leftController(GlobalNamespace::UnityXRController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::UnityXRController, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::UnityXRController>(value));
}
constexpr GlobalNamespace::UnityXRController GlobalNamespace::UnityXRHelper::__get__leftController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::UnityXRController, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__rightController(GlobalNamespace::UnityXRController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::UnityXRController, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::UnityXRController>(value));
}
constexpr GlobalNamespace::UnityXRController GlobalNamespace::UnityXRHelper::__get__rightController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::UnityXRController, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__headPositionAction(UnityEngine::InputSystem::InputAction value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputAction, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputAction>(value));
}
constexpr UnityEngine::InputSystem::InputAction GlobalNamespace::UnityXRHelper::__get__headPositionAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputAction, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__headOrientationAction(UnityEngine::InputSystem::InputAction value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputAction, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputAction>(value));
}
constexpr UnityEngine::InputSystem::InputAction GlobalNamespace::UnityXRHelper::__get__headOrientationAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputAction, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__userPresenceAction(UnityEngine::InputSystem::InputAction value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputAction, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputAction>(value));
}
constexpr UnityEngine::InputSystem::InputAction GlobalNamespace::UnityXRHelper::__get__userPresenceAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputAction, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__scrollingLastFrame(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::UnityXRHelper::__get__scrollingLastFrame() const {
return ::cordl_internals::getInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__userPresence(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::UnityXRHelper::__get__userPresence() const {
return ::cordl_internals::getInstanceField<bool, 0xf1>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::UnityXRHelper::add_inputFocusWasCapturedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::remove_inputFocusWasCapturedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::add_inputFocusWasReleasedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::remove_inputFocusWasReleasedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::add_vrFocusWasCapturedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::remove_vrFocusWasCapturedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::add_vrFocusWasReleasedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::remove_vrFocusWasReleasedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::add_hmdUnmountedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::remove_hmdUnmountedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::add_hmdMountedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::remove_hmdMountedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::add_controllersDidChangeReferenceEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "add_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::remove_controllersDidChangeReferenceEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "remove_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::UnityXRHelper::get_hasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::UnityXRHelper::get_hasVrFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityXRHelper::set_hasVrFocus(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "set_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::UnityXRHelper::get_isAlwaysWireless()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_isAlwaysWireless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::VRPlatformSDK GlobalNamespace::UnityXRHelper::get_vrPlatformSDK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_vrPlatformSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::VRPlatformSDK, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::UnityXRHelper::get_loggerPrefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "get_loggerPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityXRHelper::set_userPresence(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "set_userPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityXRHelper::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityXRHelper::OnTrackingOriginUpdated(UnityEngine::XR::XRInputSubsystem inputSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnTrackingOriginUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRInputSubsystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputSystem);
}
 void GlobalNamespace::UnityXRHelper::OnboundaryChanged(UnityEngine::XR::XRInputSubsystem inputSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnboundaryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRInputSubsystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputSystem);
}
 void GlobalNamespace::UnityXRHelper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityXRHelper::OnUserPresenceCanceled(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnUserPresenceCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void GlobalNamespace::UnityXRHelper::OnUserPresenceStarted(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnUserPresenceStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void GlobalNamespace::UnityXRHelper::OnApplicationPause(bool pauseStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pauseStatus);
}
 void GlobalNamespace::UnityXRHelper::HandleNewXRNode(UnityEngine::XR::XRNodeState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "HandleNewXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNodeState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void GlobalNamespace::UnityXRHelper::UpdateManufacturerOnNode(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "UpdateManufacturerOnNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::UnityXRHelper::HandleRemovedXRNode(UnityEngine::XR::XRNodeState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "HandleRemovedXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNodeState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 GlobalNamespace::UnityXRController GlobalNamespace::UnityXRHelper::ControllerFromNode(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "ControllerFromNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityXRController, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::UnityXRHelper::TriggerHapticPulse(UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, duration, strength, frequency);
}
 void GlobalNamespace::UnityXRHelper::StopHaptics(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 UnityEngine::Pose GlobalNamespace::UnityXRHelper::GetPoseOffsetForNode(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetPoseOffsetForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Pose, false>(const_cast<void*>(instance), ___internal_method, node);
}
 UnityEngine::Pose GlobalNamespace::UnityXRHelper::GetPoseOffsetForManufacturer(GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName manufacturerName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetPoseOffsetForManufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Pose, false>(const_cast<void*>(instance), ___internal_method, manufacturerName);
}
 bool GlobalNamespace::UnityXRHelper::GetNodePose(UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetNodePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, nodeType, idx, pos, rot);
}
 UnityEngine::Vector2 GlobalNamespace::UnityXRHelper::GetAnyJoystickMaxAxis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetAnyJoystickMaxAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::UnityXRHelper::GetTriggerValue(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetTriggerValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, node);
}
 UnityEngine::Vector2 GlobalNamespace::UnityXRHelper::GetThumbstickValue(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetThumbstickValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, node);
}
 bool GlobalNamespace::UnityXRHelper::GetMenuButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::UnityXRHelper::GetMenuButtonDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetMenuButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::UnityXRHelper::GetMenuButtonNameForLeftController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetMenuButtonNameForLeftController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::UnityXRHelper::GetMenuButtonNameForRightController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetMenuButtonNameForRightController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::UnityXRHelper::GetButton(::StringW buttonLegacyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, buttonLegacyName);
}
 bool GlobalNamespace::UnityXRHelper::GetButtonDown(::StringW buttonLegacyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "GetButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, buttonLegacyName);
}
 void GlobalNamespace::UnityXRHelper::RefreshControllersReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "RefreshControllersReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityXRHelper::ReadHeadPose(ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            "ReadHeadPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, rot);
}
// Ctor Parameters []
 GlobalNamespace::UnityXRHelper::UnityXRHelper()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<UnityXRHelper>())) {}
 void GlobalNamespace::UnityXRHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityXRHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType  ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType::RotationAndPosition{0};
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType  ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType::RotationOnly{1};
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType  ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType::PositionOnly{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType  ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType::UpdateAndBeforeRender{0};
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType  ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType::Update{1};
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType  ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType::BeforeRender{2};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_trackingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29333f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_trackingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2933400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_updateType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2933408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_updateType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2933410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2933418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_positionInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x293342c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_positionInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2933790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_rotationInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29337a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_rotationInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2933b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "BindActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x29335e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "BindPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2933960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "BindRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2933b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnbindActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2933498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnbindPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2933810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnbindRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionPerformed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2933b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnPositionPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2933b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnPositionCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationPerformed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2933bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnRotationPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2933c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnRotationCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2933ca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::XR::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnEnable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2933dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2933e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2933f2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::XR::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UpdateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UpdateCallback)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2933f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2934000;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::XR::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnBeforeRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnBeforeRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x293401c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::XR::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.SetLocalTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x293403c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::XR::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.HasStereoCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2933d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "HasStereoCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.PerformUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2934108;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::XR::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2934124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_positionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2934130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_positionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2934178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_rotationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2934184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_rotationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29341cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29341d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x29341dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2934254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr  ::UnityEngine::InputSystem::XR::TrackedPoseDriver::operator ::UnityEngine::ISerializationCallbackReceiver() const noexcept {
return ::UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_TrackingType(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType>(value));
}
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_TrackingType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_UpdateType(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType>(value));
}
constexpr ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_UpdateType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionProperty ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionInput() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionProperty ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationInput() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_CurrentPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_CurrentRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_RotationBound(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationBound() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_PositionBound(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionBound() const {
return ::cordl_internals::getInstanceField<bool, 0x6d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_PositionAction(::UnityEngine::InputSystem::InputAction value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputAction>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_RotationAction(::UnityEngine::InputSystem::InputAction value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::InputAction>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_HasMigratedActions(bool value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_HasMigratedActions() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType ::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__TrackingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType ::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType(::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::____UnityEngine__InputSystem__XR__TrackedPoseDriver__UpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::InputActionProperty ::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_positionInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput(::UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_positionInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::InputActionProperty ::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_rotationInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput(::UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_rotationInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "BindActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "BindPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "BindRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnbindActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnbindPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnbindRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnPositionPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnPositionCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnRotationPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnRotationCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::UpdateCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "OnBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "SetLocalTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newPosition, newRotation);
}
 bool ::UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "HasStereoCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "PerformUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_positionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction(::UnityEngine::InputSystem::InputAction value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_positionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "get_rotationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction(::UnityEngine::InputSystem::InputAction value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "set_rotationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::XR::TrackedPoseDriver::TrackedPoseDriver()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<TrackedPoseDriver>())) {}
 void ::UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

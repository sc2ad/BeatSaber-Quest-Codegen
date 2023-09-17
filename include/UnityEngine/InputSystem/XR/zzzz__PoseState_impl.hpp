#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/XR/zzzz__PoseState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::PoseState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::XR::PoseState::*)()>(&::UnityEngine::InputSystem::XR::PoseState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29328f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::PoseState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::PoseState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::PoseState::*)(bool, ::UnityEngine::XR::InputTrackingState, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::InputSystem::XR::PoseState::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2932924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::PoseState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr  ::UnityEngine::InputSystem::XR::PoseState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const {
return ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "isTracked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackingState", ty: "::UnityEngine::XR::InputTrackingState", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "angularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::PoseState::PoseState(bool isTracked, ::UnityEngine::XR::InputTrackingState trackingState, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity) noexcept : ::bs_hook::ValueTypeWrapper() {this->isTracked = isTracked;
this->trackingState = trackingState;
this->position = position;
this->rotation = rotation;
this->velocity = velocity;
this->angularVelocity = angularVelocity;
}
constexpr void ::UnityEngine::InputSystem::XR::PoseState::__set_isTracked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::XR::PoseState::__get_isTracked() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::XR::PoseState::__set_trackingState(::UnityEngine::XR::InputTrackingState value)  {
::cordl_internals::setInstanceField<::UnityEngine::XR::InputTrackingState, 0x4>(this->__instance, std::forward<::UnityEngine::XR::InputTrackingState>(value));
}
constexpr ::UnityEngine::XR::InputTrackingState ::UnityEngine::InputSystem::XR::PoseState::__get_trackingState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::XR::InputTrackingState, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::XR::PoseState::__set_position(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x8>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::UnityEngine::InputSystem::XR::PoseState::__get_position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::XR::PoseState::__set_rotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x14>(this->__instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::UnityEngine::InputSystem::XR::PoseState::__get_rotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x14>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::XR::PoseState::__set_velocity(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x24>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::UnityEngine::InputSystem::XR::PoseState::__get_velocity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::XR::PoseState::__set_angularVelocity(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x30>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::UnityEngine::InputSystem::XR::PoseState::__get_angularVelocity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x30>(this->__instance);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::XR::PoseState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::PoseState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::XR::PoseState::_ctor(bool isTracked, ::UnityEngine::XR::InputTrackingState trackingState, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::PoseState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTrackingState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, isTracked, trackingState, position, rotation, velocity, angularVelocity);
}
} // end anonymous namespace

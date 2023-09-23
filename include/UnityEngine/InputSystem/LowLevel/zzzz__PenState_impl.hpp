#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__PenState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PenButton_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::PenState.get_Format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::PenState::get_Format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2956118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::PenState>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::PenState.WithButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::PenState (UnityEngine::InputSystem::LowLevel::PenState::*)(UnityEngine::InputSystem::PenButton, bool)>(&UnityEngine::InputSystem::LowLevel::PenState::WithButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2956148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::PenState>::get(),
                            "WithButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::PenButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::PenState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::PenState::*)()>(&UnityEngine::InputSystem::LowLevel::PenState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x295617c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::PenState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr  UnityEngine::InputSystem::LowLevel::PenState::operator UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "delta", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "tilt", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "twist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "displayIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::PenState::PenState(UnityEngine::Vector2 position, UnityEngine::Vector2 delta, UnityEngine::Vector2 tilt, float_t pressure, float_t twist, uint16_t buttons, uint16_t displayIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->delta = delta;
this->tilt = tilt;
this->pressure = pressure;
this->twist = twist;
this->buttons = buttons;
this->displayIndex = displayIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__set_position(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x0>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::PenState::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__set_delta(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::PenState::__get_delta() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__set_tilt(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x10>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::PenState::__get_tilt() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__set_pressure(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::LowLevel::PenState::__get_pressure() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__set_twist(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::LowLevel::PenState::__get_twist() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__set_buttons(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x20>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::LowLevel::PenState::__get_buttons() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::PenState::__set_displayIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x22>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::LowLevel::PenState::__get_displayIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x22>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::PenState::get_Format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::PenState>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
/// @param state: bool (default: true)
 UnityEngine::InputSystem::LowLevel::PenState UnityEngine::InputSystem::LowLevel::PenState::WithButton(UnityEngine::InputSystem::PenButton button, bool state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::PenState>::get(),
                            "WithButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::PenButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::PenState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, button, state);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::PenState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::PenState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}

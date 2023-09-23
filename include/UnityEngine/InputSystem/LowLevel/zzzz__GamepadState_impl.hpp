#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__GamepadState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__GamepadButton_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::GamepadState.get_Format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::GamepadState::get_Format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::GamepadState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::GamepadState::*)()>(&UnityEngine::InputSystem::LowLevel::GamepadState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::GamepadState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::GamepadState::*)(::ArrayW<UnityEngine::InputSystem::LowLevel::GamepadButton>)>(&UnityEngine::InputSystem::LowLevel::GamepadState::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2955d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::LowLevel::GamepadButton>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::GamepadState.WithButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::GamepadState (UnityEngine::InputSystem::LowLevel::GamepadState::*)(UnityEngine::InputSystem::LowLevel::GamepadButton, bool)>(&UnityEngine::InputSystem::LowLevel::GamepadState::WithButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2955e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                            "WithButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::GamepadButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr  UnityEngine::InputSystem::LowLevel::GamepadState::operator UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "buttons", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftStick", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightStick", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftTrigger", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightTrigger", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::GamepadState::GamepadState(uint32_t buttons, UnityEngine::Vector2 leftStick, UnityEngine::Vector2 rightStick, float_t leftTrigger, float_t rightTrigger) noexcept : ::bs_hook::ValueTypeWrapper() {this->buttons = buttons;
this->leftStick = leftStick;
this->rightStick = rightStick;
this->leftTrigger = leftTrigger;
this->rightTrigger = rightTrigger;
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__set_buttons(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::LowLevel::GamepadState::__get_buttons() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__set_leftStick(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x4>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::GamepadState::__get_leftStick() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__set_rightStick(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0xc>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::GamepadState::__get_rightStick() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0xc>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__set_leftTrigger(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::LowLevel::GamepadState::__get_leftTrigger() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::GamepadState::__set_rightTrigger(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::LowLevel::GamepadState::__get_rightTrigger() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::GamepadState::get_Format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::GamepadState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::GamepadState::_ctor(::ArrayW<UnityEngine::InputSystem::LowLevel::GamepadButton> buttons)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::LowLevel::GamepadButton>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, buttons);
}
/// @param value: bool (default: true)
 UnityEngine::InputSystem::LowLevel::GamepadState UnityEngine::InputSystem::LowLevel::GamepadState::WithButton(UnityEngine::InputSystem::LowLevel::GamepadButton button, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::GamepadState>::get(),
                            "WithButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::GamepadButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::GamepadState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, button, value);
}

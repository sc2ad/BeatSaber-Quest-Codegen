#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__JoystickState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button::____UnityEngine__InputSystem__LowLevel__JoystickState__Button(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button  ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button::HatSwitchUp{0};
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button  ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button::HatSwitchDown{1};
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button  ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button::HatSwitchLeft{2};
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button  ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button::HatSwitchRight{3};
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button  ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__JoystickState__Button::Trigger{4};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::JoystickState.get_kFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::JoystickState::get_kFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::JoystickState>::get(),
                            "get_kFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::JoystickState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::JoystickState::*)()>(&::UnityEngine::InputSystem::LowLevel::JoystickState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::JoystickState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr  ::UnityEngine::InputSystem::LowLevel::JoystickState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const {
return ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "buttons", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::JoystickState::JoystickState(int32_t buttons, ::UnityEngine::Vector2 stick) noexcept : ::bs_hook::ValueTypeWrapper() {this->buttons = buttons;
this->stick = stick;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::JoystickState::__set_buttons(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::LowLevel::JoystickState::__get_buttons() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::LowLevel::JoystickState::__set_stick(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x4>(this->__instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::InputSystem::LowLevel::JoystickState::__get_stick() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x4>(this->__instance);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::LowLevel::JoystickState::get_kFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::JoystickState>::get(),
                            "get_kFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::LowLevel::JoystickState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::JoystickState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace

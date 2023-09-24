#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__MouseState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__MouseButton_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::MouseState.get_Format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::MouseState::get_Format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x295608c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::MouseState.WithButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::MouseState (UnityEngine::InputSystem::LowLevel::MouseState::*)(UnityEngine::InputSystem::LowLevel::MouseButton, bool)>(&UnityEngine::InputSystem::LowLevel::MouseState::WithButton)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29560bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                            "WithButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::MouseButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::MouseState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::MouseState::*)()>(&UnityEngine::InputSystem::LowLevel::MouseState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29560e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr  UnityEngine::InputSystem::LowLevel::MouseState::operator UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "delta", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "scroll", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "displayIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clickCount", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::MouseState::MouseState(UnityEngine::Vector2 position, UnityEngine::Vector2 delta, UnityEngine::Vector2 scroll, uint16_t buttons, uint16_t displayIndex, uint16_t clickCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->delta = delta;
this->scroll = scroll;
this->buttons = buttons;
this->displayIndex = displayIndex;
this->clickCount = clickCount;
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_position(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x0>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::MouseState::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_delta(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::MouseState::__get_delta() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_scroll(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x10>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::MouseState::__get_scroll() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_buttons(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x18>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::LowLevel::MouseState::__get_buttons() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_displayIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x1a>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::LowLevel::MouseState::__get_displayIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x1a>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::MouseState::__set_clickCount(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x1c>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::InputSystem::LowLevel::MouseState::__get_clickCount() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x1c>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::MouseState::get_Format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
/// @param state: bool (default: true)
 UnityEngine::InputSystem::LowLevel::MouseState UnityEngine::InputSystem::LowLevel::MouseState::WithButton(UnityEngine::InputSystem::LowLevel::MouseButton button, bool state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                            "WithButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::MouseButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::MouseState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, button, state);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::MouseState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::MouseState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}

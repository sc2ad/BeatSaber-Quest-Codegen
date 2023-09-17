#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidGameControllerState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidAxis_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidKeyCode_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants::*)()>(&::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2953dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants>())) {}
 void ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer(uint32_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer::__set_FixedElementField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer(float_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer::__set_FixedElementField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::*)()>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::get_format)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2953cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState.WithButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState (::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::*)(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode, bool)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithButton)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2953d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(),
                            "WithButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState.WithAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState (::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::*)(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, float_t)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithAxis)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2953d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(),
                            "WithAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr  ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const {
return ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "buttons", ty: "::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "axis", ty: "::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::AndroidGameControllerState(::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer buttons, ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer axis) noexcept : ::bs_hook::ValueTypeWrapper() {this->buttons = buttons;
this->axis = axis;
}
 void ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::__set_kFormat(::UnityEngine::InputSystem::Utilities::FourCC value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get>(std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::__get_kFormat()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get>();
}
constexpr void ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::__set_buttons(::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer>(value));
}
constexpr ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::__get_buttons() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::__set_axis(::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer, 0x1c>(this->__instance, std::forward<::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer>(value));
}
constexpr ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::__get_axis() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer, 0x1c>(this->__instance);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param value: bool (default: true)
 ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithButton(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode code, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(),
                            "WithButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, code, value);
}
 ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState::WithAxis(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis axis, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState>::get(),
                            "WithAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, axis, value);
}
} // end anonymous namespace

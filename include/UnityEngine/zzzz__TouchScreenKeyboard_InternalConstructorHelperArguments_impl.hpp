#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__TouchScreenKeyboard_InternalConstructorHelperArguments_def.hpp"
// Ctor Parameters [CppParam { name: "keyboardType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "autocorrection", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "multiline", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "secure", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "alert", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterLimit", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::TouchScreenKeyboard_InternalConstructorHelperArguments(uint32_t keyboardType, uint32_t autocorrection, uint32_t multiline, uint32_t secure, uint32_t alert, int32_t characterLimit) noexcept : ::bs_hook::ValueTypeWrapper() {this->keyboardType = keyboardType;
this->autocorrection = autocorrection;
this->multiline = multiline;
this->secure = secure;
this->alert = alert;
this->characterLimit = characterLimit;
}
constexpr void ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__set_keyboardType(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__get_keyboardType() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__set_autocorrection(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__get_autocorrection() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__set_multiline(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__get_multiline() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__set_secure(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__get_secure() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__set_alert(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__get_alert() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__set_characterLimit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments::__get_characterLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
} // end anonymous namespace

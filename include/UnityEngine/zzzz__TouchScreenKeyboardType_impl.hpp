#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TouchScreenKeyboardType::TouchScreenKeyboardType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::TouchScreenKeyboardType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TouchScreenKeyboardType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::Default{0};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::ASCIICapable{1};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::NumbersAndPunctuation{2};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::URL{3};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::NumberPad{4};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::PhonePad{5};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::NamePhonePad{6};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::EmailAddress{7};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::NintendoNetworkAccount{8};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::Social{9};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::Search{10};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::DecimalPad{11};
constexpr ::UnityEngine::TouchScreenKeyboardType  ::UnityEngine::TouchScreenKeyboardType::OneTimeCode{12};
} // end anonymous namespace

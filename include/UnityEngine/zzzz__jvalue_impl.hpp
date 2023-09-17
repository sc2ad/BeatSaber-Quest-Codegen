#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__jvalue_def.hpp"
// Ctor Parameters [CppParam { name: "z", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "b", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "c", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "s", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "j", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "f", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "d", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "l", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::jvalue::jvalue(bool z, int8_t b, char16_t c, int16_t s, int32_t i, int64_t j, float_t f, double_t d, ::cordl_internals::intptr_t l) noexcept : ::bs_hook::ValueTypeWrapper() {this->z = z;
this->b = b;
this->c = c;
this->s = s;
this->i = i;
this->j = j;
this->f = f;
this->d = d;
this->l = l;
}
constexpr void ::UnityEngine::jvalue::__set_z(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::jvalue::__get_z() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::jvalue::__set_b(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x0>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::UnityEngine::jvalue::__get_b() const {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::jvalue::__set_c(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x0>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t ::UnityEngine::jvalue::__get_c() const {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::jvalue::__set_s(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::UnityEngine::jvalue::__get_s() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::jvalue::__set_i(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::jvalue::__get_i() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::jvalue::__set_j(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::UnityEngine::jvalue::__get_j() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::jvalue::__set_f(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::jvalue::__get_f() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::jvalue::__set_d(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x0>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::jvalue::__get_d() const {
return ::cordl_internals::getInstanceField<double_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::jvalue::__set_l(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::jvalue::__get_l() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
} // end anonymous namespace

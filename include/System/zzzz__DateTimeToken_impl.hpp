#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__DateTimeToken_def.hpp"
#include "System/zzzz__TokenType_def.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
// Ctor Parameters [CppParam { name: "dtt", ty: "System::System__DateTimeParse__DTT", modifiers: "", def_value: Some("{}") }, CppParam { name: "suffix", ty: "System::TokenType", modifiers: "", def_value: Some("{}") }, CppParam { name: "num", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::DateTimeToken::DateTimeToken(System::System__DateTimeParse__DTT dtt, System::TokenType suffix, int32_t num) noexcept : ::bs_hook::ValueTypeWrapper() {this->dtt = dtt;
this->suffix = suffix;
this->num = num;
}
constexpr void System::DateTimeToken::__set_dtt(System::System__DateTimeParse__DTT value)  {
::cordl_internals::setInstanceField<System::System__DateTimeParse__DTT, 0x0>(this->__instance, std::forward<System::System__DateTimeParse__DTT>(value));
}
constexpr System::System__DateTimeParse__DTT System::DateTimeToken::__get_dtt() const {
return ::cordl_internals::getInstanceField<System::System__DateTimeParse__DTT, 0x0>(this->__instance);
}
constexpr void System::DateTimeToken::__set_suffix(System::TokenType value)  {
::cordl_internals::setInstanceField<System::TokenType, 0x4>(this->__instance, std::forward<System::TokenType>(value));
}
constexpr System::TokenType System::DateTimeToken::__get_suffix() const {
return ::cordl_internals::getInstanceField<System::TokenType, 0x4>(this->__instance);
}
constexpr void System::DateTimeToken::__set_num(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::DateTimeToken::__get_num() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}

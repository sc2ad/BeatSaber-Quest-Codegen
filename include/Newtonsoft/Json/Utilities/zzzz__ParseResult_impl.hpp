#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ParseResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::Utilities::ParseResult::ParseResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::Utilities::ParseResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::Utilities::ParseResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::Utilities::ParseResult  Newtonsoft::Json::Utilities::ParseResult::None{0};
constexpr Newtonsoft::Json::Utilities::ParseResult  Newtonsoft::Json::Utilities::ParseResult::Success{1};
constexpr Newtonsoft::Json::Utilities::ParseResult  Newtonsoft::Json::Utilities::ParseResult::Overflow{2};
constexpr Newtonsoft::Json::Utilities::ParseResult  Newtonsoft::Json::Utilities::ParseResult::Invalid{3};

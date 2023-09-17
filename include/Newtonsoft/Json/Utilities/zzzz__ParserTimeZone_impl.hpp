#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Newtonsoft/Json/Utilities/zzzz__ParserTimeZone_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone::ParserTimeZone(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Newtonsoft::Json::Utilities::ParserTimeZone::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::Utilities::ParserTimeZone::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone  ::Newtonsoft::Json::Utilities::ParserTimeZone::Unspecified{0};
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone  ::Newtonsoft::Json::Utilities::ParserTimeZone::Utc{1};
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone  ::Newtonsoft::Json::Utilities::ParserTimeZone::LocalWestOfUtc{2};
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone  ::Newtonsoft::Json::Utilities::ParserTimeZone::LocalEastOfUtc{3};
} // end anonymous namespace

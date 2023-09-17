#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::MemberSerialization::MemberSerialization(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Newtonsoft::Json::MemberSerialization::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::MemberSerialization::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Newtonsoft::Json::MemberSerialization  ::Newtonsoft::Json::MemberSerialization::OptOut{0};
constexpr ::Newtonsoft::Json::MemberSerialization  ::Newtonsoft::Json::MemberSerialization::OptIn{1};
constexpr ::Newtonsoft::Json::MemberSerialization  ::Newtonsoft::Json::MemberSerialization::Fields{2};
} // end anonymous namespace

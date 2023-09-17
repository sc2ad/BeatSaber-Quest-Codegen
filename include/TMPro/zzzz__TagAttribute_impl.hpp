#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "TMPro/zzzz__TagAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TagAttribute::TagAttribute(int32_t startIndex, int32_t length, int32_t hashCode) noexcept : ::bs_hook::ValueTypeWrapper() {this->startIndex = startIndex;
this->length = length;
this->hashCode = hashCode;
}
constexpr void ::TMPro::TagAttribute::__set_startIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TagAttribute::__get_startIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::TMPro::TagAttribute::__set_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TagAttribute::__get_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::TMPro::TagAttribute::__set_hashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TagAttribute::__get_hashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
} // end anonymous namespace

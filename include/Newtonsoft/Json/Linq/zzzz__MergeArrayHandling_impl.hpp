#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__MergeArrayHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::Linq::MergeArrayHandling::MergeArrayHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::Linq::MergeArrayHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::Linq::MergeArrayHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::Linq::MergeArrayHandling  Newtonsoft::Json::Linq::MergeArrayHandling::Concat{0};
constexpr Newtonsoft::Json::Linq::MergeArrayHandling  Newtonsoft::Json::Linq::MergeArrayHandling::Union{1};
constexpr Newtonsoft::Json::Linq::MergeArrayHandling  Newtonsoft::Json::Linq::MergeArrayHandling::Replace{2};
constexpr Newtonsoft::Json::Linq::MergeArrayHandling  Newtonsoft::Json::Linq::MergeArrayHandling::Merge{3};

#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/zzzz__VertexSortingOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::VertexSortingOrder::VertexSortingOrder(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::VertexSortingOrder::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::VertexSortingOrder::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::VertexSortingOrder  TMPro::VertexSortingOrder::Normal{0};
constexpr TMPro::VertexSortingOrder  TMPro::VertexSortingOrder::Reverse{1};

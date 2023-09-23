#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Mono/zzzz__ValueTuple_1_def.hpp"
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }]
constexpr Mono::ValueTuple_1::ValueTuple_1(T1 Item1) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
}
constexpr void Mono::ValueTuple_1::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 Mono::ValueTuple_1::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}

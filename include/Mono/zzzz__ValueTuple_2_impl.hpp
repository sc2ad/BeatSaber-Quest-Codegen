#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Mono/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }]
constexpr ::Mono::ValueTuple_2::ValueTuple_2(T1 Item1, T2 Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void ::Mono::ValueTuple_2::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 ::Mono::ValueTuple_2::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void ::Mono::ValueTuple_2::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 ::Mono::ValueTuple_2::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
} // end anonymous namespace

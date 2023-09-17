#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Mono/zzzz__ValueTuple_3_def.hpp"
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("csnull") }]
constexpr ::Mono::ValueTuple_3::ValueTuple_3(T1 Item1, T2 Item2, T3 Item3) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
}
constexpr void ::Mono::ValueTuple_3::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 ::Mono::ValueTuple_3::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void ::Mono::ValueTuple_3::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 ::Mono::ValueTuple_3::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
constexpr void ::Mono::ValueTuple_3::__set_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x10>(this->__instance, std::forward<T3>(value));
}
constexpr T3 ::Mono::ValueTuple_3::__get_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x10>(this->__instance);
}
} // end anonymous namespace

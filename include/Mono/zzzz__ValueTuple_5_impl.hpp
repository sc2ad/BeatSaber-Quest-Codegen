#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Mono/zzzz__ValueTuple_5_def.hpp"
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item5", ty: "T5", modifiers: "", def_value: Some("csnull") }]
constexpr ::Mono::ValueTuple_5::ValueTuple_5(T1 Item1, T2 Item2, T3 Item3, T4 Item4, T5 Item5) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
this->Item4 = Item4;
this->Item5 = Item5;
}
constexpr void ::Mono::ValueTuple_5::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 ::Mono::ValueTuple_5::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void ::Mono::ValueTuple_5::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 ::Mono::ValueTuple_5::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
constexpr void ::Mono::ValueTuple_5::__set_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x10>(this->__instance, std::forward<T3>(value));
}
constexpr T3 ::Mono::ValueTuple_5::__get_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x10>(this->__instance);
}
constexpr void ::Mono::ValueTuple_5::__set_Item4(T4 value)  {
::cordl_internals::setInstanceField<T4, 0x18>(this->__instance, std::forward<T4>(value));
}
constexpr T4 ::Mono::ValueTuple_5::__get_Item4() const {
return ::cordl_internals::getInstanceField<T4, 0x18>(this->__instance);
}
constexpr void ::Mono::ValueTuple_5::__set_Item5(T5 value)  {
::cordl_internals::setInstanceField<T5, 0x20>(this->__instance, std::forward<T5>(value));
}
constexpr T5 ::Mono::ValueTuple_5::__get_Item5() const {
return ::cordl_internals::getInstanceField<T5, 0x20>(this->__instance);
}
} // end anonymous namespace

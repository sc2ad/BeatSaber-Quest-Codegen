#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__Coord_def.hpp"
// Ctor Parameters [CppParam { name: "X", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Y", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Coord::Coord(int16_t X, int16_t Y) noexcept : ::bs_hook::ValueTypeWrapper() {this->X = X;
this->Y = Y;
}
constexpr void System::Coord::__set_X(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Coord::__get_X() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->__instance);
}
constexpr void System::Coord::__set_Y(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x2>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Coord::__get_Y() const {
return ::cordl_internals::getInstanceField<int16_t, 0x2>(this->__instance);
}

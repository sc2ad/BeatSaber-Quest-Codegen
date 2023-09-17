#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/zzzz__SmallRect_def.hpp"
// Ctor Parameters [CppParam { name: "Left", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Top", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Right", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Bottom", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::SmallRect::SmallRect(int16_t Left, int16_t Top, int16_t Right, int16_t Bottom) noexcept : ::bs_hook::ValueTypeWrapper() {this->Left = Left;
this->Top = Top;
this->Right = Right;
this->Bottom = Bottom;
}
constexpr void ::System::SmallRect::__set_Left(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::SmallRect::__get_Left() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->__instance);
}
constexpr void ::System::SmallRect::__set_Top(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x2>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::SmallRect::__get_Top() const {
return ::cordl_internals::getInstanceField<int16_t, 0x2>(this->__instance);
}
constexpr void ::System::SmallRect::__set_Right(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x4>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::SmallRect::__get_Right() const {
return ::cordl_internals::getInstanceField<int16_t, 0x4>(this->__instance);
}
constexpr void ::System::SmallRect::__set_Bottom(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x6>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::SmallRect::__get_Bottom() const {
return ::cordl_internals::getInstanceField<int16_t, 0x6>(this->__instance);
}
} // end anonymous namespace

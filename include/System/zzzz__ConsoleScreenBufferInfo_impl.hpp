#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__ConsoleScreenBufferInfo_def.hpp"
#include "System/zzzz__Coord_def.hpp"
#include "System/zzzz__SmallRect_def.hpp"
// Ctor Parameters [CppParam { name: "Size", ty: "System::Coord", modifiers: "", def_value: Some("{}") }, CppParam { name: "CursorPosition", ty: "System::Coord", modifiers: "", def_value: Some("{}") }, CppParam { name: "Attribute", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Window", ty: "System::SmallRect", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxWindowSize", ty: "System::Coord", modifiers: "", def_value: Some("{}") }]
constexpr System::ConsoleScreenBufferInfo::ConsoleScreenBufferInfo(System::Coord Size, System::Coord CursorPosition, int16_t Attribute, System::SmallRect Window, System::Coord MaxWindowSize) noexcept : ::bs_hook::ValueTypeWrapper() {this->Size = Size;
this->CursorPosition = CursorPosition;
this->Attribute = Attribute;
this->Window = Window;
this->MaxWindowSize = MaxWindowSize;
}
constexpr void System::ConsoleScreenBufferInfo::__set_Size(System::Coord value)  {
::cordl_internals::setInstanceField<System::Coord, 0x0>(this->__instance, std::forward<System::Coord>(value));
}
constexpr System::Coord System::ConsoleScreenBufferInfo::__get_Size() const {
return ::cordl_internals::getInstanceField<System::Coord, 0x0>(this->__instance);
}
constexpr void System::ConsoleScreenBufferInfo::__set_CursorPosition(System::Coord value)  {
::cordl_internals::setInstanceField<System::Coord, 0x4>(this->__instance, std::forward<System::Coord>(value));
}
constexpr System::Coord System::ConsoleScreenBufferInfo::__get_CursorPosition() const {
return ::cordl_internals::getInstanceField<System::Coord, 0x4>(this->__instance);
}
constexpr void System::ConsoleScreenBufferInfo::__set_Attribute(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x8>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::ConsoleScreenBufferInfo::__get_Attribute() const {
return ::cordl_internals::getInstanceField<int16_t, 0x8>(this->__instance);
}
constexpr void System::ConsoleScreenBufferInfo::__set_Window(System::SmallRect value)  {
::cordl_internals::setInstanceField<System::SmallRect, 0xa>(this->__instance, std::forward<System::SmallRect>(value));
}
constexpr System::SmallRect System::ConsoleScreenBufferInfo::__get_Window() const {
return ::cordl_internals::getInstanceField<System::SmallRect, 0xa>(this->__instance);
}
constexpr void System::ConsoleScreenBufferInfo::__set_MaxWindowSize(System::Coord value)  {
::cordl_internals::setInstanceField<System::Coord, 0x12>(this->__instance, std::forward<System::Coord>(value));
}
constexpr System::Coord System::ConsoleScreenBufferInfo::__get_MaxWindowSize() const {
return ::cordl_internals::getInstanceField<System::Coord, 0x12>(this->__instance);
}

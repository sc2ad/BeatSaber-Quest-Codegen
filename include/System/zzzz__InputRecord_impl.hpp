#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/zzzz__InputRecord_def.hpp"
// Ctor Parameters [CppParam { name: "EventType", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "KeyDown", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "RepeatCount", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VirtualKeyCode", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VirtualScanCode", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Character", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ControlKeyState", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pad1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pad2", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::InputRecord::InputRecord(int16_t EventType, bool KeyDown, int16_t RepeatCount, int16_t VirtualKeyCode, int16_t VirtualScanCode, char16_t Character, int32_t ControlKeyState, int32_t pad1, bool pad2) noexcept : ::bs_hook::ValueTypeWrapper() {this->EventType = EventType;
this->KeyDown = KeyDown;
this->RepeatCount = RepeatCount;
this->VirtualKeyCode = VirtualKeyCode;
this->VirtualScanCode = VirtualScanCode;
this->Character = Character;
this->ControlKeyState = ControlKeyState;
this->pad1 = pad1;
this->pad2 = pad2;
}
constexpr void ::System::InputRecord::__set_EventType(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::InputRecord::__get_EventType() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->__instance);
}
constexpr void ::System::InputRecord::__set_KeyDown(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::InputRecord::__get_KeyDown() const {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->__instance);
}
constexpr void ::System::InputRecord::__set_RepeatCount(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x4>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::InputRecord::__get_RepeatCount() const {
return ::cordl_internals::getInstanceField<int16_t, 0x4>(this->__instance);
}
constexpr void ::System::InputRecord::__set_VirtualKeyCode(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x6>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::InputRecord::__get_VirtualKeyCode() const {
return ::cordl_internals::getInstanceField<int16_t, 0x6>(this->__instance);
}
constexpr void ::System::InputRecord::__set_VirtualScanCode(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x8>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::InputRecord::__get_VirtualScanCode() const {
return ::cordl_internals::getInstanceField<int16_t, 0x8>(this->__instance);
}
constexpr void ::System::InputRecord::__set_Character(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0xa>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t ::System::InputRecord::__get_Character() const {
return ::cordl_internals::getInstanceField<char16_t, 0xa>(this->__instance);
}
constexpr void ::System::InputRecord::__set_ControlKeyState(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::InputRecord::__get_ControlKeyState() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::System::InputRecord::__set_pad1(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::InputRecord::__get_pad1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::System::InputRecord::__set_pad2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::InputRecord::__get_pad2() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->__instance);
}
} // end anonymous namespace

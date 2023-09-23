#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Numerics/zzzz__Register_def.hpp"
// Ctor Parameters [CppParam { name: "byte_0", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_1", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_2", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_3", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_4", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_5", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_6", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_7", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_8", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_9", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_10", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_11", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_12", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_13", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_14", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte_15", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_0", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_1", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_2", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_3", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_4", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_5", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_6", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_7", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_8", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_9", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_10", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_11", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_12", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_13", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_14", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sbyte_15", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint16_0", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint16_1", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint16_2", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint16_3", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint16_4", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint16_5", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint16_6", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint16_7", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int16_0", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int16_1", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int16_2", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int16_3", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int16_4", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int16_5", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int16_6", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int16_7", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint32_0", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint32_1", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint32_2", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint32_3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int32_0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int32_1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int32_2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int32_3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint64_0", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uint64_1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int64_0", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "int64_1", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "single_0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "single_1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "single_2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "single_3", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "double_0", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "double_1", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Numerics::Register::Register(uint8_t byte_0, uint8_t byte_1, uint8_t byte_2, uint8_t byte_3, uint8_t byte_4, uint8_t byte_5, uint8_t byte_6, uint8_t byte_7, uint8_t byte_8, uint8_t byte_9, uint8_t byte_10, uint8_t byte_11, uint8_t byte_12, uint8_t byte_13, uint8_t byte_14, uint8_t byte_15, int8_t sbyte_0, int8_t sbyte_1, int8_t sbyte_2, int8_t sbyte_3, int8_t sbyte_4, int8_t sbyte_5, int8_t sbyte_6, int8_t sbyte_7, int8_t sbyte_8, int8_t sbyte_9, int8_t sbyte_10, int8_t sbyte_11, int8_t sbyte_12, int8_t sbyte_13, int8_t sbyte_14, int8_t sbyte_15, uint16_t uint16_0, uint16_t uint16_1, uint16_t uint16_2, uint16_t uint16_3, uint16_t uint16_4, uint16_t uint16_5, uint16_t uint16_6, uint16_t uint16_7, int16_t int16_0, int16_t int16_1, int16_t int16_2, int16_t int16_3, int16_t int16_4, int16_t int16_5, int16_t int16_6, int16_t int16_7, uint32_t uint32_0, uint32_t uint32_1, uint32_t uint32_2, uint32_t uint32_3, int32_t int32_0, int32_t int32_1, int32_t int32_2, int32_t int32_3, uint64_t uint64_0, uint64_t uint64_1, int64_t int64_0, int64_t int64_1, float_t single_0, float_t single_1, float_t single_2, float_t single_3, double_t double_0, double_t double_1) noexcept : ::bs_hook::ValueTypeWrapper() {this->byte_0 = byte_0;
this->byte_1 = byte_1;
this->byte_2 = byte_2;
this->byte_3 = byte_3;
this->byte_4 = byte_4;
this->byte_5 = byte_5;
this->byte_6 = byte_6;
this->byte_7 = byte_7;
this->byte_8 = byte_8;
this->byte_9 = byte_9;
this->byte_10 = byte_10;
this->byte_11 = byte_11;
this->byte_12 = byte_12;
this->byte_13 = byte_13;
this->byte_14 = byte_14;
this->byte_15 = byte_15;
this->sbyte_0 = sbyte_0;
this->sbyte_1 = sbyte_1;
this->sbyte_2 = sbyte_2;
this->sbyte_3 = sbyte_3;
this->sbyte_4 = sbyte_4;
this->sbyte_5 = sbyte_5;
this->sbyte_6 = sbyte_6;
this->sbyte_7 = sbyte_7;
this->sbyte_8 = sbyte_8;
this->sbyte_9 = sbyte_9;
this->sbyte_10 = sbyte_10;
this->sbyte_11 = sbyte_11;
this->sbyte_12 = sbyte_12;
this->sbyte_13 = sbyte_13;
this->sbyte_14 = sbyte_14;
this->sbyte_15 = sbyte_15;
this->uint16_0 = uint16_0;
this->uint16_1 = uint16_1;
this->uint16_2 = uint16_2;
this->uint16_3 = uint16_3;
this->uint16_4 = uint16_4;
this->uint16_5 = uint16_5;
this->uint16_6 = uint16_6;
this->uint16_7 = uint16_7;
this->int16_0 = int16_0;
this->int16_1 = int16_1;
this->int16_2 = int16_2;
this->int16_3 = int16_3;
this->int16_4 = int16_4;
this->int16_5 = int16_5;
this->int16_6 = int16_6;
this->int16_7 = int16_7;
this->uint32_0 = uint32_0;
this->uint32_1 = uint32_1;
this->uint32_2 = uint32_2;
this->uint32_3 = uint32_3;
this->int32_0 = int32_0;
this->int32_1 = int32_1;
this->int32_2 = int32_2;
this->int32_3 = int32_3;
this->uint64_0 = uint64_0;
this->uint64_1 = uint64_1;
this->int64_0 = int64_0;
this->int64_1 = int64_1;
this->single_0 = single_0;
this->single_1 = single_1;
this->single_2 = single_2;
this->single_3 = single_3;
this->double_0 = double_0;
this->double_1 = double_1;
}
constexpr void System::Numerics::Register::__set_byte_0(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_0() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_1(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_1() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_2(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x2>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_2() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x2>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_3(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x3>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_3() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x3>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_4(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x4>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_4() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x4>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_5(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x5>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_5() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x5>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_6(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x6>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_6() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x6>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_7(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x7>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_7() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x7>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_8(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x8>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_8() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x8>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_9(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x9>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_9() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x9>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_10(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xa>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_10() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xa>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_11(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xb>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_11() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xb>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_12(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xc>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_12() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xc>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_13(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xd>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_13() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xd>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_14(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xe>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_14() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xe>(this->__instance);
}
constexpr void System::Numerics::Register::__set_byte_15(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xf>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::Register::__get_byte_15() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xf>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_0(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x0>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_0() const {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_1(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x1>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_1() const {
return ::cordl_internals::getInstanceField<int8_t, 0x1>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_2(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x2>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_2() const {
return ::cordl_internals::getInstanceField<int8_t, 0x2>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_3(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x3>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_3() const {
return ::cordl_internals::getInstanceField<int8_t, 0x3>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_4(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x4>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_4() const {
return ::cordl_internals::getInstanceField<int8_t, 0x4>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_5(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x5>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_5() const {
return ::cordl_internals::getInstanceField<int8_t, 0x5>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_6(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x6>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_6() const {
return ::cordl_internals::getInstanceField<int8_t, 0x6>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_7(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x7>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_7() const {
return ::cordl_internals::getInstanceField<int8_t, 0x7>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_8(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x8>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_8() const {
return ::cordl_internals::getInstanceField<int8_t, 0x8>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_9(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x9>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_9() const {
return ::cordl_internals::getInstanceField<int8_t, 0x9>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_10(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0xa>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_10() const {
return ::cordl_internals::getInstanceField<int8_t, 0xa>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_11(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0xb>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_11() const {
return ::cordl_internals::getInstanceField<int8_t, 0xb>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_12(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0xc>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_12() const {
return ::cordl_internals::getInstanceField<int8_t, 0xc>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_13(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0xd>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_13() const {
return ::cordl_internals::getInstanceField<int8_t, 0xd>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_14(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0xe>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_14() const {
return ::cordl_internals::getInstanceField<int8_t, 0xe>(this->__instance);
}
constexpr void System::Numerics::Register::__set_sbyte_15(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0xf>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Numerics::Register::__get_sbyte_15() const {
return ::cordl_internals::getInstanceField<int8_t, 0xf>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint16_0(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Numerics::Register::__get_uint16_0() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint16_1(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Numerics::Register::__get_uint16_1() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint16_2(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x4>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Numerics::Register::__get_uint16_2() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x4>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint16_3(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x6>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Numerics::Register::__get_uint16_3() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x6>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint16_4(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x8>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Numerics::Register::__get_uint16_4() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x8>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint16_5(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xa>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Numerics::Register::__get_uint16_5() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xa>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint16_6(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xc>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Numerics::Register::__get_uint16_6() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xc>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint16_7(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xe>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Numerics::Register::__get_uint16_7() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xe>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int16_0(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Numerics::Register::__get_int16_0() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int16_1(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x2>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Numerics::Register::__get_int16_1() const {
return ::cordl_internals::getInstanceField<int16_t, 0x2>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int16_2(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x4>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Numerics::Register::__get_int16_2() const {
return ::cordl_internals::getInstanceField<int16_t, 0x4>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int16_3(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x6>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Numerics::Register::__get_int16_3() const {
return ::cordl_internals::getInstanceField<int16_t, 0x6>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int16_4(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x8>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Numerics::Register::__get_int16_4() const {
return ::cordl_internals::getInstanceField<int16_t, 0x8>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int16_5(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0xa>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Numerics::Register::__get_int16_5() const {
return ::cordl_internals::getInstanceField<int16_t, 0xa>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int16_6(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0xc>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Numerics::Register::__get_int16_6() const {
return ::cordl_internals::getInstanceField<int16_t, 0xc>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int16_7(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0xe>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Numerics::Register::__get_int16_7() const {
return ::cordl_internals::getInstanceField<int16_t, 0xe>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint32_0(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Numerics::Register::__get_uint32_0() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint32_1(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Numerics::Register::__get_uint32_1() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint32_2(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Numerics::Register::__get_uint32_2() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint32_3(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Numerics::Register::__get_uint32_3() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int32_0(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Numerics::Register::__get_int32_0() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int32_1(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Numerics::Register::__get_int32_1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int32_2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Numerics::Register::__get_int32_2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int32_3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Numerics::Register::__get_int32_3() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint64_0(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t System::Numerics::Register::__get_uint64_0() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_uint64_1(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t System::Numerics::Register::__get_uint64_1() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int64_0(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Numerics::Register::__get_int64_0() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_int64_1(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Numerics::Register::__get_int64_1() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->__instance);
}
constexpr void System::Numerics::Register::__set_single_0(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t System::Numerics::Register::__get_single_0() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_single_1(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t System::Numerics::Register::__get_single_1() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void System::Numerics::Register::__set_single_2(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t System::Numerics::Register::__get_single_2() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void System::Numerics::Register::__set_single_3(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t System::Numerics::Register::__get_single_3() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void System::Numerics::Register::__set_double_0(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x0>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t System::Numerics::Register::__get_double_0() const {
return ::cordl_internals::getInstanceField<double_t, 0x0>(this->__instance);
}
constexpr void System::Numerics::Register::__set_double_1(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t System::Numerics::Register::__get_double_1() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}

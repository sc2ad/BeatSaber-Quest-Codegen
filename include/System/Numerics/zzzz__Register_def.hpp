#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Numerics {
struct Register;
}
// Type: System.Numerics::Register
namespace System::Numerics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3543))
// CS Name: System.Numerics.Register
struct CORDL_TYPE Register : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "byte_0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_4", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_7", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_8", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_9", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_10", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_11", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_12", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_13", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_14", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_15", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_0", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_1", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_2", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_3", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_4", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_5", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_6", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_7", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_8", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_9", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_10", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_11", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_12", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_13", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_14", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_15", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "uint16_0", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_1", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_2", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_3", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_4", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_5", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_6", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_7", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "int16_0", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_1", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_2", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_3", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_4", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_5", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_6", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_7", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "uint32_0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "uint32_1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "uint32_2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "uint32_3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "int32_0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "int32_1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "int32_2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "int32_3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uint64_0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uint64_1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "int64_0", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "int64_1", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "single_0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "single_1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "single_2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "single_3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "double_0", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "double_1", ty: "double_t", modifiers: "", def_value: None }]
constexpr Register(uint8_t byte_0, uint8_t byte_1, uint8_t byte_2, uint8_t byte_3, uint8_t byte_4, uint8_t byte_5, uint8_t byte_6, uint8_t byte_7, uint8_t byte_8, uint8_t byte_9, uint8_t byte_10, uint8_t byte_11, uint8_t byte_12, uint8_t byte_13, uint8_t byte_14, uint8_t byte_15, int8_t sbyte_0, int8_t sbyte_1, int8_t sbyte_2, int8_t sbyte_3, int8_t sbyte_4, int8_t sbyte_5, int8_t sbyte_6, int8_t sbyte_7, int8_t sbyte_8, int8_t sbyte_9, int8_t sbyte_10, int8_t sbyte_11, int8_t sbyte_12, int8_t sbyte_13, int8_t sbyte_14, int8_t sbyte_15, uint16_t uint16_0, uint16_t uint16_1, uint16_t uint16_2, uint16_t uint16_3, uint16_t uint16_4, uint16_t uint16_5, uint16_t uint16_6, uint16_t uint16_7, int16_t int16_0, int16_t int16_1, int16_t int16_2, int16_t int16_3, int16_t int16_4, int16_t int16_5, int16_t int16_6, int16_t int16_7, uint32_t uint32_0, uint32_t uint32_1, uint32_t uint32_2, uint32_t uint32_3, int32_t int32_0, int32_t int32_1, int32_t int32_2, int32_t int32_3, uint64_t uint64_0, uint64_t uint64_1, int64_t int64_0, int64_t int64_1, float_t single_0, float_t single_1, float_t single_2, float_t single_3, double_t double_0, double_t double_1) noexcept;


                    constexpr Register(Register const&) = default;
                    constexpr Register(Register&&) = default;
                    constexpr Register& operator=(Register const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Register& operator=(Register&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Register(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_byte_0, put=__set_byte_0))  byte_0;

constexpr void __set_byte_0(uint8_t value) ;

constexpr uint8_t __get_byte_0() const;

 uint8_t __declspec(property(get=__get_byte_1, put=__set_byte_1))  byte_1;

constexpr void __set_byte_1(uint8_t value) ;

constexpr uint8_t __get_byte_1() const;

 uint8_t __declspec(property(get=__get_byte_2, put=__set_byte_2))  byte_2;

constexpr void __set_byte_2(uint8_t value) ;

constexpr uint8_t __get_byte_2() const;

 uint8_t __declspec(property(get=__get_byte_3, put=__set_byte_3))  byte_3;

constexpr void __set_byte_3(uint8_t value) ;

constexpr uint8_t __get_byte_3() const;

 uint8_t __declspec(property(get=__get_byte_4, put=__set_byte_4))  byte_4;

constexpr void __set_byte_4(uint8_t value) ;

constexpr uint8_t __get_byte_4() const;

 uint8_t __declspec(property(get=__get_byte_5, put=__set_byte_5))  byte_5;

constexpr void __set_byte_5(uint8_t value) ;

constexpr uint8_t __get_byte_5() const;

 uint8_t __declspec(property(get=__get_byte_6, put=__set_byte_6))  byte_6;

constexpr void __set_byte_6(uint8_t value) ;

constexpr uint8_t __get_byte_6() const;

 uint8_t __declspec(property(get=__get_byte_7, put=__set_byte_7))  byte_7;

constexpr void __set_byte_7(uint8_t value) ;

constexpr uint8_t __get_byte_7() const;

 uint8_t __declspec(property(get=__get_byte_8, put=__set_byte_8))  byte_8;

constexpr void __set_byte_8(uint8_t value) ;

constexpr uint8_t __get_byte_8() const;

 uint8_t __declspec(property(get=__get_byte_9, put=__set_byte_9))  byte_9;

constexpr void __set_byte_9(uint8_t value) ;

constexpr uint8_t __get_byte_9() const;

 uint8_t __declspec(property(get=__get_byte_10, put=__set_byte_10))  byte_10;

constexpr void __set_byte_10(uint8_t value) ;

constexpr uint8_t __get_byte_10() const;

 uint8_t __declspec(property(get=__get_byte_11, put=__set_byte_11))  byte_11;

constexpr void __set_byte_11(uint8_t value) ;

constexpr uint8_t __get_byte_11() const;

 uint8_t __declspec(property(get=__get_byte_12, put=__set_byte_12))  byte_12;

constexpr void __set_byte_12(uint8_t value) ;

constexpr uint8_t __get_byte_12() const;

 uint8_t __declspec(property(get=__get_byte_13, put=__set_byte_13))  byte_13;

constexpr void __set_byte_13(uint8_t value) ;

constexpr uint8_t __get_byte_13() const;

 uint8_t __declspec(property(get=__get_byte_14, put=__set_byte_14))  byte_14;

constexpr void __set_byte_14(uint8_t value) ;

constexpr uint8_t __get_byte_14() const;

 uint8_t __declspec(property(get=__get_byte_15, put=__set_byte_15))  byte_15;

constexpr void __set_byte_15(uint8_t value) ;

constexpr uint8_t __get_byte_15() const;

 int8_t __declspec(property(get=__get_sbyte_0, put=__set_sbyte_0))  sbyte_0;

constexpr void __set_sbyte_0(int8_t value) ;

constexpr int8_t __get_sbyte_0() const;

 int8_t __declspec(property(get=__get_sbyte_1, put=__set_sbyte_1))  sbyte_1;

constexpr void __set_sbyte_1(int8_t value) ;

constexpr int8_t __get_sbyte_1() const;

 int8_t __declspec(property(get=__get_sbyte_2, put=__set_sbyte_2))  sbyte_2;

constexpr void __set_sbyte_2(int8_t value) ;

constexpr int8_t __get_sbyte_2() const;

 int8_t __declspec(property(get=__get_sbyte_3, put=__set_sbyte_3))  sbyte_3;

constexpr void __set_sbyte_3(int8_t value) ;

constexpr int8_t __get_sbyte_3() const;

 int8_t __declspec(property(get=__get_sbyte_4, put=__set_sbyte_4))  sbyte_4;

constexpr void __set_sbyte_4(int8_t value) ;

constexpr int8_t __get_sbyte_4() const;

 int8_t __declspec(property(get=__get_sbyte_5, put=__set_sbyte_5))  sbyte_5;

constexpr void __set_sbyte_5(int8_t value) ;

constexpr int8_t __get_sbyte_5() const;

 int8_t __declspec(property(get=__get_sbyte_6, put=__set_sbyte_6))  sbyte_6;

constexpr void __set_sbyte_6(int8_t value) ;

constexpr int8_t __get_sbyte_6() const;

 int8_t __declspec(property(get=__get_sbyte_7, put=__set_sbyte_7))  sbyte_7;

constexpr void __set_sbyte_7(int8_t value) ;

constexpr int8_t __get_sbyte_7() const;

 int8_t __declspec(property(get=__get_sbyte_8, put=__set_sbyte_8))  sbyte_8;

constexpr void __set_sbyte_8(int8_t value) ;

constexpr int8_t __get_sbyte_8() const;

 int8_t __declspec(property(get=__get_sbyte_9, put=__set_sbyte_9))  sbyte_9;

constexpr void __set_sbyte_9(int8_t value) ;

constexpr int8_t __get_sbyte_9() const;

 int8_t __declspec(property(get=__get_sbyte_10, put=__set_sbyte_10))  sbyte_10;

constexpr void __set_sbyte_10(int8_t value) ;

constexpr int8_t __get_sbyte_10() const;

 int8_t __declspec(property(get=__get_sbyte_11, put=__set_sbyte_11))  sbyte_11;

constexpr void __set_sbyte_11(int8_t value) ;

constexpr int8_t __get_sbyte_11() const;

 int8_t __declspec(property(get=__get_sbyte_12, put=__set_sbyte_12))  sbyte_12;

constexpr void __set_sbyte_12(int8_t value) ;

constexpr int8_t __get_sbyte_12() const;

 int8_t __declspec(property(get=__get_sbyte_13, put=__set_sbyte_13))  sbyte_13;

constexpr void __set_sbyte_13(int8_t value) ;

constexpr int8_t __get_sbyte_13() const;

 int8_t __declspec(property(get=__get_sbyte_14, put=__set_sbyte_14))  sbyte_14;

constexpr void __set_sbyte_14(int8_t value) ;

constexpr int8_t __get_sbyte_14() const;

 int8_t __declspec(property(get=__get_sbyte_15, put=__set_sbyte_15))  sbyte_15;

constexpr void __set_sbyte_15(int8_t value) ;

constexpr int8_t __get_sbyte_15() const;

 uint16_t __declspec(property(get=__get_uint16_0, put=__set_uint16_0))  uint16_0;

constexpr void __set_uint16_0(uint16_t value) ;

constexpr uint16_t __get_uint16_0() const;

 uint16_t __declspec(property(get=__get_uint16_1, put=__set_uint16_1))  uint16_1;

constexpr void __set_uint16_1(uint16_t value) ;

constexpr uint16_t __get_uint16_1() const;

 uint16_t __declspec(property(get=__get_uint16_2, put=__set_uint16_2))  uint16_2;

constexpr void __set_uint16_2(uint16_t value) ;

constexpr uint16_t __get_uint16_2() const;

 uint16_t __declspec(property(get=__get_uint16_3, put=__set_uint16_3))  uint16_3;

constexpr void __set_uint16_3(uint16_t value) ;

constexpr uint16_t __get_uint16_3() const;

 uint16_t __declspec(property(get=__get_uint16_4, put=__set_uint16_4))  uint16_4;

constexpr void __set_uint16_4(uint16_t value) ;

constexpr uint16_t __get_uint16_4() const;

 uint16_t __declspec(property(get=__get_uint16_5, put=__set_uint16_5))  uint16_5;

constexpr void __set_uint16_5(uint16_t value) ;

constexpr uint16_t __get_uint16_5() const;

 uint16_t __declspec(property(get=__get_uint16_6, put=__set_uint16_6))  uint16_6;

constexpr void __set_uint16_6(uint16_t value) ;

constexpr uint16_t __get_uint16_6() const;

 uint16_t __declspec(property(get=__get_uint16_7, put=__set_uint16_7))  uint16_7;

constexpr void __set_uint16_7(uint16_t value) ;

constexpr uint16_t __get_uint16_7() const;

 int16_t __declspec(property(get=__get_int16_0, put=__set_int16_0))  int16_0;

constexpr void __set_int16_0(int16_t value) ;

constexpr int16_t __get_int16_0() const;

 int16_t __declspec(property(get=__get_int16_1, put=__set_int16_1))  int16_1;

constexpr void __set_int16_1(int16_t value) ;

constexpr int16_t __get_int16_1() const;

 int16_t __declspec(property(get=__get_int16_2, put=__set_int16_2))  int16_2;

constexpr void __set_int16_2(int16_t value) ;

constexpr int16_t __get_int16_2() const;

 int16_t __declspec(property(get=__get_int16_3, put=__set_int16_3))  int16_3;

constexpr void __set_int16_3(int16_t value) ;

constexpr int16_t __get_int16_3() const;

 int16_t __declspec(property(get=__get_int16_4, put=__set_int16_4))  int16_4;

constexpr void __set_int16_4(int16_t value) ;

constexpr int16_t __get_int16_4() const;

 int16_t __declspec(property(get=__get_int16_5, put=__set_int16_5))  int16_5;

constexpr void __set_int16_5(int16_t value) ;

constexpr int16_t __get_int16_5() const;

 int16_t __declspec(property(get=__get_int16_6, put=__set_int16_6))  int16_6;

constexpr void __set_int16_6(int16_t value) ;

constexpr int16_t __get_int16_6() const;

 int16_t __declspec(property(get=__get_int16_7, put=__set_int16_7))  int16_7;

constexpr void __set_int16_7(int16_t value) ;

constexpr int16_t __get_int16_7() const;

 uint32_t __declspec(property(get=__get_uint32_0, put=__set_uint32_0))  uint32_0;

constexpr void __set_uint32_0(uint32_t value) ;

constexpr uint32_t __get_uint32_0() const;

 uint32_t __declspec(property(get=__get_uint32_1, put=__set_uint32_1))  uint32_1;

constexpr void __set_uint32_1(uint32_t value) ;

constexpr uint32_t __get_uint32_1() const;

 uint32_t __declspec(property(get=__get_uint32_2, put=__set_uint32_2))  uint32_2;

constexpr void __set_uint32_2(uint32_t value) ;

constexpr uint32_t __get_uint32_2() const;

 uint32_t __declspec(property(get=__get_uint32_3, put=__set_uint32_3))  uint32_3;

constexpr void __set_uint32_3(uint32_t value) ;

constexpr uint32_t __get_uint32_3() const;

 int32_t __declspec(property(get=__get_int32_0, put=__set_int32_0))  int32_0;

constexpr void __set_int32_0(int32_t value) ;

constexpr int32_t __get_int32_0() const;

 int32_t __declspec(property(get=__get_int32_1, put=__set_int32_1))  int32_1;

constexpr void __set_int32_1(int32_t value) ;

constexpr int32_t __get_int32_1() const;

 int32_t __declspec(property(get=__get_int32_2, put=__set_int32_2))  int32_2;

constexpr void __set_int32_2(int32_t value) ;

constexpr int32_t __get_int32_2() const;

 int32_t __declspec(property(get=__get_int32_3, put=__set_int32_3))  int32_3;

constexpr void __set_int32_3(int32_t value) ;

constexpr int32_t __get_int32_3() const;

 uint64_t __declspec(property(get=__get_uint64_0, put=__set_uint64_0))  uint64_0;

constexpr void __set_uint64_0(uint64_t value) ;

constexpr uint64_t __get_uint64_0() const;

 uint64_t __declspec(property(get=__get_uint64_1, put=__set_uint64_1))  uint64_1;

constexpr void __set_uint64_1(uint64_t value) ;

constexpr uint64_t __get_uint64_1() const;

 int64_t __declspec(property(get=__get_int64_0, put=__set_int64_0))  int64_0;

constexpr void __set_int64_0(int64_t value) ;

constexpr int64_t __get_int64_0() const;

 int64_t __declspec(property(get=__get_int64_1, put=__set_int64_1))  int64_1;

constexpr void __set_int64_1(int64_t value) ;

constexpr int64_t __get_int64_1() const;

 float_t __declspec(property(get=__get_single_0, put=__set_single_0))  single_0;

constexpr void __set_single_0(float_t value) ;

constexpr float_t __get_single_0() const;

 float_t __declspec(property(get=__get_single_1, put=__set_single_1))  single_1;

constexpr void __set_single_1(float_t value) ;

constexpr float_t __get_single_1() const;

 float_t __declspec(property(get=__get_single_2, put=__set_single_2))  single_2;

constexpr void __set_single_2(float_t value) ;

constexpr float_t __get_single_2() const;

 float_t __declspec(property(get=__get_single_3, put=__set_single_3))  single_3;

constexpr void __set_single_3(float_t value) ;

constexpr float_t __get_single_3() const;

 double_t __declspec(property(get=__get_double_0, put=__set_double_0))  double_0;

constexpr void __set_double_0(double_t value) ;

constexpr double_t __get_double_0() const;

 double_t __declspec(property(get=__get_double_1, put=__set_double_1))  double_1;

constexpr void __set_double_1(double_t value) ;

constexpr double_t __get_double_1() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Numerics
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::Register, "System.Numerics", "Register");

#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class PrimitiveArray;
}
// Type: System.Runtime.Serialization.Formatters.Binary::PrimitiveArray
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3295))
// CS Name: System.Runtime.Serialization.Formatters.Binary.PrimitiveArray
class CORDL_TYPE PrimitiveArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~PrimitiveArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveArray", modifiers: " const&", def_value: None }]
constexpr PrimitiveArray(PrimitiveArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveArray", modifiers: "&&", def_value: None }]
constexpr PrimitiveArray(PrimitiveArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrimitiveArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrimitiveArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrimitiveArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrimitiveArray& operator=(PrimitiveArray&& o) noexcept = default;
  constexpr PrimitiveArray& operator=(PrimitiveArray const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __declspec(property(get=__get_code, put=__set_code))  code;

constexpr void __set_code(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __get_code() const;

 ::ArrayW<bool> __declspec(property(get=__get_booleanA, put=__set_booleanA))  booleanA;

constexpr void __set_booleanA(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_booleanA() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_charA, put=__set_charA))  charA;

constexpr void __set_charA(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_charA() const;

 ::ArrayW<double_t> __declspec(property(get=__get_doubleA, put=__set_doubleA))  doubleA;

constexpr void __set_doubleA(::ArrayW<double_t> value) ;

constexpr ::ArrayW<double_t> __get_doubleA() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_int16A, put=__set_int16A))  int16A;

constexpr void __set_int16A(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_int16A() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_int32A, put=__set_int32A))  int32A;

constexpr void __set_int32A(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_int32A() const;

 ::ArrayW<int64_t> __declspec(property(get=__get_int64A, put=__set_int64A))  int64A;

constexpr void __set_int64A(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get_int64A() const;

 ::ArrayW<int8_t> __declspec(property(get=__get_sbyteA, put=__set_sbyteA))  sbyteA;

constexpr void __set_sbyteA(::ArrayW<int8_t> value) ;

constexpr ::ArrayW<int8_t> __get_sbyteA() const;

 ::ArrayW<float_t> __declspec(property(get=__get_singleA, put=__set_singleA))  singleA;

constexpr void __set_singleA(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_singleA() const;

 ::ArrayW<uint16_t> __declspec(property(get=__get_uint16A, put=__set_uint16A))  uint16A;

constexpr void __set_uint16A(::ArrayW<uint16_t> value) ;

constexpr ::ArrayW<uint16_t> __get_uint16A() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_uint32A, put=__set_uint32A))  uint32A;

constexpr void __set_uint32A(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_uint32A() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_uint64A, put=__set_uint64A))  uint64A;

constexpr void __set_uint64A(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_uint64A() const;


// Methods

// Ctor Parameters [CppParam { name: "code", ty: "::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE", modifiers: "", def_value: None }, CppParam { name: "array", ty: "::System::Array", modifiers: "", def_value: None }]
explicit PrimitiveArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array array) ;

/// @brief Method .ctor addr 0x2361a40 size 0x34 virtual false final false
 void _ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array array) ;

/// @brief Method Init addr 0x2369f7c size 0x320 virtual false final false
 void Init(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array array) ;

/// @brief Method SetValue addr 0x2362348 size 0x3bc virtual false final false
 void SetValue(::StringW value, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, "System.Runtime.Serialization.Formatters.Binary", "PrimitiveArray");

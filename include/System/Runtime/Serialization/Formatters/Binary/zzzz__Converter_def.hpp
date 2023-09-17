#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
struct TypeCode;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class Converter;
}
// Type: System.Runtime.Serialization.Formatters.Binary::Converter
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3273))
// CS Name: System.Runtime.Serialization.Formatters.Binary.Converter
class CORDL_TYPE Converter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Converter() = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter", modifiers: " const&", def_value: None }]
constexpr Converter(Converter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter", modifiers: "&&", def_value: None }]
constexpr Converter(Converter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Converter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Converter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Converter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Converter& operator=(Converter&& o) noexcept = default;
  constexpr Converter& operator=(Converter const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_primitiveTypeEnumLength, put=__set_primitiveTypeEnumLength))  primitiveTypeEnumLength;

static void __set_primitiveTypeEnumLength(int32_t value) ;

static int32_t __get_primitiveTypeEnumLength() ;

static ::ArrayW<::System::Type> __declspec(property(get=__get_typeA, put=__set_typeA))  typeA;

static void __set_typeA(::ArrayW<::System::Type> value) ;

static ::ArrayW<::System::Type> __get_typeA() ;

static ::ArrayW<::System::Type> __declspec(property(get=__get_arrayTypeA, put=__set_arrayTypeA))  arrayTypeA;

static void __set_arrayTypeA(::ArrayW<::System::Type> value) ;

static ::ArrayW<::System::Type> __get_arrayTypeA() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_valueA, put=__set_valueA))  valueA;

static void __set_valueA(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_valueA() ;

static ::ArrayW<::System::TypeCode> __declspec(property(get=__get_typeCodeA, put=__set_typeCodeA))  typeCodeA;

static void __set_typeCodeA(::ArrayW<::System::TypeCode> value) ;

static ::ArrayW<::System::TypeCode> __get_typeCodeA() ;

static ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE> __declspec(property(get=__get_codeA, put=__set_codeA))  codeA;

static void __set_codeA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE> value) ;

static ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE> __get_codeA() ;

static ::System::Type __declspec(property(get=__get_typeofISerializable, put=__set_typeofISerializable))  typeofISerializable;

static void __set_typeofISerializable(::System::Type value) ;

static ::System::Type __get_typeofISerializable() ;

static ::System::Type __declspec(property(get=__get_typeofString, put=__set_typeofString))  typeofString;

static void __set_typeofString(::System::Type value) ;

static ::System::Type __get_typeofString() ;

static ::System::Type __declspec(property(get=__get_typeofConverter, put=__set_typeofConverter))  typeofConverter;

static void __set_typeofConverter(::System::Type value) ;

static ::System::Type __get_typeofConverter() ;

static ::System::Type __declspec(property(get=__get_typeofBoolean, put=__set_typeofBoolean))  typeofBoolean;

static void __set_typeofBoolean(::System::Type value) ;

static ::System::Type __get_typeofBoolean() ;

static ::System::Type __declspec(property(get=__get_typeofByte, put=__set_typeofByte))  typeofByte;

static void __set_typeofByte(::System::Type value) ;

static ::System::Type __get_typeofByte() ;

static ::System::Type __declspec(property(get=__get_typeofChar, put=__set_typeofChar))  typeofChar;

static void __set_typeofChar(::System::Type value) ;

static ::System::Type __get_typeofChar() ;

static ::System::Type __declspec(property(get=__get_typeofDecimal, put=__set_typeofDecimal))  typeofDecimal;

static void __set_typeofDecimal(::System::Type value) ;

static ::System::Type __get_typeofDecimal() ;

static ::System::Type __declspec(property(get=__get_typeofDouble, put=__set_typeofDouble))  typeofDouble;

static void __set_typeofDouble(::System::Type value) ;

static ::System::Type __get_typeofDouble() ;

static ::System::Type __declspec(property(get=__get_typeofInt16, put=__set_typeofInt16))  typeofInt16;

static void __set_typeofInt16(::System::Type value) ;

static ::System::Type __get_typeofInt16() ;

static ::System::Type __declspec(property(get=__get_typeofInt32, put=__set_typeofInt32))  typeofInt32;

static void __set_typeofInt32(::System::Type value) ;

static ::System::Type __get_typeofInt32() ;

static ::System::Type __declspec(property(get=__get_typeofInt64, put=__set_typeofInt64))  typeofInt64;

static void __set_typeofInt64(::System::Type value) ;

static ::System::Type __get_typeofInt64() ;

static ::System::Type __declspec(property(get=__get_typeofSByte, put=__set_typeofSByte))  typeofSByte;

static void __set_typeofSByte(::System::Type value) ;

static ::System::Type __get_typeofSByte() ;

static ::System::Type __declspec(property(get=__get_typeofSingle, put=__set_typeofSingle))  typeofSingle;

static void __set_typeofSingle(::System::Type value) ;

static ::System::Type __get_typeofSingle() ;

static ::System::Type __declspec(property(get=__get_typeofTimeSpan, put=__set_typeofTimeSpan))  typeofTimeSpan;

static void __set_typeofTimeSpan(::System::Type value) ;

static ::System::Type __get_typeofTimeSpan() ;

static ::System::Type __declspec(property(get=__get_typeofDateTime, put=__set_typeofDateTime))  typeofDateTime;

static void __set_typeofDateTime(::System::Type value) ;

static ::System::Type __get_typeofDateTime() ;

static ::System::Type __declspec(property(get=__get_typeofUInt16, put=__set_typeofUInt16))  typeofUInt16;

static void __set_typeofUInt16(::System::Type value) ;

static ::System::Type __get_typeofUInt16() ;

static ::System::Type __declspec(property(get=__get_typeofUInt32, put=__set_typeofUInt32))  typeofUInt32;

static void __set_typeofUInt32(::System::Type value) ;

static ::System::Type __get_typeofUInt32() ;

static ::System::Type __declspec(property(get=__get_typeofUInt64, put=__set_typeofUInt64))  typeofUInt64;

static void __set_typeofUInt64(::System::Type value) ;

static ::System::Type __get_typeofUInt64() ;

static ::System::Type __declspec(property(get=__get_typeofObject, put=__set_typeofObject))  typeofObject;

static void __set_typeofObject(::System::Type value) ;

static ::System::Type __get_typeofObject() ;

static ::System::Type __declspec(property(get=__get_typeofSystemVoid, put=__set_typeofSystemVoid))  typeofSystemVoid;

static void __set_typeofSystemVoid(::System::Type value) ;

static ::System::Type __get_typeofSystemVoid() ;

static ::System::Reflection::Assembly __declspec(property(get=__get_urtAssembly, put=__set_urtAssembly))  urtAssembly;

static void __set_urtAssembly(::System::Reflection::Assembly value) ;

static ::System::Reflection::Assembly __get_urtAssembly() ;

static ::StringW __declspec(property(get=__get_urtAssemblyString, put=__set_urtAssemblyString))  urtAssemblyString;

static void __set_urtAssemblyString(::StringW value) ;

static ::StringW __get_urtAssemblyString() ;

static ::System::Type __declspec(property(get=__get_typeofTypeArray, put=__set_typeofTypeArray))  typeofTypeArray;

static void __set_typeofTypeArray(::System::Type value) ;

static ::System::Type __get_typeofTypeArray() ;

static ::System::Type __declspec(property(get=__get_typeofObjectArray, put=__set_typeofObjectArray))  typeofObjectArray;

static void __set_typeofObjectArray(::System::Type value) ;

static ::System::Type __get_typeofObjectArray() ;

static ::System::Type __declspec(property(get=__get_typeofStringArray, put=__set_typeofStringArray))  typeofStringArray;

static void __set_typeofStringArray(::System::Type value) ;

static ::System::Type __get_typeofStringArray() ;

static ::System::Type __declspec(property(get=__get_typeofBooleanArray, put=__set_typeofBooleanArray))  typeofBooleanArray;

static void __set_typeofBooleanArray(::System::Type value) ;

static ::System::Type __get_typeofBooleanArray() ;

static ::System::Type __declspec(property(get=__get_typeofByteArray, put=__set_typeofByteArray))  typeofByteArray;

static void __set_typeofByteArray(::System::Type value) ;

static ::System::Type __get_typeofByteArray() ;

static ::System::Type __declspec(property(get=__get_typeofCharArray, put=__set_typeofCharArray))  typeofCharArray;

static void __set_typeofCharArray(::System::Type value) ;

static ::System::Type __get_typeofCharArray() ;

static ::System::Type __declspec(property(get=__get_typeofDecimalArray, put=__set_typeofDecimalArray))  typeofDecimalArray;

static void __set_typeofDecimalArray(::System::Type value) ;

static ::System::Type __get_typeofDecimalArray() ;

static ::System::Type __declspec(property(get=__get_typeofDoubleArray, put=__set_typeofDoubleArray))  typeofDoubleArray;

static void __set_typeofDoubleArray(::System::Type value) ;

static ::System::Type __get_typeofDoubleArray() ;

static ::System::Type __declspec(property(get=__get_typeofInt16Array, put=__set_typeofInt16Array))  typeofInt16Array;

static void __set_typeofInt16Array(::System::Type value) ;

static ::System::Type __get_typeofInt16Array() ;

static ::System::Type __declspec(property(get=__get_typeofInt32Array, put=__set_typeofInt32Array))  typeofInt32Array;

static void __set_typeofInt32Array(::System::Type value) ;

static ::System::Type __get_typeofInt32Array() ;

static ::System::Type __declspec(property(get=__get_typeofInt64Array, put=__set_typeofInt64Array))  typeofInt64Array;

static void __set_typeofInt64Array(::System::Type value) ;

static ::System::Type __get_typeofInt64Array() ;

static ::System::Type __declspec(property(get=__get_typeofSByteArray, put=__set_typeofSByteArray))  typeofSByteArray;

static void __set_typeofSByteArray(::System::Type value) ;

static ::System::Type __get_typeofSByteArray() ;

static ::System::Type __declspec(property(get=__get_typeofSingleArray, put=__set_typeofSingleArray))  typeofSingleArray;

static void __set_typeofSingleArray(::System::Type value) ;

static ::System::Type __get_typeofSingleArray() ;

static ::System::Type __declspec(property(get=__get_typeofTimeSpanArray, put=__set_typeofTimeSpanArray))  typeofTimeSpanArray;

static void __set_typeofTimeSpanArray(::System::Type value) ;

static ::System::Type __get_typeofTimeSpanArray() ;

static ::System::Type __declspec(property(get=__get_typeofDateTimeArray, put=__set_typeofDateTimeArray))  typeofDateTimeArray;

static void __set_typeofDateTimeArray(::System::Type value) ;

static ::System::Type __get_typeofDateTimeArray() ;

static ::System::Type __declspec(property(get=__get_typeofUInt16Array, put=__set_typeofUInt16Array))  typeofUInt16Array;

static void __set_typeofUInt16Array(::System::Type value) ;

static ::System::Type __get_typeofUInt16Array() ;

static ::System::Type __declspec(property(get=__get_typeofUInt32Array, put=__set_typeofUInt32Array))  typeofUInt32Array;

static void __set_typeofUInt32Array(::System::Type value) ;

static ::System::Type __get_typeofUInt32Array() ;

static ::System::Type __declspec(property(get=__get_typeofUInt64Array, put=__set_typeofUInt64Array))  typeofUInt64Array;

static void __set_typeofUInt64Array(::System::Type value) ;

static ::System::Type __get_typeofUInt64Array() ;

static ::System::Type __declspec(property(get=__get_typeofMarshalByRefObject, put=__set_typeofMarshalByRefObject))  typeofMarshalByRefObject;

static void __set_typeofMarshalByRefObject(::System::Type value) ;

static ::System::Type __get_typeofMarshalByRefObject() ;


// Methods

/// @brief Method ToCode addr 0x2354478 size 0x124 virtual false final false
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type type) ;

/// @brief Method IsWriteAsByteArray addr 0x23581e4 size 0x24 virtual false final false
static bool IsWriteAsByteArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) ;

/// @brief Method TypeLength addr 0x2358208 size 0x24 virtual false final false
static int32_t TypeLength(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) ;

/// @brief Method ToArrayType addr 0x2354e60 size 0xb8 virtual false final false
static ::System::Type ToArrayType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) ;

/// @brief Method InitTypeA addr 0x23585e4 size 0x3b8 virtual false final false
static void InitTypeA() ;

/// @brief Method InitArrayTypeA addr 0x235822c size 0x3b8 virtual false final false
static void InitArrayTypeA() ;

/// @brief Method ToType addr 0x2354da8 size 0xb8 virtual false final false
static ::System::Type ToType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) ;

/// @brief Method CreatePrimitiveArray addr 0x235899c size 0x120 virtual false final false
static ::System::Array CreatePrimitiveArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, int32_t length) ;

/// @brief Method IsPrimitiveArray addr 0x2353fc8 size 0x290 virtual false final false
static bool IsPrimitiveArray(::System::Type type, ByRef<::bs_hook::Il2CppWrapperType> typeInformation) ;

/// @brief Method InitValueA addr 0x2358abc size 0x46c virtual false final false
static void InitValueA() ;

/// @brief Method ToComType addr 0x2354cf0 size 0xb8 virtual false final false
static ::StringW ToComType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) ;

/// @brief Method InitTypeCodeA addr 0x2358f28 size 0x194 virtual false final false
static void InitTypeCodeA() ;

/// @brief Method ToTypeCode addr 0x23590bc size 0xb8 virtual false final false
static ::System::TypeCode ToTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) ;

/// @brief Method InitCodeA addr 0x2359174 size 0x1a8 virtual false final false
static void InitCodeA() ;

/// @brief Method ToPrimitiveTypeEnum addr 0x235812c size 0xb8 virtual false final false
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToPrimitiveTypeEnum(::System::TypeCode typeCode) ;

/// @brief Method FromString addr 0x235931c size 0xec virtual false final false
static ::bs_hook::Il2CppWrapperType FromString(::StringW value, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::Converter, "System.Runtime.Serialization.Formatters.Binary", "Converter");

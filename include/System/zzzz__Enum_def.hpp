#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
struct TypeCode;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Array;
}
namespace System {
class RuntimeType;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
struct ____System__Enum__ParseFailureKind;
}
namespace System {
class Enum;
}
namespace System {
class ____System__Enum__ValuesAndNames;
}
namespace System {
struct ____System__Enum__EnumResult;
}
// Type: System::Enum
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2558))
// CS Name: System.Enum
class CORDL_TYPE Enum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
using ValuesAndNames = ::System::____System__Enum__ValuesAndNames;

using EnumResult = ::System::____System__Enum__EnumResult;

using ParseFailureKind = ::System::____System__Enum__ParseFailureKind;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const noexcept;

/// @brief Convert operator to ::System::IConvertible
constexpr operator  ::System::IConvertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_enumSeperatorCharArray, put=__set_enumSeperatorCharArray))  enumSeperatorCharArray;

static void __set_enumSeperatorCharArray(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_enumSeperatorCharArray() ;

/// @brief Field enumSeperator offset 0
static constexpr ::ConstString  enumSeperator{u", "};


// Methods

/// @brief Method GetCachedValuesAndNames addr 0x247396c size 0x150 virtual false final false
static ::System::____System__Enum__ValuesAndNames GetCachedValuesAndNames(::System::RuntimeType enumType, bool getNames) ;

/// @brief Method InternalFormattedHexString addr 0x2473aec size 0x4a8 virtual false final false
static ::StringW InternalFormattedHexString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method InternalFormat addr 0x2473f94 size 0x114 virtual false final false
static ::StringW InternalFormat(::System::RuntimeType eT, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method InternalFlagsFormat addr 0x2474180 size 0x1fc virtual false final false
static ::StringW InternalFlagsFormat(::System::RuntimeType eT, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt64 addr 0x247437c size 0x174 virtual false final false
static uint64_t ToUInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method InternalCompareTo addr 0x24744f0 size 0x4 virtual false final false
static int32_t InternalCompareTo(::bs_hook::Il2CppWrapperType o1, ::bs_hook::Il2CppWrapperType o2) ;

/// @brief Method InternalGetUnderlyingType addr 0x24744f4 size 0x4 virtual false final false
static ::System::RuntimeType InternalGetUnderlyingType(::System::RuntimeType enumType) ;

/// @brief Method GetEnumValuesAndNames addr 0x2473abc size 0x4 virtual false final false
static bool GetEnumValuesAndNames(::System::RuntimeType enumType, ByRef<::ArrayW<uint64_t>> values, ByRef<::ArrayW<::StringW>> names) ;

/// @brief Method InternalBoxEnum addr 0x24744f8 size 0x4 virtual false final false
static ::bs_hook::Il2CppWrapperType InternalBoxEnum(::System::RuntimeType enumType, int64_t value) ;

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TEnum>
static bool TryParse(::StringW value, bool ignoreCase, ByRef<TEnum> result) ;

/// @brief Method Parse addr 0x24744fc size 0x68 virtual false final false
static ::bs_hook::Il2CppWrapperType Parse(::System::Type enumType, ::StringW value) ;

/// @brief Method Parse addr 0x2474564 size 0xc0 virtual false final false
static ::bs_hook::Il2CppWrapperType Parse(::System::Type enumType, ::StringW value, bool ignoreCase) ;

/// @brief Method TryParseEnum addr 0x2474688 size 0x678 virtual false final false
static bool TryParseEnum(::System::Type enumType, ::StringW value, bool ignoreCase, ByRef<::System::____System__Enum__EnumResult> parseResult) ;

/// @brief Method GetUnderlyingType addr 0x2474ef8 size 0xc8 virtual false final false
static ::System::Type GetUnderlyingType(::System::Type enumType) ;

/// @brief Method GetValues addr 0x2475660 size 0xc8 virtual false final false
static ::System::Array GetValues(::System::Type enumType) ;

/// @brief Method InternalGetValues addr 0x2475728 size 0x68 virtual false final false
static ::ArrayW<uint64_t> InternalGetValues(::System::RuntimeType enumType) ;

/// @brief Method GetName addr 0x24740a8 size 0xd8 virtual false final false
static ::StringW GetName(::System::Type enumType, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetNames addr 0x2475790 size 0xc8 virtual false final false
static ::ArrayW<::StringW> GetNames(::System::Type enumType) ;

/// @brief Method InternalGetNames addr 0x2475858 size 0x68 virtual false final false
static ::ArrayW<::StringW> InternalGetNames(::System::RuntimeType enumType) ;

/// @brief Method ToObject addr 0x2474fc0 size 0x4bc virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IsDefined addr 0x2476938 size 0xd8 virtual false final false
static bool IsDefined(::System::Type enumType, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Format addr 0x2476a10 size 0x5ec virtual false final false
static ::StringW Format(::System::Type enumType, ::bs_hook::Il2CppWrapperType value, ::StringW format) ;

/// @brief Method get_value addr 0x2477000 size 0x4 virtual false final false
 ::bs_hook::Il2CppWrapperType get_value() ;

/// @brief Method GetValue addr 0x2476ffc size 0x4 virtual false final false
 ::bs_hook::Il2CppWrapperType GetValue() ;

/// @brief Method InternalHasFlag addr 0x2477004 size 0x4 virtual false final false
 bool InternalHasFlag(::System::Enum flags) ;

/// @brief Method get_hashcode addr 0x2477008 size 0x4 virtual false final false
 int32_t get_hashcode() ;

/// @brief Method Equals addr 0x247700c size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2477014 size 0x4 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2477018 size 0xcc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x24770e4 size 0x4 virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider provider) ;

/// @brief Method CompareTo addr 0x2477338 size 0x20c virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType target) ;

/// @brief Method ToString addr 0x24770e8 size 0x250 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2477544 size 0xc virtual true final true
 ::StringW ToString(::System::IFormatProvider provider) ;

/// @brief Method HasFlag addr 0x2477550 size 0x194 virtual false final false
 bool HasFlag(::System::Enum flag) ;

/// @brief Method GetTypeCode addr 0x24776e4 size 0x404 virtual true final true
 ::System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x2477ae8 size 0xa0 virtual true final true
 bool System_IConvertible_ToBoolean(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x2477b88 size 0xa0 virtual true final true
 char16_t System_IConvertible_ToChar(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x2477c28 size 0xa0 virtual true final true
 int8_t System_IConvertible_ToSByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x2477cc8 size 0xa0 virtual true final true
 uint8_t System_IConvertible_ToByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x2477d68 size 0xa0 virtual true final true
 int16_t System_IConvertible_ToInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x2477e08 size 0xa0 virtual true final true
 uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x2477ea8 size 0xa0 virtual true final true
 int32_t System_IConvertible_ToInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x2477f48 size 0xa0 virtual true final true
 uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x2477fe8 size 0xa0 virtual true final true
 int64_t System_IConvertible_ToInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x2478088 size 0xa0 virtual true final true
 uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x2478128 size 0xa0 virtual true final true
 float_t System_IConvertible_ToSingle(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x24781c8 size 0xa0 virtual true final true
 double_t System_IConvertible_ToDouble(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x2478268 size 0xa0 virtual true final true
 ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x2478308 size 0xf0 virtual true final true
 ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x24783f8 size 0x70 virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(::System::Type type, ::System::IFormatProvider provider) ;

/// @brief Method ToObject addr 0x2475a94 size 0x1d4 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, int8_t value) ;

/// @brief Method ToObject addr 0x2475c68 size 0x1d4 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, int16_t value) ;

/// @brief Method ToObject addr 0x24758c0 size 0x1d4 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, int32_t value) ;

/// @brief Method ToObject addr 0x24761e4 size 0x1d4 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, uint8_t value) ;

/// @brief Method ToObject addr 0x24763b8 size 0x1d4 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, uint16_t value) ;

/// @brief Method ToObject addr 0x2476010 size 0x1d4 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, uint32_t value) ;

/// @brief Method ToObject addr 0x2475e3c size 0x1d4 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, int64_t value) ;

/// @brief Method ToObject addr 0x247548c size 0x1d4 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, uint64_t value) ;

/// @brief Method ToObject addr 0x247658c size 0x1d4 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, char16_t value) ;

/// @brief Method ToObject addr 0x2476760 size 0x1d8 virtual false final false
static ::bs_hook::Il2CppWrapperType ToObject(::System::Type enumType, bool value) ;

// Ctor Parameters []
constexpr explicit Enum()  : ::bs_hook::EnumTypeWrapper() {
}

/// @brief Method .ctor addr 0x2478468 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: ::ParseFailureKind
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2555))
// CS Name: System.Enum::ParseFailureKind
struct CORDL_TYPE ____System__Enum__ParseFailureKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Enum__ParseFailureKind(int32_t value__) noexcept;


                    constexpr ____System__Enum__ParseFailureKind(____System__Enum__ParseFailureKind const&) = default;
                    constexpr ____System__Enum__ParseFailureKind(____System__Enum__ParseFailureKind&&) = default;
                    constexpr ____System__Enum__ParseFailureKind& operator=(____System__Enum__ParseFailureKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Enum__ParseFailureKind& operator=(____System__Enum__ParseFailureKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Enum__ParseFailureKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Enum__ParseFailureKind_Unwrapped : int32_t {
__None = 0,
__Argument = 1,
__ArgumentNull = 2,
__ArgumentWithParameter = 3,
__UnhandledException = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Enum__ParseFailureKind_Unwrapped () const noexcept {
return std::bit_cast<______System__Enum__ParseFailureKind_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::____System__Enum__ParseFailureKind const None;

/// @brief Field Argument offset 0
static ::System::____System__Enum__ParseFailureKind const Argument;

/// @brief Field ArgumentNull offset 0
static ::System::____System__Enum__ParseFailureKind const ArgumentNull;

/// @brief Field ArgumentWithParameter offset 0
static ::System::____System__Enum__ParseFailureKind const ArgumentWithParameter;

/// @brief Field UnhandledException offset 0
static ::System::____System__Enum__ParseFailureKind const UnhandledException;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::EnumResult
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2556))
// CS Name: System.Enum::EnumResult
struct CORDL_TYPE ____System__Enum__EnumResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "parsedEnum", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_failure", ty: "::System::____System__Enum__ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageFormatArgument", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "m_innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
constexpr ____System__Enum__EnumResult(::bs_hook::Il2CppWrapperType parsedEnum, bool canThrow, ::System::____System__Enum__ParseFailureKind m_failure, ::StringW m_failureMessageID, ::StringW m_failureParameter, ::bs_hook::Il2CppWrapperType m_failureMessageFormatArgument, ::System::Exception m_innerException) noexcept;


                    constexpr ____System__Enum__EnumResult(____System__Enum__EnumResult const&) = default;
                    constexpr ____System__Enum__EnumResult(____System__Enum__EnumResult&&) = default;
                    constexpr ____System__Enum__EnumResult& operator=(____System__Enum__EnumResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Enum__EnumResult& operator=(____System__Enum__EnumResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Enum__EnumResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_parsedEnum, put=__set_parsedEnum))  parsedEnum;

constexpr void __set_parsedEnum(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_parsedEnum() const;

 bool __declspec(property(get=__get_canThrow, put=__set_canThrow))  canThrow;

constexpr void __set_canThrow(bool value) ;

constexpr bool __get_canThrow() const;

 ::System::____System__Enum__ParseFailureKind __declspec(property(get=__get_m_failure, put=__set_m_failure))  m_failure;

constexpr void __set_m_failure(::System::____System__Enum__ParseFailureKind value) ;

constexpr ::System::____System__Enum__ParseFailureKind __get_m_failure() const;

 ::StringW __declspec(property(get=__get_m_failureMessageID, put=__set_m_failureMessageID))  m_failureMessageID;

constexpr void __set_m_failureMessageID(::StringW value) ;

constexpr ::StringW __get_m_failureMessageID() const;

 ::StringW __declspec(property(get=__get_m_failureParameter, put=__set_m_failureParameter))  m_failureParameter;

constexpr void __set_m_failureParameter(::StringW value) ;

constexpr ::StringW __get_m_failureParameter() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_failureMessageFormatArgument, put=__set_m_failureMessageFormatArgument))  m_failureMessageFormatArgument;

constexpr void __set_m_failureMessageFormatArgument(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_failureMessageFormatArgument() const;

 ::System::Exception __declspec(property(get=__get_m_innerException, put=__set_m_innerException))  m_innerException;

constexpr void __set_m_innerException(::System::Exception value) ;

constexpr ::System::Exception __get_m_innerException() const;


// Methods

/// @brief Method Init addr 0x2474624 size 0x64 virtual false final false
 void Init(bool canMethodThrow) ;

/// @brief Method SetFailure addr 0x247547c size 0x10 virtual false final false
 void SetFailure(::System::Exception unhandledException) ;

/// @brief Method SetFailure addr 0x2474e7c size 0x3c virtual false final false
 void SetFailure(::System::____System__Enum__ParseFailureKind failure, ::StringW failureParameter) ;

/// @brief Method SetFailure addr 0x2474eb8 size 0x40 virtual false final false
 void SetFailure(::System::____System__Enum__ParseFailureKind failure, ::StringW failureMessageID, ::bs_hook::Il2CppWrapperType failureMessageFormatArgument) ;

/// @brief Method GetEnumParseException addr 0x2474d00 size 0x17c virtual false final false
 ::System::Exception GetEnumParseException() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::ValuesAndNames
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2557))
// CS Name: System.Enum::ValuesAndNames
class CORDL_TYPE ____System__Enum__ValuesAndNames : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____System__Enum__ValuesAndNames() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Enum__ValuesAndNames", modifiers: " const&", def_value: None }]
constexpr ____System__Enum__ValuesAndNames(____System__Enum__ValuesAndNames const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Enum__ValuesAndNames", modifiers: "&&", def_value: None }]
constexpr ____System__Enum__ValuesAndNames(____System__Enum__ValuesAndNames&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Enum__ValuesAndNames(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Enum__ValuesAndNames& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Enum__ValuesAndNames& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Enum__ValuesAndNames& operator=(____System__Enum__ValuesAndNames&& o) noexcept = default;
  constexpr ____System__Enum__ValuesAndNames& operator=(____System__Enum__ValuesAndNames const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint64_t> __declspec(property(get=__get_Values, put=__set_Values))  Values;

constexpr void __set_Values(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_Values() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_Names, put=__set_Names))  Names;

constexpr void __set_Names(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_Names() const;


// Methods

// Ctor Parameters [CppParam { name: "values", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "names", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit ____System__Enum__ValuesAndNames(::ArrayW<uint64_t> values, ::ArrayW<::StringW> names) ;

/// @brief Method .ctor addr 0x2473ac0 size 0x2c virtual false final false
 void _ctor(::ArrayW<uint64_t> values, ::ArrayW<::StringW> names) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::____System__Enum__ParseFailureKind, "System", "Enum/ParseFailureKind");
NEED_NO_BOX(::System::Enum);
DEFINE_IL2CPP_ARG_TYPE(::System::Enum, "System", "Enum");
NEED_NO_BOX(::System::____System__Enum__ValuesAndNames);
DEFINE_IL2CPP_ARG_TYPE(::System::____System__Enum__ValuesAndNames, "System", "Enum/ValuesAndNames");
DEFINE_IL2CPP_ARG_TYPE(::System::____System__Enum__EnumResult, "System", "Enum/EnumResult");

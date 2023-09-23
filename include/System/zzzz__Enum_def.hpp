#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System {
class IComparable;
}
namespace System {
class Array;
}
namespace System {
struct Decimal;
}
namespace System {
class RuntimeType;
}
namespace System {
class IFormattable;
}
namespace System {
class Type;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct TypeCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
struct System__Enum__ParseFailureKind;
}
namespace System {
class Enum;
}
namespace System {
class System__Enum__ValuesAndNames;
}
namespace System {
struct System__Enum__EnumResult;
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
using ValuesAndNames = System::System__Enum__ValuesAndNames;

using EnumResult = System::System__Enum__EnumResult;

using ParseFailureKind = System::System__Enum__ParseFailureKind;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_enumSeperatorCharArray, put=__set_enumSeperatorCharArray))  enumSeperatorCharArray;

/// @brief Field enumSeperator offset 0
static constexpr ::ConstString  enumSeperator{u", "};


// Methods

// Ctor Parameters []
constexpr explicit Enum()  : ::bs_hook::EnumTypeWrapper() {
}

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
struct CORDL_TYPE System__Enum__ParseFailureKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Enum__ParseFailureKind(int32_t value__) noexcept;


                    constexpr System__Enum__ParseFailureKind(System__Enum__ParseFailureKind const&) = default;
                    constexpr System__Enum__ParseFailureKind(System__Enum__ParseFailureKind&&) = default;
                    constexpr System__Enum__ParseFailureKind& operator=(System__Enum__ParseFailureKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Enum__ParseFailureKind& operator=(System__Enum__ParseFailureKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Enum__ParseFailureKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Enum__ParseFailureKind_Unwrapped : int32_t {
__None = 0,
__Argument = 1,
__ArgumentNull = 2,
__ArgumentWithParameter = 3,
__UnhandledException = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Enum__ParseFailureKind_Unwrapped () const noexcept {
return std::bit_cast<__System__Enum__ParseFailureKind_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::System__Enum__ParseFailureKind const None;

/// @brief Field Argument offset 0
static System::System__Enum__ParseFailureKind const Argument;

/// @brief Field ArgumentNull offset 0
static System::System__Enum__ParseFailureKind const ArgumentNull;

/// @brief Field ArgumentWithParameter offset 0
static System::System__Enum__ParseFailureKind const ArgumentWithParameter;

/// @brief Field UnhandledException offset 0
static System::System__Enum__ParseFailureKind const UnhandledException;

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
struct CORDL_TYPE System__Enum__EnumResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "parsedEnum", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_failure", ty: "System::System__Enum__ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageFormatArgument", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "m_innerException", ty: "System::Exception", modifiers: "", def_value: None }]
constexpr System__Enum__EnumResult(::bs_hook::Il2CppWrapperType parsedEnum, bool canThrow, System::System__Enum__ParseFailureKind m_failure, ::StringW m_failureMessageID, ::StringW m_failureParameter, ::bs_hook::Il2CppWrapperType m_failureMessageFormatArgument, System::Exception m_innerException) noexcept;


                    constexpr System__Enum__EnumResult(System__Enum__EnumResult const&) = default;
                    constexpr System__Enum__EnumResult(System__Enum__EnumResult&&) = default;
                    constexpr System__Enum__EnumResult& operator=(System__Enum__EnumResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Enum__EnumResult& operator=(System__Enum__EnumResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Enum__EnumResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::System__Enum__ParseFailureKind __declspec(property(get=__get_m_failure, put=__set_m_failure))  m_failure;

constexpr void __set_m_failure(System::System__Enum__ParseFailureKind value) ;

constexpr System::System__Enum__ParseFailureKind __get_m_failure() const;

 ::StringW __declspec(property(get=__get_m_failureMessageID, put=__set_m_failureMessageID))  m_failureMessageID;

constexpr void __set_m_failureMessageID(::StringW value) ;

constexpr ::StringW __get_m_failureMessageID() const;

 ::StringW __declspec(property(get=__get_m_failureParameter, put=__set_m_failureParameter))  m_failureParameter;

constexpr void __set_m_failureParameter(::StringW value) ;

constexpr ::StringW __get_m_failureParameter() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_failureMessageFormatArgument, put=__set_m_failureMessageFormatArgument))  m_failureMessageFormatArgument;

constexpr void __set_m_failureMessageFormatArgument(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_failureMessageFormatArgument() const;

 System::Exception __declspec(property(get=__get_m_innerException, put=__set_m_innerException))  m_innerException;

constexpr void __set_m_innerException(System::Exception value) ;

constexpr System::Exception __get_m_innerException() const;


// Methods

/// @brief Method Init addr 0x2474624 size 0x64 virtual false final false
 void Init(bool canMethodThrow) ;

/// @brief Method SetFailure addr 0x247547c size 0x10 virtual false final false
 void SetFailure(System::Exception unhandledException) ;

/// @brief Method SetFailure addr 0x2474e7c size 0x3c virtual false final false
 void SetFailure(System::System__Enum__ParseFailureKind failure, ::StringW failureParameter) ;

/// @brief Method SetFailure addr 0x2474eb8 size 0x40 virtual false final false
 void SetFailure(System::System__Enum__ParseFailureKind failure, ::StringW failureMessageID, ::bs_hook::Il2CppWrapperType failureMessageFormatArgument) ;

/// @brief Method GetEnumParseException addr 0x2474d00 size 0x17c virtual false final false
 System::Exception GetEnumParseException() ;

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
class CORDL_TYPE System__Enum__ValuesAndNames : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Enum__ValuesAndNames() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Enum__ValuesAndNames", modifiers: " const&", def_value: None }]
constexpr System__Enum__ValuesAndNames(System__Enum__ValuesAndNames const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Enum__ValuesAndNames", modifiers: "&&", def_value: None }]
constexpr System__Enum__ValuesAndNames(System__Enum__ValuesAndNames&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Enum__ValuesAndNames(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Enum__ValuesAndNames& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Enum__ValuesAndNames& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Enum__ValuesAndNames& operator=(System__Enum__ValuesAndNames&& o) noexcept = default;
  constexpr System__Enum__ValuesAndNames& operator=(System__Enum__ValuesAndNames const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint64_t> __declspec(property(get=__get_Values, put=__set_Values))  Values;

constexpr void __set_Values(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_Values() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_Names, put=__set_Names))  Names;

constexpr void __set_Names(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_Names() const;


// Methods

// Ctor Parameters [CppParam { name: "values", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "names", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit System__Enum__ValuesAndNames(::ArrayW<uint64_t> values, ::ArrayW<::StringW> names) ;

/// @brief Method .ctor addr 0x2473ac0 size 0x2c virtual false final false
 void _ctor(::ArrayW<uint64_t> values, ::ArrayW<::StringW> names) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__Enum__ParseFailureKind, "System", "Enum/ParseFailureKind");
NEED_NO_BOX(System::Enum);
DEFINE_IL2CPP_ARG_TYPE(System::Enum, "System", "Enum");
NEED_NO_BOX(System::System__Enum__ValuesAndNames);
DEFINE_IL2CPP_ARG_TYPE(System::System__Enum__ValuesAndNames, "System", "Enum/ValuesAndNames");
DEFINE_IL2CPP_ARG_TYPE(System::System__Enum__EnumResult, "System", "Enum/EnumResult");

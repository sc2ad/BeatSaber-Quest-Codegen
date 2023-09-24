#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Globalization {
struct System__Globalization__HebrewNumber__HebrewValue;
}
namespace System::Globalization {
struct System__Globalization__HebrewNumber__HebrewToken;
}
namespace System::Globalization {
struct HebrewNumberParsingContext;
}
namespace System::Globalization {
struct HebrewNumberParsingState;
}
namespace System::Globalization {
struct System__Globalization__HebrewNumber__HS;
}
// Forward declare root types
namespace System::Globalization {
struct System__Globalization__HebrewNumber__HS;
}
namespace System::Globalization {
struct System__Globalization__HebrewNumber__HebrewToken;
}
namespace System::Globalization {
class HebrewNumber;
}
namespace System::Globalization {
struct System__Globalization__HebrewNumber__HebrewValue;
}
// Type: ::HebrewToken
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3660))
// CS Name: System.Globalization.HebrewNumber::HebrewToken
struct CORDL_TYPE System__Globalization__HebrewNumber__HebrewToken : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr System__Globalization__HebrewNumber__HebrewToken(int16_t value__) noexcept;


                    constexpr System__Globalization__HebrewNumber__HebrewToken(System__Globalization__HebrewNumber__HebrewToken const&) = default;
                    constexpr System__Globalization__HebrewNumber__HebrewToken(System__Globalization__HebrewNumber__HebrewToken&&) = default;
                    constexpr System__Globalization__HebrewNumber__HebrewToken& operator=(System__Globalization__HebrewNumber__HebrewToken const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__HebrewNumber__HebrewToken& operator=(System__Globalization__HebrewNumber__HebrewToken&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__HebrewNumber__HebrewToken(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Globalization__HebrewNumber__HebrewToken_Unwrapped : int16_t {
__Invalid = -1,
__Digit400 = 0,
__Digit200_300 = 1,
__Digit100 = 2,
__Digit10 = 3,
__Digit1 = 4,
__Digit6_7 = 5,
__Digit7 = 6,
__Digit9 = 7,
__SingleQuote = 8,
__DoubleQuote = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Globalization__HebrewNumber__HebrewToken_Unwrapped () const noexcept {
return std::bit_cast<__System__Globalization__HebrewNumber__HebrewToken_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int16_t;


// Fields

 int16_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int16_t value) ;

constexpr int16_t __get_value__() const;

/// @brief Field Invalid offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const Invalid;

/// @brief Field Digit400 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const Digit400;

/// @brief Field Digit200_300 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const Digit200_300;

/// @brief Field Digit100 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const Digit100;

/// @brief Field Digit10 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const Digit10;

/// @brief Field Digit1 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const Digit1;

/// @brief Field Digit6_7 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const Digit6_7;

/// @brief Field Digit7 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const Digit7;

/// @brief Field Digit9 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const Digit9;

/// @brief Field SingleQuote offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const SingleQuote;

/// @brief Field DoubleQuote offset 0
static System::Globalization::System__Globalization__HebrewNumber__HebrewToken const DoubleQuote;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::HebrewValue
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3661))
// CS Name: System.Globalization.HebrewNumber::HebrewValue
struct CORDL_TYPE System__Globalization__HebrewNumber__HebrewValue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "token", ty: "System::Globalization::System__Globalization__HebrewNumber__HebrewToken", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int16_t", modifiers: "", def_value: None }]
constexpr System__Globalization__HebrewNumber__HebrewValue(System::Globalization::System__Globalization__HebrewNumber__HebrewToken token, int16_t value) noexcept;


                    constexpr System__Globalization__HebrewNumber__HebrewValue(System__Globalization__HebrewNumber__HebrewValue const&) = default;
                    constexpr System__Globalization__HebrewNumber__HebrewValue(System__Globalization__HebrewNumber__HebrewValue&&) = default;
                    constexpr System__Globalization__HebrewNumber__HebrewValue& operator=(System__Globalization__HebrewNumber__HebrewValue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__HebrewNumber__HebrewValue& operator=(System__Globalization__HebrewNumber__HebrewValue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__HebrewNumber__HebrewValue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Globalization::System__Globalization__HebrewNumber__HebrewToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(System::Globalization::System__Globalization__HebrewNumber__HebrewToken value) ;

constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken __get_token() const;

 int16_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int16_t value) ;

constexpr int16_t __get_value() const;


// Methods

/// @brief Method .ctor addr 0x23e570c size 0xc virtual false final false
 void _ctor(System::Globalization::System__Globalization__HebrewNumber__HebrewToken token, int16_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::HS
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3662))
// CS Name: System.Globalization.HebrewNumber::HS
struct CORDL_TYPE System__Globalization__HebrewNumber__HS : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
constexpr System__Globalization__HebrewNumber__HS(int8_t value__) noexcept;


                    constexpr System__Globalization__HebrewNumber__HS(System__Globalization__HebrewNumber__HS const&) = default;
                    constexpr System__Globalization__HebrewNumber__HS(System__Globalization__HebrewNumber__HS&&) = default;
                    constexpr System__Globalization__HebrewNumber__HS& operator=(System__Globalization__HebrewNumber__HS const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__HebrewNumber__HS& operator=(System__Globalization__HebrewNumber__HS&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__HebrewNumber__HS(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Globalization__HebrewNumber__HS_Unwrapped : int8_t {
___err = -1,
__Start = 0,
__S400 = 1,
__S400_400 = 2,
__S400_X00 = 3,
__S400_X0 = 4,
__X00_DQ = 5,
__S400_X00_X0 = 6,
__X0_DQ = 7,
__X = 8,
__X0 = 9,
__X00 = 10,
__S400_DQ = 11,
__S400_400_DQ = 12,
__S400_400_100 = 13,
__S9 = 14,
__X00_S9 = 15,
__S9_DQ = 16,
__END = 100,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Globalization__HebrewNumber__HS_Unwrapped () const noexcept {
return std::bit_cast<__System__Globalization__HebrewNumber__HS_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int8_t;


// Fields

 int8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int8_t value) ;

constexpr int8_t __get_value__() const;

/// @brief Field _err offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const _err;

/// @brief Field Start offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const Start;

/// @brief Field S400 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S400;

/// @brief Field S400_400 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S400_400;

/// @brief Field S400_X00 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S400_X00;

/// @brief Field S400_X0 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S400_X0;

/// @brief Field X00_DQ offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const X00_DQ;

/// @brief Field S400_X00_X0 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S400_X00_X0;

/// @brief Field X0_DQ offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const X0_DQ;

/// @brief Field X offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const X;

/// @brief Field X0 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const X0;

/// @brief Field X00 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const X00;

/// @brief Field S400_DQ offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S400_DQ;

/// @brief Field S400_400_DQ offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S400_400_DQ;

/// @brief Field S400_400_100 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S400_400_100;

/// @brief Field S9 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S9;

/// @brief Field X00_S9 offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const X00_S9;

/// @brief Field S9_DQ offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const S9_DQ;

/// @brief Field END offset 0
static System::Globalization::System__Globalization__HebrewNumber__HS const END;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: System.Globalization::HebrewNumber
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3663))
// CS Name: System.Globalization.HebrewNumber
class CORDL_TYPE HebrewNumber : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HS = System::Globalization::System__Globalization__HebrewNumber__HS;

using HebrewValue = System::Globalization::System__Globalization__HebrewNumber__HebrewValue;

using HebrewToken = System::Globalization::System__Globalization__HebrewNumber__HebrewToken;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HebrewNumber() = default;

// Ctor Parameters [CppParam { name: "", ty: "HebrewNumber", modifiers: " const&", def_value: None }]
constexpr HebrewNumber(HebrewNumber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HebrewNumber", modifiers: "&&", def_value: None }]
constexpr HebrewNumber(HebrewNumber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HebrewNumber(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HebrewNumber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HebrewNumber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HebrewNumber& operator=(HebrewNumber&& o) noexcept = default;
  constexpr HebrewNumber& operator=(HebrewNumber const& o) noexcept = default;
                


// Fields

static ::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HebrewValue> __declspec(property(get=__get_s_hebrewValues, put=__set_s_hebrewValues))  s_hebrewValues;

static void __set_s_hebrewValues(::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HebrewValue> value) ;

static ::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HebrewValue> __get_s_hebrewValues() ;

static char16_t __declspec(property(get=__get_s_maxHebrewNumberCh, put=__set_s_maxHebrewNumberCh))  s_maxHebrewNumberCh;

static void __set_s_maxHebrewNumberCh(char16_t value) ;

static char16_t __get_s_maxHebrewNumberCh() ;

static ::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HS> __declspec(property(get=__get_s_numberPasingState, put=__set_s_numberPasingState))  s_numberPasingState;

static void __set_s_numberPasingState(::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HS> value) ;

static ::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HS> __get_s_numberPasingState() ;


// Methods

/// @brief Method ToString addr 0x23e5204 size 0x258 virtual false final false
static ::StringW ToString(int32_t Number) ;

/// @brief Method ParseByChar addr 0x23e3420 size 0x190 virtual false final false
static System::Globalization::HebrewNumberParsingState ParseByChar(char16_t ch, ByRef<System::Globalization::HebrewNumberParsingContext> context) ;

/// @brief Method IsDigit addr 0x23e3344 size 0xd0 virtual false final false
static bool IsDigit(char16_t ch) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__HebrewNumber__HS, "System.Globalization", "HebrewNumber/HS");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__HebrewNumber__HebrewToken, "System.Globalization", "HebrewNumber/HebrewToken");
NEED_NO_BOX(System::Globalization::HebrewNumber);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumber, "System.Globalization", "HebrewNumber");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__HebrewNumber__HebrewValue, "System.Globalization", "HebrewNumber/HebrewValue");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
struct ParsingInfo;
}
namespace System {
class Exception;
}
namespace System::Globalization {
class Calendar;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTimeRawInfo;
}
namespace System {
struct __DTString;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System {
struct DateTimeToken;
}
namespace System {
struct DateTimeResult;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace System {
struct ____System__DateTimeParse__DS;
}
namespace System {
struct ____System__DateTimeParse__DTT;
}
namespace System {
struct ____System__DateTimeParse__TM;
}
namespace System {
class DateTimeParse;
}
namespace System {
class ____System__DateTimeParse__MatchNumberDelegate;
}
namespace System {
class ____System__DateTimeParse____c;
}
// Type: ::MatchNumberDelegate
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2386))
// CS Name: System.DateTimeParse::MatchNumberDelegate
class CORDL_TYPE ____System__DateTimeParse__MatchNumberDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__DateTimeParse__MatchNumberDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__DateTimeParse__MatchNumberDelegate", modifiers: " const&", def_value: None }]
constexpr ____System__DateTimeParse__MatchNumberDelegate(____System__DateTimeParse__MatchNumberDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__DateTimeParse__MatchNumberDelegate", modifiers: "&&", def_value: None }]
constexpr ____System__DateTimeParse__MatchNumberDelegate(____System__DateTimeParse__MatchNumberDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__DateTimeParse__MatchNumberDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__DateTimeParse__MatchNumberDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__DateTimeParse__MatchNumberDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__DateTimeParse__MatchNumberDelegate& operator=(____System__DateTimeParse__MatchNumberDelegate&& o) noexcept = default;
  constexpr ____System__DateTimeParse__MatchNumberDelegate& operator=(____System__DateTimeParse__MatchNumberDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__DateTimeParse__MatchNumberDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2436e4c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2436f24 size 0x14 virtual true final false
 bool Invoke(ByRef<::System::__DTString> str, int32_t digitLen, ByRef<int32_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: ::DTT
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2387))
// CS Name: System.DateTimeParse::DTT
struct CORDL_TYPE ____System__DateTimeParse__DTT : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__DateTimeParse__DTT(int32_t value__) noexcept;


                    constexpr ____System__DateTimeParse__DTT(____System__DateTimeParse__DTT const&) = default;
                    constexpr ____System__DateTimeParse__DTT(____System__DateTimeParse__DTT&&) = default;
                    constexpr ____System__DateTimeParse__DTT& operator=(____System__DateTimeParse__DTT const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__DateTimeParse__DTT& operator=(____System__DateTimeParse__DTT&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__DateTimeParse__DTT(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__DateTimeParse__DTT_Unwrapped : int32_t {
__End = 0,
__NumEnd = 1,
__NumAmpm = 2,
__NumSpace = 3,
__NumDatesep = 4,
__NumTimesep = 5,
__MonthEnd = 6,
__MonthSpace = 7,
__MonthDatesep = 8,
__NumDatesuff = 9,
__NumTimesuff = 10,
__DayOfWeek = 11,
__YearSpace = 12,
__YearDateSep = 13,
__YearEnd = 14,
__TimeZone = 15,
__Era = 16,
__NumUTCTimeMark = 17,
__Unk = 18,
__NumLocalTimeMark = 19,
__Max = 20,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__DateTimeParse__DTT_Unwrapped () const noexcept {
return std::bit_cast<______System__DateTimeParse__DTT_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field End offset 0
static ::System::____System__DateTimeParse__DTT const End;

/// @brief Field NumEnd offset 0
static ::System::____System__DateTimeParse__DTT const NumEnd;

/// @brief Field NumAmpm offset 0
static ::System::____System__DateTimeParse__DTT const NumAmpm;

/// @brief Field NumSpace offset 0
static ::System::____System__DateTimeParse__DTT const NumSpace;

/// @brief Field NumDatesep offset 0
static ::System::____System__DateTimeParse__DTT const NumDatesep;

/// @brief Field NumTimesep offset 0
static ::System::____System__DateTimeParse__DTT const NumTimesep;

/// @brief Field MonthEnd offset 0
static ::System::____System__DateTimeParse__DTT const MonthEnd;

/// @brief Field MonthSpace offset 0
static ::System::____System__DateTimeParse__DTT const MonthSpace;

/// @brief Field MonthDatesep offset 0
static ::System::____System__DateTimeParse__DTT const MonthDatesep;

/// @brief Field NumDatesuff offset 0
static ::System::____System__DateTimeParse__DTT const NumDatesuff;

/// @brief Field NumTimesuff offset 0
static ::System::____System__DateTimeParse__DTT const NumTimesuff;

/// @brief Field DayOfWeek offset 0
static ::System::____System__DateTimeParse__DTT const DayOfWeek;

/// @brief Field YearSpace offset 0
static ::System::____System__DateTimeParse__DTT const YearSpace;

/// @brief Field YearDateSep offset 0
static ::System::____System__DateTimeParse__DTT const YearDateSep;

/// @brief Field YearEnd offset 0
static ::System::____System__DateTimeParse__DTT const YearEnd;

/// @brief Field TimeZone offset 0
static ::System::____System__DateTimeParse__DTT const TimeZone;

/// @brief Field Era offset 0
static ::System::____System__DateTimeParse__DTT const Era;

/// @brief Field NumUTCTimeMark offset 0
static ::System::____System__DateTimeParse__DTT const NumUTCTimeMark;

/// @brief Field Unk offset 0
static ::System::____System__DateTimeParse__DTT const Unk;

/// @brief Field NumLocalTimeMark offset 0
static ::System::____System__DateTimeParse__DTT const NumLocalTimeMark;

/// @brief Field Max offset 0
static ::System::____System__DateTimeParse__DTT const Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::TM
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2388))
// CS Name: System.DateTimeParse::TM
struct CORDL_TYPE ____System__DateTimeParse__TM : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__DateTimeParse__TM(int32_t value__) noexcept;


                    constexpr ____System__DateTimeParse__TM(____System__DateTimeParse__TM const&) = default;
                    constexpr ____System__DateTimeParse__TM(____System__DateTimeParse__TM&&) = default;
                    constexpr ____System__DateTimeParse__TM& operator=(____System__DateTimeParse__TM const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__DateTimeParse__TM& operator=(____System__DateTimeParse__TM&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__DateTimeParse__TM(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__DateTimeParse__TM_Unwrapped : int32_t {
__NotSet = -1,
__AM = 0,
__PM = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__DateTimeParse__TM_Unwrapped () const noexcept {
return std::bit_cast<______System__DateTimeParse__TM_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NotSet offset 0
static ::System::____System__DateTimeParse__TM const NotSet;

/// @brief Field AM offset 0
static ::System::____System__DateTimeParse__TM const AM;

/// @brief Field PM offset 0
static ::System::____System__DateTimeParse__TM const PM;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::DS
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2389))
// CS Name: System.DateTimeParse::DS
struct CORDL_TYPE ____System__DateTimeParse__DS : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__DateTimeParse__DS(int32_t value__) noexcept;


                    constexpr ____System__DateTimeParse__DS(____System__DateTimeParse__DS const&) = default;
                    constexpr ____System__DateTimeParse__DS(____System__DateTimeParse__DS&&) = default;
                    constexpr ____System__DateTimeParse__DS& operator=(____System__DateTimeParse__DS const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__DateTimeParse__DS& operator=(____System__DateTimeParse__DS&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__DateTimeParse__DS(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__DateTimeParse__DS_Unwrapped : int32_t {
__BEGIN = 0,
__N = 1,
__NN = 2,
__D_Nd = 3,
__D_NN = 4,
__D_NNd = 5,
__D_M = 6,
__D_MN = 7,
__D_NM = 8,
__D_MNd = 9,
__D_NDS = 10,
__D_Y = 11,
__D_YN = 12,
__D_YNd = 13,
__D_YM = 14,
__D_YMd = 15,
__D_S = 16,
__T_S = 17,
__T_Nt = 18,
__T_NNt = 19,
__ERROR = 20,
__DX_NN = 21,
__DX_NNN = 22,
__DX_MN = 23,
__DX_NM = 24,
__DX_MNN = 25,
__DX_DS = 26,
__DX_DSN = 27,
__DX_NDS = 28,
__DX_NNDS = 29,
__DX_YNN = 30,
__DX_YMN = 31,
__DX_YN = 32,
__DX_YM = 33,
__TX_N = 34,
__TX_NN = 35,
__TX_NNN = 36,
__TX_TS = 37,
__DX_NNY = 38,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__DateTimeParse__DS_Unwrapped () const noexcept {
return std::bit_cast<______System__DateTimeParse__DS_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BEGIN offset 0
static ::System::____System__DateTimeParse__DS const BEGIN;

/// @brief Field N offset 0
static ::System::____System__DateTimeParse__DS const N;

/// @brief Field NN offset 0
static ::System::____System__DateTimeParse__DS const NN;

/// @brief Field D_Nd offset 0
static ::System::____System__DateTimeParse__DS const D_Nd;

/// @brief Field D_NN offset 0
static ::System::____System__DateTimeParse__DS const D_NN;

/// @brief Field D_NNd offset 0
static ::System::____System__DateTimeParse__DS const D_NNd;

/// @brief Field D_M offset 0
static ::System::____System__DateTimeParse__DS const D_M;

/// @brief Field D_MN offset 0
static ::System::____System__DateTimeParse__DS const D_MN;

/// @brief Field D_NM offset 0
static ::System::____System__DateTimeParse__DS const D_NM;

/// @brief Field D_MNd offset 0
static ::System::____System__DateTimeParse__DS const D_MNd;

/// @brief Field D_NDS offset 0
static ::System::____System__DateTimeParse__DS const D_NDS;

/// @brief Field D_Y offset 0
static ::System::____System__DateTimeParse__DS const D_Y;

/// @brief Field D_YN offset 0
static ::System::____System__DateTimeParse__DS const D_YN;

/// @brief Field D_YNd offset 0
static ::System::____System__DateTimeParse__DS const D_YNd;

/// @brief Field D_YM offset 0
static ::System::____System__DateTimeParse__DS const D_YM;

/// @brief Field D_YMd offset 0
static ::System::____System__DateTimeParse__DS const D_YMd;

/// @brief Field D_S offset 0
static ::System::____System__DateTimeParse__DS const D_S;

/// @brief Field T_S offset 0
static ::System::____System__DateTimeParse__DS const T_S;

/// @brief Field T_Nt offset 0
static ::System::____System__DateTimeParse__DS const T_Nt;

/// @brief Field T_NNt offset 0
static ::System::____System__DateTimeParse__DS const T_NNt;

/// @brief Field ERROR offset 0
static ::System::____System__DateTimeParse__DS const ERROR;

/// @brief Field DX_NN offset 0
static ::System::____System__DateTimeParse__DS const DX_NN;

/// @brief Field DX_NNN offset 0
static ::System::____System__DateTimeParse__DS const DX_NNN;

/// @brief Field DX_MN offset 0
static ::System::____System__DateTimeParse__DS const DX_MN;

/// @brief Field DX_NM offset 0
static ::System::____System__DateTimeParse__DS const DX_NM;

/// @brief Field DX_MNN offset 0
static ::System::____System__DateTimeParse__DS const DX_MNN;

/// @brief Field DX_DS offset 0
static ::System::____System__DateTimeParse__DS const DX_DS;

/// @brief Field DX_DSN offset 0
static ::System::____System__DateTimeParse__DS const DX_DSN;

/// @brief Field DX_NDS offset 0
static ::System::____System__DateTimeParse__DS const DX_NDS;

/// @brief Field DX_NNDS offset 0
static ::System::____System__DateTimeParse__DS const DX_NNDS;

/// @brief Field DX_YNN offset 0
static ::System::____System__DateTimeParse__DS const DX_YNN;

/// @brief Field DX_YMN offset 0
static ::System::____System__DateTimeParse__DS const DX_YMN;

/// @brief Field DX_YN offset 0
static ::System::____System__DateTimeParse__DS const DX_YN;

/// @brief Field DX_YM offset 0
static ::System::____System__DateTimeParse__DS const DX_YM;

/// @brief Field TX_N offset 0
static ::System::____System__DateTimeParse__DS const TX_N;

/// @brief Field TX_NN offset 0
static ::System::____System__DateTimeParse__DS const TX_NN;

/// @brief Field TX_NNN offset 0
static ::System::____System__DateTimeParse__DS const TX_NNN;

/// @brief Field TX_TS offset 0
static ::System::____System__DateTimeParse__DS const TX_TS;

/// @brief Field DX_NNY offset 0
static ::System::____System__DateTimeParse__DS const DX_NNY;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::<>c
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2390))
// CS Name: System.DateTimeParse::<>c
class CORDL_TYPE ____System__DateTimeParse____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__DateTimeParse____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__DateTimeParse____c", modifiers: " const&", def_value: None }]
constexpr ____System__DateTimeParse____c(____System__DateTimeParse____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__DateTimeParse____c", modifiers: "&&", def_value: None }]
constexpr ____System__DateTimeParse____c(____System__DateTimeParse____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__DateTimeParse____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__DateTimeParse____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__DateTimeParse____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__DateTimeParse____c& operator=(____System__DateTimeParse____c&& o) noexcept = default;
  constexpr ____System__DateTimeParse____c& operator=(____System__DateTimeParse____c const& o) noexcept = default;
                


// Fields

static ::System::____System__DateTimeParse____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::____System__DateTimeParse____c value) ;

static ::System::____System__DateTimeParse____c __get___9() ;

static ::System::Func_1<::System::____System__DateTimeParse__MatchNumberDelegate> __declspec(property(get=__get___9__98_0, put=__set___9__98_0))  __9__98_0;

static void __set___9__98_0(::System::Func_1<::System::____System__DateTimeParse__MatchNumberDelegate> value) ;

static ::System::Func_1<::System::____System__DateTimeParse__MatchNumberDelegate> __get___9__98_0() ;


// Methods

// Ctor Parameters []
explicit ____System__DateTimeParse____c() ;

/// @brief Method .ctor addr 0x2436f9c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DoStrictParse>b__98_0 addr 0x2436fa4 size 0x74 virtual false final false
 ::System::____System__DateTimeParse__MatchNumberDelegate _DoStrictParse_b__98_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::DateTimeParse
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2391))
// CS Name: System.DateTimeParse
class CORDL_TYPE DateTimeParse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::System::____System__DateTimeParse____c;

using DS = ::System::____System__DateTimeParse__DS;

using TM = ::System::____System__DateTimeParse__TM;

using DTT = ::System::____System__DateTimeParse__DTT;

using MatchNumberDelegate = ::System::____System__DateTimeParse__MatchNumberDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DateTimeParse() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeParse", modifiers: " const&", def_value: None }]
constexpr DateTimeParse(DateTimeParse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeParse", modifiers: "&&", def_value: None }]
constexpr DateTimeParse(DateTimeParse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeParse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DateTimeParse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeParse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeParse& operator=(DateTimeParse&& o) noexcept = default;
  constexpr DateTimeParse& operator=(DateTimeParse const& o) noexcept = default;
                


// Fields

static ::System::____System__DateTimeParse__MatchNumberDelegate __declspec(property(get=__get_m_hebrewNumberParser, put=__set_m_hebrewNumberParser))  m_hebrewNumberParser;

static void __set_m_hebrewNumberParser(::System::____System__DateTimeParse__MatchNumberDelegate value) ;

static ::System::____System__DateTimeParse__MatchNumberDelegate __get_m_hebrewNumberParser() ;

static ::ArrayW<::ArrayW<::System::____System__DateTimeParse__DS>> __declspec(property(get=__get_dateParsingStates, put=__set_dateParsingStates))  dateParsingStates;

static void __set_dateParsingStates(::ArrayW<::ArrayW<::System::____System__DateTimeParse__DS>> value) ;

static ::ArrayW<::ArrayW<::System::____System__DateTimeParse__DS>> __get_dateParsingStates() ;


// Methods

/// @brief Method ParseExact addr 0x2423060 size 0x108 virtual false final false
static ::System::DateTime ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles style) ;

/// @brief Method ParseExact addr 0x2426344 size 0x154 virtual false final false
static ::System::DateTime ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles style, ByRef<::System::TimeSpan> offset) ;

/// @brief Method TryParseExact addr 0x2423c34 size 0x130 virtual false final false
static bool TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result) ;

/// @brief Method TryParseExact addr 0x2427160 size 0x184 virtual false final false
static bool TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result, ByRef<::System::TimeSpan> offset) ;

/// @brief Method TryParseExact addr 0x242cb94 size 0x104 virtual false final false
static bool TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTimeResult> result) ;

/// @brief Method TryParseExactMultiple addr 0x242746c size 0x174 virtual false final false
static bool TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW> formats, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result, ByRef<::System::TimeSpan> offset) ;

/// @brief Method TryParseExactMultiple addr 0x242d604 size 0x268 virtual false final false
static bool TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW> formats, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTimeResult> result) ;

/// @brief Method MatchWord addr 0x242d86c size 0x174 virtual false final false
static bool MatchWord(ByRef<::System::__DTString> str, ::StringW target) ;

/// @brief Method GetTimeZoneName addr 0x242d9e0 size 0xb0 virtual false final false
static bool GetTimeZoneName(ByRef<::System::__DTString> str) ;

/// @brief Method IsDigit addr 0x242da90 size 0x14 virtual false final false
static bool IsDigit(char16_t ch) ;

/// @brief Method ParseFraction addr 0x242daa4 size 0xcc virtual false final false
static bool ParseFraction(ByRef<::System::__DTString> str, ByRef<double_t> result) ;

/// @brief Method ParseTimeZone addr 0x242db70 size 0x228 virtual false final false
static bool ParseTimeZone(ByRef<::System::__DTString> str, ByRef<::System::TimeSpan> result) ;

/// @brief Method HandleTimeZone addr 0x242dd98 size 0x164 virtual false final false
static bool HandleTimeZone(ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result) ;

/// @brief Method Lex addr 0x242defc size 0xc84 virtual false final false
static bool Lex(::System::____System__DateTimeParse__DS dps, ByRef<::System::__DTString> str, ByRef<::System::DateTimeToken> dtok, ByRef<::System::DateTimeRawInfo> raw, ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeFormatInfo> dtfi, ::System::Globalization::DateTimeStyles styles) ;

/// @brief Method GetJapaneseCalendarDefaultInstance addr 0x242ee84 size 0xf0 virtual false final false
static ::System::Globalization::Calendar GetJapaneseCalendarDefaultInstance() ;

/// @brief Method GetTaiwanCalendarDefaultInstance addr 0x242ef74 size 0xf0 virtual false final false
static ::System::Globalization::Calendar GetTaiwanCalendarDefaultInstance() ;

/// @brief Method VerifyValidPunctuation addr 0x242f064 size 0x198 virtual false final false
static bool VerifyValidPunctuation(ByRef<::System::__DTString> str) ;

/// @brief Method GetYearMonthDayOrder addr 0x242f1fc size 0x2a4 virtual false final false
static bool GetYearMonthDayOrder(::StringW datePattern, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> order) ;

/// @brief Method GetYearMonthOrder addr 0x242f4a0 size 0x1b8 virtual false final false
static bool GetYearMonthOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> order) ;

/// @brief Method GetMonthDayOrder addr 0x242f658 size 0x1f8 virtual false final false
static bool GetMonthDayOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> order) ;

/// @brief Method TryAdjustYear addr 0x242f850 size 0xc4 virtual false final false
static bool TryAdjustYear(ByRef<::System::DateTimeResult> result, int32_t year, ByRef<int32_t> adjustedYear) ;

/// @brief Method SetDateYMD addr 0x242f914 size 0x74 virtual false final false
static bool SetDateYMD(ByRef<::System::DateTimeResult> result, int32_t year, int32_t month, int32_t day) ;

/// @brief Method SetDateMDY addr 0x242f988 size 0x7c virtual false final false
static bool SetDateMDY(ByRef<::System::DateTimeResult> result, int32_t month, int32_t day, int32_t year) ;

/// @brief Method SetDateDMY addr 0x242fa04 size 0x7c virtual false final false
static bool SetDateDMY(ByRef<::System::DateTimeResult> result, int32_t day, int32_t month, int32_t year) ;

/// @brief Method SetDateYDM addr 0x242fa80 size 0x7c virtual false final false
static bool SetDateYDM(ByRef<::System::DateTimeResult> result, int32_t year, int32_t day, int32_t month) ;

/// @brief Method GetDefaultYear addr 0x242fafc size 0x9c virtual false final false
static void GetDefaultYear(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles) ;

/// @brief Method GetDayOfNN addr 0x242fc60 size 0x174 virtual false final false
static bool GetDayOfNN(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetDayOfNNN addr 0x242fdd4 size 0x2b4 virtual false final false
static bool GetDayOfNNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetDayOfMN addr 0x2430088 size 0x224 virtual false final false
static bool GetDayOfMN(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetHebrewDayOfNM addr 0x24302ac size 0x15c virtual false final false
static bool GetHebrewDayOfNM(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetDayOfNM addr 0x2430408 size 0x224 virtual false final false
static bool GetDayOfNM(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetDayOfMNN addr 0x243062c size 0x2e4 virtual false final false
static bool GetDayOfMNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetDayOfYNN addr 0x2430910 size 0x138 virtual false final false
static bool GetDayOfYNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetDayOfNNY addr 0x2430a48 size 0x174 virtual false final false
static bool GetDayOfNNY(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetDayOfYMN addr 0x2430bbc size 0xbc virtual false final false
static bool GetDayOfYMN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) ;

/// @brief Method GetDayOfYN addr 0x2430c78 size 0xbc virtual false final false
static bool GetDayOfYN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) ;

/// @brief Method GetDayOfYM addr 0x2430d34 size 0x9c virtual false final false
static bool GetDayOfYM(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) ;

/// @brief Method AdjustTimeMark addr 0x2430dd0 size 0xc0 virtual false final false
static void AdjustTimeMark(::System::Globalization::DateTimeFormatInfo dtfi, ByRef<::System::DateTimeRawInfo> raw) ;

/// @brief Method AdjustHour addr 0x2430e90 size 0x48 virtual false final false
static bool AdjustHour(ByRef<int32_t> hour, ::System::____System__DateTimeParse__TM timeMark) ;

/// @brief Method GetTimeOfN addr 0x2430ed8 size 0x5c virtual false final false
static bool GetTimeOfN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) ;

/// @brief Method GetTimeOfNN addr 0x2430f34 size 0x74 virtual false final false
static bool GetTimeOfNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) ;

/// @brief Method GetTimeOfNNN addr 0x2430fa8 size 0x88 virtual false final false
static bool GetTimeOfNNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) ;

/// @brief Method GetDateOfDSN addr 0x2431030 size 0x54 virtual false final false
static bool GetDateOfDSN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) ;

/// @brief Method GetDateOfNDS addr 0x2431084 size 0xb4 virtual false final false
static bool GetDateOfNDS(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) ;

/// @brief Method GetDateOfNNDS addr 0x2431138 size 0x224 virtual false final false
static bool GetDateOfNNDS(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method ProcessDateTimeSuffix addr 0x243135c size 0xf8 virtual false final false
static bool ProcessDateTimeSuffix(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ByRef<::System::DateTimeToken> dtok) ;

/// @brief Method ProcessHebrewTerminalState addr 0x2431454 size 0x340 virtual false final false
static bool ProcessHebrewTerminalState(::System::____System__DateTimeParse__DS dps, ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method ProcessTerminalState addr 0x242eb80 size 0x304 virtual false final false
static bool ProcessTerminalState(::System::____System__DateTimeParse__DS dps, ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method Parse addr 0x2422cdc size 0xf0 virtual false final false
static ::System::DateTime Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles styles) ;

/// @brief Method Parse addr 0x2426064 size 0x108 virtual false final false
static ::System::DateTime Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles styles, ByRef<::System::TimeSpan> offset) ;

/// @brief Method TryParse addr 0x242398c size 0x118 virtual false final false
static bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles styles, ByRef<::System::DateTime> result) ;

/// @brief Method TryParse addr 0x2426e2c size 0x16c virtual false final false
static bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles styles, ByRef<::System::DateTime> result, ByRef<::System::TimeSpan> offset) ;

/// @brief Method TryParse addr 0x2431794 size 0x738 virtual false final false
static bool TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo dtfi, ::System::Globalization::DateTimeStyles styles, ByRef<::System::DateTimeResult> result) ;

/// @brief Method DetermineTimeZoneAdjustments addr 0x2432650 size 0x254 virtual false final false
static bool DetermineTimeZoneAdjustments(ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles, bool bTimeOnly) ;

/// @brief Method DateTimeOffsetTimeZonePostProcessing addr 0x24328a4 size 0x1fc virtual false final false
static bool DateTimeOffsetTimeZonePostProcessing(ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles) ;

/// @brief Method AdjustTimeZoneToUniversal addr 0x2432aa0 size 0xbc virtual false final false
static bool AdjustTimeZoneToUniversal(ByRef<::System::DateTimeResult> result) ;

/// @brief Method AdjustTimeZoneToLocal addr 0x2432b5c size 0x210 virtual false final false
static bool AdjustTimeZoneToLocal(ByRef<::System::DateTimeResult> result, bool bTimeOnly) ;

/// @brief Method ParseISO8601 addr 0x2431ecc size 0x508 virtual false final false
static bool ParseISO8601(ByRef<::System::DateTimeRawInfo> raw, ByRef<::System::__DTString> str, ::System::Globalization::DateTimeStyles styles, ByRef<::System::DateTimeResult> result) ;

/// @brief Method MatchHebrewDigits addr 0x2432df4 size 0xd4 virtual false final false
static bool MatchHebrewDigits(ByRef<::System::__DTString> str, int32_t digitLen, ByRef<int32_t> number) ;

/// @brief Method ParseDigits addr 0x2432d6c size 0x88 virtual false final false
static bool ParseDigits(ByRef<::System::__DTString> str, int32_t digitLen, ByRef<int32_t> result) ;

/// @brief Method ParseDigits addr 0x2432ec8 size 0x140 virtual false final false
static bool ParseDigits(ByRef<::System::__DTString> str, int32_t minDigitLen, int32_t maxDigitLen, ByRef<int32_t> result) ;

/// @brief Method ParseFractionExact addr 0x2433008 size 0x1cc virtual false final false
static bool ParseFractionExact(ByRef<::System::__DTString> str, int32_t maxDigitLen, ByRef<double_t> result) ;

/// @brief Method ParseSign addr 0x24331d4 size 0x64 virtual false final false
static bool ParseSign(ByRef<::System::__DTString> str, ByRef<bool> result) ;

/// @brief Method ParseTimeZoneOffset addr 0x2433238 size 0x180 virtual false final false
static bool ParseTimeZoneOffset(ByRef<::System::__DTString> str, int32_t len, ByRef<::System::TimeSpan> result) ;

/// @brief Method MatchAbbreviatedMonthName addr 0x24333b8 size 0x224 virtual false final false
static bool MatchAbbreviatedMonthName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result) ;

/// @brief Method MatchMonthName addr 0x24335dc size 0x264 virtual false final false
static bool MatchMonthName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result) ;

/// @brief Method MatchAbbreviatedDayName addr 0x2433840 size 0x1bc virtual false final false
static bool MatchAbbreviatedDayName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result) ;

/// @brief Method MatchDayName addr 0x24339fc size 0x1bc virtual false final false
static bool MatchDayName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result) ;

/// @brief Method MatchEraName addr 0x2433bb8 size 0x280 virtual false final false
static bool MatchEraName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result) ;

/// @brief Method MatchTimeMark addr 0x2433e38 size 0x280 virtual false final false
static bool MatchTimeMark(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<::System::____System__DateTimeParse__TM> result) ;

/// @brief Method MatchAbbreviatedTimeMark addr 0x24340b8 size 0xec virtual false final false
static bool MatchAbbreviatedTimeMark(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<::System::____System__DateTimeParse__TM> result) ;

/// @brief Method CheckNewValue addr 0x24341a4 size 0xbc virtual false final false
static bool CheckNewValue(ByRef<int32_t> currentValue, int32_t newValue, char16_t patternChar, ByRef<::System::DateTimeResult> result) ;

/// @brief Method GetDateTimeNow addr 0x242fb98 size 0xc8 virtual false final false
static ::System::DateTime GetDateTimeNow(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles) ;

/// @brief Method CheckDefaultDateTime addr 0x24323d4 size 0x27c virtual false final false
static bool CheckDefaultDateTime(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::Calendar> cal, ::System::Globalization::DateTimeStyles styles) ;

/// @brief Method ExpandPredefinedFormat addr 0x2434260 size 0x328 virtual false final false
static ::StringW ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t> format, ByRef<::System::Globalization::DateTimeFormatInfo> dtfi, ByRef<::System::ParsingInfo> parseInfo, ByRef<::System::DateTimeResult> result) ;

/// @brief Method ParseJapaneseEraStart addr 0x2434588 size 0xe4 virtual false final false
static bool ParseJapaneseEraStart(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method ParseByFormat addr 0x243466c size 0xf78 virtual false final false
static bool ParseByFormat(ByRef<::System::__DTString> str, ByRef<::System::__DTString> format, ByRef<::System::ParsingInfo> parseInfo, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<::System::DateTimeResult> result) ;

/// @brief Method TryParseQuoteString addr 0x24355e4 size 0xe8 virtual false final false
static bool TryParseQuoteString(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, ::System::Text::StringBuilder result, ByRef<int32_t> returnValue) ;

/// @brief Method DoStrictParse addr 0x242ce58 size 0x7ac virtual false final false
static bool DoStrictParse(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> formatParam, ::System::Globalization::DateTimeStyles styles, ::System::Globalization::DateTimeFormatInfo dtfi, ByRef<::System::DateTimeResult> result) ;

/// @brief Method GetDateTimeParseException addr 0x242cc98 size 0x1c0 virtual false final false
static ::System::Exception GetDateTimeParseException(ByRef<::System::DateTimeResult> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::____System__DateTimeParse__DS, "System", "DateTimeParse/DS");
DEFINE_IL2CPP_ARG_TYPE(::System::____System__DateTimeParse__DTT, "System", "DateTimeParse/DTT");
DEFINE_IL2CPP_ARG_TYPE(::System::____System__DateTimeParse__TM, "System", "DateTimeParse/TM");
NEED_NO_BOX(::System::DateTimeParse);
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeParse, "System", "DateTimeParse");
NEED_NO_BOX(::System::____System__DateTimeParse__MatchNumberDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::____System__DateTimeParse__MatchNumberDelegate, "System", "DateTimeParse/MatchNumberDelegate");
NEED_NO_BOX(::System::____System__DateTimeParse____c);
DEFINE_IL2CPP_ARG_TYPE(::System::____System__DateTimeParse____c, "System", "DateTimeParse/<>c");

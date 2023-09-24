#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Globalization {
class Calendar;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Globalization {
struct GregorianCalendarTypes;
}
namespace System {
struct DayOfWeek;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Globalization {
class GregorianCalendar;
}
// Type: System.Globalization::GregorianCalendar
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3681))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3683))
// CS Name: System.Globalization.GregorianCalendar
class CORDL_TYPE GregorianCalendar : public System::Globalization::Calendar {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GregorianCalendar() = default;

// Ctor Parameters [CppParam { name: "", ty: "GregorianCalendar", modifiers: " const&", def_value: None }]
constexpr GregorianCalendar(GregorianCalendar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GregorianCalendar", modifiers: "&&", def_value: None }]
constexpr GregorianCalendar(GregorianCalendar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GregorianCalendar(void* ptr) noexcept : System::Globalization::Calendar(ptr) {
}


  constexpr GregorianCalendar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GregorianCalendar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GregorianCalendar& operator=(GregorianCalendar&& o) noexcept = default;
  constexpr GregorianCalendar& operator=(GregorianCalendar const& o) noexcept = default;
                


// Fields

 System::Globalization::GregorianCalendarTypes __declspec(property(get=__get_m_type, put=__set_m_type))  m_type;

constexpr void __set_m_type(System::Globalization::GregorianCalendarTypes value) ;

constexpr System::Globalization::GregorianCalendarTypes __get_m_type() const;

static ::ArrayW<int32_t> __declspec(property(get=__get_DaysToMonth365, put=__set_DaysToMonth365))  DaysToMonth365;

static void __set_DaysToMonth365(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_DaysToMonth365() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_DaysToMonth366, put=__set_DaysToMonth366))  DaysToMonth366;

static void __set_DaysToMonth366(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_DaysToMonth366() ;

static System::Globalization::Calendar __declspec(property(get=__get_s_defaultInstance, put=__set_s_defaultInstance))  s_defaultInstance;

static void __set_s_defaultInstance(System::Globalization::Calendar value) ;

static System::Globalization::Calendar __get_s_defaultInstance() ;


// Properties

 System::DateTime __declspec(property(get=get_MinSupportedDateTime))  MinSupportedDateTime;

 System::DateTime __declspec(property(get=get_MaxSupportedDateTime))  MaxSupportedDateTime;

 int32_t __declspec(property(get=get_ID))  ID;

 ::ArrayW<int32_t> __declspec(property(get=get_Eras))  Eras;

 int32_t __declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax))  TwoDigitYearMax;


// Methods

/// @brief Method OnDeserialized addr 0x23f13c4 size 0xdc virtual false final false
 void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method get_MinSupportedDateTime addr 0x23f14a0 size 0x58 virtual true final false
 System::DateTime get_MinSupportedDateTime() ;

/// @brief Method get_MaxSupportedDateTime addr 0x23f14f8 size 0x58 virtual true final false
 System::DateTime get_MaxSupportedDateTime() ;

/// @brief Method GetDefaultInstance addr 0x23de6e4 size 0xd0 virtual false final false
static System::Globalization::Calendar GetDefaultInstance() ;

static System::Globalization::GregorianCalendar New_ctor() ;

/// @brief Method .ctor addr 0x23f1550 size 0x2c virtual false final false
 void _ctor() ;

static System::Globalization::GregorianCalendar New_ctor(System::Globalization::GregorianCalendarTypes type) ;

/// @brief Method .ctor addr 0x23f157c size 0x154 virtual false final false
 void _ctor(System::Globalization::GregorianCalendarTypes type) ;

/// @brief Method get_ID addr 0x23f16d0 size 0x8 virtual true final false
 int32_t get_ID() ;

/// @brief Method GetDatePart addr 0x23f16d8 size 0x1fc virtual true final false
 int32_t GetDatePart(int64_t ticks, int32_t part) ;

/// @brief Method GetAbsoluteDate addr 0x23f18d4 size 0x1e8 virtual false final false
static int64_t GetAbsoluteDate(int32_t year, int32_t month, int32_t day) ;

/// @brief Method GetDayOfMonth addr 0x23f1abc size 0x44 virtual true final false
 int32_t GetDayOfMonth(System::DateTime time) ;

/// @brief Method GetDayOfWeek addr 0x23f1b00 size 0x68 virtual true final false
 System::DayOfWeek GetDayOfWeek(System::DateTime time) ;

/// @brief Method GetDaysInMonth addr 0x23f1b68 size 0x2b0 virtual true final false
 int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era) ;

/// @brief Method GetDaysInYear addr 0x23f1e18 size 0x194 virtual true final false
 int32_t GetDaysInYear(int32_t year, int32_t era) ;

/// @brief Method GetEra addr 0x23f1fac size 0x8 virtual true final false
 int32_t GetEra(System::DateTime time) ;

/// @brief Method get_Eras addr 0x23f1fb4 size 0x64 virtual true final false
 ::ArrayW<int32_t> get_Eras() ;

/// @brief Method GetMonth addr 0x23f2018 size 0x44 virtual true final false
 int32_t GetMonth(System::DateTime time) ;

/// @brief Method GetMonthsInYear addr 0x23f205c size 0x150 virtual true final false
 int32_t GetMonthsInYear(int32_t year, int32_t era) ;

/// @brief Method GetYear addr 0x23f21ac size 0x44 virtual true final false
 int32_t GetYear(System::DateTime time) ;

/// @brief Method IsLeapYear addr 0x23f21f0 size 0x19c virtual true final false
 bool IsLeapYear(int32_t year, int32_t era) ;

/// @brief Method ToDateTime addr 0x23f238c size 0xa0 virtual true final false
 System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) ;

/// @brief Method TryToDateTime addr 0x23f242c size 0xf4 virtual true final false
 bool TryToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, ByRef<System::DateTime> result) ;

/// @brief Method get_TwoDigitYearMax addr 0x23f2520 size 0x44 virtual true final false
 int32_t get_TwoDigitYearMax() ;

/// @brief Method set_TwoDigitYearMax addr 0x23f2564 size 0x118 virtual true final false
 void set_TwoDigitYearMax(int32_t value) ;

/// @brief Method ToFourDigitYear addr 0x23f267c size 0x120 virtual true final false
 int32_t ToFourDigitYear(int32_t year) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::GregorianCalendar);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::GregorianCalendar, "System.Globalization", "GregorianCalendar");

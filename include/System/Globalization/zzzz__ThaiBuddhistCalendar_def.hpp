#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System::Globalization {
class GregorianCalendarHelper;
}
namespace System {
struct DayOfWeek;
}
namespace System::Globalization {
class EraInfo;
}
// Forward declare root types
namespace System::Globalization {
class ThaiBuddhistCalendar;
}
// Type: System.Globalization::ThaiBuddhistCalendar
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3681))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3692))
// CS Name: System.Globalization.ThaiBuddhistCalendar
class CORDL_TYPE ThaiBuddhistCalendar : public System::Globalization::Calendar {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ThaiBuddhistCalendar() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThaiBuddhistCalendar", modifiers: " const&", def_value: None }]
constexpr ThaiBuddhistCalendar(ThaiBuddhistCalendar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThaiBuddhistCalendar", modifiers: "&&", def_value: None }]
constexpr ThaiBuddhistCalendar(ThaiBuddhistCalendar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThaiBuddhistCalendar(void* ptr) noexcept : System::Globalization::Calendar(ptr) {
}


  constexpr ThaiBuddhistCalendar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThaiBuddhistCalendar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThaiBuddhistCalendar& operator=(ThaiBuddhistCalendar&& o) noexcept = default;
  constexpr ThaiBuddhistCalendar& operator=(ThaiBuddhistCalendar const& o) noexcept = default;
                


// Fields

static ::ArrayW<System::Globalization::EraInfo> __declspec(property(get=__get_thaiBuddhistEraInfo, put=__set_thaiBuddhistEraInfo))  thaiBuddhistEraInfo;

static void __set_thaiBuddhistEraInfo(::ArrayW<System::Globalization::EraInfo> value) ;

static ::ArrayW<System::Globalization::EraInfo> __get_thaiBuddhistEraInfo() ;

 System::Globalization::GregorianCalendarHelper __declspec(property(get=__get_helper, put=__set_helper))  helper;

constexpr void __set_helper(System::Globalization::GregorianCalendarHelper value) ;

constexpr System::Globalization::GregorianCalendarHelper __get_helper() const;


// Properties

 System::DateTime __declspec(property(get=get_MinSupportedDateTime))  MinSupportedDateTime;

 System::DateTime __declspec(property(get=get_MaxSupportedDateTime))  MaxSupportedDateTime;

 int32_t __declspec(property(get=get_ID))  ID;

 ::ArrayW<int32_t> __declspec(property(get=get_Eras))  Eras;

 int32_t __declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax))  TwoDigitYearMax;


// Methods

/// @brief Method get_MinSupportedDateTime addr 0x23fadac size 0x58 virtual true final false
 System::DateTime get_MinSupportedDateTime() ;

/// @brief Method get_MaxSupportedDateTime addr 0x23fae04 size 0x58 virtual true final false
 System::DateTime get_MaxSupportedDateTime() ;

static System::Globalization::ThaiBuddhistCalendar New_ctor() ;

/// @brief Method .ctor addr 0x23fae5c size 0xa4 virtual false final false
 void _ctor() ;

/// @brief Method get_ID addr 0x23faf00 size 0x8 virtual true final false
 int32_t get_ID() ;

/// @brief Method GetDaysInMonth addr 0x23faf08 size 0x1c virtual true final false
 int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era) ;

/// @brief Method GetDaysInYear addr 0x23faf24 size 0x1c virtual true final false
 int32_t GetDaysInYear(int32_t year, int32_t era) ;

/// @brief Method GetDayOfMonth addr 0x23faf40 size 0x1c virtual true final false
 int32_t GetDayOfMonth(System::DateTime time) ;

/// @brief Method GetDayOfWeek addr 0x23faf5c size 0x1c virtual true final false
 System::DayOfWeek GetDayOfWeek(System::DateTime time) ;

/// @brief Method GetMonthsInYear addr 0x23faf78 size 0x1c virtual true final false
 int32_t GetMonthsInYear(int32_t year, int32_t era) ;

/// @brief Method GetEra addr 0x23faf94 size 0x1c virtual true final false
 int32_t GetEra(System::DateTime time) ;

/// @brief Method GetMonth addr 0x23fafb0 size 0x1c virtual true final false
 int32_t GetMonth(System::DateTime time) ;

/// @brief Method GetYear addr 0x23fafcc size 0x1c virtual true final false
 int32_t GetYear(System::DateTime time) ;

/// @brief Method IsLeapYear addr 0x23fafe8 size 0x1c virtual true final false
 bool IsLeapYear(int32_t year, int32_t era) ;

/// @brief Method ToDateTime addr 0x23fb004 size 0x24 virtual true final false
 System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) ;

/// @brief Method get_Eras addr 0x23fb028 size 0x1c virtual true final false
 ::ArrayW<int32_t> get_Eras() ;

/// @brief Method get_TwoDigitYearMax addr 0x23fb044 size 0x3c virtual true final false
 int32_t get_TwoDigitYearMax() ;

/// @brief Method set_TwoDigitYearMax addr 0x23fb080 size 0x13c virtual true final false
 void set_TwoDigitYearMax(int32_t value) ;

/// @brief Method ToFourDigitYear addr 0x23fb1bc size 0xb0 virtual true final false
 int32_t ToFourDigitYear(int32_t year) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::ThaiBuddhistCalendar);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::ThaiBuddhistCalendar, "System.Globalization", "ThaiBuddhistCalendar");

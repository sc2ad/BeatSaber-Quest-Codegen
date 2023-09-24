#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Globalization {
class Calendar;
}
namespace System {
struct DayOfWeek;
}
namespace System::Globalization {
class EraInfo;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Globalization {
class GregorianCalendarHelper;
}
// Type: System.Globalization::GregorianCalendarHelper
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3685))
// CS Name: System.Globalization.GregorianCalendarHelper
class CORDL_TYPE GregorianCalendarHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GregorianCalendarHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "GregorianCalendarHelper", modifiers: " const&", def_value: None }]
constexpr GregorianCalendarHelper(GregorianCalendarHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GregorianCalendarHelper", modifiers: "&&", def_value: None }]
constexpr GregorianCalendarHelper(GregorianCalendarHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GregorianCalendarHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GregorianCalendarHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GregorianCalendarHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GregorianCalendarHelper& operator=(GregorianCalendarHelper&& o) noexcept = default;
  constexpr GregorianCalendarHelper& operator=(GregorianCalendarHelper const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_DaysToMonth365, put=__set_DaysToMonth365))  DaysToMonth365;

static void __set_DaysToMonth365(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_DaysToMonth365() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_DaysToMonth366, put=__set_DaysToMonth366))  DaysToMonth366;

static void __set_DaysToMonth366(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_DaysToMonth366() ;

 int32_t __declspec(property(get=__get_m_maxYear, put=__set_m_maxYear))  m_maxYear;

constexpr void __set_m_maxYear(int32_t value) ;

constexpr int32_t __get_m_maxYear() const;

 int32_t __declspec(property(get=__get_m_minYear, put=__set_m_minYear))  m_minYear;

constexpr void __set_m_minYear(int32_t value) ;

constexpr int32_t __get_m_minYear() const;

 System::Globalization::Calendar __declspec(property(get=__get_m_Cal, put=__set_m_Cal))  m_Cal;

constexpr void __set_m_Cal(System::Globalization::Calendar value) ;

constexpr System::Globalization::Calendar __get_m_Cal() const;

 ::ArrayW<System::Globalization::EraInfo> __declspec(property(get=__get_m_EraInfo, put=__set_m_EraInfo))  m_EraInfo;

constexpr void __set_m_EraInfo(::ArrayW<System::Globalization::EraInfo> value) ;

constexpr ::ArrayW<System::Globalization::EraInfo> __get_m_EraInfo() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_eras, put=__set_m_eras))  m_eras;

constexpr void __set_m_eras(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_eras() const;

 System::DateTime __declspec(property(get=__get_m_minDate, put=__set_m_minDate))  m_minDate;

constexpr void __set_m_minDate(System::DateTime value) ;

constexpr System::DateTime __get_m_minDate() const;


// Properties

 int32_t __declspec(property(get=get_MaxYear))  MaxYear;

 ::ArrayW<int32_t> __declspec(property(get=get_Eras))  Eras;


// Methods

/// @brief Method get_MaxYear addr 0x23f29bc size 0x8 virtual false final false
 int32_t get_MaxYear() ;

static System::Globalization::GregorianCalendarHelper New_ctor(System::Globalization::Calendar cal, ::ArrayW<System::Globalization::EraInfo> eraInfo) ;

/// @brief Method .ctor addr 0x23f29c4 size 0x78 virtual false final false
 void _ctor(System::Globalization::Calendar cal, ::ArrayW<System::Globalization::EraInfo> eraInfo) ;

/// @brief Method GetYearOffset addr 0x23f2a3c size 0x2f4 virtual false final false
 int32_t GetYearOffset(int32_t year, int32_t era, bool throwOnError) ;

/// @brief Method GetGregorianYear addr 0x23f2d30 size 0x1c virtual false final false
 int32_t GetGregorianYear(int32_t year, int32_t era) ;

/// @brief Method IsValidYear addr 0x23f2d4c size 0x1c virtual false final false
 bool IsValidYear(int32_t year, int32_t era) ;

/// @brief Method GetDatePart addr 0x23f2d68 size 0x20c virtual true final false
 int32_t GetDatePart(int64_t ticks, int32_t part) ;

/// @brief Method GetAbsoluteDate addr 0x23f310c size 0x1e8 virtual false final false
static int64_t GetAbsoluteDate(int32_t year, int32_t month, int32_t day) ;

/// @brief Method DateToTicks addr 0x23f32f4 size 0x80 virtual false final false
static int64_t DateToTicks(int32_t year, int32_t month, int32_t day) ;

/// @brief Method TimeToTicks addr 0x23f3374 size 0x1bc virtual false final false
static int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second, int32_t millisecond) ;

/// @brief Method CheckTicksRange addr 0x23f2f74 size 0x198 virtual false final false
 void CheckTicksRange(int64_t ticks) ;

/// @brief Method GetDayOfMonth addr 0x23f3530 size 0x40 virtual false final false
 int32_t GetDayOfMonth(System::DateTime time) ;

/// @brief Method GetDayOfWeek addr 0x23f3570 size 0x8c virtual false final false
 System::DayOfWeek GetDayOfWeek(System::DateTime time) ;

/// @brief Method GetDaysInMonth addr 0x23f35fc size 0x18c virtual false final false
 int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era) ;

/// @brief Method GetDaysInYear addr 0x23f3788 size 0x70 virtual false final false
 int32_t GetDaysInYear(int32_t year, int32_t era) ;

/// @brief Method GetEra addr 0x23f37f8 size 0xd0 virtual false final false
 int32_t GetEra(System::DateTime time) ;

/// @brief Method get_Eras addr 0x23f38c8 size 0xf0 virtual false final false
 ::ArrayW<int32_t> get_Eras() ;

/// @brief Method GetMonth addr 0x23f39b8 size 0x40 virtual false final false
 int32_t GetMonth(System::DateTime time) ;

/// @brief Method GetMonthsInYear addr 0x23f39f8 size 0x18 virtual false final false
 int32_t GetMonthsInYear(int32_t year, int32_t era) ;

/// @brief Method GetYear addr 0x23f3a10 size 0xf0 virtual false final false
 int32_t GetYear(System::DateTime time) ;

/// @brief Method IsLeapYear addr 0x23f3b00 size 0x70 virtual false final false
 bool IsLeapYear(int32_t year, int32_t era) ;

/// @brief Method ToDateTime addr 0x23f3b70 size 0x104 virtual false final false
 System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) ;

/// @brief Method ToFourDigitYear addr 0x23f3c74 size 0x188 virtual false final false
 int32_t ToFourDigitYear(int32_t year, int32_t twoDigitYearMax) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::GregorianCalendarHelper);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::GregorianCalendarHelper, "System.Globalization", "GregorianCalendarHelper");

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.Calendar
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5E4F4
  class Calendar : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // System.Int32 m_currentEraValue
    // Size: 0x4
    // Offset: 0x10
    int m_currentEraValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [OptionalFieldAttribute] Offset: 0xE62E80
    // private System.Boolean m_isReadOnly
    // Size: 0x1
    // Offset: 0x14
    bool m_isReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isReadOnly and: twoDigitYearMax
    char __padding1[0x3] = {};
    // System.Int32 twoDigitYearMax
    // Size: 0x4
    // Offset: 0x18
    int twoDigitYearMax;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // static field const value: static System.Int64 TicksPerMillisecond
    static constexpr const int64_t TicksPerMillisecond = 10000;
    // Get static field: static System.Int64 TicksPerMillisecond
    static int64_t _get_TicksPerMillisecond();
    // Set static field: static System.Int64 TicksPerMillisecond
    static void _set_TicksPerMillisecond(int64_t value);
    // static field const value: static System.Int64 TicksPerSecond
    static constexpr const int64_t TicksPerSecond = 10000000;
    // Get static field: static System.Int64 TicksPerSecond
    static int64_t _get_TicksPerSecond();
    // Set static field: static System.Int64 TicksPerSecond
    static void _set_TicksPerSecond(int64_t value);
    // static field const value: static System.Int64 TicksPerMinute
    static constexpr const int64_t TicksPerMinute = 600000000;
    // Get static field: static System.Int64 TicksPerMinute
    static int64_t _get_TicksPerMinute();
    // Set static field: static System.Int64 TicksPerMinute
    static void _set_TicksPerMinute(int64_t value);
    // static field const value: static System.Int64 TicksPerHour
    static constexpr const int64_t TicksPerHour = 36000000000;
    // Get static field: static System.Int64 TicksPerHour
    static int64_t _get_TicksPerHour();
    // Set static field: static System.Int64 TicksPerHour
    static void _set_TicksPerHour(int64_t value);
    // static field const value: static System.Int64 TicksPerDay
    static constexpr const int64_t TicksPerDay = 864000000000;
    // Get static field: static System.Int64 TicksPerDay
    static int64_t _get_TicksPerDay();
    // Set static field: static System.Int64 TicksPerDay
    static void _set_TicksPerDay(int64_t value);
    // static field const value: static System.Int32 MillisPerSecond
    static constexpr const int MillisPerSecond = 1000;
    // Get static field: static System.Int32 MillisPerSecond
    static int _get_MillisPerSecond();
    // Set static field: static System.Int32 MillisPerSecond
    static void _set_MillisPerSecond(int value);
    // static field const value: static System.Int32 MillisPerMinute
    static constexpr const int MillisPerMinute = 60000;
    // Get static field: static System.Int32 MillisPerMinute
    static int _get_MillisPerMinute();
    // Set static field: static System.Int32 MillisPerMinute
    static void _set_MillisPerMinute(int value);
    // static field const value: static System.Int32 MillisPerHour
    static constexpr const int MillisPerHour = 3600000;
    // Get static field: static System.Int32 MillisPerHour
    static int _get_MillisPerHour();
    // Set static field: static System.Int32 MillisPerHour
    static void _set_MillisPerHour(int value);
    // static field const value: static System.Int32 MillisPerDay
    static constexpr const int MillisPerDay = 86400000;
    // Get static field: static System.Int32 MillisPerDay
    static int _get_MillisPerDay();
    // Set static field: static System.Int32 MillisPerDay
    static void _set_MillisPerDay(int value);
    // static field const value: static System.Int32 DaysPerYear
    static constexpr const int DaysPerYear = 365;
    // Get static field: static System.Int32 DaysPerYear
    static int _get_DaysPerYear();
    // Set static field: static System.Int32 DaysPerYear
    static void _set_DaysPerYear(int value);
    // static field const value: static System.Int32 DaysPer4Years
    static constexpr const int DaysPer4Years = 1461;
    // Get static field: static System.Int32 DaysPer4Years
    static int _get_DaysPer4Years();
    // Set static field: static System.Int32 DaysPer4Years
    static void _set_DaysPer4Years(int value);
    // static field const value: static System.Int32 DaysPer100Years
    static constexpr const int DaysPer100Years = 36524;
    // Get static field: static System.Int32 DaysPer100Years
    static int _get_DaysPer100Years();
    // Set static field: static System.Int32 DaysPer100Years
    static void _set_DaysPer100Years(int value);
    // static field const value: static System.Int32 DaysPer400Years
    static constexpr const int DaysPer400Years = 146097;
    // Get static field: static System.Int32 DaysPer400Years
    static int _get_DaysPer400Years();
    // Set static field: static System.Int32 DaysPer400Years
    static void _set_DaysPer400Years(int value);
    // static field const value: static System.Int32 DaysTo10000
    static constexpr const int DaysTo10000 = 3652059;
    // Get static field: static System.Int32 DaysTo10000
    static int _get_DaysTo10000();
    // Set static field: static System.Int32 DaysTo10000
    static void _set_DaysTo10000(int value);
    // static field const value: static System.Int64 MaxMillis
    static constexpr const int64_t MaxMillis = 315537897600000;
    // Get static field: static System.Int64 MaxMillis
    static int64_t _get_MaxMillis();
    // Set static field: static System.Int64 MaxMillis
    static void _set_MaxMillis(int64_t value);
    // static field const value: static System.Int32 CAL_GREGORIAN
    static constexpr const int CAL_GREGORIAN = 1;
    // Get static field: static System.Int32 CAL_GREGORIAN
    static int _get_CAL_GREGORIAN();
    // Set static field: static System.Int32 CAL_GREGORIAN
    static void _set_CAL_GREGORIAN(int value);
    // static field const value: static System.Int32 CAL_GREGORIAN_US
    static constexpr const int CAL_GREGORIAN_US = 2;
    // Get static field: static System.Int32 CAL_GREGORIAN_US
    static int _get_CAL_GREGORIAN_US();
    // Set static field: static System.Int32 CAL_GREGORIAN_US
    static void _set_CAL_GREGORIAN_US(int value);
    // static field const value: static System.Int32 CAL_JAPAN
    static constexpr const int CAL_JAPAN = 3;
    // Get static field: static System.Int32 CAL_JAPAN
    static int _get_CAL_JAPAN();
    // Set static field: static System.Int32 CAL_JAPAN
    static void _set_CAL_JAPAN(int value);
    // static field const value: static System.Int32 CAL_TAIWAN
    static constexpr const int CAL_TAIWAN = 4;
    // Get static field: static System.Int32 CAL_TAIWAN
    static int _get_CAL_TAIWAN();
    // Set static field: static System.Int32 CAL_TAIWAN
    static void _set_CAL_TAIWAN(int value);
    // static field const value: static System.Int32 CAL_KOREA
    static constexpr const int CAL_KOREA = 5;
    // Get static field: static System.Int32 CAL_KOREA
    static int _get_CAL_KOREA();
    // Set static field: static System.Int32 CAL_KOREA
    static void _set_CAL_KOREA(int value);
    // static field const value: static System.Int32 CAL_HIJRI
    static constexpr const int CAL_HIJRI = 6;
    // Get static field: static System.Int32 CAL_HIJRI
    static int _get_CAL_HIJRI();
    // Set static field: static System.Int32 CAL_HIJRI
    static void _set_CAL_HIJRI(int value);
    // static field const value: static System.Int32 CAL_THAI
    static constexpr const int CAL_THAI = 7;
    // Get static field: static System.Int32 CAL_THAI
    static int _get_CAL_THAI();
    // Set static field: static System.Int32 CAL_THAI
    static void _set_CAL_THAI(int value);
    // static field const value: static System.Int32 CAL_HEBREW
    static constexpr const int CAL_HEBREW = 8;
    // Get static field: static System.Int32 CAL_HEBREW
    static int _get_CAL_HEBREW();
    // Set static field: static System.Int32 CAL_HEBREW
    static void _set_CAL_HEBREW(int value);
    // static field const value: static System.Int32 CAL_GREGORIAN_ME_FRENCH
    static constexpr const int CAL_GREGORIAN_ME_FRENCH = 9;
    // Get static field: static System.Int32 CAL_GREGORIAN_ME_FRENCH
    static int _get_CAL_GREGORIAN_ME_FRENCH();
    // Set static field: static System.Int32 CAL_GREGORIAN_ME_FRENCH
    static void _set_CAL_GREGORIAN_ME_FRENCH(int value);
    // static field const value: static System.Int32 CAL_GREGORIAN_ARABIC
    static constexpr const int CAL_GREGORIAN_ARABIC = 10;
    // Get static field: static System.Int32 CAL_GREGORIAN_ARABIC
    static int _get_CAL_GREGORIAN_ARABIC();
    // Set static field: static System.Int32 CAL_GREGORIAN_ARABIC
    static void _set_CAL_GREGORIAN_ARABIC(int value);
    // static field const value: static System.Int32 CAL_GREGORIAN_XLIT_ENGLISH
    static constexpr const int CAL_GREGORIAN_XLIT_ENGLISH = 11;
    // Get static field: static System.Int32 CAL_GREGORIAN_XLIT_ENGLISH
    static int _get_CAL_GREGORIAN_XLIT_ENGLISH();
    // Set static field: static System.Int32 CAL_GREGORIAN_XLIT_ENGLISH
    static void _set_CAL_GREGORIAN_XLIT_ENGLISH(int value);
    // static field const value: static System.Int32 CAL_GREGORIAN_XLIT_FRENCH
    static constexpr const int CAL_GREGORIAN_XLIT_FRENCH = 12;
    // Get static field: static System.Int32 CAL_GREGORIAN_XLIT_FRENCH
    static int _get_CAL_GREGORIAN_XLIT_FRENCH();
    // Set static field: static System.Int32 CAL_GREGORIAN_XLIT_FRENCH
    static void _set_CAL_GREGORIAN_XLIT_FRENCH(int value);
    // static field const value: static System.Int32 CAL_JULIAN
    static constexpr const int CAL_JULIAN = 13;
    // Get static field: static System.Int32 CAL_JULIAN
    static int _get_CAL_JULIAN();
    // Set static field: static System.Int32 CAL_JULIAN
    static void _set_CAL_JULIAN(int value);
    // static field const value: static System.Int32 CAL_JAPANESELUNISOLAR
    static constexpr const int CAL_JAPANESELUNISOLAR = 14;
    // Get static field: static System.Int32 CAL_JAPANESELUNISOLAR
    static int _get_CAL_JAPANESELUNISOLAR();
    // Set static field: static System.Int32 CAL_JAPANESELUNISOLAR
    static void _set_CAL_JAPANESELUNISOLAR(int value);
    // static field const value: static System.Int32 CAL_CHINESELUNISOLAR
    static constexpr const int CAL_CHINESELUNISOLAR = 15;
    // Get static field: static System.Int32 CAL_CHINESELUNISOLAR
    static int _get_CAL_CHINESELUNISOLAR();
    // Set static field: static System.Int32 CAL_CHINESELUNISOLAR
    static void _set_CAL_CHINESELUNISOLAR(int value);
    // static field const value: static System.Int32 CAL_SAKA
    static constexpr const int CAL_SAKA = 16;
    // Get static field: static System.Int32 CAL_SAKA
    static int _get_CAL_SAKA();
    // Set static field: static System.Int32 CAL_SAKA
    static void _set_CAL_SAKA(int value);
    // static field const value: static System.Int32 CAL_LUNAR_ETO_CHN
    static constexpr const int CAL_LUNAR_ETO_CHN = 17;
    // Get static field: static System.Int32 CAL_LUNAR_ETO_CHN
    static int _get_CAL_LUNAR_ETO_CHN();
    // Set static field: static System.Int32 CAL_LUNAR_ETO_CHN
    static void _set_CAL_LUNAR_ETO_CHN(int value);
    // static field const value: static System.Int32 CAL_LUNAR_ETO_KOR
    static constexpr const int CAL_LUNAR_ETO_KOR = 18;
    // Get static field: static System.Int32 CAL_LUNAR_ETO_KOR
    static int _get_CAL_LUNAR_ETO_KOR();
    // Set static field: static System.Int32 CAL_LUNAR_ETO_KOR
    static void _set_CAL_LUNAR_ETO_KOR(int value);
    // static field const value: static System.Int32 CAL_LUNAR_ETO_ROKUYOU
    static constexpr const int CAL_LUNAR_ETO_ROKUYOU = 19;
    // Get static field: static System.Int32 CAL_LUNAR_ETO_ROKUYOU
    static int _get_CAL_LUNAR_ETO_ROKUYOU();
    // Set static field: static System.Int32 CAL_LUNAR_ETO_ROKUYOU
    static void _set_CAL_LUNAR_ETO_ROKUYOU(int value);
    // static field const value: static System.Int32 CAL_KOREANLUNISOLAR
    static constexpr const int CAL_KOREANLUNISOLAR = 20;
    // Get static field: static System.Int32 CAL_KOREANLUNISOLAR
    static int _get_CAL_KOREANLUNISOLAR();
    // Set static field: static System.Int32 CAL_KOREANLUNISOLAR
    static void _set_CAL_KOREANLUNISOLAR(int value);
    // static field const value: static System.Int32 CAL_TAIWANLUNISOLAR
    static constexpr const int CAL_TAIWANLUNISOLAR = 21;
    // Get static field: static System.Int32 CAL_TAIWANLUNISOLAR
    static int _get_CAL_TAIWANLUNISOLAR();
    // Set static field: static System.Int32 CAL_TAIWANLUNISOLAR
    static void _set_CAL_TAIWANLUNISOLAR(int value);
    // static field const value: static System.Int32 CAL_PERSIAN
    static constexpr const int CAL_PERSIAN = 22;
    // Get static field: static System.Int32 CAL_PERSIAN
    static int _get_CAL_PERSIAN();
    // Set static field: static System.Int32 CAL_PERSIAN
    static void _set_CAL_PERSIAN(int value);
    // static field const value: static System.Int32 CAL_UMALQURA
    static constexpr const int CAL_UMALQURA = 23;
    // Get static field: static System.Int32 CAL_UMALQURA
    static int _get_CAL_UMALQURA();
    // Set static field: static System.Int32 CAL_UMALQURA
    static void _set_CAL_UMALQURA(int value);
    // static field const value: static public System.Int32 CurrentEra
    static constexpr const int CurrentEra = 0;
    // Get static field: static public System.Int32 CurrentEra
    static int _get_CurrentEra();
    // Set static field: static public System.Int32 CurrentEra
    static void _set_CurrentEra(int value);
    // Get instance field reference: System.Int32 m_currentEraValue
    int& dyn_m_currentEraValue();
    // Get instance field reference: private System.Boolean m_isReadOnly
    bool& dyn_m_isReadOnly();
    // Get instance field reference: System.Int32 twoDigitYearMax
    int& dyn_twoDigitYearMax();
    // public System.DateTime get_MinSupportedDateTime()
    // Offset: 0x19A8400
    System::DateTime get_MinSupportedDateTime();
    // public System.DateTime get_MaxSupportedDateTime()
    // Offset: 0x19A8468
    System::DateTime get_MaxSupportedDateTime();
    // System.Int32 get_ID()
    // Offset: 0x19A84E4
    int get_ID();
    // System.Int32 get_BaseCalendarID()
    // Offset: 0x19A84EC
    int get_BaseCalendarID();
    // System.Int32 get_CurrentEraValue()
    // Offset: 0x19A8594
    int get_CurrentEraValue();
    // public System.Int32[] get_Eras()
    // Offset: 0xFFFFFFFF
    ::ArrayW<int> get_Eras();
    // public System.Int32 get_TwoDigitYearMax()
    // Offset: 0x19A89F8
    int get_TwoDigitYearMax();
    // public System.Object Clone()
    // Offset: 0x19A84F8
    ::Il2CppObject* Clone();
    // System.Void SetReadOnlyState(System.Boolean readOnly)
    // Offset: 0x19A8588
    void SetReadOnlyState(bool readOnly);
    // public System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0xFFFFFFFF
    int GetDayOfMonth(System::DateTime time);
    // public System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0xFFFFFFFF
    System::DayOfWeek GetDayOfWeek(System::DateTime time);
    // public System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0xFFFFFFFF
    int GetDaysInMonth(int year, int month, int era);
    // public System.Int32 GetEra(System.DateTime time)
    // Offset: 0xFFFFFFFF
    int GetEra(System::DateTime time);
    // public System.Int32 GetMonth(System.DateTime time)
    // Offset: 0xFFFFFFFF
    int GetMonth(System::DateTime time);
    // public System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0xFFFFFFFF
    int GetMonthsInYear(int year, int era);
    // public System.Int32 GetYear(System.DateTime time)
    // Offset: 0xFFFFFFFF
    int GetYear(System::DateTime time);
    // public System.Boolean IsLeapYear(System.Int32 year)
    // Offset: 0x19A86DC
    bool IsLeapYear(int year);
    // public System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0xFFFFFFFF
    bool IsLeapYear(int year, int era);
    // public System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0xFFFFFFFF
    System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // System.Boolean TryToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era, out System.DateTime result)
    // Offset: 0x19A86F0
    bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, ByRef<System::DateTime> result);
    // System.Boolean IsValidYear(System.Int32 year, System.Int32 era)
    // Offset: 0x19A8868
    bool IsValidYear(int year, int era);
    // System.Boolean IsValidMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x19A88F0
    bool IsValidMonth(int year, int month, int era);
    // System.Boolean IsValidDay(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 era)
    // Offset: 0x19A896C
    bool IsValidDay(int year, int month, int day, int era);
    // public System.Int32 ToFourDigitYear(System.Int32 year)
    // Offset: 0x19A8A00
    int ToFourDigitYear(int year);
    // static System.Int32 GetSystemTwoDigitYearSetting(System.Int32 CalID, System.Int32 defaultYearValue)
    // Offset: 0x19A8B14
    static int GetSystemTwoDigitYearSetting(int CalID, int defaultYearValue);
    // protected System.Void .ctor()
    // Offset: 0x19A84D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Calendar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::Calendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Calendar*, creationType>()));
    }
  }; // System.Globalization.Calendar
  #pragma pack(pop)
  static check_size<sizeof(Calendar), 24 + sizeof(int)> __System_Globalization_CalendarSizeCheck;
  static_assert(sizeof(Calendar) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::Calendar*, "System.Globalization", "Calendar");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::Calendar::get_MinSupportedDateTime
// Il2CppName: get_MinSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::Calendar::*)()>(&System::Globalization::Calendar::get_MinSupportedDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "get_MinSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::get_MaxSupportedDateTime
// Il2CppName: get_MaxSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::Calendar::*)()>(&System::Globalization::Calendar::get_MaxSupportedDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "get_MaxSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)()>(&System::Globalization::Calendar::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::get_BaseCalendarID
// Il2CppName: get_BaseCalendarID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)()>(&System::Globalization::Calendar::get_BaseCalendarID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "get_BaseCalendarID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::get_CurrentEraValue
// Il2CppName: get_CurrentEraValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)()>(&System::Globalization::Calendar::get_CurrentEraValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "get_CurrentEraValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::get_Eras
// Il2CppName: get_Eras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (System::Globalization::Calendar::*)()>(&System::Globalization::Calendar::get_Eras)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "get_Eras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::get_TwoDigitYearMax
// Il2CppName: get_TwoDigitYearMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)()>(&System::Globalization::Calendar::get_TwoDigitYearMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "get_TwoDigitYearMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Globalization::Calendar::*)()>(&System::Globalization::Calendar::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::SetReadOnlyState
// Il2CppName: SetReadOnlyState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::Calendar::*)(bool)>(&System::Globalization::Calendar::SetReadOnlyState)> {
  static const MethodInfo* get() {
    static auto* readOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "SetReadOnlyState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{readOnly});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::GetDayOfMonth
// Il2CppName: GetDayOfMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)(System::DateTime)>(&System::Globalization::Calendar::GetDayOfMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "GetDayOfMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::GetDayOfWeek
// Il2CppName: GetDayOfWeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DayOfWeek (System::Globalization::Calendar::*)(System::DateTime)>(&System::Globalization::Calendar::GetDayOfWeek)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "GetDayOfWeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::GetDaysInMonth
// Il2CppName: GetDaysInMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)(int, int, int)>(&System::Globalization::Calendar::GetDaysInMonth)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "GetDaysInMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::GetEra
// Il2CppName: GetEra
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)(System::DateTime)>(&System::Globalization::Calendar::GetEra)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "GetEra", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::GetMonth
// Il2CppName: GetMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)(System::DateTime)>(&System::Globalization::Calendar::GetMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "GetMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::GetMonthsInYear
// Il2CppName: GetMonthsInYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)(int, int)>(&System::Globalization::Calendar::GetMonthsInYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "GetMonthsInYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::GetYear
// Il2CppName: GetYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)(System::DateTime)>(&System::Globalization::Calendar::GetYear)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "GetYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::IsLeapYear
// Il2CppName: IsLeapYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::Calendar::*)(int)>(&System::Globalization::Calendar::IsLeapYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "IsLeapYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::IsLeapYear
// Il2CppName: IsLeapYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::Calendar::*)(int, int)>(&System::Globalization::Calendar::IsLeapYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "IsLeapYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::Calendar::*)(int, int, int, int, int, int, int, int)>(&System::Globalization::Calendar::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day, hour, minute, second, millisecond, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::TryToDateTime
// Il2CppName: TryToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::Calendar::*)(int, int, int, int, int, int, int, int, ByRef<System::DateTime>)>(&System::Globalization::Calendar::TryToDateTime)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "DateTime")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "TryToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day, hour, minute, second, millisecond, era, result});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::IsValidYear
// Il2CppName: IsValidYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::Calendar::*)(int, int)>(&System::Globalization::Calendar::IsValidYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "IsValidYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::IsValidMonth
// Il2CppName: IsValidMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::Calendar::*)(int, int, int)>(&System::Globalization::Calendar::IsValidMonth)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "IsValidMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::IsValidDay
// Il2CppName: IsValidDay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::Calendar::*)(int, int, int, int)>(&System::Globalization::Calendar::IsValidDay)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "IsValidDay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::ToFourDigitYear
// Il2CppName: ToFourDigitYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Calendar::*)(int)>(&System::Globalization::Calendar::ToFourDigitYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "ToFourDigitYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::GetSystemTwoDigitYearSetting
// Il2CppName: GetSystemTwoDigitYearSetting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Globalization::Calendar::GetSystemTwoDigitYearSetting)> {
  static const MethodInfo* get() {
    static auto* CalID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* defaultYearValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Calendar*), "GetSystemTwoDigitYearSetting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{CalID, defaultYearValue});
  }
};
// Writing MetadataGetter for method: System::Globalization::Calendar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

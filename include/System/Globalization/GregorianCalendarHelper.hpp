// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: Calendar
  class Calendar;
  // Forward declaring type: EraInfo
  class EraInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.GregorianCalendarHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class GregorianCalendarHelper : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [OptionalFieldAttribute] Offset: 0xE63468
    // System.Int32 m_maxYear
    // Size: 0x4
    // Offset: 0x10
    int m_maxYear;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [OptionalFieldAttribute] Offset: 0xE634A0
    // System.Int32 m_minYear
    // Size: 0x4
    // Offset: 0x14
    int m_minYear;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Globalization.Calendar m_Cal
    // Size: 0x8
    // Offset: 0x18
    System::Globalization::Calendar* m_Cal;
    // Field size check
    static_assert(sizeof(System::Globalization::Calendar*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xE634D8
    // System.Globalization.EraInfo[] m_EraInfo
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<System::Globalization::EraInfo*> m_EraInfo;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Globalization::EraInfo*>) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xE63510
    // System.Int32[] m_eras
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int> m_eras;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xE63548
    // System.DateTime m_minDate
    // Size: 0x8
    // Offset: 0x30
    System::DateTime m_minDate;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    public:
    // Get static field: static readonly System.Int32[] DaysToMonth365
    static ::ArrayW<int> _get_DaysToMonth365();
    // Set static field: static readonly System.Int32[] DaysToMonth365
    static void _set_DaysToMonth365(::ArrayW<int> value);
    // Get static field: static readonly System.Int32[] DaysToMonth366
    static ::ArrayW<int> _get_DaysToMonth366();
    // Set static field: static readonly System.Int32[] DaysToMonth366
    static void _set_DaysToMonth366(::ArrayW<int> value);
    // Get instance field reference: System.Int32 m_maxYear
    int& dyn_m_maxYear();
    // Get instance field reference: System.Int32 m_minYear
    int& dyn_m_minYear();
    // Get instance field reference: System.Globalization.Calendar m_Cal
    System::Globalization::Calendar*& dyn_m_Cal();
    // Get instance field reference: System.Globalization.EraInfo[] m_EraInfo
    ::ArrayW<System::Globalization::EraInfo*>& dyn_m_EraInfo();
    // Get instance field reference: System.Int32[] m_eras
    ::ArrayW<int>& dyn_m_eras();
    // Get instance field reference: System.DateTime m_minDate
    System::DateTime& dyn_m_minDate();
    // System.Int32 get_MaxYear()
    // Offset: 0x1BD4668
    int get_MaxYear();
    // public System.Int32[] get_Eras()
    // Offset: 0x1BD5618
    ::ArrayW<int> get_Eras();
    // System.Void .ctor(System.Globalization.Calendar cal, System.Globalization.EraInfo[] eraInfo)
    // Offset: 0x1BD4670
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GregorianCalendarHelper* New_ctor(System::Globalization::Calendar* cal, ::ArrayW<System::Globalization::EraInfo*> eraInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::GregorianCalendarHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GregorianCalendarHelper*, creationType>(cal, eraInfo)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1BD5A14
    static void _cctor();
    // System.Int32 GetGregorianYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1BD4710
    int GetGregorianYear(int year, int era);
    // System.Boolean IsValidYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1BD4978
    bool IsValidYear(int year, int era);
    // System.Int32 GetDatePart(System.Int64 ticks, System.Int32 part)
    // Offset: 0x1BD4A30
    int GetDatePart(int64_t ticks, int part);
    // static System.Int64 GetAbsoluteDate(System.Int32 year, System.Int32 month, System.Int32 day)
    // Offset: 0x1BD4E4C
    static int64_t GetAbsoluteDate(int year, int month, int day);
    // static System.Int64 DateToTicks(System.Int32 year, System.Int32 month, System.Int32 day)
    // Offset: 0x1BD5044
    static int64_t DateToTicks(int year, int month, int day);
    // static System.Int64 TimeToTicks(System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond)
    // Offset: 0x1BD50D4
    static int64_t TimeToTicks(int hour, int minute, int second, int millisecond);
    // System.Void CheckTicksRange(System.Int64 ticks)
    // Offset: 0x1BD4C7C
    void CheckTicksRange(int64_t ticks);
    // public System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0x1BD529C
    int GetDayOfMonth(System::DateTime time);
    // public System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0x1BD52E0
    System::DayOfWeek GetDayOfWeek(System::DateTime time);
    // public System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x1BD5370
    int GetDaysInMonth(int year, int month, int era);
    // public System.Int32 GetEra(System.DateTime time)
    // Offset: 0x1BD5518
    int GetEra(System::DateTime time);
    // public System.Int32 GetMonth(System.DateTime time)
    // Offset: 0x1BD5720
    int GetMonth(System::DateTime time);
    // public System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1BD5764
    int GetMonthsInYear(int year, int era);
    // public System.Int32 GetYear(System.DateTime time)
    // Offset: 0x1BD577C
    int GetYear(System::DateTime time);
    // public System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1BD589C
    bool IsLeapYear(int year, int era);
    // public System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0x1BD5904
    System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
  }; // System.Globalization.GregorianCalendarHelper
  #pragma pack(pop)
  static check_size<sizeof(GregorianCalendarHelper), 48 + sizeof(System::DateTime)> __System_Globalization_GregorianCalendarHelperSizeCheck;
  static_assert(sizeof(GregorianCalendarHelper) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::GregorianCalendarHelper*, "System.Globalization", "GregorianCalendarHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::get_MaxYear
// Il2CppName: get_MaxYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)()>(&System::Globalization::GregorianCalendarHelper::get_MaxYear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "get_MaxYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::get_Eras
// Il2CppName: get_Eras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (System::Globalization::GregorianCalendarHelper::*)()>(&System::Globalization::GregorianCalendarHelper::get_Eras)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "get_Eras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::GregorianCalendarHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetGregorianYear
// Il2CppName: GetGregorianYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(int, int)>(&System::Globalization::GregorianCalendarHelper::GetGregorianYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetGregorianYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::IsValidYear
// Il2CppName: IsValidYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::GregorianCalendarHelper::*)(int, int)>(&System::Globalization::GregorianCalendarHelper::IsValidYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "IsValidYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetDatePart
// Il2CppName: GetDatePart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(int64_t, int)>(&System::Globalization::GregorianCalendarHelper::GetDatePart)> {
  static const MethodInfo* get() {
    static auto* ticks = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* part = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetDatePart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ticks, part});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetAbsoluteDate
// Il2CppName: GetAbsoluteDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int, int, int)>(&System::Globalization::GregorianCalendarHelper::GetAbsoluteDate)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetAbsoluteDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::DateToTicks
// Il2CppName: DateToTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int, int, int)>(&System::Globalization::GregorianCalendarHelper::DateToTicks)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "DateToTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::TimeToTicks
// Il2CppName: TimeToTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int, int, int, int)>(&System::Globalization::GregorianCalendarHelper::TimeToTicks)> {
  static const MethodInfo* get() {
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "TimeToTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hour, minute, second, millisecond});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::CheckTicksRange
// Il2CppName: CheckTicksRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::GregorianCalendarHelper::*)(int64_t)>(&System::Globalization::GregorianCalendarHelper::CheckTicksRange)> {
  static const MethodInfo* get() {
    static auto* ticks = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "CheckTicksRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ticks});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetDayOfMonth
// Il2CppName: GetDayOfMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetDayOfMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetDayOfMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetDayOfWeek
// Il2CppName: GetDayOfWeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DayOfWeek (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetDayOfWeek)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetDayOfWeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetDaysInMonth
// Il2CppName: GetDaysInMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(int, int, int)>(&System::Globalization::GregorianCalendarHelper::GetDaysInMonth)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetDaysInMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetEra
// Il2CppName: GetEra
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetEra)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetEra", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetMonth
// Il2CppName: GetMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetMonthsInYear
// Il2CppName: GetMonthsInYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(int, int)>(&System::Globalization::GregorianCalendarHelper::GetMonthsInYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetMonthsInYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetYear
// Il2CppName: GetYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetYear)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::IsLeapYear
// Il2CppName: IsLeapYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::GregorianCalendarHelper::*)(int, int)>(&System::Globalization::GregorianCalendarHelper::IsLeapYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "IsLeapYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::GregorianCalendarHelper::*)(int, int, int, int, int, int, int, int)>(&System::Globalization::GregorianCalendarHelper::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day, hour, minute, second, millisecond, era});
  }
};

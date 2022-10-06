// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TimeExtensions
  class TimeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TimeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeExtensions*, "", "TimeExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TimeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TimeExtensions : public ::Il2CppObject {
    public:
    // static public System.String MinSecDurationText(System.Single duration)
    // Offset: 0x2A84970
    static ::StringW MinSecDurationText(float duration);
    // static public System.String MinSecMillisecDurationText(System.Single duration)
    // Offset: 0x2A84B98
    static ::StringW MinSecMillisecDurationText(float duration);
    // static public System.Single OneBeatDuration(System.Single bpm)
    // Offset: 0x2A84CB8
    static float OneBeatDuration(float bpm);
    // static public System.Single TimeToBeat(System.Single time, System.Single bpm)
    // Offset: 0x2A84CD4
    static float TimeToBeat(float time, float bpm);
    // static public System.Single SecondsToMinutes(System.Single seconds)
    // Offset: 0x2A84CE8
    static float SecondsToMinutes(float seconds);
    // static public System.Int32 SecondsToDays(System.Int32 time)
    // Offset: 0x2A84CF8
    static int SecondsToDays(int time);
    // static public System.Int32 SecondsToHours(System.Int32 time)
    // Offset: 0x2A84D18
    static int SecondsToHours(int time);
    // static public System.Int32 SecondsToMinutes(System.Int32 time)
    // Offset: 0x2A84D38
    static int SecondsToMinutes(int time);
    // static public System.Int32 DaysToSeconds(System.Int32 days)
    // Offset: 0x2A84D58
    static int DaysToSeconds(int days);
    // static public System.Int32 HoursToSeconds(System.Int32 hours)
    // Offset: 0x2A84D68
    static int HoursToSeconds(int hours);
    // static public System.Int32 MinutesToSeconds(System.Int32 minutes)
    // Offset: 0x2A84D74
    static int MinutesToSeconds(int minutes);
    // static public System.Int32 Hours(System.Single time)
    // Offset: 0x2A84D80
    static int Hours(float time);
    // static public System.Int32 Minutes(System.Single time)
    // Offset: 0x2A84AE4
    static int Minutes(float time);
    // static public System.Int32 Seconds(System.Single time)
    // Offset: 0x2A84B60
    static int Seconds(float time);
    // static public System.Int32 Milliseconds(System.Single time)
    // Offset: 0x2A84C78
    static int Milliseconds(float time);
    // static public System.Int32 TotalDays(System.Single time)
    // Offset: 0x2A84E00
    static int TotalDays(float time);
    // static public System.Int32 TotalHours(System.Single time)
    // Offset: 0x2A84E3C
    static int TotalHours(float time);
    // static public System.Int32 TotalMinutes(System.Single time)
    // Offset: 0x2A84E78
    static int TotalMinutes(float time);
    // static public System.Int32 TotalSeconds(System.Single time)
    // Offset: 0x2A84EB4
    static int TotalSeconds(float time);
    // static public System.Int64 ToUnixTime(System.DateTime dateTime)
    // Offset: 0x2A84ED4
    static int64_t ToUnixTime(::System::DateTime dateTime);
    // static public System.DateTime AsUnixTime(System.Int64 unixTime)
    // Offset: 0x2A84FB4
    static ::System::DateTime AsUnixTime(int64_t unixTime);
  }; // TimeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::MinSecDurationText
// Il2CppName: MinSecDurationText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(float)>(&GlobalNamespace::TimeExtensions::MinSecDurationText)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "MinSecDurationText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::MinSecMillisecDurationText
// Il2CppName: MinSecMillisecDurationText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(float)>(&GlobalNamespace::TimeExtensions::MinSecMillisecDurationText)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "MinSecMillisecDurationText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::OneBeatDuration
// Il2CppName: OneBeatDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::TimeExtensions::OneBeatDuration)> {
  static const MethodInfo* get() {
    static auto* bpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "OneBeatDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bpm});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::TimeToBeat
// Il2CppName: TimeToBeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&GlobalNamespace::TimeExtensions::TimeToBeat)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "TimeToBeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, bpm});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::SecondsToMinutes
// Il2CppName: SecondsToMinutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::TimeExtensions::SecondsToMinutes)> {
  static const MethodInfo* get() {
    static auto* seconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "SecondsToMinutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seconds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::SecondsToDays
// Il2CppName: SecondsToDays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::SecondsToDays)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "SecondsToDays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::SecondsToHours
// Il2CppName: SecondsToHours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::SecondsToHours)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "SecondsToHours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::SecondsToMinutes
// Il2CppName: SecondsToMinutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::SecondsToMinutes)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "SecondsToMinutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::DaysToSeconds
// Il2CppName: DaysToSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::DaysToSeconds)> {
  static const MethodInfo* get() {
    static auto* days = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "DaysToSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{days});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::HoursToSeconds
// Il2CppName: HoursToSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::HoursToSeconds)> {
  static const MethodInfo* get() {
    static auto* hours = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "HoursToSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hours});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::MinutesToSeconds
// Il2CppName: MinutesToSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::MinutesToSeconds)> {
  static const MethodInfo* get() {
    static auto* minutes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "MinutesToSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minutes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::Hours
// Il2CppName: Hours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::Hours)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "Hours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::Minutes
// Il2CppName: Minutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::Minutes)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "Minutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::Seconds
// Il2CppName: Seconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::Seconds)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "Seconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::Milliseconds
// Il2CppName: Milliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::Milliseconds)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "Milliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::TotalDays
// Il2CppName: TotalDays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::TotalDays)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "TotalDays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::TotalHours
// Il2CppName: TotalHours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::TotalHours)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "TotalHours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::TotalMinutes
// Il2CppName: TotalMinutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::TotalMinutes)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "TotalMinutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::TotalSeconds
// Il2CppName: TotalSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::TotalSeconds)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "TotalSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::ToUnixTime
// Il2CppName: ToUnixTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::DateTime)>(&GlobalNamespace::TimeExtensions::ToUnixTime)> {
  static const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "ToUnixTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::AsUnixTime
// Il2CppName: AsUnixTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int64_t)>(&GlobalNamespace::TimeExtensions::AsUnixTime)> {
  static const MethodInfo* get() {
    static auto* unixTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "AsUnixTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unixTime});
  }
};

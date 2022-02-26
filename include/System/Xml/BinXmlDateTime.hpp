// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: BinXmlDateTime
  class BinXmlDateTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::BinXmlDateTime);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinXmlDateTime*, "System.Xml", "BinXmlDateTime");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.BinXmlDateTime
  // [TokenAttribute] Offset: FFFFFFFF
  class BinXmlDateTime : public ::Il2CppObject {
    public:
    // Get static field: static System.Int32[] KatmaiTimeScaleMultiplicator
    static ::ArrayW<int> _get_KatmaiTimeScaleMultiplicator();
    // Set static field: static System.Int32[] KatmaiTimeScaleMultiplicator
    static void _set_KatmaiTimeScaleMultiplicator(::ArrayW<int> value);
    // Get static field: static private readonly System.Double SQLTicksPerMillisecond
    static double _get_SQLTicksPerMillisecond();
    // Set static field: static private readonly System.Double SQLTicksPerMillisecond
    static void _set_SQLTicksPerMillisecond(double value);
    // Get static field: static public readonly System.Int32 SQLTicksPerSecond
    static int _get_SQLTicksPerSecond();
    // Set static field: static public readonly System.Int32 SQLTicksPerSecond
    static void _set_SQLTicksPerSecond(int value);
    // Get static field: static public readonly System.Int32 SQLTicksPerMinute
    static int _get_SQLTicksPerMinute();
    // Set static field: static public readonly System.Int32 SQLTicksPerMinute
    static void _set_SQLTicksPerMinute(int value);
    // Get static field: static public readonly System.Int32 SQLTicksPerHour
    static int _get_SQLTicksPerHour();
    // Set static field: static public readonly System.Int32 SQLTicksPerHour
    static void _set_SQLTicksPerHour(int value);
    // Get static field: static private readonly System.Int32 SQLTicksPerDay
    static int _get_SQLTicksPerDay();
    // Set static field: static private readonly System.Int32 SQLTicksPerDay
    static void _set_SQLTicksPerDay(int value);
    // static private System.Void .cctor()
    // Offset: 0x1B9C928
    static void _cctor();
    // static private System.Void Write2Dig(System.Text.StringBuilder sb, System.Int32 val)
    // Offset: 0x1B9A720
    static void Write2Dig(::System::Text::StringBuilder* sb, int val);
    // static private System.Void Write4DigNeg(System.Text.StringBuilder sb, System.Int32 val)
    // Offset: 0x1B9A788
    static void Write4DigNeg(::System::Text::StringBuilder* sb, int val);
    // static private System.Void Write3Dec(System.Text.StringBuilder sb, System.Int32 val)
    // Offset: 0x1B9A844
    static void Write3Dec(::System::Text::StringBuilder* sb, int val);
    // static private System.Void WriteDate(System.Text.StringBuilder sb, System.Int32 yr, System.Int32 mnth, System.Int32 day)
    // Offset: 0x1B9A8F4
    static void WriteDate(::System::Text::StringBuilder* sb, int yr, int mnth, int day);
    // static private System.Void WriteTime(System.Text.StringBuilder sb, System.Int32 hr, System.Int32 min, System.Int32 sec, System.Int32 ms)
    // Offset: 0x1B9A9B8
    static void WriteTime(::System::Text::StringBuilder* sb, int hr, int min, int sec, int ms);
    // static private System.Void WriteTimeFullPrecision(System.Text.StringBuilder sb, System.Int32 hr, System.Int32 min, System.Int32 sec, System.Int32 fraction)
    // Offset: 0x1B9AABC
    static void WriteTimeFullPrecision(::System::Text::StringBuilder* sb, int hr, int min, int sec, int fraction);
    // static private System.Void WriteTimeZone(System.Text.StringBuilder sb, System.TimeSpan zone)
    // Offset: 0x1B9ACBC
    static void WriteTimeZone(::System::Text::StringBuilder* sb, ::System::TimeSpan zone);
    // static private System.Void WriteTimeZone(System.Text.StringBuilder sb, System.Boolean negTimeZone, System.Int32 hr, System.Int32 min)
    // Offset: 0x1B9AD8C
    static void WriteTimeZone(::System::Text::StringBuilder* sb, bool negTimeZone, int hr, int min);
    // static private System.Void BreakDownXsdDateTime(System.Int64 val, out System.Int32 yr, out System.Int32 mnth, out System.Int32 day, out System.Int32 hr, out System.Int32 min, out System.Int32 sec, out System.Int32 ms)
    // Offset: 0x1B9AE7C
    static void BreakDownXsdDateTime(int64_t val, ByRef<int> yr, ByRef<int> mnth, ByRef<int> day, ByRef<int> hr, ByRef<int> min, ByRef<int> sec, ByRef<int> ms);
    // static private System.Void BreakDownXsdDate(System.Int64 val, out System.Int32 yr, out System.Int32 mnth, out System.Int32 day, out System.Boolean negTimeZone, out System.Int32 hr, out System.Int32 min)
    // Offset: 0x1B9B0B0
    static void BreakDownXsdDate(int64_t val, ByRef<int> yr, ByRef<int> mnth, ByRef<int> day, ByRef<bool> negTimeZone, ByRef<int> hr, ByRef<int> min);
    // static private System.Void BreakDownXsdTime(System.Int64 val, out System.Int32 hr, out System.Int32 min, out System.Int32 sec, out System.Int32 ms)
    // Offset: 0x1B9B26C
    static void BreakDownXsdTime(int64_t val, ByRef<int> hr, ByRef<int> min, ByRef<int> sec, ByRef<int> ms);
    // static public System.String XsdDateTimeToString(System.Int64 val)
    // Offset: 0x1B9B3BC
    static ::StringW XsdDateTimeToString(int64_t val);
    // static public System.String XsdDateToString(System.Int64 val)
    // Offset: 0x1B9B4D4
    static ::StringW XsdDateToString(int64_t val);
    // static public System.String XsdTimeToString(System.Int64 val)
    // Offset: 0x1B9B5C4
    static ::StringW XsdTimeToString(int64_t val);
    // static public System.String SqlDateTimeToString(System.Int32 dateticks, System.UInt32 timeticks)
    // Offset: 0x1B9B6A8
    static ::StringW SqlDateTimeToString(int dateticks, uint timeticks);
    // static public System.DateTime SqlDateTimeToDateTime(System.Int32 dateticks, System.UInt32 timeticks)
    // Offset: 0x1B9B790
    static ::System::DateTime SqlDateTimeToDateTime(int dateticks, uint timeticks);
    // static public System.String SqlSmallDateTimeToString(System.Int16 dateticks, System.UInt16 timeticks)
    // Offset: 0x1B9B874
    static ::StringW SqlSmallDateTimeToString(int16_t dateticks, uint16_t timeticks);
    // static public System.DateTime SqlSmallDateTimeToDateTime(System.Int16 dateticks, System.UInt16 timeticks)
    // Offset: 0x1B9B93C
    static ::System::DateTime SqlSmallDateTimeToDateTime(int16_t dateticks, uint16_t timeticks);
    // static public System.DateTime XsdKatmaiDateToDateTime(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9B9C0
    static ::System::DateTime XsdKatmaiDateToDateTime(::ArrayW<uint8_t> data, int offset);
    // static public System.DateTime XsdKatmaiDateTimeToDateTime(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9BAD0
    static ::System::DateTime XsdKatmaiDateTimeToDateTime(::ArrayW<uint8_t> data, int offset);
    // static public System.DateTime XsdKatmaiTimeToDateTime(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9BDA4
    static ::System::DateTime XsdKatmaiTimeToDateTime(::ArrayW<uint8_t> data, int offset);
    // static public System.DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9BE18
    static ::System::DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(::ArrayW<uint8_t> data, int offset);
    // static public System.DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9BE8C
    static ::System::DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(::ArrayW<uint8_t> data, int offset);
    // static public System.DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9BFAC
    static ::System::DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(::ArrayW<uint8_t> data, int offset);
    // static public System.String XsdKatmaiDateToString(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9C020
    static ::StringW XsdKatmaiDateToString(::ArrayW<uint8_t> data, int offset);
    // static public System.String XsdKatmaiDateTimeToString(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9C11C
    static ::StringW XsdKatmaiDateTimeToString(::ArrayW<uint8_t> data, int offset);
    // static public System.String XsdKatmaiTimeToString(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9C364
    static ::StringW XsdKatmaiTimeToString(::ArrayW<uint8_t> data, int offset);
    // static public System.String XsdKatmaiDateOffsetToString(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9C47C
    static ::StringW XsdKatmaiDateOffsetToString(::ArrayW<uint8_t> data, int offset);
    // static public System.String XsdKatmaiDateTimeOffsetToString(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9C598
    static ::StringW XsdKatmaiDateTimeOffsetToString(::ArrayW<uint8_t> data, int offset);
    // static public System.String XsdKatmaiTimeOffsetToString(System.Byte[] data, System.Int32 offset)
    // Offset: 0x1B9C7F8
    static ::StringW XsdKatmaiTimeOffsetToString(::ArrayW<uint8_t> data, int offset);
    // static private System.Int64 GetKatmaiDateTicks(System.Byte[] data, ref System.Int32 pos)
    // Offset: 0x1B9BA50
    static int64_t GetKatmaiDateTicks(::ArrayW<uint8_t> data, ByRef<int> pos);
    // static private System.Int64 GetKatmaiTimeTicks(System.Byte[] data, ref System.Int32 pos)
    // Offset: 0x1B9BB70
    static int64_t GetKatmaiTimeTicks(::ArrayW<uint8_t> data, ByRef<int> pos);
    // static private System.Int64 GetKatmaiTimeZoneTicks(System.Byte[] data, System.Int32 pos)
    // Offset: 0x1B9BF4C
    static int64_t GetKatmaiTimeZoneTicks(::ArrayW<uint8_t> data, int pos);
    // static private System.Int32 GetFractions(System.DateTime dt)
    // Offset: 0x1B9C284
    static int GetFractions(::System::DateTime dt);
    // static private System.Int32 GetFractions(System.DateTimeOffset dt)
    // Offset: 0x1B9C718
    static int GetFractions(::System::DateTimeOffset dt);
  }; // System.Xml.BinXmlDateTime
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::BinXmlDateTime::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::Write2Dig
// Il2CppName: Write2Dig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int)>(&System::Xml::BinXmlDateTime::Write2Dig)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "Write2Dig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, val});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::Write4DigNeg
// Il2CppName: Write4DigNeg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int)>(&System::Xml::BinXmlDateTime::Write4DigNeg)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "Write4DigNeg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, val});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::Write3Dec
// Il2CppName: Write3Dec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int)>(&System::Xml::BinXmlDateTime::Write3Dec)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "Write3Dec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, val});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::WriteDate
// Il2CppName: WriteDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int, int, int)>(&System::Xml::BinXmlDateTime::WriteDate)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* yr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mnth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "WriteDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, yr, mnth, day});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::WriteTime
// Il2CppName: WriteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int, int, int, int)>(&System::Xml::BinXmlDateTime::WriteTime)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* hr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sec = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ms = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "WriteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, hr, min, sec, ms});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::WriteTimeFullPrecision
// Il2CppName: WriteTimeFullPrecision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int, int, int, int)>(&System::Xml::BinXmlDateTime::WriteTimeFullPrecision)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* hr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sec = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fraction = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "WriteTimeFullPrecision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, hr, min, sec, fraction});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::WriteTimeZone
// Il2CppName: WriteTimeZone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::System::TimeSpan)>(&System::Xml::BinXmlDateTime::WriteTimeZone)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* zone = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "WriteTimeZone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, zone});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::WriteTimeZone
// Il2CppName: WriteTimeZone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, bool, int, int)>(&System::Xml::BinXmlDateTime::WriteTimeZone)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* negTimeZone = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "WriteTimeZone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, negTimeZone, hr, min});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::BreakDownXsdDateTime
// Il2CppName: BreakDownXsdDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t, ByRef<int>, ByRef<int>, ByRef<int>, ByRef<int>, ByRef<int>, ByRef<int>, ByRef<int>)>(&System::Xml::BinXmlDateTime::BreakDownXsdDateTime)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* yr = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* mnth = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* hr = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* sec = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* ms = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "BreakDownXsdDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, yr, mnth, day, hr, min, sec, ms});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::BreakDownXsdDate
// Il2CppName: BreakDownXsdDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t, ByRef<int>, ByRef<int>, ByRef<int>, ByRef<bool>, ByRef<int>, ByRef<int>)>(&System::Xml::BinXmlDateTime::BreakDownXsdDate)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* yr = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* mnth = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* negTimeZone = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* hr = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "BreakDownXsdDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, yr, mnth, day, negTimeZone, hr, min});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::BreakDownXsdTime
// Il2CppName: BreakDownXsdTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t, ByRef<int>, ByRef<int>, ByRef<int>, ByRef<int>)>(&System::Xml::BinXmlDateTime::BreakDownXsdTime)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* hr = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* sec = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* ms = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "BreakDownXsdTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, hr, min, sec, ms});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdDateTimeToString
// Il2CppName: XsdDateTimeToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t)>(&System::Xml::BinXmlDateTime::XsdDateTimeToString)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdDateTimeToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdDateToString
// Il2CppName: XsdDateToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t)>(&System::Xml::BinXmlDateTime::XsdDateToString)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdDateToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdTimeToString
// Il2CppName: XsdTimeToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t)>(&System::Xml::BinXmlDateTime::XsdTimeToString)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdTimeToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::SqlDateTimeToString
// Il2CppName: SqlDateTimeToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int, uint)>(&System::Xml::BinXmlDateTime::SqlDateTimeToString)> {
  static const MethodInfo* get() {
    static auto* dateticks = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timeticks = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "SqlDateTimeToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateticks, timeticks});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::SqlDateTimeToDateTime
// Il2CppName: SqlDateTimeToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int, uint)>(&System::Xml::BinXmlDateTime::SqlDateTimeToDateTime)> {
  static const MethodInfo* get() {
    static auto* dateticks = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timeticks = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "SqlDateTimeToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateticks, timeticks});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::SqlSmallDateTimeToString
// Il2CppName: SqlSmallDateTimeToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int16_t, uint16_t)>(&System::Xml::BinXmlDateTime::SqlSmallDateTimeToString)> {
  static const MethodInfo* get() {
    static auto* dateticks = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* timeticks = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "SqlSmallDateTimeToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateticks, timeticks});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::SqlSmallDateTimeToDateTime
// Il2CppName: SqlSmallDateTimeToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int16_t, uint16_t)>(&System::Xml::BinXmlDateTime::SqlSmallDateTimeToDateTime)> {
  static const MethodInfo* get() {
    static auto* dateticks = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* timeticks = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "SqlSmallDateTimeToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateticks, timeticks});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiDateToDateTime
// Il2CppName: XsdKatmaiDateToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiDateToDateTime)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiDateToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiDateTimeToDateTime
// Il2CppName: XsdKatmaiDateTimeToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiDateTimeToDateTime)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiDateTimeToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiTimeToDateTime
// Il2CppName: XsdKatmaiTimeToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiTimeToDateTime)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiTimeToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToDateTimeOffset
// Il2CppName: XsdKatmaiDateOffsetToDateTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToDateTimeOffset)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiDateOffsetToDateTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToDateTimeOffset
// Il2CppName: XsdKatmaiDateTimeOffsetToDateTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToDateTimeOffset)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiDateTimeOffsetToDateTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToDateTimeOffset
// Il2CppName: XsdKatmaiTimeOffsetToDateTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToDateTimeOffset)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiTimeOffsetToDateTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiDateToString
// Il2CppName: XsdKatmaiDateToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiDateToString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiDateToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiDateTimeToString
// Il2CppName: XsdKatmaiDateTimeToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiDateTimeToString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiDateTimeToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiTimeToString
// Il2CppName: XsdKatmaiTimeToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiTimeToString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiTimeToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToString
// Il2CppName: XsdKatmaiDateOffsetToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiDateOffsetToString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiDateOffsetToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToString
// Il2CppName: XsdKatmaiDateTimeOffsetToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiDateTimeOffsetToString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiDateTimeOffsetToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToString
// Il2CppName: XsdKatmaiTimeOffsetToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::XsdKatmaiTimeOffsetToString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "XsdKatmaiTimeOffsetToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::GetKatmaiDateTicks
// Il2CppName: GetKatmaiDateTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t>, ByRef<int>)>(&System::Xml::BinXmlDateTime::GetKatmaiDateTicks)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "GetKatmaiDateTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, pos});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::GetKatmaiTimeTicks
// Il2CppName: GetKatmaiTimeTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t>, ByRef<int>)>(&System::Xml::BinXmlDateTime::GetKatmaiTimeTicks)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "GetKatmaiTimeTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, pos});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::GetKatmaiTimeZoneTicks
// Il2CppName: GetKatmaiTimeZoneTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int)>(&System::Xml::BinXmlDateTime::GetKatmaiTimeZoneTicks)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "GetKatmaiTimeZoneTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, pos});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::GetFractions
// Il2CppName: GetFractions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::DateTime)>(&System::Xml::BinXmlDateTime::GetFractions)> {
  static const MethodInfo* get() {
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "GetFractions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dt});
  }
};
// Writing MetadataGetter for method: System::Xml::BinXmlDateTime::GetFractions
// Il2CppName: GetFractions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::DateTimeOffset)>(&System::Xml::BinXmlDateTime::GetFractions)> {
  static const MethodInfo* get() {
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinXmlDateTime*), "GetFractions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dt});
  }
};

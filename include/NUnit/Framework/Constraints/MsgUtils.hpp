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
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
  // Forward declaring type: ValueFormatterFactory
  class ValueFormatterFactory;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: MsgUtils
  class MsgUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Constraints::MsgUtils);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Constraints::MsgUtils*, "NUnit.Framework.Constraints", "MsgUtils");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.MsgUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class MsgUtils : public ::Il2CppObject {
    public:
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_1
    class $$c__DisplayClass14_1;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_2
    class $$c__DisplayClass14_2;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_3
    class $$c__DisplayClass14_3;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_4
    class $$c__DisplayClass14_4;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_5
    class $$c__DisplayClass14_5;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_6
    class $$c__DisplayClass14_6;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_7
    class $$c__DisplayClass14_7;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_8
    class $$c__DisplayClass14_8;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_9
    class $$c__DisplayClass14_9;
    // Nested type: ::NUnit::Framework::Constraints::MsgUtils::$$c
    class $$c;
    // Get static field: static private readonly System.String Fmt_Null
    static ::StringW _get_Fmt_Null();
    // Set static field: static private readonly System.String Fmt_Null
    static void _set_Fmt_Null(::StringW value);
    // Get static field: static private readonly System.String Fmt_EmptyString
    static ::StringW _get_Fmt_EmptyString();
    // Set static field: static private readonly System.String Fmt_EmptyString
    static void _set_Fmt_EmptyString(::StringW value);
    // Get static field: static private readonly System.String Fmt_EmptyCollection
    static ::StringW _get_Fmt_EmptyCollection();
    // Set static field: static private readonly System.String Fmt_EmptyCollection
    static void _set_Fmt_EmptyCollection(::StringW value);
    // Get static field: static private readonly System.String Fmt_String
    static ::StringW _get_Fmt_String();
    // Set static field: static private readonly System.String Fmt_String
    static void _set_Fmt_String(::StringW value);
    // Get static field: static private readonly System.String Fmt_Char
    static ::StringW _get_Fmt_Char();
    // Set static field: static private readonly System.String Fmt_Char
    static void _set_Fmt_Char(::StringW value);
    // Get static field: static private readonly System.String Fmt_DateTime
    static ::StringW _get_Fmt_DateTime();
    // Set static field: static private readonly System.String Fmt_DateTime
    static void _set_Fmt_DateTime(::StringW value);
    // Get static field: static private readonly System.String Fmt_DateTimeOffset
    static ::StringW _get_Fmt_DateTimeOffset();
    // Set static field: static private readonly System.String Fmt_DateTimeOffset
    static void _set_Fmt_DateTimeOffset(::StringW value);
    // Get static field: static private readonly System.String Fmt_ValueType
    static ::StringW _get_Fmt_ValueType();
    // Set static field: static private readonly System.String Fmt_ValueType
    static void _set_Fmt_ValueType(::StringW value);
    // Get static field: static private readonly System.String Fmt_Default
    static ::StringW _get_Fmt_Default();
    // Set static field: static private readonly System.String Fmt_Default
    static void _set_Fmt_Default(::StringW value);
    // [DebuggerBrowsableAttribute] Offset: 0x1108A80
    // Get static field: static private NUnit.Framework.Constraints.ValueFormatter <DefaultValueFormatter>k__BackingField
    static ::NUnit::Framework::Constraints::ValueFormatter* _get_$DefaultValueFormatter$k__BackingField();
    // Set static field: static private NUnit.Framework.Constraints.ValueFormatter <DefaultValueFormatter>k__BackingField
    static void _set_$DefaultValueFormatter$k__BackingField(::NUnit::Framework::Constraints::ValueFormatter* value);
    // static public NUnit.Framework.Constraints.ValueFormatter get_DefaultValueFormatter()
    // Offset: 0x1D4F3C4
    static ::NUnit::Framework::Constraints::ValueFormatter* get_DefaultValueFormatter();
    // static public System.Void set_DefaultValueFormatter(NUnit.Framework.Constraints.ValueFormatter value)
    // Offset: 0x1D4F42C
    static void set_DefaultValueFormatter(::NUnit::Framework::Constraints::ValueFormatter* value);
    // static private System.Void .cctor()
    // Offset: 0x1D4F498
    static void _cctor();
    // static public System.Void AddFormatter(NUnit.Framework.Constraints.ValueFormatterFactory formatterFactory)
    // Offset: 0x1D4F844
    static void AddFormatter(::NUnit::Framework::Constraints::ValueFormatterFactory* formatterFactory);
    // static public System.String FormatValue(System.Object val)
    // Offset: 0x1D4D184
    static ::StringW FormatValue(::Il2CppObject* val);
    // static public System.String FormatCollection(System.Collections.IEnumerable collection, System.Int64 start, System.Int32 max)
    // Offset: 0x1D50088
    static ::StringW FormatCollection(::System::Collections::IEnumerable* collection, int64_t start, int max);
    // static private System.String FormatArray(System.Array array)
    // Offset: 0x1D5046C
    static ::StringW FormatArray(::System::Array* array);
    // static private System.String FormatString(System.String s)
    // Offset: 0x1D50934
    static ::StringW FormatString(::StringW s);
    // static private System.String FormatDouble(System.Double d)
    // Offset: 0x1D509FC
    static ::StringW FormatDouble(double d);
    // static private System.String FormatFloat(System.Single f)
    // Offset: 0x1D50B3C
    static ::StringW FormatFloat(float f);
    // static private System.String FormatDecimal(System.Decimal d)
    // Offset: 0x1D50C48
    static ::StringW FormatDecimal(::System::Decimal d);
    // static private System.String FormatDateTime(System.DateTime dt)
    // Offset: 0x1D50CE8
    static ::StringW FormatDateTime(::System::DateTime dt);
    // static private System.String FormatDateTimeOffset(System.DateTimeOffset dto)
    // Offset: 0x1D50D94
    static ::StringW FormatDateTimeOffset(::System::DateTimeOffset dto);
    // static public System.String GetTypeRepresentation(System.Object obj)
    // Offset: 0x1D4EA18
    static ::StringW GetTypeRepresentation(::Il2CppObject* obj);
    // static public System.String EscapeControlChars(System.String s)
    // Offset: 0x1D50E48
    static ::StringW EscapeControlChars(::StringW s);
    // static public System.String EscapeNullCharacters(System.String s)
    // Offset: 0x1D5106C
    static ::StringW EscapeNullCharacters(::StringW s);
    // static public System.String GetArrayIndicesAsString(System.Int32[] indices)
    // Offset: 0x1D4ED40
    static ::StringW GetArrayIndicesAsString(::ArrayW<int> indices);
    // static public System.Int32[] GetArrayIndicesFromCollectionIndex(System.Collections.IEnumerable collection, System.Int64 index)
    // Offset: 0x1D4EC08
    static ::ArrayW<int> GetArrayIndicesFromCollectionIndex(::System::Collections::IEnumerable* collection, int64_t index);
    // static public System.String ClipString(System.String s, System.Int32 maxStringLength, System.Int32 clipStart)
    // Offset: 0x1D51168
    static ::StringW ClipString(::StringW s, int maxStringLength, int clipStart);
    // static public System.Void ClipExpectedAndActual(ref System.String expected, ref System.String actual, System.Int32 maxDisplayLength, System.Int32 mismatch)
    // Offset: 0x1D512B0
    static void ClipExpectedAndActual(ByRef<::StringW> expected, ByRef<::StringW> actual, int maxDisplayLength, int mismatch);
    // static public System.Int32 FindMismatchPosition(System.String expected, System.String actual, System.Int32 istart, System.Boolean ignoreCase)
    // Offset: 0x1D4E080
    static int FindMismatchPosition(::StringW expected, ::StringW actual, int istart, bool ignoreCase);
  }; // NUnit.Framework.Constraints.MsgUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::get_DefaultValueFormatter
// Il2CppName: get_DefaultValueFormatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Constraints::ValueFormatter* (*)()>(&NUnit::Framework::Constraints::MsgUtils::get_DefaultValueFormatter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "get_DefaultValueFormatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::set_DefaultValueFormatter
// Il2CppName: set_DefaultValueFormatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::NUnit::Framework::Constraints::ValueFormatter*)>(&NUnit::Framework::Constraints::MsgUtils::set_DefaultValueFormatter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "ValueFormatter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "set_DefaultValueFormatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Constraints::MsgUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::AddFormatter
// Il2CppName: AddFormatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::NUnit::Framework::Constraints::ValueFormatterFactory*)>(&NUnit::Framework::Constraints::MsgUtils::AddFormatter)> {
  static const MethodInfo* get() {
    static auto* formatterFactory = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "ValueFormatterFactory")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "AddFormatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{formatterFactory});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FormatValue
// Il2CppName: FormatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::MsgUtils::FormatValue)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FormatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FormatCollection
// Il2CppName: FormatCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::IEnumerable*, int64_t, int)>(&NUnit::Framework::Constraints::MsgUtils::FormatCollection)> {
  static const MethodInfo* get() {
    static auto* collection = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FormatCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collection, start, max});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FormatArray
// Il2CppName: FormatArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Array*)>(&NUnit::Framework::Constraints::MsgUtils::FormatArray)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FormatArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FormatString
// Il2CppName: FormatString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&NUnit::Framework::Constraints::MsgUtils::FormatString)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FormatString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FormatDouble
// Il2CppName: FormatDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(double)>(&NUnit::Framework::Constraints::MsgUtils::FormatDouble)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FormatDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FormatFloat
// Il2CppName: FormatFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(float)>(&NUnit::Framework::Constraints::MsgUtils::FormatFloat)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FormatFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FormatDecimal
// Il2CppName: FormatDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Decimal)>(&NUnit::Framework::Constraints::MsgUtils::FormatDecimal)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FormatDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FormatDateTime
// Il2CppName: FormatDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::DateTime)>(&NUnit::Framework::Constraints::MsgUtils::FormatDateTime)> {
  static const MethodInfo* get() {
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FormatDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dt});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FormatDateTimeOffset
// Il2CppName: FormatDateTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&NUnit::Framework::Constraints::MsgUtils::FormatDateTimeOffset)> {
  static const MethodInfo* get() {
    static auto* dto = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FormatDateTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dto});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::GetTypeRepresentation
// Il2CppName: GetTypeRepresentation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::MsgUtils::GetTypeRepresentation)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "GetTypeRepresentation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::EscapeControlChars
// Il2CppName: EscapeControlChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&NUnit::Framework::Constraints::MsgUtils::EscapeControlChars)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "EscapeControlChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::EscapeNullCharacters
// Il2CppName: EscapeNullCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&NUnit::Framework::Constraints::MsgUtils::EscapeNullCharacters)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "EscapeNullCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::GetArrayIndicesAsString
// Il2CppName: GetArrayIndicesAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<int>)>(&NUnit::Framework::Constraints::MsgUtils::GetArrayIndicesAsString)> {
  static const MethodInfo* get() {
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "GetArrayIndicesAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indices});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::GetArrayIndicesFromCollectionIndex
// Il2CppName: GetArrayIndicesFromCollectionIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::System::Collections::IEnumerable*, int64_t)>(&NUnit::Framework::Constraints::MsgUtils::GetArrayIndicesFromCollectionIndex)> {
  static const MethodInfo* get() {
    static auto* collection = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerable")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "GetArrayIndicesFromCollectionIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collection, index});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::ClipString
// Il2CppName: ClipString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int, int)>(&NUnit::Framework::Constraints::MsgUtils::ClipString)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* maxStringLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* clipStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "ClipString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, maxStringLength, clipStart});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::ClipExpectedAndActual
// Il2CppName: ClipExpectedAndActual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::StringW>, ByRef<::StringW>, int, int)>(&NUnit::Framework::Constraints::MsgUtils::ClipExpectedAndActual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* maxDisplayLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mismatch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "ClipExpectedAndActual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, maxDisplayLength, mismatch});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::FindMismatchPosition
// Il2CppName: FindMismatchPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::StringW, int, bool)>(&NUnit::Framework::Constraints::MsgUtils::FindMismatchPosition)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* istart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils*), "FindMismatchPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual, istart, ignoreCase});
  }
};

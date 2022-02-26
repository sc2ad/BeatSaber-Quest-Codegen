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
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: StringEscapeHandling
  struct StringEscapeHandling;
  // Forward declaring type: IArrayPool`1<T>
  template<typename T>
  class IArrayPool_1;
  // Forward declaring type: JsonReader
  class JsonReader;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: JavaScriptUtils
  class JavaScriptUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::JavaScriptUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JavaScriptUtils*, "Newtonsoft.Json.Utilities", "JavaScriptUtils");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.JavaScriptUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 1202128
  // [NullableAttribute] Offset: 1202128
  class JavaScriptUtils : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Boolean[] SingleQuoteCharEscapeFlags
    static ::ArrayW<bool> _get_SingleQuoteCharEscapeFlags();
    // Set static field: static readonly System.Boolean[] SingleQuoteCharEscapeFlags
    static void _set_SingleQuoteCharEscapeFlags(::ArrayW<bool> value);
    // Get static field: static readonly System.Boolean[] DoubleQuoteCharEscapeFlags
    static ::ArrayW<bool> _get_DoubleQuoteCharEscapeFlags();
    // Set static field: static readonly System.Boolean[] DoubleQuoteCharEscapeFlags
    static void _set_DoubleQuoteCharEscapeFlags(::ArrayW<bool> value);
    // Get static field: static readonly System.Boolean[] HtmlCharEscapeFlags
    static ::ArrayW<bool> _get_HtmlCharEscapeFlags();
    // Set static field: static readonly System.Boolean[] HtmlCharEscapeFlags
    static void _set_HtmlCharEscapeFlags(::ArrayW<bool> value);
    // static private System.Void .cctor()
    // Offset: 0x19E61E4
    static void _cctor();
    // static public System.Boolean[] GetCharEscapeFlags(Newtonsoft.Json.StringEscapeHandling stringEscapeHandling, System.Char quoteChar)
    // Offset: 0x19E6B90
    static ::ArrayW<bool> GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Il2CppChar quoteChar);
    // static public System.Boolean ShouldEscapeJavaScriptString(System.String s, System.Boolean[] charEscapeFlags)
    // Offset: 0x19E6C6C
    static bool ShouldEscapeJavaScriptString(::StringW s, ::ArrayW<bool> charEscapeFlags);
    // static public System.Void WriteEscapedJavaScriptString(System.IO.TextWriter writer, System.String s, System.Char delimiter, System.Boolean appendDelimiters, System.Boolean[] charEscapeFlags, Newtonsoft.Json.StringEscapeHandling stringEscapeHandling, Newtonsoft.Json.IArrayPool`1<System.Char> bufferPool, ref System.Char[] writeBuffer)
    // Offset: 0x19E6D08
    static void WriteEscapedJavaScriptString(::System::IO::TextWriter* writer, ::StringW s, ::Il2CppChar delimiter, bool appendDelimiters, ::ArrayW<bool> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<::Il2CppChar>* bufferPool, ByRef<::ArrayW<::Il2CppChar>> writeBuffer);
    // static public System.String ToEscapedJavaScriptString(System.String value, System.Char delimiter, System.Boolean appendDelimiters, Newtonsoft.Json.StringEscapeHandling stringEscapeHandling)
    // Offset: 0x19E7328
    static ::StringW ToEscapedJavaScriptString(::StringW value, ::Il2CppChar delimiter, bool appendDelimiters, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling);
    // static private System.Int32 FirstCharToEscape(System.String s, System.Boolean[] charEscapeFlags, Newtonsoft.Json.StringEscapeHandling stringEscapeHandling)
    // Offset: 0x19E7260
    static int FirstCharToEscape(::StringW s, ::ArrayW<bool> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling);
    // static public System.Boolean TryGetDateFromConstructorJson(Newtonsoft.Json.JsonReader reader, out System.DateTime dateTime, out System.String errorMessage)
    // Offset: 0x19E74E8
    static bool TryGetDateFromConstructorJson(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::DateTime> dateTime, ByRef<::StringW> errorMessage);
    // static private System.Boolean TryGetDateConstructorValue(Newtonsoft.Json.JsonReader reader, out System.Nullable`1<System.Int64> integer, out System.String errorMessage)
    // Offset: 0x19E781C
    static bool TryGetDateConstructorValue(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::Nullable_1<int64_t>> integer, ByRef<::StringW> errorMessage);
  }; // Newtonsoft.Json.Utilities.JavaScriptUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::JavaScriptUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::JavaScriptUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::JavaScriptUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags
// Il2CppName: GetCharEscapeFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool> (*)(::Newtonsoft::Json::StringEscapeHandling, ::Il2CppChar)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags)> {
  static const MethodInfo* get() {
    static auto* stringEscapeHandling = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "StringEscapeHandling")->byval_arg;
    static auto* quoteChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::JavaScriptUtils*), "GetCharEscapeFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringEscapeHandling, quoteChar});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString
// Il2CppName: ShouldEscapeJavaScriptString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<bool>)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charEscapeFlags = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Boolean"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::JavaScriptUtils*), "ShouldEscapeJavaScriptString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, charEscapeFlags});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString
// Il2CppName: WriteEscapedJavaScriptString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::TextWriter*, ::StringW, ::Il2CppChar, bool, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<::Il2CppChar>*, ByRef<::ArrayW<::Il2CppChar>>)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "TextWriter")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* delimiter = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* appendDelimiters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* charEscapeFlags = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Boolean"), 1)->byval_arg;
    static auto* stringEscapeHandling = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "StringEscapeHandling")->byval_arg;
    static auto* bufferPool = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "IArrayPool`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* writeBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::JavaScriptUtils*), "WriteEscapedJavaScriptString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling, bufferPool, writeBuffer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString
// Il2CppName: ToEscapedJavaScriptString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Il2CppChar, bool, ::Newtonsoft::Json::StringEscapeHandling)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* delimiter = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* appendDelimiters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* stringEscapeHandling = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "StringEscapeHandling")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::JavaScriptUtils*), "ToEscapedJavaScriptString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, delimiter, appendDelimiters, stringEscapeHandling});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape
// Il2CppName: FirstCharToEscape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charEscapeFlags = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Boolean"), 1)->byval_arg;
    static auto* stringEscapeHandling = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "StringEscapeHandling")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::JavaScriptUtils*), "FirstCharToEscape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, charEscapeFlags, stringEscapeHandling});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson
// Il2CppName: TryGetDateFromConstructorJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ByRef<::System::DateTime>, ByRef<::StringW>)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->this_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::JavaScriptUtils*), "TryGetDateFromConstructorJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, dateTime, errorMessage});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue
// Il2CppName: TryGetDateConstructorValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ByRef<::System::Nullable_1<int64_t>>, ByRef<::StringW>)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* integer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int64")})->this_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::JavaScriptUtils*), "TryGetDateConstructorValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, integer, errorMessage});
  }
};

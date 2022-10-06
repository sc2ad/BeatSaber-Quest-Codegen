// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonConverter
#include "Newtonsoft/Json/JsonConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexOptions
  struct RegexOptions;
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: Newtonsoft::Json::Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonWriter
  class BsonWriter;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonWriter
  class JsonWriter;
  // Forward declaring type: JsonSerializer
  class JsonSerializer;
  // Forward declaring type: JsonReader
  class JsonReader;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: RegexConverter
  class RegexConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::RegexConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::RegexConverter*, "Newtonsoft.Json.Converters", "RegexConverter");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.RegexConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class RegexConverter : public ::Newtonsoft::Json::JsonConverter {
    public:
    // private System.Boolean HasFlag(System.Text.RegularExpressions.RegexOptions options, System.Text.RegularExpressions.RegexOptions flag)
    // Offset: 0x17E2A60
    bool HasFlag(::System::Text::RegularExpressions::RegexOptions options, ::System::Text::RegularExpressions::RegexOptions flag);
    // private System.Void WriteBson(Newtonsoft.Json.Bson.BsonWriter writer, System.Text.RegularExpressions.Regex regex)
    // Offset: 0x17E27A0
    void WriteBson(::Newtonsoft::Json::Bson::BsonWriter* writer, ::System::Text::RegularExpressions::Regex* regex);
    // private System.Void WriteJson(Newtonsoft.Json.JsonWriter writer, System.Text.RegularExpressions.Regex regex, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x17E28B4
    void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Text::RegularExpressions::Regex* regex, ::Newtonsoft::Json::JsonSerializer* serializer);
    // private System.Object ReadRegexString(Newtonsoft.Json.JsonReader reader)
    // Offset: 0x17E2D60
    ::Il2CppObject* ReadRegexString(::Newtonsoft::Json::JsonReader* reader);
    // private System.Text.RegularExpressions.Regex ReadRegexObject(Newtonsoft.Json.JsonReader reader, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x17E2B44
    ::System::Text::RegularExpressions::Regex* ReadRegexObject(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public System.Void .ctor()
    // Offset: 0x17E2F58
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Void JsonConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::RegexConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexConverter*, creationType>()));
    }
    // public override System.Void WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x17E26A0
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Void JsonConverter::WriteJson(Newtonsoft.Json.JsonWriter writer, System.Object value, Newtonsoft.Json.JsonSerializer serializer)
    void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppObject* value, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public override System.Object ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    // Offset: 0x17E2A80
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Object JsonConverter::ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, System.Object existingValue, Newtonsoft.Json.JsonSerializer serializer)
    ::Il2CppObject* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Il2CppObject* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);
    // public override System.Boolean CanConvert(System.Type objectType)
    // Offset: 0x17E2ED8
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Boolean JsonConverter::CanConvert(System.Type objectType)
    bool CanConvert(::System::Type* objectType);
  }; // Newtonsoft.Json.Converters.RegexConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::RegexConverter::HasFlag
// Il2CppName: HasFlag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::RegexConverter::*)(::System::Text::RegularExpressions::RegexOptions, ::System::Text::RegularExpressions::RegexOptions)>(&Newtonsoft::Json::Converters::RegexConverter::HasFlag)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexOptions")->byval_arg;
    static auto* flag = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::RegexConverter*), "HasFlag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, flag});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::RegexConverter::WriteBson
// Il2CppName: WriteBson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::Bson::BsonWriter*, ::System::Text::RegularExpressions::Regex*)>(&Newtonsoft::Json::Converters::RegexConverter::WriteBson)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonWriter")->byval_arg;
    static auto* regex = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::RegexConverter*), "WriteBson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, regex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::RegexConverter::WriteJson
// Il2CppName: WriteJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Text::RegularExpressions::Regex*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::Converters::RegexConverter::WriteJson)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* regex = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::RegexConverter*), "WriteJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, regex, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::RegexConverter::ReadRegexString
// Il2CppName: ReadRegexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::JsonReader*)>(&Newtonsoft::Json::Converters::RegexConverter::ReadRegexString)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::RegexConverter*), "ReadRegexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::RegexConverter::ReadRegexObject
// Il2CppName: ReadRegexObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Regex* (Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::Converters::RegexConverter::ReadRegexObject)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::RegexConverter*), "ReadRegexObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::RegexConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::RegexConverter::WriteJson
// Il2CppName: WriteJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::Converters::RegexConverter::WriteJson)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::RegexConverter*), "WriteJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, value, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::RegexConverter::ReadJson
// Il2CppName: ReadJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Converters::RegexConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*)>(&Newtonsoft::Json::Converters::RegexConverter::ReadJson)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* existingValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonSerializer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::RegexConverter*), "ReadJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, objectType, existingValue, serializer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::RegexConverter::CanConvert
// Il2CppName: CanConvert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::RegexConverter::*)(::System::Type*)>(&Newtonsoft::Json::Converters::RegexConverter::CanConvert)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::RegexConverter*), "CanConvert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType});
  }
};

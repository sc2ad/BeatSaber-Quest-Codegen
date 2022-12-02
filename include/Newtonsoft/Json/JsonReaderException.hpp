// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonException
#include "Newtonsoft/Json/JsonException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonReader
  class JsonReader;
  // Forward declaring type: IJsonLineInfo
  class IJsonLineInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonReaderException
  class JsonReaderException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonReaderException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonReaderException*, "Newtonsoft.Json", "JsonReaderException");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonReaderException
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10EDEB4
  class JsonReaderException : public ::Newtonsoft::Json::JsonException {
    public:
    public:
    // private System.Int32 <LineNumber>k__BackingField
    // Size: 0x4
    // Offset: 0x88
    int LineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <LinePosition>k__BackingField
    // Size: 0x4
    // Offset: 0x8C
    int LinePosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String <Path>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    ::StringW Path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <LineNumber>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$LineNumber$k__BackingField();
    // Get instance field reference: private System.Int32 <LinePosition>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$LinePosition$k__BackingField();
    // Get instance field reference: private System.String <Path>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Path$k__BackingField();
    // private System.Void set_LineNumber(System.Int32 value)
    // Offset: 0x181DF3C
    void set_LineNumber(int value);
    // private System.Void set_LinePosition(System.Int32 value)
    // Offset: 0x181DF44
    void set_LinePosition(int value);
    // private System.Void set_Path(System.String value)
    // Offset: 0x181DF4C
    void set_Path(::StringW value);
    // System.Void .ctor(System.String message, System.Exception innerException, System.String path, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x181DF5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonReaderException* New_ctor(::StringW message, ::System::Exception* innerException, ::StringW path, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonReaderException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonReaderException*, creationType>(message, innerException, path, lineNumber, linePosition)));
    }
    // static Newtonsoft.Json.JsonReaderException Create(Newtonsoft.Json.JsonReader reader, System.String message)
    // Offset: 0x18080B4
    static ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message);
    // static Newtonsoft.Json.JsonReaderException Create(Newtonsoft.Json.JsonReader reader, System.String message, System.Exception ex)
    // Offset: 0x181DF98
    static ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message, ::System::Exception* ex);
    // static Newtonsoft.Json.JsonReaderException Create(Newtonsoft.Json.IJsonLineInfo lineInfo, System.String path, System.String message, System.Exception ex)
    // Offset: 0x181E024
    static ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message, ::System::Exception* ex);
    // public System.Void .ctor()
    // Offset: 0x181DF54
    // Implemented from: Newtonsoft.Json.JsonException
    // Base method: System.Void JsonException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonReaderException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonReaderException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonReaderException*, creationType>()));
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x181DF58
    // Implemented from: Newtonsoft.Json.JsonException
    // Base method: System.Void JsonException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonReaderException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonReaderException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonReaderException*, creationType>(info, context)));
    }
  }; // Newtonsoft.Json.JsonReaderException
  #pragma pack(pop)
  static check_size<sizeof(JsonReaderException), 144 + sizeof(::StringW)> __Newtonsoft_Json_JsonReaderExceptionSizeCheck;
  static_assert(sizeof(JsonReaderException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonReaderException::set_LineNumber
// Il2CppName: set_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonReaderException::*)(int)>(&Newtonsoft::Json::JsonReaderException::set_LineNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonReaderException*), "set_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonReaderException::set_LinePosition
// Il2CppName: set_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonReaderException::*)(int)>(&Newtonsoft::Json::JsonReaderException::set_LinePosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonReaderException*), "set_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonReaderException::set_Path
// Il2CppName: set_Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonReaderException::*)(::StringW)>(&Newtonsoft::Json::JsonReaderException::set_Path)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonReaderException*), "set_Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonReaderException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonReaderException::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonReaderException* (*)(::Newtonsoft::Json::JsonReader*, ::StringW)>(&Newtonsoft::Json::JsonReaderException::Create)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonReaderException*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, message});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonReaderException::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonReaderException* (*)(::Newtonsoft::Json::JsonReader*, ::StringW, ::System::Exception*)>(&Newtonsoft::Json::JsonReaderException::Create)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonReaderException*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, message, ex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonReaderException::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonReaderException* (*)(::Newtonsoft::Json::IJsonLineInfo*, ::StringW, ::StringW, ::System::Exception*)>(&Newtonsoft::Json::JsonReaderException::Create)> {
  static const MethodInfo* get() {
    static auto* lineInfo = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "IJsonLineInfo")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonReaderException*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineInfo, path, message, ex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonReaderException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonReaderException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

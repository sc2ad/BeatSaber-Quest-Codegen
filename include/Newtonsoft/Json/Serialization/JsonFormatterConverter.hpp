// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.IFormatterConverter
#include "System/Runtime/Serialization/IFormatterConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonSerializerInternalReader
  class JsonSerializerInternalReader;
  // Forward declaring type: JsonISerializableContract
  class JsonISerializableContract;
  // Forward declaring type: JsonProperty
  class JsonProperty;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonFormatterConverter
  class JsonFormatterConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonFormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonFormatterConverter*, "Newtonsoft.Json.Serialization", "JsonFormatterConverter");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonFormatterConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JsonFormatterConverter : public ::Il2CppObject/*, public ::System::Runtime::Serialization::IFormatterConverter*/ {
    public:
    public:
    // private readonly Newtonsoft.Json.Serialization.JsonSerializerInternalReader _reader
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* reader;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*) == 0x8);
    // private readonly Newtonsoft.Json.Serialization.JsonISerializableContract _contract
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonISerializableContract*) == 0x8);
    // private readonly Newtonsoft.Json.Serialization.JsonProperty _member
    // Size: 0x8
    // Offset: 0x20
    ::Newtonsoft::Json::Serialization::JsonProperty* member;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonProperty*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IFormatterConverter
    operator ::System::Runtime::Serialization::IFormatterConverter() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IFormatterConverter*>(this);
    }
    // Creating interface conversion operator: i_IFormatterConverter
    inline ::System::Runtime::Serialization::IFormatterConverter* i_IFormatterConverter() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::IFormatterConverter*>(this);
    }
    // Get instance field reference: private readonly Newtonsoft.Json.Serialization.JsonSerializerInternalReader _reader
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*& dyn__reader();
    // Get instance field reference: private readonly Newtonsoft.Json.Serialization.JsonISerializableContract _contract
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonISerializableContract*& dyn__contract();
    // Get instance field reference: private readonly Newtonsoft.Json.Serialization.JsonProperty _member
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::JsonProperty*& dyn__member();
    // public System.Void .ctor(Newtonsoft.Json.Serialization.JsonSerializerInternalReader reader, Newtonsoft.Json.Serialization.JsonISerializableContract contract, Newtonsoft.Json.Serialization.JsonProperty member)
    // Offset: 0x1DE5268
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonFormatterConverter* New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonFormatterConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonFormatterConverter*, creationType>(reader, contract, member)));
    }
    // private T GetTokenValue(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetTokenValue(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonFormatterConverter::GetTokenValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetTokenValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, value);
    }
    // public System.Object Convert(System.Object value, System.Type type)
    // Offset: 0x1DE5308
    ::Il2CppObject* Convert(::Il2CppObject* value, ::System::Type* type);
    // public System.Boolean ToBoolean(System.Object value)
    // Offset: 0x1DE5504
    bool ToBoolean(::Il2CppObject* value);
    // public System.Int32 ToInt32(System.Object value)
    // Offset: 0x1DE5564
    int ToInt32(::Il2CppObject* value);
    // public System.Int64 ToInt64(System.Object value)
    // Offset: 0x1DE55C4
    int64_t ToInt64(::Il2CppObject* value);
    // public System.Single ToSingle(System.Object value)
    // Offset: 0x1DE5624
    float ToSingle(::Il2CppObject* value);
    // public System.String ToString(System.Object value)
    // Offset: 0x1DE5684
    ::StringW ToString(::Il2CppObject* value);
  }; // Newtonsoft.Json.Serialization.JsonFormatterConverter
  #pragma pack(pop)
  static check_size<sizeof(JsonFormatterConverter), 32 + sizeof(::Newtonsoft::Json::Serialization::JsonProperty*)> __Newtonsoft_Json_Serialization_JsonFormatterConverterSizeCheck;
  static_assert(sizeof(JsonFormatterConverter) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonFormatterConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonFormatterConverter::GetTokenValue
// Il2CppName: GetTokenValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonFormatterConverter::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::Il2CppObject*, ::System::Type*)>(&Newtonsoft::Json::Serialization::JsonFormatterConverter::Convert)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonFormatterConverter*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonFormatterConverter::ToBoolean
// Il2CppName: ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonFormatterConverter::ToBoolean)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonFormatterConverter*), "ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonFormatterConverter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonFormatterConverter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonFormatterConverter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonFormatterConverter::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonFormatterConverter::ToInt64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonFormatterConverter*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonFormatterConverter::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonFormatterConverter::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonFormatterConverter*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonFormatterConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonFormatterConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonFormatterConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};

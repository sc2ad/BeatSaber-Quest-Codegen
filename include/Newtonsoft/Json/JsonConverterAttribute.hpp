// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonConverterAttribute
  class JsonConverterAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonConverterAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConverterAttribute*, "Newtonsoft.Json", "JsonConverterAttribute");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonConverterAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1201500
  // [NullableContextAttribute] Offset: 1201500
  // [NullableAttribute] Offset: 1201500
  class JsonConverterAttribute : public ::System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Type _converterType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* converterType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // [NullableAttribute] Offset: 0x1203D98
    // private readonly System.Object[] <ConverterParameters>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> ConverterParameters;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Get instance field reference: private readonly System.Type _converterType
    ::System::Type*& dyn__converterType();
    // Get instance field reference: private readonly System.Object[] <ConverterParameters>k__BackingField
    ::ArrayW<::Il2CppObject*>& dyn_$ConverterParameters$k__BackingField();
    // public System.Type get_ConverterType()
    // Offset: 0x182EEC4
    ::System::Type* get_ConverterType();
    // public System.Object[] get_ConverterParameters()
    // Offset: 0x182EECC
    ::ArrayW<::Il2CppObject*> get_ConverterParameters();
    // public System.Void .ctor(System.Type converterType)
    // Offset: 0x182EED4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonConverterAttribute* New_ctor(::System::Type* converterType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonConverterAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonConverterAttribute*, creationType>(converterType)));
    }
  }; // Newtonsoft.Json.JsonConverterAttribute
  #pragma pack(pop)
  static check_size<sizeof(JsonConverterAttribute), 24 + sizeof(::ArrayW<::Il2CppObject*>)> __Newtonsoft_Json_JsonConverterAttributeSizeCheck;
  static_assert(sizeof(JsonConverterAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverterAttribute::get_ConverterType
// Il2CppName: get_ConverterType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::JsonConverterAttribute::*)()>(&Newtonsoft::Json::JsonConverterAttribute::get_ConverterType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonConverterAttribute*), "get_ConverterType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters
// Il2CppName: get_ConverterParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (Newtonsoft::Json::JsonConverterAttribute::*)()>(&Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonConverterAttribute*), "get_ConverterParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonConverterAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

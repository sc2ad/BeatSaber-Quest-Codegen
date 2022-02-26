// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonTypeReflector
#include "Newtonsoft/Json/Serialization/JsonTypeReflector.hpp"
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
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c__DisplayClass22_0*, "Newtonsoft.Json.Serialization", "JsonTypeReflector/<>c__DisplayClass22_0");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonTypeReflector/Newtonsoft.Json.Serialization.<>c__DisplayClass22_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JsonTypeReflector::$$c__DisplayClass22_0 : public ::Il2CppObject {
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
    // [NullableAttribute] Offset: 0x1206C58
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // [NullableAttribute] Offset: 0x1206C6C
    // public System.Func`1<System.Object> defaultConstructor
    // Size: 0x8
    // Offset: 0x18
    ::System::Func_1<::Il2CppObject*>* defaultConstructor;
    // Field size check
    static_assert(sizeof(::System::Func_1<::Il2CppObject*>*) == 0x8);
    public:
    // Get instance field reference: public System.Type type
    ::System::Type*& dyn_type();
    // Get instance field reference: public System.Func`1<System.Object> defaultConstructor
    ::System::Func_1<::Il2CppObject*>*& dyn_defaultConstructor();
    // System.Object <GetCreator>b__0(System.Object[] parameters)
    // Offset: 0x19D6324
    ::Il2CppObject* $GetCreator$b__0(::ArrayW<::Il2CppObject*> parameters);
    // public System.Void .ctor()
    // Offset: 0x19D5D08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonTypeReflector::$$c__DisplayClass22_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonTypeReflector::$$c__DisplayClass22_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonTypeReflector::$$c__DisplayClass22_0*, creationType>()));
    }
  }; // Newtonsoft.Json.Serialization.JsonTypeReflector/Newtonsoft.Json.Serialization.<>c__DisplayClass22_0
  #pragma pack(pop)
  static check_size<sizeof(JsonTypeReflector::$$c__DisplayClass22_0), 24 + sizeof(::System::Func_1<::Il2CppObject*>*)> __Newtonsoft_Json_Serialization_JsonTypeReflector_$$c__DisplayClass22_0SizeCheck;
  static_assert(sizeof(JsonTypeReflector::$$c__DisplayClass22_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::$$c__DisplayClass22_0::$GetCreator$b__0
// Il2CppName: <GetCreator>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Serialization::JsonTypeReflector::$$c__DisplayClass22_0::*)(::ArrayW<::Il2CppObject*>)>(&Newtonsoft::Json::Serialization::JsonTypeReflector::$$c__DisplayClass22_0::$GetCreator$b__0)> {
  static const MethodInfo* get() {
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonTypeReflector::$$c__DisplayClass22_0*), "<GetCreator>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonTypeReflector::$$c__DisplayClass22_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

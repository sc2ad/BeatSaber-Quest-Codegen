// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonString
  class BsonString;
  // Forward declaring type: BsonToken
  class BsonToken;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonProperty
  class BsonProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonProperty);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonProperty*, "Newtonsoft.Json.Bson", "BsonProperty");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonProperty
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BsonProperty : public ::Il2CppObject {
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
    // private Newtonsoft.Json.Bson.BsonString <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Bson::BsonString* Name;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonString*) == 0x8);
    // private Newtonsoft.Json.Bson.BsonToken <Value>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Bson::BsonToken* Value;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonToken*) == 0x8);
    public:
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonString <Name>k__BackingField
    ::Newtonsoft::Json::Bson::BsonString*& dyn_$Name$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonToken <Value>k__BackingField
    ::Newtonsoft::Json::Bson::BsonToken*& dyn_$Value$k__BackingField();
    // public System.Void set_Name(Newtonsoft.Json.Bson.BsonString value)
    // Offset: 0x1777F84
    void set_Name(::Newtonsoft::Json::Bson::BsonString* value);
    // public System.Void set_Value(Newtonsoft.Json.Bson.BsonToken value)
    // Offset: 0x1777F8C
    void set_Value(::Newtonsoft::Json::Bson::BsonToken* value);
    // public System.Void .ctor()
    // Offset: 0x1777D54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BsonProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Bson::BsonProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BsonProperty*, creationType>()));
    }
  }; // Newtonsoft.Json.Bson.BsonProperty
  #pragma pack(pop)
  static check_size<sizeof(BsonProperty), 24 + sizeof(::Newtonsoft::Json::Bson::BsonToken*)> __Newtonsoft_Json_Bson_BsonPropertySizeCheck;
  static_assert(sizeof(BsonProperty) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonProperty::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonProperty::*)(::Newtonsoft::Json::Bson::BsonString*)>(&Newtonsoft::Json::Bson::BsonProperty::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonProperty*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonProperty::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonProperty::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&Newtonsoft::Json::Bson::BsonProperty::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonProperty*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

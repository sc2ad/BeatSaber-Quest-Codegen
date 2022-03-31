// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Bson.BsonToken
#include "Newtonsoft/Json/Bson/BsonToken.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonProperty
  class BsonProperty;
  // Forward declaring type: BsonType
  struct BsonType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonObject
  class BsonObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonObject*, "Newtonsoft.Json.Bson", "BsonObject");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BsonObject : public ::Newtonsoft::Json::Bson::BsonToken/*, public ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonProperty*>*/ {
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
    // private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty> _children
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>* children;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonProperty*>
    operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonProperty*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonProperty*>*>(this);
    }
    // Deleting conversion operator: operator ::Newtonsoft::Json::Bson::BsonToken*
    constexpr operator ::Newtonsoft::Json::Bson::BsonToken*() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty> _children
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*& dyn__children();
    // public System.Void Add(System.String name, Newtonsoft.Json.Bson.BsonToken token)
    // Offset: 0x1777C84
    void Add(::StringW name, ::Newtonsoft::Json::Bson::BsonToken* token);
    // public System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> GetEnumerator()
    // Offset: 0x1777DAC
    ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonProperty*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1777E38
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override Newtonsoft.Json.Bson.BsonType get_Type()
    // Offset: 0x1777DA4
    // Implemented from: Newtonsoft.Json.Bson.BsonToken
    // Base method: Newtonsoft.Json.Bson.BsonType BsonToken::get_Type()
    ::Newtonsoft::Json::Bson::BsonType get_Type();
    // public System.Void .ctor()
    // Offset: 0x1777E3C
    // Implemented from: Newtonsoft.Json.Bson.BsonToken
    // Base method: System.Void BsonToken::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BsonObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Bson::BsonObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BsonObject*, creationType>()));
    }
  }; // Newtonsoft.Json.Bson.BsonObject
  #pragma pack(pop)
  static check_size<sizeof(BsonObject), 24 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*)> __Newtonsoft_Json_Bson_BsonObjectSizeCheck;
  static_assert(sizeof(BsonObject) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonObject::*)(::StringW, ::Newtonsoft::Json::Bson::BsonToken*)>(&Newtonsoft::Json::Bson::BsonObject::Add)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, token});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObject::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonProperty*>* (Newtonsoft::Json::Bson::BsonObject::*)()>(&Newtonsoft::Json::Bson::BsonObject::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonObject*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObject::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Newtonsoft::Json::Bson::BsonObject::*)()>(&Newtonsoft::Json::Bson::BsonObject::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonObject*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObject::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonObject::*)()>(&Newtonsoft::Json::Bson::BsonObject::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonObject*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

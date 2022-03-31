// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ResolverContractKey
  struct ResolverContractKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ResolverContractKey, "Newtonsoft.Json.Serialization", "ResolverContractKey");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Newtonsoft.Json.Serialization.ResolverContractKey
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  struct ResolverContractKey/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly System.Type _resolverType
    // Size: 0x8
    // Offset: 0x0
    ::System::Type* resolverType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Type _contractType
    // Size: 0x8
    // Offset: 0x8
    ::System::Type* contractType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating value type constructor for type: ResolverContractKey
    constexpr ResolverContractKey(::System::Type* resolverType_ = {}, ::System::Type* contractType_ = {}) noexcept : resolverType{resolverType_}, contractType{contractType_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly System.Type _resolverType
    ::System::Type*& dyn__resolverType();
    // Get instance field reference: private readonly System.Type _contractType
    ::System::Type*& dyn__contractType();
    // public System.Void .ctor(System.Type resolverType, System.Type contractType)
    // Offset: 0x203C494
    // ABORTED: conflicts with another method.  ResolverContractKey(::System::Type* resolverType, ::System::Type* contractType);
    // public System.Boolean Equals(Newtonsoft.Json.Serialization.ResolverContractKey other)
    // Offset: 0x203C588
    bool Equals(::Newtonsoft::Json::Serialization::ResolverContractKey other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x203C49C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x203C4F0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Newtonsoft.Json.Serialization.ResolverContractKey
  #pragma pack(pop)
  static check_size<sizeof(ResolverContractKey), 8 + sizeof(::System::Type*)> __Newtonsoft_Json_Serialization_ResolverContractKeySizeCheck;
  static_assert(sizeof(ResolverContractKey) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ResolverContractKey::ResolverContractKey
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ResolverContractKey::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::ResolverContractKey::*)(::Newtonsoft::Json::Serialization::ResolverContractKey)>(&Newtonsoft::Json::Serialization::ResolverContractKey::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "ResolverContractKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ResolverContractKey), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ResolverContractKey::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Serialization::ResolverContractKey::*)()>(&Newtonsoft::Json::Serialization::ResolverContractKey::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ResolverContractKey), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ResolverContractKey::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::ResolverContractKey::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::ResolverContractKey::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ResolverContractKey), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};

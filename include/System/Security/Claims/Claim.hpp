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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: ClaimsIdentity
  class ClaimsIdentity;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Forward declaring type: Claim
  class Claim;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Claims::Claim);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::Claim*, "System.Security.Claims", "Claim");
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Claims.Claim
  // [TokenAttribute] Offset: FFFFFFFF
  class Claim : public ::Il2CppObject {
    public:
    public:
    // private System.String m_issuer
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_issuer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_originalIssuer
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_originalIssuer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_type
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_value
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_valueType
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_valueType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] m_userSerializationData
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> m_userSerializationData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> m_properties
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* m_properties;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    // private System.Object m_propertyLock
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* m_propertyLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Security.Claims.ClaimsIdentity m_subject
    // Size: 0x8
    // Offset: 0x50
    ::System::Security::Claims::ClaimsIdentity* m_subject;
    // Field size check
    static_assert(sizeof(::System::Security::Claims::ClaimsIdentity*) == 0x8);
    public:
    // Get instance field reference: private System.String m_issuer
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_issuer();
    // Get instance field reference: private System.String m_originalIssuer
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_originalIssuer();
    // Get instance field reference: private System.String m_type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_type();
    // Get instance field reference: private System.String m_value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_value();
    // Get instance field reference: private System.String m_valueType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_valueType();
    // Get instance field reference: private System.Byte[] m_userSerializationData
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_userSerializationData();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.String> m_properties
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_m_properties();
    // Get instance field reference: private System.Object m_propertyLock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_propertyLock();
    // Get instance field reference: private System.Security.Claims.ClaimsIdentity m_subject
    [[deprecated("Use field access instead!")]] ::System::Security::Claims::ClaimsIdentity*& dyn_m_subject();
    // public System.Collections.Generic.IDictionary`2<System.String,System.String> get_Properties()
    // Offset: 0x1B91F48
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Properties();
    // public System.Security.Claims.ClaimsIdentity get_Subject()
    // Offset: 0x1B922F4
    ::System::Security::Claims::ClaimsIdentity* get_Subject();
    // System.Void set_Subject(System.Security.Claims.ClaimsIdentity value)
    // Offset: 0x1B922FC
    void set_Subject(::System::Security::Claims::ClaimsIdentity* value);
    // public System.String get_Type()
    // Offset: 0x1B92304
    ::StringW get_Type();
    // public System.String get_Value()
    // Offset: 0x1B9230C
    ::StringW get_Value();
    // public System.Void .ctor(System.String type, System.String value, System.String valueType, System.String issuer, System.String originalIssuer, System.Security.Claims.ClaimsIdentity subject)
    // Offset: 0x1B91CFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Claim* New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity* subject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Claims::Claim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Claim*, creationType>(type, value, valueType, issuer, originalIssuer, subject)));
    }
    // System.Void .ctor(System.String type, System.String value, System.String valueType, System.String issuer, System.String originalIssuer, System.Security.Claims.ClaimsIdentity subject, System.String propertyKey, System.String propertyValue)
    // Offset: 0x1B91D20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Claim* New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity* subject, ::StringW propertyKey, ::StringW propertyValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Claims::Claim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Claim*, creationType>(type, value, valueType, issuer, originalIssuer, subject, propertyKey, propertyValue)));
    }
    // protected System.Void .ctor(System.Security.Claims.Claim other, System.Security.Claims.ClaimsIdentity subject)
    // Offset: 0x1B92040
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Claim* New_ctor(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Claims::Claim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Claim*, creationType>(other, subject)));
    }
    // private System.Void OnDeserializedMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B92294
    void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context);
    // public System.Security.Claims.Claim Clone(System.Security.Claims.ClaimsIdentity identity)
    // Offset: 0x1B92314
    ::System::Security::Claims::Claim* Clone(::System::Security::Claims::ClaimsIdentity* identity);
    // public override System.String ToString()
    // Offset: 0x1B92384
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Security.Claims.Claim
  #pragma pack(pop)
  static check_size<sizeof(Claim), 80 + sizeof(::System::Security::Claims::ClaimsIdentity*)> __System_Security_Claims_ClaimSizeCheck;
  static_assert(sizeof(Claim) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Claims::Claim::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (System::Security::Claims::Claim::*)()>(&System::Security::Claims::Claim::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::Claim*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::Claim::get_Subject
// Il2CppName: get_Subject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Claims::ClaimsIdentity* (System::Security::Claims::Claim::*)()>(&System::Security::Claims::Claim::get_Subject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::Claim*), "get_Subject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::Claim::set_Subject
// Il2CppName: set_Subject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::Claim::*)(::System::Security::Claims::ClaimsIdentity*)>(&System::Security::Claims::Claim::set_Subject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "ClaimsIdentity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::Claim*), "set_Subject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::Claim::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Claims::Claim::*)()>(&System::Security::Claims::Claim::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::Claim*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::Claim::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Claims::Claim::*)()>(&System::Security::Claims::Claim::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::Claim*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::Claim::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::Claim::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::Claim::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::Claim::OnDeserializedMethod
// Il2CppName: OnDeserializedMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::Claim::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Security::Claims::Claim::OnDeserializedMethod)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::Claim*), "OnDeserializedMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::Claim::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Claims::Claim* (System::Security::Claims::Claim::*)(::System::Security::Claims::ClaimsIdentity*)>(&System::Security::Claims::Claim::Clone)> {
  static const MethodInfo* get() {
    static auto* identity = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "ClaimsIdentity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::Claim*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identity});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::Claim::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Claims::Claim::*)()>(&System::Security::Claims::Claim::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::Claim*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

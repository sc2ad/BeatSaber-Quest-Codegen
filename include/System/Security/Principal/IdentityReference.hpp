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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Forward declaring type: IdentityReference
  class IdentityReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Principal::IdentityReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IdentityReference*, "System.Security.Principal", "IdentityReference");
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.IdentityReference
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1058B68
  class IdentityReference : public ::Il2CppObject {
    public:
    // public System.String get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Value();
    // public System.Security.Principal.IdentityReference Translate(System.Type targetType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Principal::IdentityReference* Translate(::System::Type* targetType);
    // System.Void .ctor()
    // Offset: 0x1BBF4E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdentityReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Principal::IdentityReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdentityReference*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Security.Principal.IdentityReference
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Security.Principal.IdentityReference left, System.Security.Principal.IdentityReference right)
  // Offset: 0x1BBF4F0
  bool operator ==(::System::Security::Principal::IdentityReference* left, ::System::Security::Principal::IdentityReference& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Principal::IdentityReference::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::IdentityReference::*)()>(&System::Security::Principal::IdentityReference::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::IdentityReference*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::IdentityReference::Translate
// Il2CppName: Translate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::IdentityReference* (System::Security::Principal::IdentityReference::*)(::System::Type*)>(&System::Security::Principal::IdentityReference::Translate)> {
  static const MethodInfo* get() {
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::IdentityReference*), "Translate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetType});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::IdentityReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Principal::IdentityReference::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Principal::IdentityReference::*)(::Il2CppObject*)>(&System::Security::Principal::IdentityReference::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::IdentityReference*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::IdentityReference::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Principal::IdentityReference::*)()>(&System::Security::Principal::IdentityReference::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::IdentityReference*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::IdentityReference::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::IdentityReference::*)()>(&System::Security::Principal::IdentityReference::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::IdentityReference*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::IdentityReference::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!

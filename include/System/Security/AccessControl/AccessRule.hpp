// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.AuthorizationRule
#include "System/Security/AccessControl/AuthorizationRule.hpp"
// Including type: System.Security.AccessControl.AccessControlType
#include "System/Security/AccessControl/AccessControlType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IdentityReference
  class IdentityReference;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: AccessRule
  class AccessRule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::AccessRule);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AccessRule*, "System.Security.AccessControl", "AccessRule");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.AccessRule
  // [TokenAttribute] Offset: FFFFFFFF
  class AccessRule : public ::System::Security::AccessControl::AuthorizationRule {
    public:
    public:
    // private System.Security.AccessControl.AccessControlType type
    // Size: 0x4
    // Offset: 0x28
    ::System::Security::AccessControl::AccessControlType type;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::AccessControlType) == 0x4);
    public:
    // Creating conversion operator: operator ::System::Security::AccessControl::AccessControlType
    constexpr operator ::System::Security::AccessControl::AccessControlType() const noexcept {
      return type;
    }
    // Get instance field reference: private System.Security.AccessControl.AccessControlType type
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::AccessControlType& dyn_type();
    // public System.Security.AccessControl.AccessControlType get_AccessControlType()
    // Offset: 0x1B9A1FC
    ::System::Security::AccessControl::AccessControlType get_AccessControlType();
    // protected System.Void .ctor(System.Security.Principal.IdentityReference identity, System.Int32 accessMask, System.Boolean isInherited, System.Security.AccessControl.InheritanceFlags inheritanceFlags, System.Security.AccessControl.PropagationFlags propagationFlags, System.Security.AccessControl.AccessControlType type)
    // Offset: 0x1B99F94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AccessRule* New_ctor(::System::Security::Principal::IdentityReference* identity, int accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::AccessRule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AccessRule*, creationType>(identity, accessMask, isInherited, inheritanceFlags, propagationFlags, type)));
    }
  }; // System.Security.AccessControl.AccessRule
  #pragma pack(pop)
  static check_size<sizeof(AccessRule), 40 + sizeof(::System::Security::AccessControl::AccessControlType)> __System_Security_AccessControl_AccessRuleSizeCheck;
  static_assert(sizeof(AccessRule) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::AccessRule::get_AccessControlType
// Il2CppName: get_AccessControlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AccessControlType (System::Security::AccessControl::AccessRule::*)()>(&System::Security::AccessControl::AccessRule::get_AccessControlType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::AccessRule*), "get_AccessControlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::AccessRule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

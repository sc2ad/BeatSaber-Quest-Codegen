// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.NativeObjectSecurity
#include "System/Security/AccessControl/NativeObjectSecurity.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: AccessRule
  class AccessRule;
  // Forward declaring type: InheritanceFlags
  struct InheritanceFlags;
  // Forward declaring type: PropagationFlags
  struct PropagationFlags;
  // Forward declaring type: AccessControlType
  struct AccessControlType;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IdentityReference
  class IdentityReference;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: FileSystemSecurity
  class FileSystemSecurity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::FileSystemSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::FileSystemSecurity*, "System.Security.AccessControl", "FileSystemSecurity");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.FileSystemSecurity
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSystemSecurity : public ::System::Security::AccessControl::NativeObjectSecurity {
    public:
    // System.Void .ctor(System.Boolean isContainer, System.String name, System.Security.AccessControl.AccessControlSections includeSections)
    // Offset: 0x1B8ED64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemSecurity* New_ctor(bool isContainer, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::FileSystemSecurity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemSecurity*, creationType>(isContainer, name, includeSections)));
    }
    // public override System.Security.AccessControl.AccessRule AccessRuleFactory(System.Security.Principal.IdentityReference identityReference, System.Int32 accessMask, System.Boolean isInherited, System.Security.AccessControl.InheritanceFlags inheritanceFlags, System.Security.AccessControl.PropagationFlags propagationFlags, System.Security.AccessControl.AccessControlType type)
    // Offset: 0x1B8EFD4
    // Implemented from: System.Security.AccessControl.ObjectSecurity
    // Base method: System.Security.AccessControl.AccessRule ObjectSecurity::AccessRuleFactory(System.Security.Principal.IdentityReference identityReference, System.Int32 accessMask, System.Boolean isInherited, System.Security.AccessControl.InheritanceFlags inheritanceFlags, System.Security.AccessControl.PropagationFlags propagationFlags, System.Security.AccessControl.AccessControlType type)
    ::System::Security::AccessControl::AccessRule* AccessRuleFactory(::System::Security::Principal::IdentityReference* identityReference, int accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type);
  }; // System.Security.AccessControl.FileSystemSecurity
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::FileSystemSecurity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::FileSystemSecurity::AccessRuleFactory
// Il2CppName: AccessRuleFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AccessRule* (System::Security::AccessControl::FileSystemSecurity::*)(::System::Security::Principal::IdentityReference*, int, bool, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AccessControlType)>(&System::Security::AccessControl::FileSystemSecurity::AccessRuleFactory)> {
  static const MethodInfo* get() {
    static auto* identityReference = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "IdentityReference")->byval_arg;
    static auto* accessMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isInherited = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* inheritanceFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "InheritanceFlags")->byval_arg;
    static auto* propagationFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "PropagationFlags")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AccessControlType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::FileSystemSecurity*), "AccessRuleFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identityReference, accessMask, isInherited, inheritanceFlags, propagationFlags, type});
  }
};

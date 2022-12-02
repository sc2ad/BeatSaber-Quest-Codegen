// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.GenericSecurityDescriptor
#include "System/Security/AccessControl/GenericSecurityDescriptor.hpp"
// Including type: System.Security.AccessControl.ControlFlags
#include "System/Security/AccessControl/ControlFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: SecurityIdentifier
  class SecurityIdentifier;
}
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: SystemAcl
  class SystemAcl;
  // Forward declaring type: DiscretionaryAcl
  class DiscretionaryAcl;
  // Forward declaring type: RawSecurityDescriptor
  class RawSecurityDescriptor;
  // Forward declaring type: CommonAcl
  class CommonAcl;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: CommonSecurityDescriptor
  class CommonSecurityDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::CommonSecurityDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonSecurityDescriptor*, "System.Security.AccessControl", "CommonSecurityDescriptor");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.CommonSecurityDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class CommonSecurityDescriptor : public ::System::Security::AccessControl::GenericSecurityDescriptor {
    public:
    public:
    // private System.Boolean is_container
    // Size: 0x1
    // Offset: 0x10
    bool is_container;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean is_ds
    // Size: 0x1
    // Offset: 0x11
    bool is_ds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: is_ds and: flags
    char __padding1[0x2] = {};
    // private System.Security.AccessControl.ControlFlags flags
    // Size: 0x4
    // Offset: 0x14
    ::System::Security::AccessControl::ControlFlags flags;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::ControlFlags) == 0x4);
    // private System.Security.Principal.SecurityIdentifier owner
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Principal::SecurityIdentifier* owner;
    // Field size check
    static_assert(sizeof(::System::Security::Principal::SecurityIdentifier*) == 0x8);
    // private System.Security.Principal.SecurityIdentifier group
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Principal::SecurityIdentifier* group;
    // Field size check
    static_assert(sizeof(::System::Security::Principal::SecurityIdentifier*) == 0x8);
    // private System.Security.AccessControl.SystemAcl system_acl
    // Size: 0x8
    // Offset: 0x28
    ::System::Security::AccessControl::SystemAcl* system_acl;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::SystemAcl*) == 0x8);
    // private System.Security.AccessControl.DiscretionaryAcl discretionary_acl
    // Size: 0x8
    // Offset: 0x30
    ::System::Security::AccessControl::DiscretionaryAcl* discretionary_acl;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::DiscretionaryAcl*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean is_container
    [[deprecated("Use field access instead!")]] bool& dyn_is_container();
    // Get instance field reference: private System.Boolean is_ds
    [[deprecated("Use field access instead!")]] bool& dyn_is_ds();
    // Get instance field reference: private System.Security.AccessControl.ControlFlags flags
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::ControlFlags& dyn_flags();
    // Get instance field reference: private System.Security.Principal.SecurityIdentifier owner
    [[deprecated("Use field access instead!")]] ::System::Security::Principal::SecurityIdentifier*& dyn_owner();
    // Get instance field reference: private System.Security.Principal.SecurityIdentifier group
    [[deprecated("Use field access instead!")]] ::System::Security::Principal::SecurityIdentifier*& dyn_group();
    // Get instance field reference: private System.Security.AccessControl.SystemAcl system_acl
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::SystemAcl*& dyn_system_acl();
    // Get instance field reference: private System.Security.AccessControl.DiscretionaryAcl discretionary_acl
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::DiscretionaryAcl*& dyn_discretionary_acl();
    // public System.Security.AccessControl.DiscretionaryAcl get_DiscretionaryAcl()
    // Offset: 0x1BA2A8C
    ::System::Security::AccessControl::DiscretionaryAcl* get_DiscretionaryAcl();
    // public System.Void set_DiscretionaryAcl(System.Security.AccessControl.DiscretionaryAcl value)
    // Offset: 0x1BA2978
    void set_DiscretionaryAcl(::System::Security::AccessControl::DiscretionaryAcl* value);
    // public System.Boolean get_IsContainer()
    // Offset: 0x1BA2C08
    bool get_IsContainer();
    // public System.Boolean get_IsDS()
    // Offset: 0x1BA2C10
    bool get_IsDS();
    // public System.Security.AccessControl.SystemAcl get_SystemAcl()
    // Offset: 0x1BA2C28
    ::System::Security::AccessControl::SystemAcl* get_SystemAcl();
    // public System.Void set_SystemAcl(System.Security.AccessControl.SystemAcl value)
    // Offset: 0x1BA2944
    void set_SystemAcl(::System::Security::AccessControl::SystemAcl* value);
    // public System.Void .ctor(System.Boolean isContainer, System.Boolean isDS, System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1BA237C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonSecurityDescriptor* New_ctor(bool isContainer, bool isDS, ::ArrayW<uint8_t> binaryForm, int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::CommonSecurityDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonSecurityDescriptor*, creationType>(isContainer, isDS, binaryForm, offset)));
    }
    // public System.Void .ctor(System.Boolean isContainer, System.Boolean isDS, System.Security.AccessControl.ControlFlags flags, System.Security.Principal.SecurityIdentifier owner, System.Security.Principal.SecurityIdentifier group, System.Security.AccessControl.SystemAcl systemAcl, System.Security.AccessControl.DiscretionaryAcl discretionaryAcl)
    // Offset: 0x1BA282C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonSecurityDescriptor* New_ctor(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags, ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group, ::System::Security::AccessControl::SystemAcl* systemAcl, ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::CommonSecurityDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonSecurityDescriptor*, creationType>(isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl)));
    }
    // private System.Void Init(System.Boolean isContainer, System.Boolean isDS, System.Security.AccessControl.RawSecurityDescriptor rawSecurityDescriptor)
    // Offset: 0x1BA26BC
    void Init(bool isContainer, bool isDS, ::System::Security::AccessControl::RawSecurityDescriptor* rawSecurityDescriptor);
    // private System.Void Init(System.Boolean isContainer, System.Boolean isDS, System.Security.AccessControl.ControlFlags flags, System.Security.Principal.SecurityIdentifier owner, System.Security.Principal.SecurityIdentifier group, System.Security.AccessControl.SystemAcl systemAcl, System.Security.AccessControl.DiscretionaryAcl discretionaryAcl)
    // Offset: 0x1BA28A4
    void Init(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags, ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group, ::System::Security::AccessControl::SystemAcl* systemAcl, ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl);
    // private System.Void CheckAclConsistency(System.Security.AccessControl.CommonAcl acl)
    // Offset: 0x1BA2B0C
    void CheckAclConsistency(::System::Security::AccessControl::CommonAcl* acl);
    // public override System.Security.AccessControl.ControlFlags get_ControlFlags()
    // Offset: 0x1BA2A6C
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Security.AccessControl.ControlFlags GenericSecurityDescriptor::get_ControlFlags()
    ::System::Security::AccessControl::ControlFlags get_ControlFlags();
    // public override System.Security.Principal.SecurityIdentifier get_Group()
    // Offset: 0x1BA2BF8
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Security.Principal.SecurityIdentifier GenericSecurityDescriptor::get_Group()
    ::System::Security::Principal::SecurityIdentifier* get_Group();
    // public override System.Void set_Group(System.Security.Principal.SecurityIdentifier value)
    // Offset: 0x1BA2C00
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Void GenericSecurityDescriptor::set_Group(System.Security.Principal.SecurityIdentifier value)
    void set_Group(::System::Security::Principal::SecurityIdentifier* value);
    // public override System.Security.Principal.SecurityIdentifier get_Owner()
    // Offset: 0x1BA2C18
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Security.Principal.SecurityIdentifier GenericSecurityDescriptor::get_Owner()
    ::System::Security::Principal::SecurityIdentifier* get_Owner();
    // public override System.Void set_Owner(System.Security.Principal.SecurityIdentifier value)
    // Offset: 0x1BA2C20
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Void GenericSecurityDescriptor::set_Owner(System.Security.Principal.SecurityIdentifier value)
    void set_Owner(::System::Security::Principal::SecurityIdentifier* value);
  }; // System.Security.AccessControl.CommonSecurityDescriptor
  #pragma pack(pop)
  static check_size<sizeof(CommonSecurityDescriptor), 48 + sizeof(::System::Security::AccessControl::DiscretionaryAcl*)> __System_Security_AccessControl_CommonSecurityDescriptorSizeCheck;
  static_assert(sizeof(CommonSecurityDescriptor) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::get_DiscretionaryAcl
// Il2CppName: get_DiscretionaryAcl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::DiscretionaryAcl* (System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&System::Security::AccessControl::CommonSecurityDescriptor::get_DiscretionaryAcl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "get_DiscretionaryAcl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::set_DiscretionaryAcl
// Il2CppName: set_DiscretionaryAcl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::DiscretionaryAcl*)>(&System::Security::AccessControl::CommonSecurityDescriptor::set_DiscretionaryAcl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "DiscretionaryAcl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "set_DiscretionaryAcl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::get_IsContainer
// Il2CppName: get_IsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&System::Security::AccessControl::CommonSecurityDescriptor::get_IsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "get_IsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::get_IsDS
// Il2CppName: get_IsDS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&System::Security::AccessControl::CommonSecurityDescriptor::get_IsDS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "get_IsDS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::get_SystemAcl
// Il2CppName: get_SystemAcl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::SystemAcl* (System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&System::Security::AccessControl::CommonSecurityDescriptor::get_SystemAcl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "get_SystemAcl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::set_SystemAcl
// Il2CppName: set_SystemAcl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::SystemAcl*)>(&System::Security::AccessControl::CommonSecurityDescriptor::set_SystemAcl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "SystemAcl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "set_SystemAcl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonSecurityDescriptor::*)(bool, bool, ::System::Security::AccessControl::RawSecurityDescriptor*)>(&System::Security::AccessControl::CommonSecurityDescriptor::Init)> {
  static const MethodInfo* get() {
    static auto* isContainer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDS = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* rawSecurityDescriptor = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "RawSecurityDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isContainer, isDS, rawSecurityDescriptor});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonSecurityDescriptor::*)(bool, bool, ::System::Security::AccessControl::ControlFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::AccessControl::SystemAcl*, ::System::Security::AccessControl::DiscretionaryAcl*)>(&System::Security::AccessControl::CommonSecurityDescriptor::Init)> {
  static const MethodInfo* get() {
    static auto* isContainer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDS = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "ControlFlags")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    static auto* systemAcl = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "SystemAcl")->byval_arg;
    static auto* discretionaryAcl = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "DiscretionaryAcl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::CheckAclConsistency
// Il2CppName: CheckAclConsistency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::CommonAcl*)>(&System::Security::AccessControl::CommonSecurityDescriptor::CheckAclConsistency)> {
  static const MethodInfo* get() {
    static auto* acl = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "CommonAcl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "CheckAclConsistency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{acl});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::get_ControlFlags
// Il2CppName: get_ControlFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::ControlFlags (System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&System::Security::AccessControl::CommonSecurityDescriptor::get_ControlFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "get_ControlFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::get_Group
// Il2CppName: get_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::SecurityIdentifier* (System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&System::Security::AccessControl::CommonSecurityDescriptor::get_Group)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "get_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::set_Group
// Il2CppName: set_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier*)>(&System::Security::AccessControl::CommonSecurityDescriptor::set_Group)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "set_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::get_Owner
// Il2CppName: get_Owner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::SecurityIdentifier* (System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&System::Security::AccessControl::CommonSecurityDescriptor::get_Owner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "get_Owner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonSecurityDescriptor::set_Owner
// Il2CppName: set_Owner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier*)>(&System::Security::AccessControl::CommonSecurityDescriptor::set_Owner)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonSecurityDescriptor*), "set_Owner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};

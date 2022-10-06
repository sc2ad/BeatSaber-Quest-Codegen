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
  // Forward declaring type: RawAcl
  class RawAcl;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: RawSecurityDescriptor
  class RawSecurityDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::RawSecurityDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::RawSecurityDescriptor*, "System.Security.AccessControl", "RawSecurityDescriptor");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.RawSecurityDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class RawSecurityDescriptor : public ::System::Security::AccessControl::GenericSecurityDescriptor {
    public:
    public:
    // private System.Security.AccessControl.ControlFlags control_flags
    // Size: 0x4
    // Offset: 0x10
    ::System::Security::AccessControl::ControlFlags control_flags;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::ControlFlags) == 0x4);
    // Padding between fields: control_flags and: owner_sid
    char __padding0[0x4] = {};
    // private System.Security.Principal.SecurityIdentifier owner_sid
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Principal::SecurityIdentifier* owner_sid;
    // Field size check
    static_assert(sizeof(::System::Security::Principal::SecurityIdentifier*) == 0x8);
    // private System.Security.Principal.SecurityIdentifier group_sid
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Principal::SecurityIdentifier* group_sid;
    // Field size check
    static_assert(sizeof(::System::Security::Principal::SecurityIdentifier*) == 0x8);
    // private System.Security.AccessControl.RawAcl system_acl
    // Size: 0x8
    // Offset: 0x28
    ::System::Security::AccessControl::RawAcl* system_acl;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::RawAcl*) == 0x8);
    // private System.Security.AccessControl.RawAcl discretionary_acl
    // Size: 0x8
    // Offset: 0x30
    ::System::Security::AccessControl::RawAcl* discretionary_acl;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::RawAcl*) == 0x8);
    // private System.Byte resourcemgr_control
    // Size: 0x1
    // Offset: 0x38
    uint8_t resourcemgr_control;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Get instance field reference: private System.Security.AccessControl.ControlFlags control_flags
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::ControlFlags& dyn_control_flags();
    // Get instance field reference: private System.Security.Principal.SecurityIdentifier owner_sid
    [[deprecated("Use field access instead!")]] ::System::Security::Principal::SecurityIdentifier*& dyn_owner_sid();
    // Get instance field reference: private System.Security.Principal.SecurityIdentifier group_sid
    [[deprecated("Use field access instead!")]] ::System::Security::Principal::SecurityIdentifier*& dyn_group_sid();
    // Get instance field reference: private System.Security.AccessControl.RawAcl system_acl
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::RawAcl*& dyn_system_acl();
    // Get instance field reference: private System.Security.AccessControl.RawAcl discretionary_acl
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::RawAcl*& dyn_discretionary_acl();
    // Get instance field reference: private System.Byte resourcemgr_control
    [[deprecated("Use field access instead!")]] uint8_t& dyn_resourcemgr_control();
    // public System.Security.AccessControl.RawAcl get_DiscretionaryAcl()
    // Offset: 0x1B91B70
    ::System::Security::AccessControl::RawAcl* get_DiscretionaryAcl();
    // public System.Security.AccessControl.RawAcl get_SystemAcl()
    // Offset: 0x1B91B98
    ::System::Security::AccessControl::RawAcl* get_SystemAcl();
    // public System.Void .ctor(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1B8E538
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RawSecurityDescriptor* New_ctor(::ArrayW<uint8_t> binaryForm, int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::RawSecurityDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RawSecurityDescriptor*, creationType>(binaryForm, offset)));
    }
    // private System.UInt16 ReadUShort(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x1B91AA0
    uint16_t ReadUShort(::ArrayW<uint8_t> buffer, int offset);
    // private System.Int32 ReadInt(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x1B91AEC
    int ReadInt(::ArrayW<uint8_t> buffer, int offset);
    // public override System.Security.AccessControl.ControlFlags get_ControlFlags()
    // Offset: 0x1B91B68
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Security.AccessControl.ControlFlags GenericSecurityDescriptor::get_ControlFlags()
    ::System::Security::AccessControl::ControlFlags get_ControlFlags();
    // public override System.Security.Principal.SecurityIdentifier get_Group()
    // Offset: 0x1B91B78
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Security.Principal.SecurityIdentifier GenericSecurityDescriptor::get_Group()
    ::System::Security::Principal::SecurityIdentifier* get_Group();
    // public override System.Void set_Group(System.Security.Principal.SecurityIdentifier value)
    // Offset: 0x1B91B80
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Void GenericSecurityDescriptor::set_Group(System.Security.Principal.SecurityIdentifier value)
    void set_Group(::System::Security::Principal::SecurityIdentifier* value);
    // public override System.Security.Principal.SecurityIdentifier get_Owner()
    // Offset: 0x1B91B88
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Security.Principal.SecurityIdentifier GenericSecurityDescriptor::get_Owner()
    ::System::Security::Principal::SecurityIdentifier* get_Owner();
    // public override System.Void set_Owner(System.Security.Principal.SecurityIdentifier value)
    // Offset: 0x1B91B90
    // Implemented from: System.Security.AccessControl.GenericSecurityDescriptor
    // Base method: System.Void GenericSecurityDescriptor::set_Owner(System.Security.Principal.SecurityIdentifier value)
    void set_Owner(::System::Security::Principal::SecurityIdentifier* value);
  }; // System.Security.AccessControl.RawSecurityDescriptor
  #pragma pack(pop)
  static check_size<sizeof(RawSecurityDescriptor), 56 + sizeof(uint8_t)> __System_Security_AccessControl_RawSecurityDescriptorSizeCheck;
  static_assert(sizeof(RawSecurityDescriptor) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::get_DiscretionaryAcl
// Il2CppName: get_DiscretionaryAcl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::RawAcl* (System::Security::AccessControl::RawSecurityDescriptor::*)()>(&System::Security::AccessControl::RawSecurityDescriptor::get_DiscretionaryAcl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::RawSecurityDescriptor*), "get_DiscretionaryAcl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::get_SystemAcl
// Il2CppName: get_SystemAcl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::RawAcl* (System::Security::AccessControl::RawSecurityDescriptor::*)()>(&System::Security::AccessControl::RawSecurityDescriptor::get_SystemAcl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::RawSecurityDescriptor*), "get_SystemAcl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::ReadUShort
// Il2CppName: ReadUShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Security::AccessControl::RawSecurityDescriptor::*)(::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::RawSecurityDescriptor::ReadUShort)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::RawSecurityDescriptor*), "ReadUShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::ReadInt
// Il2CppName: ReadInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::RawSecurityDescriptor::*)(::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::RawSecurityDescriptor::ReadInt)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::RawSecurityDescriptor*), "ReadInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::get_ControlFlags
// Il2CppName: get_ControlFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::ControlFlags (System::Security::AccessControl::RawSecurityDescriptor::*)()>(&System::Security::AccessControl::RawSecurityDescriptor::get_ControlFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::RawSecurityDescriptor*), "get_ControlFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::get_Group
// Il2CppName: get_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::SecurityIdentifier* (System::Security::AccessControl::RawSecurityDescriptor::*)()>(&System::Security::AccessControl::RawSecurityDescriptor::get_Group)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::RawSecurityDescriptor*), "get_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::set_Group
// Il2CppName: set_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::RawSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier*)>(&System::Security::AccessControl::RawSecurityDescriptor::set_Group)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::RawSecurityDescriptor*), "set_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::get_Owner
// Il2CppName: get_Owner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::SecurityIdentifier* (System::Security::AccessControl::RawSecurityDescriptor::*)()>(&System::Security::AccessControl::RawSecurityDescriptor::get_Owner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::RawSecurityDescriptor*), "get_Owner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::RawSecurityDescriptor::set_Owner
// Il2CppName: set_Owner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::RawSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier*)>(&System::Security::AccessControl::RawSecurityDescriptor::set_Owner)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::RawSecurityDescriptor*), "set_Owner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};

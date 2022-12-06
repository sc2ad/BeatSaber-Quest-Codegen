// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.AccessControlSections
#include "System/Security/AccessControl/AccessControlSections.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: CommonSecurityDescriptor
  class CommonSecurityDescriptor;
  // Forward declaring type: AccessRule
  class AccessRule;
  // Forward declaring type: InheritanceFlags
  struct InheritanceFlags;
  // Forward declaring type: PropagationFlags
  struct PropagationFlags;
  // Forward declaring type: AccessControlType
  struct AccessControlType;
  // Forward declaring type: AuthorizationRuleCollection
  class AuthorizationRuleCollection;
  // Forward declaring type: QualifiedAce
  class QualifiedAce;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ReaderWriterLock
  class ReaderWriterLock;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IdentityReference
  class IdentityReference;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: ObjectSecurity
  class ObjectSecurity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::ObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ObjectSecurity*, "System.Security.AccessControl", "ObjectSecurity");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.ObjectSecurity
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectSecurity : public ::Il2CppObject {
    public:
    public:
    // System.Security.AccessControl.CommonSecurityDescriptor descriptor
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::AccessControl::CommonSecurityDescriptor* descriptor;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::CommonSecurityDescriptor*) == 0x8);
    // private System.Security.AccessControl.AccessControlSections sections_modified
    // Size: 0x4
    // Offset: 0x18
    ::System::Security::AccessControl::AccessControlSections sections_modified;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::AccessControlSections) == 0x4);
    // Padding between fields: sections_modified and: rw_lock
    char __padding1[0x4] = {};
    // private System.Threading.ReaderWriterLock rw_lock
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::ReaderWriterLock* rw_lock;
    // Field size check
    static_assert(sizeof(::System::Threading::ReaderWriterLock*) == 0x8);
    public:
    // Get instance field reference: System.Security.AccessControl.CommonSecurityDescriptor descriptor
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::CommonSecurityDescriptor*& dyn_descriptor();
    // Get instance field reference: private System.Security.AccessControl.AccessControlSections sections_modified
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::AccessControlSections& dyn_sections_modified();
    // Get instance field reference: private System.Threading.ReaderWriterLock rw_lock
    [[deprecated("Use field access instead!")]] ::System::Threading::ReaderWriterLock*& dyn_rw_lock();
    // System.Security.AccessControl.AccessControlSections get_AccessControlSectionsModified()
    // Offset: 0x1B9FB7C
    ::System::Security::AccessControl::AccessControlSections get_AccessControlSectionsModified();
    // System.Void set_AccessControlSectionsModified(System.Security.AccessControl.AccessControlSections value)
    // Offset: 0x1B9E5FC
    void set_AccessControlSectionsModified(::System::Security::AccessControl::AccessControlSections value);
    // protected System.Boolean get_IsContainer()
    // Offset: 0x1B9FCDC
    bool get_IsContainer();
    // protected System.Boolean get_IsDS()
    // Offset: 0x1B9FCF8
    bool get_IsDS();
    // protected System.Void .ctor(System.Security.AccessControl.CommonSecurityDescriptor securityDescriptor)
    // Offset: 0x1B9FAC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectSecurity* New_ctor(::System::Security::AccessControl::CommonSecurityDescriptor* securityDescriptor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::ObjectSecurity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectSecurity*, creationType>(securityDescriptor)));
    }
    // protected System.Void .ctor(System.Boolean isContainer, System.Boolean isDS)
    // Offset: 0x1B9CB78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectSecurity* New_ctor(bool isContainer, bool isDS) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::ObjectSecurity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectSecurity*, creationType>(isContainer, isDS)));
    }
    // public System.Security.AccessControl.AccessRule AccessRuleFactory(System.Security.Principal.IdentityReference identityReference, System.Int32 accessMask, System.Boolean isInherited, System.Security.AccessControl.InheritanceFlags inheritanceFlags, System.Security.AccessControl.PropagationFlags propagationFlags, System.Security.AccessControl.AccessControlType type)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::AccessControl::AccessRule* AccessRuleFactory(::System::Security::Principal::IdentityReference* identityReference, int accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type);
    // public System.Void SetSecurityDescriptorBinaryForm(System.Byte[] binaryForm, System.Security.AccessControl.AccessControlSections includeSections)
    // Offset: 0x1B9F0FC
    void SetSecurityDescriptorBinaryForm(::ArrayW<uint8_t> binaryForm, ::System::Security::AccessControl::AccessControlSections includeSections);
    // private System.Void CopySddlForm(System.Security.AccessControl.CommonSecurityDescriptor sourceDescriptor, System.Security.AccessControl.AccessControlSections includeSections)
    // Offset: 0x1B9FD14
    void CopySddlForm(::System::Security::AccessControl::CommonSecurityDescriptor* sourceDescriptor, ::System::Security::AccessControl::AccessControlSections includeSections);
    // private System.Void Reading()
    // Offset: 0x1B9FBA0
    void Reading();
    // protected System.Void ReadLock()
    // Offset: 0x1B9FE98
    void ReadLock();
    // protected System.Void ReadUnlock()
    // Offset: 0x1B9FEB8
    void ReadUnlock();
    // private System.Void Writing()
    // Offset: 0x1B9FC48
    void Writing();
    // protected System.Void WriteLock()
    // Offset: 0x1B9E5DC
    void WriteLock();
    // protected System.Void WriteUnlock()
    // Offset: 0x1B9E624
    void WriteUnlock();
    // System.Security.AccessControl.AuthorizationRuleCollection InternalGetAccessRules(System.Boolean includeExplicit, System.Boolean includeInherited, System.Type targetType)
    // Offset: 0x1B9CC70
    ::System::Security::AccessControl::AuthorizationRuleCollection* InternalGetAccessRules(bool includeExplicit, bool includeInherited, ::System::Type* targetType);
    // System.Security.AccessControl.AccessRule InternalAccessRuleFactory(System.Security.AccessControl.QualifiedAce ace, System.Type targetType, System.Security.AccessControl.AccessControlType type)
    // Offset: 0x1B9FED4
    ::System::Security::AccessControl::AccessRule* InternalAccessRuleFactory(::System::Security::AccessControl::QualifiedAce* ace, ::System::Type* targetType, ::System::Security::AccessControl::AccessControlType type);
  }; // System.Security.AccessControl.ObjectSecurity
  #pragma pack(pop)
  static check_size<sizeof(ObjectSecurity), 32 + sizeof(::System::Threading::ReaderWriterLock*)> __System_Security_AccessControl_ObjectSecuritySizeCheck;
  static_assert(sizeof(ObjectSecurity) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::get_AccessControlSectionsModified
// Il2CppName: get_AccessControlSectionsModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AccessControlSections (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::get_AccessControlSectionsModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "get_AccessControlSectionsModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::set_AccessControlSectionsModified
// Il2CppName: set_AccessControlSectionsModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)(::System::Security::AccessControl::AccessControlSections)>(&System::Security::AccessControl::ObjectSecurity::set_AccessControlSectionsModified)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AccessControlSections")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "set_AccessControlSectionsModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::get_IsContainer
// Il2CppName: get_IsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::get_IsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "get_IsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::get_IsDS
// Il2CppName: get_IsDS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::get_IsDS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "get_IsDS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::AccessRuleFactory
// Il2CppName: AccessRuleFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AccessRule* (System::Security::AccessControl::ObjectSecurity::*)(::System::Security::Principal::IdentityReference*, int, bool, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AccessControlType)>(&System::Security::AccessControl::ObjectSecurity::AccessRuleFactory)> {
  static const MethodInfo* get() {
    static auto* identityReference = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "IdentityReference")->byval_arg;
    static auto* accessMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isInherited = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* inheritanceFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "InheritanceFlags")->byval_arg;
    static auto* propagationFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "PropagationFlags")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AccessControlType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "AccessRuleFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identityReference, accessMask, isInherited, inheritanceFlags, propagationFlags, type});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::SetSecurityDescriptorBinaryForm
// Il2CppName: SetSecurityDescriptorBinaryForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)(::ArrayW<uint8_t>, ::System::Security::AccessControl::AccessControlSections)>(&System::Security::AccessControl::ObjectSecurity::SetSecurityDescriptorBinaryForm)> {
  static const MethodInfo* get() {
    static auto* binaryForm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* includeSections = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AccessControlSections")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "SetSecurityDescriptorBinaryForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryForm, includeSections});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::CopySddlForm
// Il2CppName: CopySddlForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)(::System::Security::AccessControl::CommonSecurityDescriptor*, ::System::Security::AccessControl::AccessControlSections)>(&System::Security::AccessControl::ObjectSecurity::CopySddlForm)> {
  static const MethodInfo* get() {
    static auto* sourceDescriptor = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "CommonSecurityDescriptor")->byval_arg;
    static auto* includeSections = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AccessControlSections")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "CopySddlForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceDescriptor, includeSections});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::Reading
// Il2CppName: Reading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::Reading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "Reading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::ReadLock
// Il2CppName: ReadLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::ReadLock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "ReadLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::ReadUnlock
// Il2CppName: ReadUnlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::ReadUnlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "ReadUnlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::Writing
// Il2CppName: Writing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::Writing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "Writing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::WriteLock
// Il2CppName: WriteLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::WriteLock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "WriteLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::WriteUnlock
// Il2CppName: WriteUnlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::WriteUnlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "WriteUnlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::InternalGetAccessRules
// Il2CppName: InternalGetAccessRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AuthorizationRuleCollection* (System::Security::AccessControl::ObjectSecurity::*)(bool, bool, ::System::Type*)>(&System::Security::AccessControl::ObjectSecurity::InternalGetAccessRules)> {
  static const MethodInfo* get() {
    static auto* includeExplicit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* includeInherited = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "InternalGetAccessRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includeExplicit, includeInherited, targetType});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::ObjectSecurity::InternalAccessRuleFactory
// Il2CppName: InternalAccessRuleFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AccessRule* (System::Security::AccessControl::ObjectSecurity::*)(::System::Security::AccessControl::QualifiedAce*, ::System::Type*, ::System::Security::AccessControl::AccessControlType)>(&System::Security::AccessControl::ObjectSecurity::InternalAccessRuleFactory)> {
  static const MethodInfo* get() {
    static auto* ace = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "QualifiedAce")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AccessControlType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::ObjectSecurity*), "InternalAccessRuleFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ace, targetType, type});
  }
};

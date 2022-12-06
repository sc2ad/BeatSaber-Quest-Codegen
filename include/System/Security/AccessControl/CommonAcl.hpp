// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.GenericAcl
#include "System/Security/AccessControl/GenericAcl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: RawAcl
  class RawAcl;
  // Forward declaring type: GenericAce
  class GenericAce;
  // Forward declaring type: ObjectAce
  class ObjectAce;
  // Forward declaring type: AceQualifier
  struct AceQualifier;
  // Forward declaring type: InheritanceFlags
  struct InheritanceFlags;
  // Forward declaring type: PropagationFlags
  struct PropagationFlags;
  // Forward declaring type: AuditFlags
  struct AuditFlags;
  // Forward declaring type: QualifiedAce
  class QualifiedAce;
  // Forward declaring type: AceFlags
  struct AceFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: SecurityIdentifier
  class SecurityIdentifier;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: CommonAcl
  class CommonAcl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::CommonAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonAcl*, "System.Security.AccessControl", "CommonAcl");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.CommonAcl
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 106FB2C
  class CommonAcl : public ::System::Security::AccessControl::GenericAcl {
    public:
    // Nested type: ::System::Security::AccessControl::CommonAcl::RemoveAcesCallback_1<T>
    template<typename T>
    class RemoveAcesCallback_1;
    public:
    // private System.Boolean is_aefa
    // Size: 0x1
    // Offset: 0x10
    bool is_aefa;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean is_canonical
    // Size: 0x1
    // Offset: 0x11
    bool is_canonical;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean is_container
    // Size: 0x1
    // Offset: 0x12
    bool is_container;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean is_ds
    // Size: 0x1
    // Offset: 0x13
    bool is_ds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: is_ds and: raw_acl
    char __padding3[0x4] = {};
    // System.Security.AccessControl.RawAcl raw_acl
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::AccessControl::RawAcl* raw_acl;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::RawAcl*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean is_aefa
    [[deprecated("Use field access instead!")]] bool& dyn_is_aefa();
    // Get instance field reference: private System.Boolean is_canonical
    [[deprecated("Use field access instead!")]] bool& dyn_is_canonical();
    // Get instance field reference: private System.Boolean is_container
    [[deprecated("Use field access instead!")]] bool& dyn_is_container();
    // Get instance field reference: private System.Boolean is_ds
    [[deprecated("Use field access instead!")]] bool& dyn_is_ds();
    // Get instance field reference: System.Security.AccessControl.RawAcl raw_acl
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::RawAcl*& dyn_raw_acl();
    // public System.Boolean get_IsCanonical()
    // Offset: 0x1B9B2AC
    bool get_IsCanonical();
    // public System.Boolean get_IsContainer()
    // Offset: 0x1B9B2B4
    bool get_IsContainer();
    // public System.Boolean get_IsDS()
    // Offset: 0x1B9B2BC
    bool get_IsDS();
    // System.Void set_IsAefa(System.Boolean value)
    // Offset: 0x1B9B2C4
    void set_IsAefa(bool value);
    // System.Void .ctor(System.Boolean isContainer, System.Boolean isDS, System.Security.AccessControl.RawAcl rawAcl)
    // Offset: 0x1B9AAEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonAcl* New_ctor(bool isContainer, bool isDS, ::System::Security::AccessControl::RawAcl* rawAcl) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::CommonAcl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonAcl*, creationType>(isContainer, isDS, rawAcl)));
    }
    // System.Void .ctor(System.Boolean isContainer, System.Boolean isDS, System.Byte revision, System.Int32 capacity)
    // Offset: 0x1B9B018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonAcl* New_ctor(bool isContainer, bool isDS, uint8_t revision, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::CommonAcl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonAcl*, creationType>(isContainer, isDS, revision, capacity)));
    }
    // System.Void .ctor(System.Boolean isContainer, System.Boolean isDS, System.Int32 capacity)
    // Offset: 0x1B9B0DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonAcl* New_ctor(bool isContainer, bool isDS, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::CommonAcl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonAcl*, creationType>(isContainer, isDS, capacity)));
    }
    // private System.Void Init(System.Boolean isContainer, System.Boolean isDS, System.Security.AccessControl.RawAcl rawAcl)
    // Offset: 0x1B9B000
    void Init(bool isContainer, bool isDS, ::System::Security::AccessControl::RawAcl* rawAcl);
    // System.Void RequireCanonicity()
    // Offset: 0x1B9B430
    void RequireCanonicity();
    // System.Void CanonicalizeAndClearAefa()
    // Offset: 0x1B9B1A8
    void CanonicalizeAndClearAefa();
    // System.Boolean IsAceMeaningless(System.Security.AccessControl.GenericAce ace)
    // Offset: 0x1B9B7B0
    bool IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace);
    // private System.Boolean TestCanonicity()
    // Offset: 0x1B9B4B4
    bool TestCanonicity();
    // System.Int32 GetCanonicalExplicitDenyAceCount()
    // Offset: 0x1B9BB58
    int GetCanonicalExplicitDenyAceCount();
    // System.Int32 GetCanonicalExplicitAceCount()
    // Offset: 0x1B9BE0C
    int GetCanonicalExplicitAceCount();
    // private System.Void MergeExplicitAces()
    // Offset: 0x1B9B688
    void MergeExplicitAces();
    // private System.Security.AccessControl.GenericAce MergeExplicitAcePair(System.Security.AccessControl.GenericAce ace1, System.Security.AccessControl.GenericAce ace2)
    // Offset: 0x1B9BE90
    ::System::Security::AccessControl::GenericAce* MergeExplicitAcePair(::System::Security::AccessControl::GenericAce* ace1, ::System::Security::AccessControl::GenericAce* ace2);
    // static private System.Void GetObjectAceTypeGuids(System.Security.AccessControl.ObjectAce ace, out System.Guid type, out System.Guid inheritedType)
    // Offset: 0x1B9C388
    static void GetObjectAceTypeGuids(::System::Security::AccessControl::ObjectAce* ace, ByRef<::System::Guid> type, ByRef<::System::Guid> inheritedType);
    // System.Void ApplyCanonicalSortToExplicitAces()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ApplyCanonicalSortToExplicitAces();
    // System.Void ApplyCanonicalSortToExplicitAces(System.Int32 start, System.Int32 count)
    // Offset: 0x1B9C4DC
    void ApplyCanonicalSortToExplicitAces(int start, int count);
    // System.Void RemoveAces(System.Security.AccessControl.CommonAcl/System.Security.AccessControl.RemoveAcesCallback`1<T> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void RemoveAces(::System::Security::AccessControl::CommonAcl::RemoveAcesCallback_1<T>* callback) {
      static_assert(std::is_convertible_v<T, ::System::Security::AccessControl::GenericAce*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::CommonAcl::RemoveAces");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveAces", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, callback);
    }
    // System.Void AddAce(System.Security.AccessControl.AceQualifier aceQualifier, System.Security.Principal.SecurityIdentifier sid, System.Int32 accessMask, System.Security.AccessControl.InheritanceFlags inheritanceFlags, System.Security.AccessControl.PropagationFlags propagationFlags, System.Security.AccessControl.AuditFlags auditFlags)
    // Offset: 0x1B9C6A0
    void AddAce(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid, int accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags);
    // private System.Security.AccessControl.QualifiedAce AddAceGetQualifiedAce(System.Security.AccessControl.AceQualifier aceQualifier, System.Security.Principal.SecurityIdentifier sid, System.Int32 accessMask, System.Security.AccessControl.InheritanceFlags inheritanceFlags, System.Security.AccessControl.PropagationFlags propagationFlags, System.Security.AccessControl.AuditFlags auditFlags)
    // Offset: 0x1B9C6C8
    ::System::Security::AccessControl::QualifiedAce* AddAceGetQualifiedAce(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid, int accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags);
    // private System.Void AddAce(System.Security.AccessControl.QualifiedAce newAce)
    // Offset: 0x1B9C788
    void AddAce(::System::Security::AccessControl::QualifiedAce* newAce);
    // static private System.Security.AccessControl.GenericAce CopyAce(System.Security.AccessControl.GenericAce ace)
    // Offset: 0x1B9B318
    static ::System::Security::AccessControl::GenericAce* CopyAce(::System::Security::AccessControl::GenericAce* ace);
    // System.Int32 GetAceInsertPosition(System.Security.AccessControl.AceQualifier aceQualifier)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier);
    // private System.Security.AccessControl.AceFlags GetAceFlags(System.Security.AccessControl.InheritanceFlags inheritanceFlags, System.Security.AccessControl.PropagationFlags propagationFlags, System.Security.AccessControl.AuditFlags auditFlags)
    // Offset: 0x1B9C804
    ::System::Security::AccessControl::AceFlags GetAceFlags(::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags);
    // public override System.Int32 get_BinaryLength()
    // Offset: 0x1B9B26C
    // Implemented from: System.Security.AccessControl.GenericAcl
    // Base method: System.Int32 GenericAcl::get_BinaryLength()
    int get_BinaryLength();
    // public override System.Int32 get_Count()
    // Offset: 0x1B9B28C
    // Implemented from: System.Security.AccessControl.GenericAcl
    // Base method: System.Int32 GenericAcl::get_Count()
    int get_Count();
    // public override System.Byte get_Revision()
    // Offset: 0x1B9B2D0
    // Implemented from: System.Security.AccessControl.GenericAcl
    // Base method: System.Byte GenericAcl::get_Revision()
    uint8_t get_Revision();
    // public override System.Security.AccessControl.GenericAce get_Item(System.Int32 index)
    // Offset: 0x1B9B2F0
    // Implemented from: System.Security.AccessControl.GenericAcl
    // Base method: System.Security.AccessControl.GenericAce GenericAcl::get_Item(System.Int32 index)
    ::System::Security::AccessControl::GenericAce* get_Item(int index);
    // public override System.Void set_Item(System.Int32 index, System.Security.AccessControl.GenericAce value)
    // Offset: 0x1B9B3AC
    // Implemented from: System.Security.AccessControl.GenericAcl
    // Base method: System.Void GenericAcl::set_Item(System.Int32 index, System.Security.AccessControl.GenericAce value)
    void set_Item(int index, ::System::Security::AccessControl::GenericAce* value);
    // public override System.Void GetBinaryForm(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1B9B40C
    // Implemented from: System.Security.AccessControl.GenericAcl
    // Base method: System.Void GenericAcl::GetBinaryForm(System.Byte[] binaryForm, System.Int32 offset)
    void GetBinaryForm(::ArrayW<uint8_t> binaryForm, int offset);
  }; // System.Security.AccessControl.CommonAcl
  #pragma pack(pop)
  static check_size<sizeof(CommonAcl), 24 + sizeof(::System::Security::AccessControl::RawAcl*)> __System_Security_AccessControl_CommonAclSizeCheck;
  static_assert(sizeof(CommonAcl) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::get_IsCanonical
// Il2CppName: get_IsCanonical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::get_IsCanonical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "get_IsCanonical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::get_IsContainer
// Il2CppName: get_IsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::get_IsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "get_IsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::get_IsDS
// Il2CppName: get_IsDS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::get_IsDS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "get_IsDS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::set_IsAefa
// Il2CppName: set_IsAefa
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)(bool)>(&System::Security::AccessControl::CommonAcl::set_IsAefa)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "set_IsAefa", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)(bool, bool, ::System::Security::AccessControl::RawAcl*)>(&System::Security::AccessControl::CommonAcl::Init)> {
  static const MethodInfo* get() {
    static auto* isContainer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDS = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* rawAcl = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "RawAcl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isContainer, isDS, rawAcl});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::RequireCanonicity
// Il2CppName: RequireCanonicity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::RequireCanonicity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "RequireCanonicity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::CanonicalizeAndClearAefa
// Il2CppName: CanonicalizeAndClearAefa
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::CanonicalizeAndClearAefa)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "CanonicalizeAndClearAefa", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::IsAceMeaningless
// Il2CppName: IsAceMeaningless
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::GenericAce*)>(&System::Security::AccessControl::CommonAcl::IsAceMeaningless)> {
  static const MethodInfo* get() {
    static auto* ace = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "GenericAce")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "IsAceMeaningless", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ace});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::TestCanonicity
// Il2CppName: TestCanonicity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::TestCanonicity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "TestCanonicity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::GetCanonicalExplicitDenyAceCount
// Il2CppName: GetCanonicalExplicitDenyAceCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::GetCanonicalExplicitDenyAceCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "GetCanonicalExplicitDenyAceCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::GetCanonicalExplicitAceCount
// Il2CppName: GetCanonicalExplicitAceCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::GetCanonicalExplicitAceCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "GetCanonicalExplicitAceCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::MergeExplicitAces
// Il2CppName: MergeExplicitAces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::MergeExplicitAces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "MergeExplicitAces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::MergeExplicitAcePair
// Il2CppName: MergeExplicitAcePair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::GenericAce*, ::System::Security::AccessControl::GenericAce*)>(&System::Security::AccessControl::CommonAcl::MergeExplicitAcePair)> {
  static const MethodInfo* get() {
    static auto* ace1 = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "GenericAce")->byval_arg;
    static auto* ace2 = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "GenericAce")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "MergeExplicitAcePair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ace1, ace2});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::GetObjectAceTypeGuids
// Il2CppName: GetObjectAceTypeGuids
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::AccessControl::ObjectAce*, ByRef<::System::Guid>, ByRef<::System::Guid>)>(&System::Security::AccessControl::CommonAcl::GetObjectAceTypeGuids)> {
  static const MethodInfo* get() {
    static auto* ace = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "ObjectAce")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    static auto* inheritedType = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "GetObjectAceTypeGuids", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ace, type, inheritedType});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces
// Il2CppName: ApplyCanonicalSortToExplicitAces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "ApplyCanonicalSortToExplicitAces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces
// Il2CppName: ApplyCanonicalSortToExplicitAces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)(int, int)>(&System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "ApplyCanonicalSortToExplicitAces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, count});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::RemoveAces
// Il2CppName: RemoveAces
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::AddAce
// Il2CppName: AddAce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, int, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags)>(&System::Security::AccessControl::CommonAcl::AddAce)> {
  static const MethodInfo* get() {
    static auto* aceQualifier = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AceQualifier")->byval_arg;
    static auto* sid = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    static auto* accessMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inheritanceFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "InheritanceFlags")->byval_arg;
    static auto* propagationFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "PropagationFlags")->byval_arg;
    static auto* auditFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AuditFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "AddAce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags, auditFlags});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::AddAceGetQualifiedAce
// Il2CppName: AddAceGetQualifiedAce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::QualifiedAce* (System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, int, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags)>(&System::Security::AccessControl::CommonAcl::AddAceGetQualifiedAce)> {
  static const MethodInfo* get() {
    static auto* aceQualifier = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AceQualifier")->byval_arg;
    static auto* sid = &::il2cpp_utils::GetClassFromName("System.Security.Principal", "SecurityIdentifier")->byval_arg;
    static auto* accessMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inheritanceFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "InheritanceFlags")->byval_arg;
    static auto* propagationFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "PropagationFlags")->byval_arg;
    static auto* auditFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AuditFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "AddAceGetQualifiedAce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags, auditFlags});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::AddAce
// Il2CppName: AddAce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::QualifiedAce*)>(&System::Security::AccessControl::CommonAcl::AddAce)> {
  static const MethodInfo* get() {
    static auto* newAce = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "QualifiedAce")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "AddAce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newAce});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::CopyAce
// Il2CppName: CopyAce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (*)(::System::Security::AccessControl::GenericAce*)>(&System::Security::AccessControl::CommonAcl::CopyAce)> {
  static const MethodInfo* get() {
    static auto* ace = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "GenericAce")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "CopyAce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ace});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::GetAceInsertPosition
// Il2CppName: GetAceInsertPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::AceQualifier)>(&System::Security::AccessControl::CommonAcl::GetAceInsertPosition)> {
  static const MethodInfo* get() {
    static auto* aceQualifier = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AceQualifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "GetAceInsertPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aceQualifier});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::GetAceFlags
// Il2CppName: GetAceFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AceFlags (System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags)>(&System::Security::AccessControl::CommonAcl::GetAceFlags)> {
  static const MethodInfo* get() {
    static auto* inheritanceFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "InheritanceFlags")->byval_arg;
    static auto* propagationFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "PropagationFlags")->byval_arg;
    static auto* auditFlags = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AuditFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "GetAceFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inheritanceFlags, propagationFlags, auditFlags});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::get_BinaryLength
// Il2CppName: get_BinaryLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::get_BinaryLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "get_BinaryLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::get_Revision
// Il2CppName: get_Revision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Security::AccessControl::CommonAcl::*)()>(&System::Security::AccessControl::CommonAcl::get_Revision)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "get_Revision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (System::Security::AccessControl::CommonAcl::*)(int)>(&System::Security::AccessControl::CommonAcl::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)(int, ::System::Security::AccessControl::GenericAce*)>(&System::Security::AccessControl::CommonAcl::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "GenericAce")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::CommonAcl::GetBinaryForm
// Il2CppName: GetBinaryForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::CommonAcl::*)(::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::CommonAcl::GetBinaryForm)> {
  static const MethodInfo* get() {
    static auto* binaryForm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::CommonAcl*), "GetBinaryForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryForm, offset});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Security.ISecurityEncodable
#include "System/Security/ISecurityEncodable.hpp"
// Including type: System.Security.Permissions.PermissionState
#include "System/Security/Permissions/PermissionState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: IPermission
  class IPermission;
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Security
namespace System::Security {
  // Forward declaring type: PermissionSet
  class PermissionSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::PermissionSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::PermissionSet*, "System.Security", "PermissionSet");
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.PermissionSet
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1058784
  // [MonoTODOAttribute] Offset: 1058784
  class PermissionSet : public ::Il2CppObject/*, public ::System::Collections::ICollection, public ::System::Runtime::Serialization::IDeserializationCallback, public ::System::Security::ISecurityEncodable*/ {
    public:
    public:
    // private System.Security.Permissions.PermissionState state
    // Size: 0x4
    // Offset: 0x10
    ::System::Security::Permissions::PermissionState state;
    // Field size check
    static_assert(sizeof(::System::Security::Permissions::PermissionState) == 0x4);
    // Padding between fields: state and: list
    char __padding0[0x4] = {};
    // private System.Collections.ArrayList list
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Boolean _declsec
    // Size: 0x1
    // Offset: 0x20
    bool declsec;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: declsec and: ignored
    char __padding2[0x7] = {};
    // private System.Boolean[] _ignored
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<bool> ignored;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: i_ICollection
    inline ::System::Collections::ICollection* i_ICollection() noexcept {
      return reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IDeserializationCallback
    operator ::System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: i_IDeserializationCallback
    inline ::System::Runtime::Serialization::IDeserializationCallback* i_IDeserializationCallback() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: operator ::System::Security::ISecurityEncodable
    operator ::System::Security::ISecurityEncodable() noexcept {
      return *reinterpret_cast<::System::Security::ISecurityEncodable*>(this);
    }
    // Creating interface conversion operator: i_ISecurityEncodable
    inline ::System::Security::ISecurityEncodable* i_ISecurityEncodable() noexcept {
      return reinterpret_cast<::System::Security::ISecurityEncodable*>(this);
    }
    // Get static field: static private System.Object[] psUnrestricted
    static ::ArrayW<::Il2CppObject*> _get_psUnrestricted();
    // Set static field: static private System.Object[] psUnrestricted
    static void _set_psUnrestricted(::ArrayW<::Il2CppObject*> value);
    // Get static field: static private System.Object[] action
    static ::ArrayW<::Il2CppObject*> _get_action();
    // Set static field: static private System.Object[] action
    static void _set_action(::ArrayW<::Il2CppObject*> value);
    // Get instance field reference: private System.Security.Permissions.PermissionState state
    [[deprecated("Use field access instead!")]] ::System::Security::Permissions::PermissionState& dyn_state();
    // Get instance field reference: private System.Collections.ArrayList list
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_list();
    // Get instance field reference: private System.Boolean _declsec
    [[deprecated("Use field access instead!")]] bool& dyn__declsec();
    // Get instance field reference: private System.Boolean[] _ignored
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn__ignored();
    // public System.Int32 get_Count()
    // Offset: 0x1BBE520
    int get_Count();
    // public System.Object get_SyncRoot()
    // Offset: 0x1BBE544
    ::Il2CppObject* get_SyncRoot();
    // public System.Void .ctor(System.Security.Permissions.PermissionState state)
    // Offset: 0x1BBD294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PermissionSet* New_ctor(::System::Security::Permissions::PermissionState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::PermissionSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PermissionSet*, creationType>(state)));
    }
    // System.Void .ctor(System.Security.IPermission perm)
    // Offset: 0x1BBDC20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PermissionSet* New_ctor(::System::Security::IPermission* perm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::PermissionSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PermissionSet*, creationType>(perm)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1BBE54C
    static void _cctor();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1BBDC70
    void CopyTo(::System::Array* array, int index);
    // public System.Void Demand()
    // Offset: 0x1BBDDF8
    void Demand();
    // System.Void CasOnlyDemand(System.Int32 skip)
    // Offset: 0x1BBE378
    void CasOnlyDemand(int skip);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1BBE3F8
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.Boolean IsEmpty()
    // Offset: 0x1BBE01C
    bool IsEmpty();
    // public System.Boolean IsUnrestricted()
    // Offset: 0x1BBE360
    bool IsUnrestricted();
    // public System.Security.SecurityElement ToXml()
    // Offset: 0x1BBD434
    ::System::Security::SecurityElement* ToXml();
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x1BBE548
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // System.Void .ctor()
    // Offset: 0x1BBD194
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PermissionSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::PermissionSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PermissionSet*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1BBE41C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1BBD9DC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1BBDBCC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Security.PermissionSet
  #pragma pack(pop)
  static check_size<sizeof(PermissionSet), 40 + sizeof(::ArrayW<bool>)> __System_Security_PermissionSetSizeCheck;
  static_assert(sizeof(PermissionSet) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::PermissionSet::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::PermissionSet::*)()>(&System::Security::PermissionSet::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Security::PermissionSet::*)()>(&System::Security::PermissionSet::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::PermissionSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::PermissionSet::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::PermissionSet::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::PermissionSet::*)(::System::Array*, int)>(&System::Security::PermissionSet::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::Demand
// Il2CppName: Demand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::PermissionSet::*)()>(&System::Security::PermissionSet::Demand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "Demand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::CasOnlyDemand
// Il2CppName: CasOnlyDemand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::PermissionSet::*)(int)>(&System::Security::PermissionSet::CasOnlyDemand)> {
  static const MethodInfo* get() {
    static auto* skip = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "CasOnlyDemand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skip});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Security::PermissionSet::*)()>(&System::Security::PermissionSet::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::IsEmpty
// Il2CppName: IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::PermissionSet::*)()>(&System::Security::PermissionSet::IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::IsUnrestricted
// Il2CppName: IsUnrestricted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::PermissionSet::*)()>(&System::Security::PermissionSet::IsUnrestricted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "IsUnrestricted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (System::Security::PermissionSet::*)()>(&System::Security::PermissionSet::ToXml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::PermissionSet::*)(::Il2CppObject*)>(&System::Security::PermissionSet::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::PermissionSet::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::PermissionSet::*)()>(&System::Security::PermissionSet::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::PermissionSet::*)(::Il2CppObject*)>(&System::Security::PermissionSet::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Security::PermissionSet::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::PermissionSet::*)()>(&System::Security::PermissionSet::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::PermissionSet*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

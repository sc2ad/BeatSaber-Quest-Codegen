// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Oid
  class Oid;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidCollection
  class OidCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::OidCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::OidCollection*, "System.Security.Cryptography", "OidCollection");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.OidCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 107BD6C
  class OidCollection : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    public:
    // private System.Collections.ArrayList m_list
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* m_list;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: i_ICollection
    inline ::System::Collections::ICollection* i_ICollection() noexcept {
      return reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::ArrayList*
    constexpr operator ::System::Collections::ArrayList*() const noexcept {
      return m_list;
    }
    // Get instance field reference: private System.Collections.ArrayList m_list
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_m_list();
    // public System.Security.Cryptography.Oid get_Item(System.Int32 index)
    // Offset: 0x1C91EC4
    ::System::Security::Cryptography::Oid* get_Item(int index);
    // public System.Int32 get_Count()
    // Offset: 0x1C91F4C
    int get_Count();
    // public System.Object get_SyncRoot()
    // Offset: 0x1C92208
    ::Il2CppObject* get_SyncRoot();
    // public System.Void .ctor()
    // Offset: 0x1C91E34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OidCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::OidCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OidCollection*, creationType>()));
    }
    // public System.Int32 Add(System.Security.Cryptography.Oid oid)
    // Offset: 0x1C91EA0
    int Add(::System::Security::Cryptography::Oid* oid);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1C91F70
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1C92010
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index);
  }; // System.Security.Cryptography.OidCollection
  #pragma pack(pop)
  static check_size<sizeof(OidCollection), 16 + sizeof(::System::Collections::ArrayList*)> __System_Security_Cryptography_OidCollectionSizeCheck;
  static_assert(sizeof(OidCollection) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::OidCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::Oid* (System::Security::Cryptography::OidCollection::*)(int)>(&System::Security::Cryptography::OidCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::OidCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::OidCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::OidCollection::*)()>(&System::Security::Cryptography::OidCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::OidCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::OidCollection::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Security::Cryptography::OidCollection::*)()>(&System::Security::Cryptography::OidCollection::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::OidCollection*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::OidCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::OidCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::OidCollection::*)(::System::Security::Cryptography::Oid*)>(&System::Security::Cryptography::OidCollection::Add)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "Oid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::OidCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::OidCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Security::Cryptography::OidCollection::*)()>(&System::Security::Cryptography::OidCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::OidCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::OidCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::OidCollection::*)(::System::Array*, int)>(&System::Security::Cryptography::OidCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::OidCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};

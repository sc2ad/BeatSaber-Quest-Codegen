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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: ReadOnlyCollectionBase
  class ReadOnlyCollectionBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::ReadOnlyCollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ReadOnlyCollectionBase*, "System.Collections", "ReadOnlyCollectionBase");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ReadOnlyCollectionBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 105B5F4
  class ReadOnlyCollectionBase : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    public:
    // private System.Collections.ArrayList list
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* list;
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
      return list;
    }
    // Get instance field reference: private System.Collections.ArrayList list
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_list();
    // protected System.Collections.ArrayList get_InnerList()
    // Offset: 0x1D44DEC
    ::System::Collections::ArrayList* get_InnerList();
    // public System.Int32 get_Count()
    // Offset: 0x1D44E58
    int get_Count();
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x1D44E80
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1D44EA8
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1D44EE8
    ::System::Collections::IEnumerator* GetEnumerator();
    // protected System.Void .ctor()
    // Offset: 0x1D44F10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadOnlyCollectionBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ReadOnlyCollectionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadOnlyCollectionBase*, creationType>()));
    }
  }; // System.Collections.ReadOnlyCollectionBase
  #pragma pack(pop)
  static check_size<sizeof(ReadOnlyCollectionBase), 16 + sizeof(::System::Collections::ArrayList*)> __System_Collections_ReadOnlyCollectionBaseSizeCheck;
  static_assert(sizeof(ReadOnlyCollectionBase) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::ReadOnlyCollectionBase::get_InnerList
// Il2CppName: get_InnerList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Collections::ReadOnlyCollectionBase::*)()>(&System::Collections::ReadOnlyCollectionBase::get_InnerList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ReadOnlyCollectionBase*), "get_InnerList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ReadOnlyCollectionBase::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::ReadOnlyCollectionBase::*)()>(&System::Collections::ReadOnlyCollectionBase::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ReadOnlyCollectionBase*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ReadOnlyCollectionBase::*)()>(&System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ReadOnlyCollectionBase*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ReadOnlyCollectionBase::*)(::System::Array*, int)>(&System::Collections::ReadOnlyCollectionBase::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ReadOnlyCollectionBase*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::ReadOnlyCollectionBase::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::ReadOnlyCollectionBase::*)()>(&System::Collections::ReadOnlyCollectionBase::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ReadOnlyCollectionBase*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ReadOnlyCollectionBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

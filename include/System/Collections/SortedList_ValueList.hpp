// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::SortedList::ValueList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList::ValueList*, "System.Collections", "SortedList/ValueList");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.SortedList/System.Collections.ValueList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 11AE2E4
  class SortedList::ValueList : public ::Il2CppObject/*, public ::System::Collections::IList*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.SortedList sortedList
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::SortedList* sortedList;
    // Field size check
    static_assert(sizeof(::System::Collections::SortedList*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IList
    operator ::System::Collections::IList() noexcept {
      return *reinterpret_cast<::System::Collections::IList*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::SortedList*
    constexpr operator ::System::Collections::SortedList*() const noexcept {
      return sortedList;
    }
    // Get instance field reference: private System.Collections.SortedList sortedList
    ::System::Collections::SortedList*& dyn_sortedList();
    // public System.Int32 get_Count()
    // Offset: 0x1CC88B0
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x1CC88CC
    bool get_IsReadOnly();
    // public System.Boolean get_IsFixedSize()
    // Offset: 0x1CC88D4
    bool get_IsFixedSize();
    // public System.Object get_SyncRoot()
    // Offset: 0x1CC88DC
    ::Il2CppObject* get_SyncRoot();
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0x1CC8B94
    ::Il2CppObject* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x1CC8BB8
    void set_Item(int index, ::Il2CppObject* value);
    // System.Void .ctor(System.Collections.SortedList sortedList)
    // Offset: 0x1CC68BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortedList::ValueList* New_ctor(::System::Collections::SortedList* sortedList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::SortedList::ValueList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortedList::ValueList*, creationType>(sortedList)));
    }
    // public System.Int32 Add(System.Object key)
    // Offset: 0x1CC8900
    int Add(::Il2CppObject* key);
    // public System.Void Clear()
    // Offset: 0x1CC8980
    void Clear();
    // public System.Boolean Contains(System.Object value)
    // Offset: 0x1CC8A00
    bool Contains(::Il2CppObject* value);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x1CC8A24
    void CopyTo(::System::Array* array, int arrayIndex);
    // public System.Void Insert(System.Int32 index, System.Object value)
    // Offset: 0x1CC8B14
    void Insert(int index, ::Il2CppObject* value);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1CC8C38
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.Int32 IndexOf(System.Object value)
    // Offset: 0x1CC8CD4
    int IndexOf(::Il2CppObject* value);
    // public System.Void Remove(System.Object value)
    // Offset: 0x1CC8D5C
    void Remove(::Il2CppObject* value);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x1CC8DDC
    void RemoveAt(int index);
  }; // System.Collections.SortedList/System.Collections.ValueList
  #pragma pack(pop)
  static check_size<sizeof(SortedList::ValueList), 16 + sizeof(::System::Collections::SortedList*)> __System_Collections_SortedList_ValueListSizeCheck;
  static_assert(sizeof(SortedList::ValueList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::get_IsFixedSize
// Il2CppName: get_IsFixedSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::get_IsFixedSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "get_IsFixedSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::SortedList::ValueList::*)(int)>(&System::Collections::SortedList::ValueList::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(int, ::Il2CppObject*)>(&System::Collections::SortedList::ValueList::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::ValueList::*)(::Il2CppObject*)>(&System::Collections::SortedList::ValueList::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::SortedList::ValueList::*)(::Il2CppObject*)>(&System::Collections::SortedList::ValueList::Contains)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(::System::Array*, int)>(&System::Collections::SortedList::ValueList::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(int, ::Il2CppObject*)>(&System::Collections::SortedList::ValueList::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::SortedList::ValueList::*)()>(&System::Collections::SortedList::ValueList::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::SortedList::ValueList::*)(::Il2CppObject*)>(&System::Collections::SortedList::ValueList::IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(::Il2CppObject*)>(&System::Collections::SortedList::ValueList::Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::SortedList::ValueList::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::SortedList::ValueList::*)(int)>(&System::Collections::SortedList::ValueList::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::SortedList::ValueList*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: EventDescriptor
  class EventDescriptor;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: EventDescriptorCollection
  class EventDescriptorCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::EventDescriptorCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EventDescriptorCollection*, "System.ComponentModel", "EventDescriptorCollection");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.EventDescriptorCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1199C0C
  // [DefaultMemberAttribute] Offset: 1199C0C
  class EventDescriptorCollection : public ::Il2CppObject/*, public ::System::Collections::IList*/ {
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
    // private System.ComponentModel.EventDescriptor[] events
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::ComponentModel::EventDescriptor*> events;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::ComponentModel::EventDescriptor*>) == 0x8);
    // private System.String[] namedSort
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> namedSort;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Collections.IComparer comparer
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(::System::Collections::IComparer*) == 0x8);
    // private System.Boolean eventsOwned
    // Size: 0x1
    // Offset: 0x28
    bool eventsOwned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean needSort
    // Size: 0x1
    // Offset: 0x29
    bool needSort;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: needSort and: eventCount
    char __padding4[0x2] = {};
    // private System.Int32 eventCount
    // Size: 0x4
    // Offset: 0x2C
    int eventCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean readOnly
    // Size: 0x1
    // Offset: 0x30
    bool readOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IList
    operator ::System::Collections::IList() noexcept {
      return *reinterpret_cast<::System::Collections::IList*>(this);
    }
    // Get static field: static public readonly System.ComponentModel.EventDescriptorCollection Empty
    static ::System::ComponentModel::EventDescriptorCollection* _get_Empty();
    // Set static field: static public readonly System.ComponentModel.EventDescriptorCollection Empty
    static void _set_Empty(::System::ComponentModel::EventDescriptorCollection* value);
    // Get instance field reference: private System.ComponentModel.EventDescriptor[] events
    ::ArrayW<::System::ComponentModel::EventDescriptor*>& dyn_events();
    // Get instance field reference: private System.String[] namedSort
    ::ArrayW<::StringW>& dyn_namedSort();
    // Get instance field reference: private System.Collections.IComparer comparer
    ::System::Collections::IComparer*& dyn_comparer();
    // Get instance field reference: private System.Boolean eventsOwned
    bool& dyn_eventsOwned();
    // Get instance field reference: private System.Boolean needSort
    bool& dyn_needSort();
    // Get instance field reference: private System.Int32 eventCount
    int& dyn_eventCount();
    // Get instance field reference: private System.Boolean readOnly
    bool& dyn_readOnly();
    // public System.Int32 get_Count()
    // Offset: 0x1DF7434
    int get_Count();
    // public System.ComponentModel.EventDescriptor get_Item(System.Int32 index)
    // Offset: 0x1DF743C
    ::System::ComponentModel::EventDescriptor* get_Item(int index);
    // private System.Int32 System.Collections.ICollection.get_Count()
    // Offset: 0x1DF7FE8
    int System_Collections_ICollection_get_Count();
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x1DF7FF0
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0x1DF7FFC
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0x1DF800C
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0x1DF8480
    bool System_Collections_IList_get_IsReadOnly();
    // private System.Boolean System.Collections.IList.get_IsFixedSize()
    // Offset: 0x1DF8488
    bool System_Collections_IList_get_IsFixedSize();
    // public System.Void .ctor(System.ComponentModel.EventDescriptor[] events)
    // Offset: 0x1DF7370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventDescriptorCollection* New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*> events) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::EventDescriptorCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventDescriptorCollection*, creationType>(events)));
    }
    // public System.Void .ctor(System.ComponentModel.EventDescriptor[] events, System.Boolean readOnly)
    // Offset: 0x1DF7408
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventDescriptorCollection* New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*> events, bool readOnly) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::EventDescriptorCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventDescriptorCollection*, creationType>(events, readOnly)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1DF8490
    static void _cctor();
    // public System.Int32 Add(System.ComponentModel.EventDescriptor value)
    // Offset: 0x1DF75AC
    int Add(::System::ComponentModel::EventDescriptor* value);
    // public System.Void Clear()
    // Offset: 0x1DF77B0
    void Clear();
    // public System.Boolean Contains(System.ComponentModel.EventDescriptor value)
    // Offset: 0x1DF782C
    bool Contains(::System::ComponentModel::EventDescriptor* value);
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1DF78B0
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index);
    // private System.Void EnsureEventsOwned()
    // Offset: 0x1DF74F8
    void EnsureEventsOwned();
    // private System.Void EnsureSize(System.Int32 sizeNeeded)
    // Offset: 0x1DF76A4
    void EnsureSize(int sizeNeeded);
    // public System.Int32 IndexOf(System.ComponentModel.EventDescriptor value)
    // Offset: 0x1DF7848
    int IndexOf(::System::ComponentModel::EventDescriptor* value);
    // public System.Void Insert(System.Int32 index, System.ComponentModel.EventDescriptor value)
    // Offset: 0x1DF7BF0
    void Insert(int index, ::System::ComponentModel::EventDescriptor* value);
    // public System.Void Remove(System.ComponentModel.EventDescriptor value)
    // Offset: 0x1DF7D08
    void Remove(::System::ComponentModel::EventDescriptor* value);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x1DF7DB8
    void RemoveAt(int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1DF7EAC
    ::System::Collections::IEnumerator* GetEnumerator();
    // protected System.Void InternalSort(System.String[] names)
    // Offset: 0x1DF78F8
    void InternalSort(::ArrayW<::StringW> names);
    // protected System.Void InternalSort(System.Collections.IComparer sorter)
    // Offset: 0x1DF7F54
    void InternalSort(::System::Collections::IComparer* sorter);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1DF7FF8
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0x1DF8180
    int System_Collections_IList_Add(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Clear()
    // Offset: 0x1DF8214
    void System_Collections_IList_Clear();
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0x1DF8218
    bool System_Collections_IList_Contains(::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0x1DF82B8
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0x1DF834C
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0x1DF83E8
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // private System.Void System.Collections.IList.RemoveAt(System.Int32 index)
    // Offset: 0x1DF847C
    void System_Collections_IList_RemoveAt(int index);
  }; // System.ComponentModel.EventDescriptorCollection
  #pragma pack(pop)
  static check_size<sizeof(EventDescriptorCollection), 48 + sizeof(bool)> __System_ComponentModel_EventDescriptorCollectionSizeCheck;
  static_assert(sizeof(EventDescriptorCollection) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (System::ComponentModel::EventDescriptorCollection::*)(int)>(&System::ComponentModel::EventDescriptorCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_Count
// Il2CppName: System.Collections.ICollection.get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.ICollection.get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_Item
// Il2CppName: System.Collections.IList.get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::EventDescriptorCollection::*)(int)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_set_Item
// Il2CppName: System.Collections.IList.set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int, ::Il2CppObject*)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsReadOnly
// Il2CppName: System.Collections.IList.get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsFixedSize
// Il2CppName: System.Collections.IList.get_IsFixedSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsFixedSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.get_IsFixedSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::EventDescriptorCollection::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&System::ComponentModel::EventDescriptorCollection::Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "EventDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&System::ComponentModel::EventDescriptorCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "EventDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(::System::Array*, int)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::EnsureEventsOwned
// Il2CppName: EnsureEventsOwned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::EnsureEventsOwned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "EnsureEventsOwned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::EnsureSize
// Il2CppName: EnsureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int)>(&System::ComponentModel::EventDescriptorCollection::EnsureSize)> {
  static const MethodInfo* get() {
    static auto* sizeNeeded = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "EnsureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sizeNeeded});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&System::ComponentModel::EventDescriptorCollection::IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "EventDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int, ::System::ComponentModel::EventDescriptor*)>(&System::ComponentModel::EventDescriptorCollection::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "EventDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&System::ComponentModel::EventDescriptorCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "EventDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int)>(&System::ComponentModel::EventDescriptorCollection::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::InternalSort
// Il2CppName: InternalSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<::StringW>)>(&System::ComponentModel::EventDescriptorCollection::InternalSort)> {
  static const MethodInfo* get() {
    static auto* names = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "InternalSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{names});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::InternalSort
// Il2CppName: InternalSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(::System::Collections::IComparer*)>(&System::ComponentModel::EventDescriptorCollection::InternalSort)> {
  static const MethodInfo* get() {
    static auto* sorter = &::il2cpp_utils::GetClassFromName("System.Collections", "IComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "InternalSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sorter});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Add
// Il2CppName: System.Collections.IList.Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::EventDescriptorCollection::*)(::Il2CppObject*)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Clear
// Il2CppName: System.Collections.IList.Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)()>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Contains
// Il2CppName: System.Collections.IList.Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EventDescriptorCollection::*)(::Il2CppObject*)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Contains)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_IndexOf
// Il2CppName: System.Collections.IList.IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::EventDescriptorCollection::*)(::Il2CppObject*)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Insert
// Il2CppName: System.Collections.IList.Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int, ::Il2CppObject*)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Remove
// Il2CppName: System.Collections.IList.Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(::Il2CppObject*)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EventDescriptorCollection::System_Collections_IList_RemoveAt
// Il2CppName: System.Collections.IList.RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptorCollection::*)(int)>(&System::ComponentModel::EventDescriptorCollection::System_Collections_IList_RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EventDescriptorCollection*), "System.Collections.IList.RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};

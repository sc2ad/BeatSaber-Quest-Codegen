// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.StringCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E69ED8
  class StringCollection : public ::Il2CppObject/*, public System::Collections::IList*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Collections.ArrayList data
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* data;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::IList
    operator System::Collections::IList() noexcept {
      return *reinterpret_cast<System::Collections::IList*>(this);
    }
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return data;
    }
    // Get instance field reference: private System.Collections.ArrayList data
    System::Collections::ArrayList*& dyn_data();
    // public System.String get_Item(System.Int32 index)
    // Offset: 0x1A20F90
    ::Il2CppString* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.String value)
    // Offset: 0x1A2101C
    void set_Item(int index, ::Il2CppString* value);
    // public System.Int32 get_Count()
    // Offset: 0x1A21040
    int get_Count();
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0x1A21064
    bool System_Collections_IList_get_IsReadOnly();
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0x1A2118C
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0x1A21190
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // public System.Int32 Add(System.String value)
    // Offset: 0x1A2106C
    int Add(::Il2CppString* value);
    // public System.Void Clear()
    // Offset: 0x1A21090
    void Clear();
    // public System.Boolean Contains(System.String value)
    // Offset: 0x1A210B4
    bool Contains(::Il2CppString* value);
    // public System.Void CopyTo(System.String[] array, System.Int32 index)
    // Offset: 0x1A210D8
    void CopyTo(::ArrayW<::Il2CppString*> array, int index);
    // public System.Int32 IndexOf(System.String value)
    // Offset: 0x1A210FC
    int IndexOf(::Il2CppString* value);
    // public System.Void Insert(System.Int32 index, System.String value)
    // Offset: 0x1A21120
    void Insert(int index, ::Il2CppString* value);
    // public System.Void Remove(System.String value)
    // Offset: 0x1A21144
    void Remove(::Il2CppString* value);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x1A21168
    void RemoveAt(int index);
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0x1A21224
    int System_Collections_IList_Add(::Il2CppObject* value);
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0x1A212B0
    bool System_Collections_IList_Contains(::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0x1A2133C
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0x1A213C8
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0x1A2145C
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1A214E8
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1A2150C
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x1A21530
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::StringCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringCollection*, creationType>()));
    }
  }; // System.Collections.Specialized.StringCollection
  #pragma pack(pop)
  static check_size<sizeof(StringCollection), 16 + sizeof(System::Collections::ArrayList*)> __System_Collections_Specialized_StringCollectionSizeCheck;
  static_assert(sizeof(StringCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::StringCollection*, "System.Collections.Specialized", "StringCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Collections::Specialized::StringCollection::*)(int)>(&System::Collections::Specialized::StringCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)(int, ::Il2CppString*)>(&System::Collections::Specialized::StringCollection::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::StringCollection::*)()>(&System::Collections::Specialized::StringCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_get_IsReadOnly
// Il2CppName: System.Collections.IList.get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::StringCollection::*)()>(&System::Collections::Specialized::StringCollection::System_Collections_IList_get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.IList.get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_get_Item
// Il2CppName: System.Collections.IList.get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::StringCollection::*)(int)>(&System::Collections::Specialized::StringCollection::System_Collections_IList_get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.IList.get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_set_Item
// Il2CppName: System.Collections.IList.set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)(int, ::Il2CppObject*)>(&System::Collections::Specialized::StringCollection::System_Collections_IList_set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.IList.set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::StringCollection::*)(::Il2CppString*)>(&System::Collections::Specialized::StringCollection::Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)()>(&System::Collections::Specialized::StringCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::StringCollection::*)(::Il2CppString*)>(&System::Collections::Specialized::StringCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)(::ArrayW<::Il2CppString*>, int)>(&System::Collections::Specialized::StringCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::StringCollection::*)(::Il2CppString*)>(&System::Collections::Specialized::StringCollection::IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)(int, ::Il2CppString*)>(&System::Collections::Specialized::StringCollection::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)(::Il2CppString*)>(&System::Collections::Specialized::StringCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)(int)>(&System::Collections::Specialized::StringCollection::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_Add
// Il2CppName: System.Collections.IList.Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::StringCollection::*)(::Il2CppObject*)>(&System::Collections::Specialized::StringCollection::System_Collections_IList_Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.IList.Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_Contains
// Il2CppName: System.Collections.IList.Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::StringCollection::*)(::Il2CppObject*)>(&System::Collections::Specialized::StringCollection::System_Collections_IList_Contains)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.IList.Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_IndexOf
// Il2CppName: System.Collections.IList.IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::StringCollection::*)(::Il2CppObject*)>(&System::Collections::Specialized::StringCollection::System_Collections_IList_IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.IList.IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_Insert
// Il2CppName: System.Collections.IList.Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)(int, ::Il2CppObject*)>(&System::Collections::Specialized::StringCollection::System_Collections_IList_Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.IList.Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IList_Remove
// Il2CppName: System.Collections.IList.Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)(::Il2CppObject*)>(&System::Collections::Specialized::StringCollection::System_Collections_IList_Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.IList.Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::StringCollection::*)(System::Array*, int)>(&System::Collections::Specialized::StringCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Collections::Specialized::StringCollection::*)()>(&System::Collections::Specialized::StringCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::StringCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::StringCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

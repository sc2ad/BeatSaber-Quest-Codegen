// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: EmptyReadOnlyDictionaryInternal
  class EmptyReadOnlyDictionaryInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::EmptyReadOnlyDictionaryInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::EmptyReadOnlyDictionaryInternal*, "System.Collections", "EmptyReadOnlyDictionaryInternal");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.EmptyReadOnlyDictionaryInternal
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1072440
  class EmptyReadOnlyDictionaryInternal : public ::Il2CppObject/*, public ::System::Collections::IDictionary*/ {
    public:
    // Nested type: ::System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator
    class NodeEnumerator;
    // Creating interface conversion operator: operator ::System::Collections::IDictionary
    operator ::System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionary*>(this);
    }
    // Creating interface conversion operator: i_IDictionary
    inline ::System::Collections::IDictionary* i_IDictionary() noexcept {
      return reinterpret_cast<::System::Collections::IDictionary*>(this);
    }
    // public System.Int32 get_Count()
    // Offset: 0x1F353E8
    int get_Count();
    // public System.Object get_SyncRoot()
    // Offset: 0x1F353F0
    ::Il2CppObject* get_SyncRoot();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x1F353F4
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x1F35494
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x1F3563C
    ::System::Collections::ICollection* get_Keys();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x1F358D4
    bool get_IsReadOnly();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1F35204
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1F35260
    void CopyTo(::System::Array* array, int index);
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x1F356A4
    bool Contains(::Il2CppObject* key);
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x1F356AC
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Void Clear()
    // Offset: 0x1F35854
    void Clear();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x1F358DC
    ::System::Collections::IDictionaryEnumerator* GetEnumerator();
    // public System.Void Remove(System.Object key)
    // Offset: 0x1F35938
    void Remove(::Il2CppObject* key);
    // public System.Void .ctor()
    // Offset: 0x1F351FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyReadOnlyDictionaryInternal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::EmptyReadOnlyDictionaryInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyReadOnlyDictionaryInternal*, creationType>()));
    }
  }; // System.Collections.EmptyReadOnlyDictionaryInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::EmptyReadOnlyDictionaryInternal::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::EmptyReadOnlyDictionaryInternal::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::EmptyReadOnlyDictionaryInternal::*)(::Il2CppObject*)>(&System::Collections::EmptyReadOnlyDictionaryInternal::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::EmptyReadOnlyDictionaryInternal::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::EmptyReadOnlyDictionaryInternal::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Collections::EmptyReadOnlyDictionaryInternal::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::EmptyReadOnlyDictionaryInternal::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::EmptyReadOnlyDictionaryInternal::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::EmptyReadOnlyDictionaryInternal::*)(::System::Array*, int)>(&System::Collections::EmptyReadOnlyDictionaryInternal::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::EmptyReadOnlyDictionaryInternal::*)(::Il2CppObject*)>(&System::Collections::EmptyReadOnlyDictionaryInternal::Contains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::EmptyReadOnlyDictionaryInternal::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::EmptyReadOnlyDictionaryInternal::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::EmptyReadOnlyDictionaryInternal::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (System::Collections::EmptyReadOnlyDictionaryInternal::*)()>(&System::Collections::EmptyReadOnlyDictionaryInternal::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::EmptyReadOnlyDictionaryInternal::*)(::Il2CppObject*)>(&System::Collections::EmptyReadOnlyDictionaryInternal::Remove)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::EmptyReadOnlyDictionaryInternal*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::EmptyReadOnlyDictionaryInternal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

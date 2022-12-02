// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Specialized.OrderedDictionary
#include "System/Collections/Specialized/OrderedDictionary.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection*, "System.Collections.Specialized", "OrderedDictionary/OrderedDictionaryKeyValueCollection");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.OrderedDictionary/System.Collections.Specialized.OrderedDictionaryKeyValueCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class OrderedDictionary::OrderedDictionaryKeyValueCollection : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    public:
    // private System.Collections.ArrayList _objects
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* objects;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Boolean isKeys
    // Size: 0x1
    // Offset: 0x18
    bool isKeys;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: i_ICollection
    inline ::System::Collections::ICollection* i_ICollection() noexcept {
      return reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Get instance field reference: private System.Collections.ArrayList _objects
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__objects();
    // Get instance field reference: private System.Boolean isKeys
    [[deprecated("Use field access instead!")]] bool& dyn_isKeys();
    // private System.Int32 System.Collections.ICollection.get_Count()
    // Offset: 0x1E1B200
    int System_Collections_ICollection_get_Count();
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x1E1B224
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // public System.Void .ctor(System.Collections.ArrayList array, System.Boolean isKeys)
    // Offset: 0x1E199CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrderedDictionary::OrderedDictionaryKeyValueCollection* New_ctor(::System::Collections::ArrayList* array, bool isKeys) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrderedDictionary::OrderedDictionaryKeyValueCollection*, creationType>(array, isKeys)));
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1E1AEF8
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1E1B248
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Collections.Specialized.OrderedDictionary/System.Collections.Specialized.OrderedDictionaryKeyValueCollection
  #pragma pack(pop)
  static check_size<sizeof(OrderedDictionary::OrderedDictionaryKeyValueCollection), 24 + sizeof(bool)> __System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollectionSizeCheck;
  static_assert(sizeof(OrderedDictionary::OrderedDictionaryKeyValueCollection) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_Count
// Il2CppName: System.Collections.ICollection.get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::*)()>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection*), "System.Collections.ICollection.get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::*)()>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::*)(::System::Array*, int)>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::*)()>(&System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::OrderedDictionary::OrderedDictionaryKeyValueCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

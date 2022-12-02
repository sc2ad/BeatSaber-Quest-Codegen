// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.PropertyDescriptorCollection
#include "System/ComponentModel/PropertyDescriptorCollection.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator*, "System.ComponentModel", "PropertyDescriptorCollection/PropertyDescriptorEnumerator");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.PropertyDescriptorCollection/System.ComponentModel.PropertyDescriptorEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class PropertyDescriptorCollection::PropertyDescriptorEnumerator : public ::Il2CppObject/*, public ::System::Collections::IDictionaryEnumerator*/ {
    public:
    public:
    // private System.ComponentModel.PropertyDescriptorCollection owner
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::PropertyDescriptorCollection* owner;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::PropertyDescriptorCollection*) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IDictionaryEnumerator
    operator ::System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IDictionaryEnumerator
    inline ::System::Collections::IDictionaryEnumerator* i_IDictionaryEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Get instance field reference: private System.ComponentModel.PropertyDescriptorCollection owner
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::PropertyDescriptorCollection*& dyn_owner();
    // Get instance field reference: private System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // public System.Object get_Current()
    // Offset: 0x1E28618
    ::Il2CppObject* get_Current();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x1E28684
    ::System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Key()
    // Offset: 0x1E286F8
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x1E28738
    ::Il2CppObject* get_Value();
    // public System.Void .ctor(System.ComponentModel.PropertyDescriptorCollection owner)
    // Offset: 0x1E27A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyDescriptorCollection::PropertyDescriptorEnumerator* New_ctor(::System::ComponentModel::PropertyDescriptorCollection* owner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyDescriptorCollection::PropertyDescriptorEnumerator*, creationType>(owner)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1E28778
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1E287B8
    void Reset();
  }; // System.ComponentModel.PropertyDescriptorCollection/System.ComponentModel.PropertyDescriptorEnumerator
  #pragma pack(pop)
  static check_size<sizeof(PropertyDescriptorCollection::PropertyDescriptorEnumerator), 24 + sizeof(int)> __System_ComponentModel_PropertyDescriptorCollection_PropertyDescriptorEnumeratorSizeCheck;
  static_assert(sizeof(PropertyDescriptorCollection::PropertyDescriptorEnumerator) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::*)()>(&System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::get_Entry
// Il2CppName: get_Entry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::*)()>(&System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::get_Entry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator*), "get_Entry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::*)()>(&System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::*)()>(&System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::*)()>(&System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::*)()>(&System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyDescriptorCollection::PropertyDescriptorEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

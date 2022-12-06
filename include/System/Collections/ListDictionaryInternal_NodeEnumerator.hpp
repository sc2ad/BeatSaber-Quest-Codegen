// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ListDictionaryInternal
#include "System/Collections/ListDictionaryInternal.hpp"
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
NEED_NO_BOX(::System::Collections::ListDictionaryInternal::NodeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ListDictionaryInternal::NodeEnumerator*, "System.Collections", "ListDictionaryInternal/NodeEnumerator");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ListDictionaryInternal/System.Collections.NodeEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ListDictionaryInternal::NodeEnumerator : public ::Il2CppObject/*, public ::System::Collections::IDictionaryEnumerator*/ {
    public:
    public:
    // private System.Collections.ListDictionaryInternal list
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ListDictionaryInternal* list;
    // Field size check
    static_assert(sizeof(::System::Collections::ListDictionaryInternal*) == 0x8);
    // private System.Collections.ListDictionaryInternal/System.Collections.DictionaryNode current
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ListDictionaryInternal::DictionaryNode* current;
    // Field size check
    static_assert(sizeof(::System::Collections::ListDictionaryInternal::DictionaryNode*) == 0x8);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x20
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean start
    // Size: 0x1
    // Offset: 0x24
    bool start;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IDictionaryEnumerator
    operator ::System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IDictionaryEnumerator
    inline ::System::Collections::IDictionaryEnumerator* i_IDictionaryEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IDictionaryEnumerator*>(this);
    }
    // Get instance field reference: private System.Collections.ListDictionaryInternal list
    [[deprecated("Use field access instead!")]] ::System::Collections::ListDictionaryInternal*& dyn_list();
    // Get instance field reference: private System.Collections.ListDictionaryInternal/System.Collections.DictionaryNode current
    [[deprecated("Use field access instead!")]] ::System::Collections::ListDictionaryInternal::DictionaryNode*& dyn_current();
    // Get instance field reference: private System.Int32 version
    [[deprecated("Use field access instead!")]] int& dyn_version();
    // Get instance field reference: private System.Boolean start
    [[deprecated("Use field access instead!")]] bool& dyn_start();
    // public System.Object get_Current()
    // Offset: 0x1D986E0
    ::Il2CppObject* get_Current();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x1D9874C
    ::System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Key()
    // Offset: 0x1D98804
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x1D988A0
    ::Il2CppObject* get_Value();
    // public System.Void .ctor(System.Collections.ListDictionaryInternal list)
    // Offset: 0x1D9850C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionaryInternal::NodeEnumerator* New_ctor(::System::Collections::ListDictionaryInternal* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ListDictionaryInternal::NodeEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionaryInternal::NodeEnumerator*, creationType>(list)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1D9893C
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1D98A14
    void Reset();
  }; // System.Collections.ListDictionaryInternal/System.Collections.NodeEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ListDictionaryInternal::NodeEnumerator), 36 + sizeof(bool)> __System_Collections_ListDictionaryInternal_NodeEnumeratorSizeCheck;
  static_assert(sizeof(ListDictionaryInternal::NodeEnumerator) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ListDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::ListDictionaryInternal::NodeEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ListDictionaryInternal::NodeEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeEnumerator::get_Entry
// Il2CppName: get_Entry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (System::Collections::ListDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::ListDictionaryInternal::NodeEnumerator::get_Entry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ListDictionaryInternal::NodeEnumerator*), "get_Entry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeEnumerator::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ListDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::ListDictionaryInternal::NodeEnumerator::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ListDictionaryInternal::NodeEnumerator*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeEnumerator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::ListDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::ListDictionaryInternal::NodeEnumerator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ListDictionaryInternal::NodeEnumerator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::ListDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::ListDictionaryInternal::NodeEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ListDictionaryInternal::NodeEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::NodeEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::ListDictionaryInternal::NodeEnumerator::*)()>(&System::Collections::ListDictionaryInternal::NodeEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::ListDictionaryInternal::NodeEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

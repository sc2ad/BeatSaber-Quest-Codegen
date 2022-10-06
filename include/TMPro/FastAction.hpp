// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: FastAction
  class FastAction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::FastAction);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FastAction*, "TMPro", "FastAction");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.FastAction
  // [TokenAttribute] Offset: FFFFFFFF
  class FastAction : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.LinkedList`1<System.Action> delegates
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::LinkedList_1<::System::Action*>* delegates;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::System::Action*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>> lookup
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* lookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.LinkedList`1<System.Action> delegates
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedList_1<::System::Action*>*& dyn_delegates();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>> lookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*& dyn_lookup();
    // public System.Void .ctor()
    // Offset: 0x14408F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastAction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::FastAction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastAction*, creationType>()));
    }
    // public System.Void Add(System.Action rhs)
    // Offset: 0x144070C
    void Add(::System::Action* rhs);
    // public System.Void Remove(System.Action rhs)
    // Offset: 0x14407C8
    void Remove(::System::Action* rhs);
    // public System.Void Call()
    // Offset: 0x1440878
    void Call();
  }; // TMPro.FastAction
  #pragma pack(pop)
  static check_size<sizeof(FastAction), 24 + sizeof(::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*)> __TMPro_FastActionSizeCheck;
  static_assert(sizeof(FastAction) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::FastAction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::FastAction::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction::*)(::System::Action*)>(&TMPro::FastAction::Add)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::FastAction*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: TMPro::FastAction::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction::*)(::System::Action*)>(&TMPro::FastAction::Remove)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::FastAction*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: TMPro::FastAction::Call
// Il2CppName: Call
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::FastAction::*)()>(&TMPro::FastAction::Call)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::FastAction*), "Call", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Stack
#include "System/Collections/Stack.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Stack::StackEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Stack::StackEnumerator*, "System.Collections", "Stack/StackEnumerator");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Stack/System.Collections.StackEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Stack::StackEnumerator : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.Collections.Stack _stack
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Stack* stack;
    // Field size check
    static_assert(sizeof(::System::Collections::Stack*) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object currentElement
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* currentElement;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Creating interface conversion operator: i_IEnumerator
    inline ::System::Collections::IEnumerator* i_IEnumerator() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Collections.Stack _stack
    [[deprecated("Use field access instead!")]] ::System::Collections::Stack*& dyn__stack();
    // Get instance field reference: private System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index();
    // Get instance field reference: private System.Int32 _version
    [[deprecated("Use field access instead!")]] int& dyn__version();
    // Get instance field reference: private System.Object currentElement
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_currentElement();
    // public System.Object get_Current()
    // Offset: 0x1D9E3E4
    ::Il2CppObject* get_Current();
    // System.Void .ctor(System.Collections.Stack stack)
    // Offset: 0x1D9DFC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack::StackEnumerator* New_ctor(::System::Collections::Stack* stack) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Stack::StackEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack::StackEnumerator*, creationType>(stack)));
    }
    // public System.Object Clone()
    // Offset: 0x1D9E2BC
    ::Il2CppObject* Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x1D9E2C4
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1D9E498
    void Reset();
  }; // System.Collections.Stack/System.Collections.StackEnumerator
  #pragma pack(pop)
  static check_size<sizeof(Stack::StackEnumerator), 32 + sizeof(::Il2CppObject*)> __System_Collections_Stack_StackEnumeratorSizeCheck;
  static_assert(sizeof(Stack::StackEnumerator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Stack::StackEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Stack::StackEnumerator::*)()>(&System::Collections::Stack::StackEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack::StackEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::StackEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Stack::StackEnumerator::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Stack::StackEnumerator::*)()>(&System::Collections::Stack::StackEnumerator::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack::StackEnumerator*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::StackEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Stack::StackEnumerator::*)()>(&System::Collections::Stack::StackEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack::StackEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::StackEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Stack::StackEnumerator::*)()>(&System::Collections::Stack::StackEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack::StackEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

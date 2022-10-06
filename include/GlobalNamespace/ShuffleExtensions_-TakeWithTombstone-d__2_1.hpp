// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ShuffleExtensions
#include "GlobalNamespace/ShuffleExtensions.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1, "", "ShuffleExtensions/<TakeWithTombstone>d__2`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ShuffleExtensions/<TakeWithTombstone>d__2`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class ShuffleExtensions::$TakeWithTombstone$d__2_1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<T>, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private T <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x0
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.IEnumerable`1<T> source
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IEnumerable_1<T>* source;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<T>*) == 0x8);
    // public System.Collections.Generic.IEnumerable`1<T> <>3__source
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IEnumerable_1<T>* $$3__source;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<T>*) == 0x8);
    // private System.Int32 limit
    // Size: 0x4
    // Offset: 0x0
    int limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 <>3__limit
    // Size: 0x4
    // Offset: 0x0
    int $$3__limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private T tombstone
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T tombstone;
    // public T <>3__tombstone
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T $$3__tombstone;
    // private System.Collections.Generic.IEnumerator`1<T> <enumerator>5__2
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IEnumerator_1<T>* $enumerator$5__2;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<T>*) == 0x8);
    // private System.Int32 <index>5__3
    // Size: 0x4
    // Offset: 0x0
    int $index$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Creating interface conversion operator: i_IEnumerable_1_T
    inline ::System::Collections::Generic::IEnumerable_1<T>* i_IEnumerable_1_T() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
    operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
    }
    // Creating interface conversion operator: i_IEnumerator_1_T
    inline ::System::Collections::Generic::IEnumerator_1<T>* i_IEnumerator_1_T() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_$$1__state");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T <>2__current
    [[deprecated("Use field access instead!")]] T& dyn_$$2__current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_$$2__current");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_$$l__initialThreadId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>l__initialThreadId"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerable`1<T> source
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<T>*& dyn_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Collections.Generic.IEnumerable`1<T> <>3__source
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<T>*& dyn_$$3__source() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_$$3__source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>3__source"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 limit
    [[deprecated("Use field access instead!")]] int& dyn_limit() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_limit");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "limit"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 <>3__limit
    [[deprecated("Use field access instead!")]] int& dyn_$$3__limit() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_$$3__limit");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>3__limit"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T tombstone
    [[deprecated("Use field access instead!")]] T& dyn_tombstone() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_tombstone");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "tombstone"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T <>3__tombstone
    [[deprecated("Use field access instead!")]] T& dyn_$$3__tombstone() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_$$3__tombstone");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>3__tombstone"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerator`1<T> <enumerator>5__2
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<T>*& dyn_$enumerator$5__2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_$enumerator$5__2");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<enumerator>5__2"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <index>5__3
    [[deprecated("Use field access instead!")]] int& dyn_$index$5__3() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::dyn_$index$5__3");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<index>5__3"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private T System.Collections.Generic.IEnumerator<T>.get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T System_Collections_Generic_IEnumerator$T$_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::System.Collections.Generic.IEnumerator<T>.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<T>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShuffleExtensions::$TakeWithTombstone$d__2_1<T>* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShuffleExtensions::$TakeWithTombstone$d__2_1<T>*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_IDisposable_Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::System.IDisposable.Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Boolean MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // private System.Void <>m__Finally1()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $$m__Finally1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::<>m__Finally1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
  }; // ShuffleExtensions/<TakeWithTombstone>d__2`1
  // Could not write size check! Type: ShuffleExtensions/<TakeWithTombstone>d__2`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

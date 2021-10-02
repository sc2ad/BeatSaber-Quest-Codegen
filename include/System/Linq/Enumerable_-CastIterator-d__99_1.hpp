// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerable because it is already included!
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/System.Linq.<CastIterator>d__99`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TResult>
  class Enumerable::$CastIterator$d__99_1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<TResult>, public System::Collections::Generic::IEnumerator_1<TResult>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private TResult <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TResult $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x0
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.IEnumerable source
    // Size: 0x8
    // Offset: 0x0
    System::Collections::IEnumerable* source;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerable*) == 0x8);
    // public System.Collections.IEnumerable <>3__source
    // Size: 0x8
    // Offset: 0x0
    System::Collections::IEnumerable* $$3__source;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerable*) == 0x8);
    // private System.Collections.IEnumerator <>7__wrap1
    // Size: 0x8
    // Offset: 0x0
    System::Collections::IEnumerator* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<TResult>
    operator System::Collections::Generic::IEnumerable_1<TResult>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TResult>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<TResult>
    operator System::Collections::Generic::IEnumerator_1<TResult>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TResult>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>1__state
    int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::dyn_$$1__state");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TResult <>2__current
    TResult& dyn_$$2__current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::dyn_$$2__current");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
      return *reinterpret_cast<TResult*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::dyn_$$l__initialThreadId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>l__initialThreadId"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.IEnumerable source
    System::Collections::IEnumerable*& dyn_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::dyn_source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
      return *reinterpret_cast<System::Collections::IEnumerable**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Collections.IEnumerable <>3__source
    System::Collections::IEnumerable*& dyn_$$3__source() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::dyn_$$3__source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>3__source"))->offset;
      return *reinterpret_cast<System::Collections::IEnumerable**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.IEnumerator <>7__wrap1
    System::Collections::IEnumerator*& dyn_$$7__wrap1() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::dyn_$$7__wrap1");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>7__wrap1"))->offset;
      return *reinterpret_cast<System::Collections::IEnumerator**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private TResult System.Collections.Generic.IEnumerator<TResult>.get_Current()
    // Offset: 0xFFFFFFFF
    TResult System_Collections_Generic_IEnumerator$TResult$_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::System.Collections.Generic.IEnumerator<TResult>.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<TResult>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TResult, false>(___instance_arg, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(___instance_arg, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::$CastIterator$d__99_1<TResult>* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::$CastIterator$d__99_1<TResult>*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFFFFFFFF
    void System_IDisposable_Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::System.IDisposable.Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
    }
    // private System.Void <>m__Finally1()
    // Offset: 0xFFFFFFFF
    void $$m__Finally1() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::<>m__Finally1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<TResult> System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TResult>* System_Collections_Generic_IEnumerable$TResult$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<TResult>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TResult>*, false>(___instance_arg, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$CastIterator$d__99_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(___instance_arg, ___internal__method);
    }
  }; // System.Linq.Enumerable/System.Linq.<CastIterator>d__99`1
  // Could not write size check! Type: System.Linq.Enumerable/System.Linq.<CastIterator>d__99`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$CastIterator$d__99_1, "System.Linq", "Enumerable/<CastIterator>d__99`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

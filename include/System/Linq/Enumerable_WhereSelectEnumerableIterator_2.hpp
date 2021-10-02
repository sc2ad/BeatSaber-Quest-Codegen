// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Linq.Enumerable/System.Linq.Iterator`1
#include "System/Linq/Enumerable_Iterator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerable`1 because it is already included!
  // Skipping declaration: IEnumerator`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/System.Linq.WhereSelectEnumerableIterator`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSource, typename TResult>
  class Enumerable::WhereSelectEnumerableIterator_2 : public System::Linq::Enumerable::Iterator_1<TResult> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Collections.Generic.IEnumerable`1<TSource> source
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* source;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // private System.Func`2<TSource,System.Boolean> predicate
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, bool>*) == 0x8);
    // private System.Func`2<TSource,TResult> selector
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, TResult>* selector;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, TResult>*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<TSource> enumerator
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerator_1<TSource>* enumerator;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<TSource>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerable`1<TSource> source
    System::Collections::Generic::IEnumerable_1<TSource>*& dyn_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::dyn_source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<TSource,System.Boolean> predicate
    System::Func_2<TSource, bool>*& dyn_predicate() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::dyn_predicate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "predicate"))->offset;
      return *reinterpret_cast<System::Func_2<TSource, bool>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<TSource,TResult> selector
    System::Func_2<TSource, TResult>*& dyn_selector() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::dyn_selector");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "selector"))->offset;
      return *reinterpret_cast<System::Func_2<TSource, TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerator`1<TSource> enumerator
    System::Collections::Generic::IEnumerator_1<TSource>*& dyn_enumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::dyn_enumerator");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "enumerator"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate, System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::WhereSelectEnumerableIterator_2<TSource, TResult>* New_ctor(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, bool>* predicate, System::Func_2<TSource, TResult>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::WhereSelectEnumerableIterator_2<TSource, TResult>*, creationType>(source, predicate, selector)));
    }
    // public System.Linq.Enumerable/System.Linq.Iterator`1<TResult> Clone()
    // Offset: 0xFFFFFFFF
    System::Linq::Enumerable::Iterator_1<TResult>* Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::Clone");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Linq::Enumerable::Iterator_1<TResult>*, false>(___instance_arg, ___internal__method);
    }
    // public System.Collections.Generic.IEnumerable`1<TResult2> Select(System.Func`2<TResult,TResult2> selector)
    // Offset: 0xFFFFFFFF
    template<class TResult2>
    System::Collections::Generic::IEnumerable_1<TResult2>* Select(System::Func_2<TResult, TResult2>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::Select");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Select", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(selector)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TResult2>*, false>(___instance_arg, ___generic__method, selector);
    }
    // public System.Collections.Generic.IEnumerable`1<TResult> Where(System.Func`2<TResult,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<TResult>* Where(System::Func_2<TResult, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::Where");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Where", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(predicate)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TResult>*, false>(___instance_arg, ___internal__method, predicate);
    }
    // public override System.Void Dispose()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Void Iterator_1::Dispose()
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // public override System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/System.Linq.Iterator`1
    // Base method: System.Boolean Iterator_1::MoveNext()
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::WhereSelectEnumerableIterator_2::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
    }
  }; // System.Linq.Enumerable/System.Linq.WhereSelectEnumerableIterator`2
  // Could not write size check! Type: System.Linq.Enumerable/System.Linq.WhereSelectEnumerableIterator`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::WhereSelectEnumerableIterator_2, "System.Linq", "Enumerable/WhereSelectEnumerableIterator`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: ArraySortHelper`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ArraySortHelper_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ArraySortHelper_2, "System.Collections.Generic", "ArraySortHelper`2");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.ArraySortHelper`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  class ArraySortHelper_2 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static private System.Collections.Generic.ArraySortHelper`2<TKey,TValue> s_defaultArraySortHelper
    static ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* _get_s_defaultArraySortHelper() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::_get_s_defaultArraySortHelper");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "s_defaultArraySortHelper")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Collections.Generic.ArraySortHelper`2<TKey,TValue> s_defaultArraySortHelper
    static void _set_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::_set_s_defaultArraySortHelper");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "s_defaultArraySortHelper", value)));
    }
    // static public System.Collections.Generic.ArraySortHelper`2<TKey,TValue> get_Default()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* get_Default() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::get_Default");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "get_Default", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static private System.Collections.Generic.ArraySortHelper`2<TKey,TValue> CreateArraySortHelper()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* CreateArraySortHelper() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::CreateArraySortHelper");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "CreateArraySortHelper", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void Sort(TKey[] keys, TValue[] values, System.Int32 index, System.Int32 length, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int index, int length, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::Sort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Sort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, keys, values, index, length, comparer);
    }
    // static private System.Void SwapIfGreaterWithItems(TKey[] keys, TValue[] values, System.Collections.Generic.IComparer`1<TKey> comparer, System.Int32 a, System.Int32 b)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void SwapIfGreaterWithItems(::ArrayW<TKey> keys, ::ArrayW<TValue> values, ::System::Collections::Generic::IComparer_1<TKey>* comparer, int a, int b) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::SwapIfGreaterWithItems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "SwapIfGreaterWithItems", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(comparer), ::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, values, comparer, a, b);
    }
    // static private System.Void Swap(TKey[] keys, TValue[] values, System.Int32 i, System.Int32 j)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void Swap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int i, int j) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::Swap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "Swap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(i), ::il2cpp_utils::ExtractType(j)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, values, i, j);
    }
    // static System.Void IntrospectiveSort(TKey[] keys, TValue[] values, System.Int32 left, System.Int32 length, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void IntrospectiveSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int left, int length, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::IntrospectiveSort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "IntrospectiveSort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(left), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, values, left, length, comparer);
    }
    // static private System.Void IntroSort(TKey[] keys, TValue[] values, System.Int32 lo, System.Int32 hi, System.Int32 depthLimit, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void IntroSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int lo, int hi, int depthLimit, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::IntroSort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "IntroSort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(hi), ::il2cpp_utils::ExtractType(depthLimit), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, values, lo, hi, depthLimit, comparer);
    }
    // static private System.Int32 PickPivotAndPartition(TKey[] keys, TValue[] values, System.Int32 lo, System.Int32 hi, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static int PickPivotAndPartition(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int lo, int hi, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::PickPivotAndPartition");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "PickPivotAndPartition", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(hi), ::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, values, lo, hi, comparer);
    }
    // static private System.Void Heapsort(TKey[] keys, TValue[] values, System.Int32 lo, System.Int32 hi, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void Heapsort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int lo, int hi, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::Heapsort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "Heapsort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(hi), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, values, lo, hi, comparer);
    }
    // static private System.Void DownHeap(TKey[] keys, TValue[] values, System.Int32 i, System.Int32 n, System.Int32 lo, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void DownHeap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int i, int n, int lo, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::DownHeap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "DownHeap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(i), ::il2cpp_utils::ExtractType(n), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, values, i, n, lo, comparer);
    }
    // static private System.Void InsertionSort(TKey[] keys, TValue[] values, System.Int32 lo, System.Int32 hi, System.Collections.Generic.IComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void InsertionSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int lo, int hi, ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::InsertionSort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_2<TKey, TValue>*>::get(), "InsertionSort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(values), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(hi), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, values, lo, hi, comparer);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArraySortHelper_2<TKey, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArraySortHelper_2<TKey, TValue>*, creationType>()));
    }
  }; // System.Collections.Generic.ArraySortHelper`2
  // Could not write size check! Type: System.Collections.Generic.ArraySortHelper`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

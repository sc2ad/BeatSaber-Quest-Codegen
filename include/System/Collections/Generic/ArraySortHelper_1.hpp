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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: ArraySortHelper`1<T>
  template<typename T>
  class ArraySortHelper_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ArraySortHelper_1, "System.Collections.Generic", "ArraySortHelper`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.ArraySortHelper`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ArraySortHelper_1 : public ::Il2CppObject {
    public:
    // static public System.Void Sort(T[] keys, System.Int32 index, System.Int32 length, System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static void Sort(::ArrayW<T> keys, int index, int length, ::System::Collections::Generic::IComparer_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::Sort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "Sort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, index, length, comparer);
    }
    // static public System.Int32 BinarySearch(T[] array, System.Int32 index, System.Int32 length, T value, System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static int BinarySearch(::ArrayW<T> array, int index, int length, T value, ::System::Collections::Generic::IComparer_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::BinarySearch");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "BinarySearch", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, array, index, length, value, comparer);
    }
    // static System.Void Sort(T[] keys, System.Int32 index, System.Int32 length, System.Comparison`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static void Sort(::ArrayW<T> keys, int index, int length, ::System::Comparison_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::Sort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "Sort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, index, length, comparer);
    }
    // static System.Int32 InternalBinarySearch(T[] array, System.Int32 index, System.Int32 length, T value, System.Collections.Generic.IComparer`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static int InternalBinarySearch(::ArrayW<T> array, int index, int length, T value, ::System::Collections::Generic::IComparer_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::InternalBinarySearch");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "InternalBinarySearch", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, array, index, length, value, comparer);
    }
    // static private System.Void SwapIfGreater(T[] keys, System.Comparison`1<T> comparer, System.Int32 a, System.Int32 b)
    // Offset: 0xFFFFFFFF
    static void SwapIfGreater(::ArrayW<T> keys, ::System::Comparison_1<T>* comparer, int a, int b) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::SwapIfGreater");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "SwapIfGreater", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(comparer), ::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, comparer, a, b);
    }
    // static private System.Void Swap(T[] a, System.Int32 i, System.Int32 j)
    // Offset: 0xFFFFFFFF
    static void Swap(::ArrayW<T> a, int i, int j) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::Swap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "Swap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(i), ::il2cpp_utils::ExtractType(j)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, a, i, j);
    }
    // static System.Void IntrospectiveSort(T[] keys, System.Int32 left, System.Int32 length, System.Comparison`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static void IntrospectiveSort(::ArrayW<T> keys, int left, int length, ::System::Comparison_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::IntrospectiveSort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "IntrospectiveSort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(left), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, left, length, comparer);
    }
    // static private System.Void IntroSort(T[] keys, System.Int32 lo, System.Int32 hi, System.Int32 depthLimit, System.Comparison`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static void IntroSort(::ArrayW<T> keys, int lo, int hi, int depthLimit, ::System::Comparison_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::IntroSort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "IntroSort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(hi), ::il2cpp_utils::ExtractType(depthLimit), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, lo, hi, depthLimit, comparer);
    }
    // static private System.Int32 PickPivotAndPartition(T[] keys, System.Int32 lo, System.Int32 hi, System.Comparison`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static int PickPivotAndPartition(::ArrayW<T> keys, int lo, int hi, ::System::Comparison_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::PickPivotAndPartition");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "PickPivotAndPartition", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(hi), ::il2cpp_utils::ExtractType(comparer)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, lo, hi, comparer);
    }
    // static private System.Void Heapsort(T[] keys, System.Int32 lo, System.Int32 hi, System.Comparison`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static void Heapsort(::ArrayW<T> keys, int lo, int hi, ::System::Comparison_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::Heapsort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "Heapsort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(hi), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, lo, hi, comparer);
    }
    // static private System.Void DownHeap(T[] keys, System.Int32 i, System.Int32 n, System.Int32 lo, System.Comparison`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static void DownHeap(::ArrayW<T> keys, int i, int n, int lo, ::System::Comparison_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::DownHeap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "DownHeap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(i), ::il2cpp_utils::ExtractType(n), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, i, n, lo, comparer);
    }
    // static private System.Void InsertionSort(T[] keys, System.Int32 lo, System.Int32 hi, System.Comparison`1<T> comparer)
    // Offset: 0xFFFFFFFF
    static void InsertionSort(::ArrayW<T> keys, int lo, int hi, ::System::Comparison_1<T>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::ArraySortHelper_1::InsertionSort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArraySortHelper_1<T>*>::get(), "InsertionSort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keys), ::il2cpp_utils::ExtractType(lo), ::il2cpp_utils::ExtractType(hi), ::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, keys, lo, hi, comparer);
    }
  }; // System.Collections.Generic.ArraySortHelper`1
  // Could not write size check! Type: System.Collections.Generic.ArraySortHelper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

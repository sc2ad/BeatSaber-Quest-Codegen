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
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: SparselyPopulatedArrayFragment`1<T>
  template<typename T>
  class SparselyPopulatedArrayFragment_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::SparselyPopulatedArrayFragment_1, "System.Threading", "SparselyPopulatedArrayFragment`1");
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.SparselyPopulatedArrayFragment`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 11AACD8
  template<typename T>
  class SparselyPopulatedArrayFragment_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // readonly T[] m_elements
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> m_elements;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // System.Int32 m_freeCount
    // Size: 0x4
    // Offset: 0x0
    int m_freeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Threading.SparselyPopulatedArrayFragment`1<T> m_next
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::SparselyPopulatedArrayFragment_1<T>* m_next;
    // Field size check
    static_assert(sizeof(::System::Threading::SparselyPopulatedArrayFragment_1<T>*) == 0x8);
    // System.Threading.SparselyPopulatedArrayFragment`1<T> m_prev
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::SparselyPopulatedArrayFragment_1<T>* m_prev;
    // Field size check
    static_assert(sizeof(::System::Threading::SparselyPopulatedArrayFragment_1<T>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: readonly T[] m_elements
    ::ArrayW<T>& dyn_m_elements() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::dyn_m_elements");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_elements"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 m_freeCount
    int& dyn_m_freeCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::dyn_m_freeCount");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_freeCount"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Threading.SparselyPopulatedArrayFragment`1<T> m_next
    ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& dyn_m_next() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::dyn_m_next");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_next"))->offset;
      return *reinterpret_cast<::System::Threading::SparselyPopulatedArrayFragment_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Threading.SparselyPopulatedArrayFragment`1<T> m_prev
    ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& dyn_m_prev() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::dyn_m_prev");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_prev"))->offset;
      return *reinterpret_cast<::System::Threading::SparselyPopulatedArrayFragment_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // System.Int32 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::get_Length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // System.Threading.SparselyPopulatedArrayFragment`1<T> get_Prev()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Prev() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::get_Prev");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Prev", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(this, ___internal__method);
    }
    // System.Void .ctor(System.Int32 size)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SparselyPopulatedArrayFragment_1<T>* New_ctor(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SparselyPopulatedArrayFragment_1<T>*, creationType>(size)));
    }
    // System.Void .ctor(System.Int32 size, System.Threading.SparselyPopulatedArrayFragment`1<T> prev)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SparselyPopulatedArrayFragment_1<T>* New_ctor(int size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>* prev) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SparselyPopulatedArrayFragment_1<T>*, creationType>(size, prev)));
    }
    // T SafeAtomicRemove(System.Int32 index, T expectedElement)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T SafeAtomicRemove(int index, T expectedElement) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SparselyPopulatedArrayFragment_1::SafeAtomicRemove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SafeAtomicRemove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(expectedElement)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index, expectedElement);
    }
  }; // System.Threading.SparselyPopulatedArrayFragment`1
  // Could not write size check! Type: System.Threading.SparselyPopulatedArrayFragment`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

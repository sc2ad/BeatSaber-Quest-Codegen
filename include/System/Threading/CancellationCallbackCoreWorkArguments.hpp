// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SparselyPopulatedArrayFragment`1<T>
  template<typename T>
  class SparselyPopulatedArrayFragment_1;
  // Forward declaring type: CancellationCallbackInfo
  class CancellationCallbackInfo;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: CancellationCallbackCoreWorkArguments
  struct CancellationCallbackCoreWorkArguments;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationCallbackCoreWorkArguments, "System.Threading", "CancellationCallbackCoreWorkArguments");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.CancellationCallbackCoreWorkArguments
  // [TokenAttribute] Offset: FFFFFFFF
  struct CancellationCallbackCoreWorkArguments/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo> m_currArrayFragment
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* m_currArrayFragment;
    // Field size check
    static_assert(sizeof(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*) == 0x8);
    // System.Int32 m_currArrayIndex
    // Size: 0x4
    // Offset: 0x8
    int m_currArrayIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CancellationCallbackCoreWorkArguments
    constexpr CancellationCallbackCoreWorkArguments(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* m_currArrayFragment_ = {}, int m_currArrayIndex_ = {}) noexcept : m_currArrayFragment{m_currArrayFragment_}, m_currArrayIndex{m_currArrayIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo> m_currArrayFragment
    [[deprecated("Use field access instead!")]] ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*& dyn_m_currArrayFragment();
    // Get instance field reference: System.Int32 m_currArrayIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_currArrayIndex();
    // public System.Void .ctor(System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo> currArrayFragment, System.Int32 currArrayIndex)
    // Offset: 0x22328D4
    // ABORTED: conflicts with another method.  CancellationCallbackCoreWorkArguments(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* currArrayFragment, int currArrayIndex);
  }; // System.Threading.CancellationCallbackCoreWorkArguments
  #pragma pack(pop)
  static check_size<sizeof(CancellationCallbackCoreWorkArguments), 8 + sizeof(int)> __System_Threading_CancellationCallbackCoreWorkArgumentsSizeCheck;
  static_assert(sizeof(CancellationCallbackCoreWorkArguments) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::CancellationCallbackCoreWorkArguments::CancellationCallbackCoreWorkArguments
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

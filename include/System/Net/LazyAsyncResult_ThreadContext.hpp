// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.LazyAsyncResult
#include "System/Net/LazyAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::LazyAsyncResult::ThreadContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::LazyAsyncResult::ThreadContext*, "System.Net", "LazyAsyncResult/ThreadContext");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.LazyAsyncResult/System.Net.ThreadContext
  // [TokenAttribute] Offset: FFFFFFFF
  class LazyAsyncResult::ThreadContext : public ::Il2CppObject {
    public:
    public:
    // System.Int32 m_NestedIOCount
    // Size: 0x4
    // Offset: 0x10
    int m_NestedIOCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_NestedIOCount;
    }
    // Get instance field reference: System.Int32 m_NestedIOCount
    [[deprecated("Use field access instead!")]] int& dyn_m_NestedIOCount();
    // public System.Void .ctor()
    // Offset: 0x1AD7BE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyAsyncResult::ThreadContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::LazyAsyncResult::ThreadContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyAsyncResult::ThreadContext*, creationType>()));
    }
  }; // System.Net.LazyAsyncResult/System.Net.ThreadContext
  #pragma pack(pop)
  static check_size<sizeof(LazyAsyncResult::ThreadContext), 16 + sizeof(int)> __System_Net_LazyAsyncResult_ThreadContextSizeCheck;
  static_assert(sizeof(LazyAsyncResult::ThreadContext) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::LazyAsyncResult::ThreadContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

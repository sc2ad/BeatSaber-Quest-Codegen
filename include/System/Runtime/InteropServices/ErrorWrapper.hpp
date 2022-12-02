// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: ErrorWrapper
  class ErrorWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::ErrorWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ErrorWrapper*, "System.Runtime.InteropServices", "ErrorWrapper");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ErrorWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1071A6C
  class ErrorWrapper : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 m_ErrorCode
    // Size: 0x4
    // Offset: 0x10
    int m_ErrorCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_ErrorCode;
    }
    // Get instance field reference: private System.Int32 m_ErrorCode
    [[deprecated("Use field access instead!")]] int& dyn_m_ErrorCode();
  }; // System.Runtime.InteropServices.ErrorWrapper
  #pragma pack(pop)
  static check_size<sizeof(ErrorWrapper), 16 + sizeof(int)> __System_Runtime_InteropServices_ErrorWrapperSizeCheck;
  static_assert(sizeof(ErrorWrapper) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

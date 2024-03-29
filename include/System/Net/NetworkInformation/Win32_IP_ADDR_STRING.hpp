// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: Win32_IP_ADDR_STRING
  struct Win32_IP_ADDR_STRING;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::Win32_IP_ADDR_STRING, "System.Net.NetworkInformation", "Win32_IP_ADDR_STRING");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.Win32_IP_ADDR_STRING
  // [TokenAttribute] Offset: FFFFFFFF
  struct Win32_IP_ADDR_STRING/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr Next
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr Next;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.String IpAddress
    // Size: 0x8
    // Offset: 0x8
    ::StringW IpAddress;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String IpMask
    // Size: 0x8
    // Offset: 0x10
    ::StringW IpMask;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.UInt32 Context
    // Size: 0x4
    // Offset: 0x18
    uint Context;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: Win32_IP_ADDR_STRING
    constexpr Win32_IP_ADDR_STRING(::System::IntPtr Next_ = {}, ::StringW IpAddress_ = {}, ::StringW IpMask_ = {}, uint Context_ = {}) noexcept : Next{Next_}, IpAddress{IpAddress_}, IpMask{IpMask_}, Context{Context_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr Next
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Next();
    // Get instance field reference: public System.String IpAddress
    [[deprecated("Use field access instead!")]] ::StringW& dyn_IpAddress();
    // Get instance field reference: public System.String IpMask
    [[deprecated("Use field access instead!")]] ::StringW& dyn_IpMask();
    // Get instance field reference: public System.UInt32 Context
    [[deprecated("Use field access instead!")]] uint& dyn_Context();
  }; // System.Net.NetworkInformation.Win32_IP_ADDR_STRING
  #pragma pack(pop)
  static check_size<sizeof(Win32_IP_ADDR_STRING), 24 + sizeof(uint)> __System_Net_NetworkInformation_Win32_IP_ADDR_STRINGSizeCheck;
  static_assert(sizeof(Win32_IP_ADDR_STRING) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

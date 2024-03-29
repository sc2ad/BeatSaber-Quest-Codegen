// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: Win32_SOCKADDR
  struct Win32_SOCKADDR;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::Win32_SOCKADDR, "System.Net.NetworkInformation", "Win32_SOCKADDR");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.Win32_SOCKADDR
  // [TokenAttribute] Offset: FFFFFFFF
  struct Win32_SOCKADDR/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt16 AddressFamily
    // Size: 0x2
    // Offset: 0x0
    uint16_t AddressFamily;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: AddressFamily and: AddressData
    char __padding0[0x6] = {};
    // public System.Byte[] AddressData
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint8_t> AddressData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: Win32_SOCKADDR
    constexpr Win32_SOCKADDR(uint16_t AddressFamily_ = {}, ::ArrayW<uint8_t> AddressData_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : AddressFamily{AddressFamily_}, AddressData{AddressData_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt16 AddressFamily
    [[deprecated("Use field access instead!")]] uint16_t& dyn_AddressFamily();
    // Get instance field reference: public System.Byte[] AddressData
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_AddressData();
  }; // System.Net.NetworkInformation.Win32_SOCKADDR
  #pragma pack(pop)
  static check_size<sizeof(Win32_SOCKADDR), 8 + sizeof(::ArrayW<uint8_t>)> __System_Net_NetworkInformation_Win32_SOCKADDRSizeCheck;
  static_assert(sizeof(Win32_SOCKADDR) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

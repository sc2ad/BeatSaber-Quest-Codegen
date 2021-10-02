// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Net.NetworkInformation.Win32_IP_ADDR_STRING
#include "System/Net/NetworkInformation/Win32_IP_ADDR_STRING.hpp"
// Including type: System.Net.NetworkInformation.NetBiosNodeType
#include "System/Net/NetworkInformation/NetBiosNodeType.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x54
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.Win32_FIXED_INFO
  // [TokenAttribute] Offset: FFFFFFFF
  struct Win32_FIXED_INFO/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.String HostName
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* HostName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String DomainName
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* DomainName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.IntPtr CurrentDnsServer
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr CurrentDnsServer;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Net.NetworkInformation.Win32_IP_ADDR_STRING DnsServerList
    // Size: 0x1C
    // Offset: 0x18
    System::Net::NetworkInformation::Win32_IP_ADDR_STRING DnsServerList;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32_IP_ADDR_STRING) == 0x1C);
    // Padding between fields: DnsServerList and: NodeType
    char __padding3[0x4] = {};
    // public System.Net.NetworkInformation.NetBiosNodeType NodeType
    // Size: 0x4
    // Offset: 0x38
    System::Net::NetworkInformation::NetBiosNodeType NodeType;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::NetBiosNodeType) == 0x4);
    // Padding between fields: NodeType and: ScopeId
    char __padding4[0x4] = {};
    // public System.String ScopeId
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* ScopeId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.UInt32 EnableRouting
    // Size: 0x4
    // Offset: 0x48
    uint EnableRouting;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 EnableProxy
    // Size: 0x4
    // Offset: 0x4C
    uint EnableProxy;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 EnableDns
    // Size: 0x4
    // Offset: 0x50
    uint EnableDns;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: Win32_FIXED_INFO
    constexpr Win32_FIXED_INFO(::Il2CppString* HostName_ = {}, ::Il2CppString* DomainName_ = {}, System::IntPtr CurrentDnsServer_ = {}, System::Net::NetworkInformation::Win32_IP_ADDR_STRING DnsServerList_ = {}, System::Net::NetworkInformation::NetBiosNodeType NodeType_ = {}, ::Il2CppString* ScopeId_ = {}, uint EnableRouting_ = {}, uint EnableProxy_ = {}, uint EnableDns_ = {}) noexcept : HostName{HostName_}, DomainName{DomainName_}, CurrentDnsServer{CurrentDnsServer_}, DnsServerList{DnsServerList_}, NodeType{NodeType_}, ScopeId{ScopeId_}, EnableRouting{EnableRouting_}, EnableProxy{EnableProxy_}, EnableDns{EnableDns_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.String HostName
    ::Il2CppString*& dyn_HostName();
    // Get instance field reference: public System.String DomainName
    ::Il2CppString*& dyn_DomainName();
    // Get instance field reference: public System.IntPtr CurrentDnsServer
    System::IntPtr& dyn_CurrentDnsServer();
    // Get instance field reference: public System.Net.NetworkInformation.Win32_IP_ADDR_STRING DnsServerList
    System::Net::NetworkInformation::Win32_IP_ADDR_STRING& dyn_DnsServerList();
    // Get instance field reference: public System.Net.NetworkInformation.NetBiosNodeType NodeType
    System::Net::NetworkInformation::NetBiosNodeType& dyn_NodeType();
    // Get instance field reference: public System.String ScopeId
    ::Il2CppString*& dyn_ScopeId();
    // Get instance field reference: public System.UInt32 EnableRouting
    uint& dyn_EnableRouting();
    // Get instance field reference: public System.UInt32 EnableProxy
    uint& dyn_EnableProxy();
    // Get instance field reference: public System.UInt32 EnableDns
    uint& dyn_EnableDns();
  }; // System.Net.NetworkInformation.Win32_FIXED_INFO
  #pragma pack(pop)
  static check_size<sizeof(Win32_FIXED_INFO), 80 + sizeof(uint)> __System_Net_NetworkInformation_Win32_FIXED_INFOSizeCheck;
  static_assert(sizeof(Win32_FIXED_INFO) == 0x54);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32_FIXED_INFO, "System.Net.NetworkInformation", "Win32_FIXED_INFO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

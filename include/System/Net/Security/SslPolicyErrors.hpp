// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.SslPolicyErrors
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct SslPolicyErrors/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SslPolicyErrors
    constexpr SslPolicyErrors(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Security.SslPolicyErrors None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.Security.SslPolicyErrors None
    static System::Net::Security::SslPolicyErrors _get_None();
    // Set static field: static public System.Net.Security.SslPolicyErrors None
    static void _set_None(System::Net::Security::SslPolicyErrors value);
    // static field const value: static public System.Net.Security.SslPolicyErrors RemoteCertificateNotAvailable
    static constexpr const int RemoteCertificateNotAvailable = 1;
    // Get static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateNotAvailable
    static System::Net::Security::SslPolicyErrors _get_RemoteCertificateNotAvailable();
    // Set static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateNotAvailable
    static void _set_RemoteCertificateNotAvailable(System::Net::Security::SslPolicyErrors value);
    // static field const value: static public System.Net.Security.SslPolicyErrors RemoteCertificateNameMismatch
    static constexpr const int RemoteCertificateNameMismatch = 2;
    // Get static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateNameMismatch
    static System::Net::Security::SslPolicyErrors _get_RemoteCertificateNameMismatch();
    // Set static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateNameMismatch
    static void _set_RemoteCertificateNameMismatch(System::Net::Security::SslPolicyErrors value);
    // static field const value: static public System.Net.Security.SslPolicyErrors RemoteCertificateChainErrors
    static constexpr const int RemoteCertificateChainErrors = 4;
    // Get static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateChainErrors
    static System::Net::Security::SslPolicyErrors _get_RemoteCertificateChainErrors();
    // Set static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateChainErrors
    static void _set_RemoteCertificateChainErrors(System::Net::Security::SslPolicyErrors value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.Security.SslPolicyErrors
  #pragma pack(pop)
  static check_size<sizeof(SslPolicyErrors), 0 + sizeof(int)> __System_Net_Security_SslPolicyErrorsSizeCheck;
  static_assert(sizeof(SslPolicyErrors) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::SslPolicyErrors, "System.Net.Security", "SslPolicyErrors");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

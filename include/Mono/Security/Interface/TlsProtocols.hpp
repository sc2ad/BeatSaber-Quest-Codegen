// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: TlsProtocols
  struct TlsProtocols;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::TlsProtocols, "Mono.Security.Interface", "TlsProtocols");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.TlsProtocols
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TlsProtocols/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TlsProtocols
    constexpr TlsProtocols(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.Interface.TlsProtocols Zero
    static constexpr const int Zero = 0;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Zero
    static ::Mono::Security::Interface::TlsProtocols _get_Zero();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Zero
    static void _set_Zero(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols Tls10Client
    static constexpr const int Tls10Client = 128;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Tls10Client
    static ::Mono::Security::Interface::TlsProtocols _get_Tls10Client();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Tls10Client
    static void _set_Tls10Client(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols Tls10Server
    static constexpr const int Tls10Server = 64;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Tls10Server
    static ::Mono::Security::Interface::TlsProtocols _get_Tls10Server();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Tls10Server
    static void _set_Tls10Server(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols Tls10
    static constexpr const int Tls10 = 192;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Tls10
    static ::Mono::Security::Interface::TlsProtocols _get_Tls10();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Tls10
    static void _set_Tls10(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols Tls11Client
    static constexpr const int Tls11Client = 512;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Tls11Client
    static ::Mono::Security::Interface::TlsProtocols _get_Tls11Client();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Tls11Client
    static void _set_Tls11Client(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols Tls11Server
    static constexpr const int Tls11Server = 256;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Tls11Server
    static ::Mono::Security::Interface::TlsProtocols _get_Tls11Server();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Tls11Server
    static void _set_Tls11Server(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols Tls11
    static constexpr const int Tls11 = 768;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Tls11
    static ::Mono::Security::Interface::TlsProtocols _get_Tls11();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Tls11
    static void _set_Tls11(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols Tls12Client
    static constexpr const int Tls12Client = 2048;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Tls12Client
    static ::Mono::Security::Interface::TlsProtocols _get_Tls12Client();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Tls12Client
    static void _set_Tls12Client(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols Tls12Server
    static constexpr const int Tls12Server = 1024;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Tls12Server
    static ::Mono::Security::Interface::TlsProtocols _get_Tls12Server();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Tls12Server
    static void _set_Tls12Server(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols Tls12
    static constexpr const int Tls12 = 3072;
    // Get static field: static public Mono.Security.Interface.TlsProtocols Tls12
    static ::Mono::Security::Interface::TlsProtocols _get_Tls12();
    // Set static field: static public Mono.Security.Interface.TlsProtocols Tls12
    static void _set_Tls12(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols ClientMask
    static constexpr const int ClientMask = 2688;
    // Get static field: static public Mono.Security.Interface.TlsProtocols ClientMask
    static ::Mono::Security::Interface::TlsProtocols _get_ClientMask();
    // Set static field: static public Mono.Security.Interface.TlsProtocols ClientMask
    static void _set_ClientMask(::Mono::Security::Interface::TlsProtocols value);
    // static field const value: static public Mono.Security.Interface.TlsProtocols ServerMask
    static constexpr const int ServerMask = 1344;
    // Get static field: static public Mono.Security.Interface.TlsProtocols ServerMask
    static ::Mono::Security::Interface::TlsProtocols _get_ServerMask();
    // Set static field: static public Mono.Security.Interface.TlsProtocols ServerMask
    static void _set_ServerMask(::Mono::Security::Interface::TlsProtocols value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Mono.Security.Interface.TlsProtocols
  #pragma pack(pop)
  static check_size<sizeof(TlsProtocols), 0 + sizeof(int)> __Mono_Security_Interface_TlsProtocolsSizeCheck;
  static_assert(sizeof(TlsProtocols) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

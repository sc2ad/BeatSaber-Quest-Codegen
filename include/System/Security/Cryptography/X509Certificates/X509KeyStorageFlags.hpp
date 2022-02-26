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
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, "System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct X509KeyStorageFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: X509KeyStorageFlags
    constexpr X509KeyStorageFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags DefaultKeySet
    static constexpr const int DefaultKeySet = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags DefaultKeySet
    static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags _get_DefaultKeySet();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags DefaultKeySet
    static void _set_DefaultKeySet(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags UserKeySet
    static constexpr const int UserKeySet = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags UserKeySet
    static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags _get_UserKeySet();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags UserKeySet
    static void _set_UserKeySet(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags MachineKeySet
    static constexpr const int MachineKeySet = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags MachineKeySet
    static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags _get_MachineKeySet();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags MachineKeySet
    static void _set_MachineKeySet(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags Exportable
    static constexpr const int Exportable = 4;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags Exportable
    static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags _get_Exportable();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags Exportable
    static void _set_Exportable(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags UserProtected
    static constexpr const int UserProtected = 8;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags UserProtected
    static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags _get_UserProtected();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags UserProtected
    static void _set_UserProtected(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags PersistKeySet
    static constexpr const int PersistKeySet = 16;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags PersistKeySet
    static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags _get_PersistKeySet();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags PersistKeySet
    static void _set_PersistKeySet(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags EphemeralKeySet
    static constexpr const int EphemeralKeySet = 32;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags EphemeralKeySet
    static ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags _get_EphemeralKeySet();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyStorageFlags EphemeralKeySet
    static void _set_EphemeralKeySet(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
  #pragma pack(pop)
  static check_size<sizeof(X509KeyStorageFlags), 0 + sizeof(int)> __System_Security_Cryptography_X509Certificates_X509KeyStorageFlagsSizeCheck;
  static_assert(sizeof(X509KeyStorageFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

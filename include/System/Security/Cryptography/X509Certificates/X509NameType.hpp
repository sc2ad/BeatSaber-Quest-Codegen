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
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509NameType
  // [TokenAttribute] Offset: FFFFFFFF
  struct X509NameType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: X509NameType
    constexpr X509NameType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509NameType SimpleName
    static constexpr const int SimpleName = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509NameType SimpleName
    static System::Security::Cryptography::X509Certificates::X509NameType _get_SimpleName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509NameType SimpleName
    static void _set_SimpleName(System::Security::Cryptography::X509Certificates::X509NameType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509NameType EmailName
    static constexpr const int EmailName = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509NameType EmailName
    static System::Security::Cryptography::X509Certificates::X509NameType _get_EmailName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509NameType EmailName
    static void _set_EmailName(System::Security::Cryptography::X509Certificates::X509NameType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509NameType UpnName
    static constexpr const int UpnName = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509NameType UpnName
    static System::Security::Cryptography::X509Certificates::X509NameType _get_UpnName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509NameType UpnName
    static void _set_UpnName(System::Security::Cryptography::X509Certificates::X509NameType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509NameType DnsName
    static constexpr const int DnsName = 3;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509NameType DnsName
    static System::Security::Cryptography::X509Certificates::X509NameType _get_DnsName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509NameType DnsName
    static void _set_DnsName(System::Security::Cryptography::X509Certificates::X509NameType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509NameType DnsFromAlternativeName
    static constexpr const int DnsFromAlternativeName = 4;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509NameType DnsFromAlternativeName
    static System::Security::Cryptography::X509Certificates::X509NameType _get_DnsFromAlternativeName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509NameType DnsFromAlternativeName
    static void _set_DnsFromAlternativeName(System::Security::Cryptography::X509Certificates::X509NameType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509NameType UrlName
    static constexpr const int UrlName = 5;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509NameType UrlName
    static System::Security::Cryptography::X509Certificates::X509NameType _get_UrlName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509NameType UrlName
    static void _set_UrlName(System::Security::Cryptography::X509Certificates::X509NameType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.X509Certificates.X509NameType
  #pragma pack(pop)
  static check_size<sizeof(X509NameType), 0 + sizeof(int)> __System_Security_Cryptography_X509Certificates_X509NameTypeSizeCheck;
  static_assert(sizeof(X509NameType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509NameType, "System.Security.Cryptography.X509Certificates", "X509NameType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

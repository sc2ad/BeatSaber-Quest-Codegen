// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.AuthenticationSchemes
  struct AuthenticationSchemes : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: AuthenticationSchemes
    constexpr AuthenticationSchemes(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.AuthenticationSchemes None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.AuthenticationSchemes None
    static System::Net::AuthenticationSchemes _get_None();
    // Set static field: static public System.Net.AuthenticationSchemes None
    static void _set_None(System::Net::AuthenticationSchemes value);
    // static field const value: static public System.Net.AuthenticationSchemes Digest
    static constexpr const int Digest = 1;
    // Get static field: static public System.Net.AuthenticationSchemes Digest
    static System::Net::AuthenticationSchemes _get_Digest();
    // Set static field: static public System.Net.AuthenticationSchemes Digest
    static void _set_Digest(System::Net::AuthenticationSchemes value);
    // static field const value: static public System.Net.AuthenticationSchemes Negotiate
    static constexpr const int Negotiate = 2;
    // Get static field: static public System.Net.AuthenticationSchemes Negotiate
    static System::Net::AuthenticationSchemes _get_Negotiate();
    // Set static field: static public System.Net.AuthenticationSchemes Negotiate
    static void _set_Negotiate(System::Net::AuthenticationSchemes value);
    // static field const value: static public System.Net.AuthenticationSchemes Ntlm
    static constexpr const int Ntlm = 4;
    // Get static field: static public System.Net.AuthenticationSchemes Ntlm
    static System::Net::AuthenticationSchemes _get_Ntlm();
    // Set static field: static public System.Net.AuthenticationSchemes Ntlm
    static void _set_Ntlm(System::Net::AuthenticationSchemes value);
    // static field const value: static public System.Net.AuthenticationSchemes Basic
    static constexpr const int Basic = 8;
    // Get static field: static public System.Net.AuthenticationSchemes Basic
    static System::Net::AuthenticationSchemes _get_Basic();
    // Set static field: static public System.Net.AuthenticationSchemes Basic
    static void _set_Basic(System::Net::AuthenticationSchemes value);
    // static field const value: static public System.Net.AuthenticationSchemes Anonymous
    static constexpr const int Anonymous = 32768;
    // Get static field: static public System.Net.AuthenticationSchemes Anonymous
    static System::Net::AuthenticationSchemes _get_Anonymous();
    // Set static field: static public System.Net.AuthenticationSchemes Anonymous
    static void _set_Anonymous(System::Net::AuthenticationSchemes value);
    // static field const value: static public System.Net.AuthenticationSchemes IntegratedWindowsAuthentication
    static constexpr const int IntegratedWindowsAuthentication = 6;
    // Get static field: static public System.Net.AuthenticationSchemes IntegratedWindowsAuthentication
    static System::Net::AuthenticationSchemes _get_IntegratedWindowsAuthentication();
    // Set static field: static public System.Net.AuthenticationSchemes IntegratedWindowsAuthentication
    static void _set_IntegratedWindowsAuthentication(System::Net::AuthenticationSchemes value);
  }; // System.Net.AuthenticationSchemes
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::AuthenticationSchemes, "System.Net", "AuthenticationSchemes");
#pragma pack(pop)
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
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CipherMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5F11C
  struct CipherMode/*, public System::Enum*/ {
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
    // Creating value type constructor for type: CipherMode
    constexpr CipherMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.CipherMode CBC
    static constexpr const int CBC = 1;
    // Get static field: static public System.Security.Cryptography.CipherMode CBC
    static System::Security::Cryptography::CipherMode _get_CBC();
    // Set static field: static public System.Security.Cryptography.CipherMode CBC
    static void _set_CBC(System::Security::Cryptography::CipherMode value);
    // static field const value: static public System.Security.Cryptography.CipherMode ECB
    static constexpr const int ECB = 2;
    // Get static field: static public System.Security.Cryptography.CipherMode ECB
    static System::Security::Cryptography::CipherMode _get_ECB();
    // Set static field: static public System.Security.Cryptography.CipherMode ECB
    static void _set_ECB(System::Security::Cryptography::CipherMode value);
    // static field const value: static public System.Security.Cryptography.CipherMode OFB
    static constexpr const int OFB = 3;
    // Get static field: static public System.Security.Cryptography.CipherMode OFB
    static System::Security::Cryptography::CipherMode _get_OFB();
    // Set static field: static public System.Security.Cryptography.CipherMode OFB
    static void _set_OFB(System::Security::Cryptography::CipherMode value);
    // static field const value: static public System.Security.Cryptography.CipherMode CFB
    static constexpr const int CFB = 4;
    // Get static field: static public System.Security.Cryptography.CipherMode CFB
    static System::Security::Cryptography::CipherMode _get_CFB();
    // Set static field: static public System.Security.Cryptography.CipherMode CFB
    static void _set_CFB(System::Security::Cryptography::CipherMode value);
    // static field const value: static public System.Security.Cryptography.CipherMode CTS
    static constexpr const int CTS = 5;
    // Get static field: static public System.Security.Cryptography.CipherMode CTS
    static System::Security::Cryptography::CipherMode _get_CTS();
    // Set static field: static public System.Security.Cryptography.CipherMode CTS
    static void _set_CTS(System::Security::Cryptography::CipherMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.CipherMode
  #pragma pack(pop)
  static check_size<sizeof(CipherMode), 0 + sizeof(int)> __System_Security_Cryptography_CipherModeSizeCheck;
  static_assert(sizeof(CipherMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CipherMode, "System.Security.Cryptography", "CipherMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

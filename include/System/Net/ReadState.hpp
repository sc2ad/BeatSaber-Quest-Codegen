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
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ReadState
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReadState/*, public System::Enum*/ {
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
    // Creating value type constructor for type: ReadState
    constexpr ReadState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.ReadState None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.ReadState None
    static System::Net::ReadState _get_None();
    // Set static field: static public System.Net.ReadState None
    static void _set_None(System::Net::ReadState value);
    // static field const value: static public System.Net.ReadState Status
    static constexpr const int Status = 1;
    // Get static field: static public System.Net.ReadState Status
    static System::Net::ReadState _get_Status();
    // Set static field: static public System.Net.ReadState Status
    static void _set_Status(System::Net::ReadState value);
    // static field const value: static public System.Net.ReadState Headers
    static constexpr const int Headers = 2;
    // Get static field: static public System.Net.ReadState Headers
    static System::Net::ReadState _get_Headers();
    // Set static field: static public System.Net.ReadState Headers
    static void _set_Headers(System::Net::ReadState value);
    // static field const value: static public System.Net.ReadState Content
    static constexpr const int Content = 3;
    // Get static field: static public System.Net.ReadState Content
    static System::Net::ReadState _get_Content();
    // Set static field: static public System.Net.ReadState Content
    static void _set_Content(System::Net::ReadState value);
    // static field const value: static public System.Net.ReadState Aborted
    static constexpr const int Aborted = 4;
    // Get static field: static public System.Net.ReadState Aborted
    static System::Net::ReadState _get_Aborted();
    // Set static field: static public System.Net.ReadState Aborted
    static void _set_Aborted(System::Net::ReadState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.ReadState
  #pragma pack(pop)
  static check_size<sizeof(ReadState), 0 + sizeof(int)> __System_Net_ReadStateSizeCheck;
  static_assert(sizeof(ReadState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ReadState, "System.Net", "ReadState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.SessionMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct SessionMode/*, public System::Enum*/ {
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
    // Creating value type constructor for type: SessionMode
    constexpr SessionMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.SessionMode Socket
    static constexpr const int Socket = 0;
    // Get static field: static public HoudiniEngineUnity.SessionMode Socket
    static HoudiniEngineUnity::SessionMode _get_Socket();
    // Set static field: static public HoudiniEngineUnity.SessionMode Socket
    static void _set_Socket(HoudiniEngineUnity::SessionMode value);
    // static field const value: static public HoudiniEngineUnity.SessionMode Pipe
    static constexpr const int Pipe = 1;
    // Get static field: static public HoudiniEngineUnity.SessionMode Pipe
    static HoudiniEngineUnity::SessionMode _get_Pipe();
    // Set static field: static public HoudiniEngineUnity.SessionMode Pipe
    static void _set_Pipe(HoudiniEngineUnity::SessionMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.SessionMode
  #pragma pack(pop)
  static check_size<sizeof(SessionMode), 0 + sizeof(int)> __HoudiniEngineUnity_SessionModeSizeCheck;
  static_assert(sizeof(SessionMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::SessionMode, "HoudiniEngineUnity", "SessionMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

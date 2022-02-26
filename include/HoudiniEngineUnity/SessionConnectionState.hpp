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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: SessionConnectionState
  struct SessionConnectionState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::SessionConnectionState, "HoudiniEngineUnity", "SessionConnectionState");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.SessionConnectionState
  // [TokenAttribute] Offset: FFFFFFFF
  struct SessionConnectionState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SessionConnectionState
    constexpr SessionConnectionState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.SessionConnectionState NOT_CONNECTED
    static constexpr const int NOT_CONNECTED = 0;
    // Get static field: static public HoudiniEngineUnity.SessionConnectionState NOT_CONNECTED
    static ::HoudiniEngineUnity::SessionConnectionState _get_NOT_CONNECTED();
    // Set static field: static public HoudiniEngineUnity.SessionConnectionState NOT_CONNECTED
    static void _set_NOT_CONNECTED(::HoudiniEngineUnity::SessionConnectionState value);
    // static field const value: static public HoudiniEngineUnity.SessionConnectionState CONNECTED
    static constexpr const int CONNECTED = 1;
    // Get static field: static public HoudiniEngineUnity.SessionConnectionState CONNECTED
    static ::HoudiniEngineUnity::SessionConnectionState _get_CONNECTED();
    // Set static field: static public HoudiniEngineUnity.SessionConnectionState CONNECTED
    static void _set_CONNECTED(::HoudiniEngineUnity::SessionConnectionState value);
    // static field const value: static public HoudiniEngineUnity.SessionConnectionState FAILED_TO_CONNECT
    static constexpr const int FAILED_TO_CONNECT = 2;
    // Get static field: static public HoudiniEngineUnity.SessionConnectionState FAILED_TO_CONNECT
    static ::HoudiniEngineUnity::SessionConnectionState _get_FAILED_TO_CONNECT();
    // Set static field: static public HoudiniEngineUnity.SessionConnectionState FAILED_TO_CONNECT
    static void _set_FAILED_TO_CONNECT(::HoudiniEngineUnity::SessionConnectionState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.SessionConnectionState
  #pragma pack(pop)
  static check_size<sizeof(SessionConnectionState), 0 + sizeof(int)> __HoudiniEngineUnity_SessionConnectionStateSizeCheck;
  static_assert(sizeof(SessionConnectionState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

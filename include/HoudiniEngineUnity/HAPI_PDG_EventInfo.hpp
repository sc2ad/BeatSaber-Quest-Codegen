// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_PDG_EventInfo
  struct HAPI_PDG_EventInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_EventInfo, "HoudiniEngineUnity", "HAPI_PDG_EventInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_PDG_EventInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_PDG_EventInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 nodeId
    // Size: 0x4
    // Offset: 0x0
    int nodeId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 workitemId
    // Size: 0x4
    // Offset: 0x4
    int workitemId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 dependencyId
    // Size: 0x4
    // Offset: 0x8
    int dependencyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 currentState
    // Size: 0x4
    // Offset: 0xC
    int currentState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastState
    // Size: 0x4
    // Offset: 0x10
    int lastState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 eventType
    // Size: 0x4
    // Offset: 0x14
    int eventType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 msgSH
    // Size: 0x4
    // Offset: 0x18
    int msgSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_PDG_EventInfo
    constexpr HAPI_PDG_EventInfo(int nodeId_ = {}, int workitemId_ = {}, int dependencyId_ = {}, int currentState_ = {}, int lastState_ = {}, int eventType_ = {}, int msgSH_ = {}) noexcept : nodeId{nodeId_}, workitemId{workitemId_}, dependencyId{dependencyId_}, currentState{currentState_}, lastState{lastState_}, eventType{eventType_}, msgSH{msgSH_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 nodeId
    [[deprecated("Use field access instead!")]] int& dyn_nodeId();
    // Get instance field reference: public System.Int32 workitemId
    [[deprecated("Use field access instead!")]] int& dyn_workitemId();
    // Get instance field reference: public System.Int32 dependencyId
    [[deprecated("Use field access instead!")]] int& dyn_dependencyId();
    // Get instance field reference: public System.Int32 currentState
    [[deprecated("Use field access instead!")]] int& dyn_currentState();
    // Get instance field reference: public System.Int32 lastState
    [[deprecated("Use field access instead!")]] int& dyn_lastState();
    // Get instance field reference: public System.Int32 eventType
    [[deprecated("Use field access instead!")]] int& dyn_eventType();
    // Get instance field reference: public System.Int32 msgSH
    [[deprecated("Use field access instead!")]] int& dyn_msgSH();
  }; // HoudiniEngineUnity.HAPI_PDG_EventInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_PDG_EventInfo), 24 + sizeof(int)> __HoudiniEngineUnity_HAPI_PDG_EventInfoSizeCheck;
  static_assert(sizeof(HAPI_PDG_EventInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

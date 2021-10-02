// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_HandleInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_HandleInfo/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 nameSH
    // Size: 0x4
    // Offset: 0x0
    int nameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 typeNameSH
    // Size: 0x4
    // Offset: 0x4
    int typeNameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 bindingsCount
    // Size: 0x4
    // Offset: 0x8
    int bindingsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_HandleInfo
    constexpr HAPI_HandleInfo(int nameSH_ = {}, int typeNameSH_ = {}, int bindingsCount_ = {}) noexcept : nameSH{nameSH_}, typeNameSH{typeNameSH_}, bindingsCount{bindingsCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 nameSH
    int& dyn_nameSH();
    // Get instance field reference: public System.Int32 typeNameSH
    int& dyn_typeNameSH();
    // Get instance field reference: public System.Int32 bindingsCount
    int& dyn_bindingsCount();
  }; // HoudiniEngineUnity.HAPI_HandleInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_HandleInfo), 8 + sizeof(int)> __HoudiniEngineUnity_HAPI_HandleInfoSizeCheck;
  static_assert(sizeof(HAPI_HandleInfo) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_HandleInfo, "HoudiniEngineUnity", "HAPI_HandleInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

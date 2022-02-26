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
  // Forward declaring type: HAPI_ObjectInfo
  struct HAPI_ObjectInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ObjectInfo, "HoudiniEngineUnity", "HAPI_ObjectInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_ObjectInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_ObjectInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 nameSH
    // Size: 0x4
    // Offset: 0x0
    int nameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 objectInstancePathSH
    // Size: 0x4
    // Offset: 0x4
    int objectInstancePathSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean hasTransformChanged
    // Size: 0x1
    // Offset: 0x8
    bool hasTransformChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean haveGeosChanged
    // Size: 0x1
    // Offset: 0x9
    bool haveGeosChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isVisible
    // Size: 0x1
    // Offset: 0xA
    bool isVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isInstancer
    // Size: 0x1
    // Offset: 0xB
    bool isInstancer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isInstanced
    // Size: 0x1
    // Offset: 0xC
    bool isInstanced;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInstanced and: geoCount
    char __padding6[0x3] = {};
    // public System.Int32 geoCount
    // Size: 0x4
    // Offset: 0x10
    int geoCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 nodeId
    // Size: 0x4
    // Offset: 0x14
    int nodeId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 objectToInstanceId
    // Size: 0x4
    // Offset: 0x18
    int objectToInstanceId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_ObjectInfo
    constexpr HAPI_ObjectInfo(int nameSH_ = {}, int objectInstancePathSH_ = {}, bool hasTransformChanged_ = {}, bool haveGeosChanged_ = {}, bool isVisible_ = {}, bool isInstancer_ = {}, bool isInstanced_ = {}, int geoCount_ = {}, int nodeId_ = {}, int objectToInstanceId_ = {}) noexcept : nameSH{nameSH_}, objectInstancePathSH{objectInstancePathSH_}, hasTransformChanged{hasTransformChanged_}, haveGeosChanged{haveGeosChanged_}, isVisible{isVisible_}, isInstancer{isInstancer_}, isInstanced{isInstanced_}, geoCount{geoCount_}, nodeId{nodeId_}, objectToInstanceId{objectToInstanceId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 nameSH
    int& dyn_nameSH();
    // Get instance field reference: public System.Int32 objectInstancePathSH
    int& dyn_objectInstancePathSH();
    // Get instance field reference: public System.Boolean hasTransformChanged
    bool& dyn_hasTransformChanged();
    // Get instance field reference: public System.Boolean haveGeosChanged
    bool& dyn_haveGeosChanged();
    // Get instance field reference: public System.Boolean isVisible
    bool& dyn_isVisible();
    // Get instance field reference: public System.Boolean isInstancer
    bool& dyn_isInstancer();
    // Get instance field reference: public System.Boolean isInstanced
    bool& dyn_isInstanced();
    // Get instance field reference: public System.Int32 geoCount
    int& dyn_geoCount();
    // Get instance field reference: public System.Int32 nodeId
    int& dyn_nodeId();
    // Get instance field reference: public System.Int32 objectToInstanceId
    int& dyn_objectToInstanceId();
  }; // HoudiniEngineUnity.HAPI_ObjectInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_ObjectInfo), 24 + sizeof(int)> __HoudiniEngineUnity_HAPI_ObjectInfoSizeCheck;
  static_assert(sizeof(HAPI_ObjectInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

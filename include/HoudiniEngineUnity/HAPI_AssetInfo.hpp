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
  // Forward declaring type: HAPI_AssetInfo
  struct HAPI_AssetInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AssetInfo, "HoudiniEngineUnity", "HAPI_AssetInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x3E
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_AssetInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_AssetInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 nodeId
    // Size: 0x4
    // Offset: 0x0
    int nodeId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 objectNodeId
    // Size: 0x4
    // Offset: 0x4
    int objectNodeId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean hasEverCooked
    // Size: 0x1
    // Offset: 0x8
    bool hasEverCooked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasEverCooked and: nameSH
    char __padding2[0x3] = {};
    // public System.Int32 nameSH
    // Size: 0x4
    // Offset: 0xC
    int nameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 labelSH
    // Size: 0x4
    // Offset: 0x10
    int labelSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 filePathSH
    // Size: 0x4
    // Offset: 0x14
    int filePathSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 versionSH
    // Size: 0x4
    // Offset: 0x18
    int versionSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 fullOpNameSH
    // Size: 0x4
    // Offset: 0x1C
    int fullOpNameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 helpTextSH
    // Size: 0x4
    // Offset: 0x20
    int helpTextSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 helpURLSH
    // Size: 0x4
    // Offset: 0x24
    int helpURLSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 objectCount
    // Size: 0x4
    // Offset: 0x28
    int objectCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 handleCount
    // Size: 0x4
    // Offset: 0x2C
    int handleCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 transformInputCount
    // Size: 0x4
    // Offset: 0x30
    int transformInputCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 geoInputCount
    // Size: 0x4
    // Offset: 0x34
    int geoInputCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 geoOutputCount
    // Size: 0x4
    // Offset: 0x38
    int geoOutputCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean haveObjectsChanged
    // Size: 0x1
    // Offset: 0x3C
    bool haveObjectsChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean haveMaterialsChanged
    // Size: 0x1
    // Offset: 0x3D
    bool haveMaterialsChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: HAPI_AssetInfo
    constexpr HAPI_AssetInfo(int nodeId_ = {}, int objectNodeId_ = {}, bool hasEverCooked_ = {}, int nameSH_ = {}, int labelSH_ = {}, int filePathSH_ = {}, int versionSH_ = {}, int fullOpNameSH_ = {}, int helpTextSH_ = {}, int helpURLSH_ = {}, int objectCount_ = {}, int handleCount_ = {}, int transformInputCount_ = {}, int geoInputCount_ = {}, int geoOutputCount_ = {}, bool haveObjectsChanged_ = {}, bool haveMaterialsChanged_ = {}) noexcept : nodeId{nodeId_}, objectNodeId{objectNodeId_}, hasEverCooked{hasEverCooked_}, nameSH{nameSH_}, labelSH{labelSH_}, filePathSH{filePathSH_}, versionSH{versionSH_}, fullOpNameSH{fullOpNameSH_}, helpTextSH{helpTextSH_}, helpURLSH{helpURLSH_}, objectCount{objectCount_}, handleCount{handleCount_}, transformInputCount{transformInputCount_}, geoInputCount{geoInputCount_}, geoOutputCount{geoOutputCount_}, haveObjectsChanged{haveObjectsChanged_}, haveMaterialsChanged{haveMaterialsChanged_} {}
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
    // Get instance field reference: public System.Int32 objectNodeId
    [[deprecated("Use field access instead!")]] int& dyn_objectNodeId();
    // Get instance field reference: public System.Boolean hasEverCooked
    [[deprecated("Use field access instead!")]] bool& dyn_hasEverCooked();
    // Get instance field reference: public System.Int32 nameSH
    [[deprecated("Use field access instead!")]] int& dyn_nameSH();
    // Get instance field reference: public System.Int32 labelSH
    [[deprecated("Use field access instead!")]] int& dyn_labelSH();
    // Get instance field reference: public System.Int32 filePathSH
    [[deprecated("Use field access instead!")]] int& dyn_filePathSH();
    // Get instance field reference: public System.Int32 versionSH
    [[deprecated("Use field access instead!")]] int& dyn_versionSH();
    // Get instance field reference: public System.Int32 fullOpNameSH
    [[deprecated("Use field access instead!")]] int& dyn_fullOpNameSH();
    // Get instance field reference: public System.Int32 helpTextSH
    [[deprecated("Use field access instead!")]] int& dyn_helpTextSH();
    // Get instance field reference: public System.Int32 helpURLSH
    [[deprecated("Use field access instead!")]] int& dyn_helpURLSH();
    // Get instance field reference: public System.Int32 objectCount
    [[deprecated("Use field access instead!")]] int& dyn_objectCount();
    // Get instance field reference: public System.Int32 handleCount
    [[deprecated("Use field access instead!")]] int& dyn_handleCount();
    // Get instance field reference: public System.Int32 transformInputCount
    [[deprecated("Use field access instead!")]] int& dyn_transformInputCount();
    // Get instance field reference: public System.Int32 geoInputCount
    [[deprecated("Use field access instead!")]] int& dyn_geoInputCount();
    // Get instance field reference: public System.Int32 geoOutputCount
    [[deprecated("Use field access instead!")]] int& dyn_geoOutputCount();
    // Get instance field reference: public System.Boolean haveObjectsChanged
    [[deprecated("Use field access instead!")]] bool& dyn_haveObjectsChanged();
    // Get instance field reference: public System.Boolean haveMaterialsChanged
    [[deprecated("Use field access instead!")]] bool& dyn_haveMaterialsChanged();
  }; // HoudiniEngineUnity.HAPI_AssetInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_AssetInfo), 61 + sizeof(bool)> __HoudiniEngineUnity_HAPI_AssetInfoSizeCheck;
  static_assert(sizeof(HAPI_AssetInfo) == 0x3E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

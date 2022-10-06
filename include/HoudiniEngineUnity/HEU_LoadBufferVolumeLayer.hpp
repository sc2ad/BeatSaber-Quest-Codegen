// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: HoudiniEngineUnity.HFLayerType
#include "HoudiniEngineUnity/HFLayerType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_LoadBufferVolumeLayer
  class HEU_LoadBufferVolumeLayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*, "HoudiniEngineUnity", "HEU_LoadBufferVolumeLayer");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_LoadBufferVolumeLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_LoadBufferVolumeLayer : public ::Il2CppObject {
    public:
    public:
    // public System.String _layerName
    // Size: 0x8
    // Offset: 0x10
    ::StringW layerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 _partID
    // Size: 0x4
    // Offset: 0x18
    int partID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _heightMapWidth
    // Size: 0x4
    // Offset: 0x1C
    int heightMapWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _heightMapHeight
    // Size: 0x4
    // Offset: 0x20
    int heightMapHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single _strength
    // Size: 0x4
    // Offset: 0x24
    float strength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.String _diffuseTexturePath
    // Size: 0x8
    // Offset: 0x28
    ::StringW diffuseTexturePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String _maskTexturePath
    // Size: 0x8
    // Offset: 0x30
    ::StringW maskTexturePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single _metallic
    // Size: 0x4
    // Offset: 0x38
    float metallic;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: metallic and: normalTexturePath
    char __padding7[0x4] = {};
    // public System.String _normalTexturePath
    // Size: 0x8
    // Offset: 0x40
    ::StringW normalTexturePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single _normalScale
    // Size: 0x4
    // Offset: 0x48
    float normalScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _smoothness
    // Size: 0x4
    // Offset: 0x4C
    float smoothness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color _specularColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color specularColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Vector2 _tileSize
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Vector2 tileSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 _tileOffset
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Vector2 tileOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Boolean _uiExpanded
    // Size: 0x1
    // Offset: 0x70
    bool uiExpanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: uiExpanded and: tile
    char __padding14[0x3] = {};
    // public System.Int32 _tile
    // Size: 0x4
    // Offset: 0x74
    int tile;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single[] _normalizedHeights
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<float> normalizedHeights;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single _minHeight
    // Size: 0x4
    // Offset: 0x80
    float minHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _maxHeight
    // Size: 0x4
    // Offset: 0x84
    float maxHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _heightRange
    // Size: 0x4
    // Offset: 0x88
    float heightRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _terrainSizeX
    // Size: 0x4
    // Offset: 0x8C
    float terrainSizeX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _terrainSizeY
    // Size: 0x4
    // Offset: 0x90
    float terrainSizeY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 _position
    // Size: 0xC
    // Offset: 0x94
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 _minBounds
    // Size: 0xC
    // Offset: 0xA0
    ::UnityEngine::Vector3 minBounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 _maxBounds
    // Size: 0xC
    // Offset: 0xAC
    ::UnityEngine::Vector3 maxBounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 _center
    // Size: 0xC
    // Offset: 0xB8
    ::UnityEngine::Vector3 center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: center and: layerPath
    char __padding25[0x4] = {};
    // public System.String _layerPath
    // Size: 0x8
    // Offset: 0xC8
    ::StringW layerPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean _hasLayerAttributes
    // Size: 0x1
    // Offset: 0xD0
    bool hasLayerAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasLayerAttributes and: layerType
    char __padding27[0x3] = {};
    // public HoudiniEngineUnity.HFLayerType _layerType
    // Size: 0x4
    // Offset: 0xD4
    ::HoudiniEngineUnity::HFLayerType layerType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HFLayerType) == 0x4);
    public:
    // Get instance field reference: public System.String _layerName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__layerName();
    // Get instance field reference: public System.Int32 _partID
    [[deprecated("Use field access instead!")]] int& dyn__partID();
    // Get instance field reference: public System.Int32 _heightMapWidth
    [[deprecated("Use field access instead!")]] int& dyn__heightMapWidth();
    // Get instance field reference: public System.Int32 _heightMapHeight
    [[deprecated("Use field access instead!")]] int& dyn__heightMapHeight();
    // Get instance field reference: public System.Single _strength
    [[deprecated("Use field access instead!")]] float& dyn__strength();
    // Get instance field reference: public System.String _diffuseTexturePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__diffuseTexturePath();
    // Get instance field reference: public System.String _maskTexturePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__maskTexturePath();
    // Get instance field reference: public System.Single _metallic
    [[deprecated("Use field access instead!")]] float& dyn__metallic();
    // Get instance field reference: public System.String _normalTexturePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__normalTexturePath();
    // Get instance field reference: public System.Single _normalScale
    [[deprecated("Use field access instead!")]] float& dyn__normalScale();
    // Get instance field reference: public System.Single _smoothness
    [[deprecated("Use field access instead!")]] float& dyn__smoothness();
    // Get instance field reference: public UnityEngine.Color _specularColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__specularColor();
    // Get instance field reference: public UnityEngine.Vector2 _tileSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__tileSize();
    // Get instance field reference: public UnityEngine.Vector2 _tileOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__tileOffset();
    // Get instance field reference: public System.Boolean _uiExpanded
    [[deprecated("Use field access instead!")]] bool& dyn__uiExpanded();
    // Get instance field reference: public System.Int32 _tile
    [[deprecated("Use field access instead!")]] int& dyn__tile();
    // Get instance field reference: public System.Single[] _normalizedHeights
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__normalizedHeights();
    // Get instance field reference: public System.Single _minHeight
    [[deprecated("Use field access instead!")]] float& dyn__minHeight();
    // Get instance field reference: public System.Single _maxHeight
    [[deprecated("Use field access instead!")]] float& dyn__maxHeight();
    // Get instance field reference: public System.Single _heightRange
    [[deprecated("Use field access instead!")]] float& dyn__heightRange();
    // Get instance field reference: public System.Single _terrainSizeX
    [[deprecated("Use field access instead!")]] float& dyn__terrainSizeX();
    // Get instance field reference: public System.Single _terrainSizeY
    [[deprecated("Use field access instead!")]] float& dyn__terrainSizeY();
    // Get instance field reference: public UnityEngine.Vector3 _position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__position();
    // Get instance field reference: public UnityEngine.Vector3 _minBounds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__minBounds();
    // Get instance field reference: public UnityEngine.Vector3 _maxBounds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__maxBounds();
    // Get instance field reference: public UnityEngine.Vector3 _center
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__center();
    // Get instance field reference: public System.String _layerPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__layerPath();
    // Get instance field reference: public System.Boolean _hasLayerAttributes
    [[deprecated("Use field access instead!")]] bool& dyn__hasLayerAttributes();
    // Get instance field reference: public HoudiniEngineUnity.HFLayerType _layerType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HFLayerType& dyn__layerType();
    // public System.Void .ctor()
    // Offset: 0x187F7E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_LoadBufferVolumeLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_LoadBufferVolumeLayer*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_LoadBufferVolumeLayer
  #pragma pack(pop)
  static check_size<sizeof(HEU_LoadBufferVolumeLayer), 212 + sizeof(::HoudiniEngineUnity::HFLayerType)> __HoudiniEngineUnity_HEU_LoadBufferVolumeLayerSizeCheck;
  static_assert(sizeof(HEU_LoadBufferVolumeLayer) == 0xD8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassRenderDataSO
#include "GlobalNamespace/BloomPrePassRenderDataSO.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: ToneMapping
#include "GlobalNamespace/ToneMapping.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRenderDataSO::Data);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRenderDataSO::Data*, "", "BloomPrePassRenderDataSO/Data");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassRenderDataSO/Data
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassRenderDataSO::Data : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.RenderTexture bloomPrePassRenderTexture
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::RenderTexture* bloomPrePassRenderTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    // public UnityEngine.Vector2 textureToScreenRatio
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Vector2 textureToScreenRatio;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Matrix4x4 viewMatrix
    // Size: 0x40
    // Offset: 0x20
    ::UnityEngine::Matrix4x4 viewMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // public UnityEngine.Matrix4x4 projectionMatrix
    // Size: 0x40
    // Offset: 0x60
    ::UnityEngine::Matrix4x4 projectionMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // public System.Single stereoCameraEyeOffset
    // Size: 0x4
    // Offset: 0xA0
    float stereoCameraEyeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public ToneMapping toneMapping
    // Size: 0x4
    // Offset: 0xA4
    ::GlobalNamespace::ToneMapping toneMapping;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ToneMapping) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.RenderTexture bloomPrePassRenderTexture
    ::UnityEngine::RenderTexture*& dyn_bloomPrePassRenderTexture();
    // Get instance field reference: public UnityEngine.Vector2 textureToScreenRatio
    ::UnityEngine::Vector2& dyn_textureToScreenRatio();
    // Get instance field reference: public UnityEngine.Matrix4x4 viewMatrix
    ::UnityEngine::Matrix4x4& dyn_viewMatrix();
    // Get instance field reference: public UnityEngine.Matrix4x4 projectionMatrix
    ::UnityEngine::Matrix4x4& dyn_projectionMatrix();
    // Get instance field reference: public System.Single stereoCameraEyeOffset
    float& dyn_stereoCameraEyeOffset();
    // Get instance field reference: public ToneMapping toneMapping
    ::GlobalNamespace::ToneMapping& dyn_toneMapping();
    // public System.Void .ctor()
    // Offset: 0x2AC9AE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassRenderDataSO::Data* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassRenderDataSO::Data::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassRenderDataSO::Data*, creationType>()));
    }
  }; // BloomPrePassRenderDataSO/Data
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassRenderDataSO::Data), 164 + sizeof(::GlobalNamespace::ToneMapping)> __GlobalNamespace_BloomPrePassRenderDataSO_DataSizeCheck;
  static_assert(sizeof(BloomPrePassRenderDataSO::Data) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRenderDataSO::Data::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

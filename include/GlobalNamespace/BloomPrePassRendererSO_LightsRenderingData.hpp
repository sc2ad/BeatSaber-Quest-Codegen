// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassRendererSO
#include "GlobalNamespace/BloomPrePassRendererSO.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*, "", "BloomPrePassRendererSO/LightsRenderingData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassRendererSO/LightsRenderingData
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassRendererSO::LightsRenderingData : public ::Il2CppObject {
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
    // public UnityEngine.Mesh mesh
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Vector3[] vertices
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector3> vertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public UnityEngine.Color[] colors
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Color> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // public UnityEngine.Vector4[] viewPos
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Vector4> viewPos;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Mesh mesh
    ::UnityEngine::Mesh*& dyn_mesh();
    // Get instance field reference: public UnityEngine.Vector3[] vertices
    ::ArrayW<::UnityEngine::Vector3>& dyn_vertices();
    // Get instance field reference: public UnityEngine.Color[] colors
    ::ArrayW<::UnityEngine::Color>& dyn_colors();
    // Get instance field reference: public UnityEngine.Vector4[] viewPos
    ::ArrayW<::UnityEngine::Vector4>& dyn_viewPos();
    // public System.Void .ctor()
    // Offset: 0x2086648
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassRendererSO::LightsRenderingData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassRendererSO::LightsRenderingData*, creationType>()));
    }
  }; // BloomPrePassRendererSO/LightsRenderingData
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassRendererSO::LightsRenderingData), 40 + sizeof(::ArrayW<::UnityEngine::Vector4>)> __GlobalNamespace_BloomPrePassRendererSO_LightsRenderingDataSizeCheck;
  static_assert(sizeof(BloomPrePassRendererSO::LightsRenderingData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

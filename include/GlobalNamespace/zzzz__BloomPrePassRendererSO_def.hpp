#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BloomPrePassLightTypeSO;
}
namespace UnityEngine {
class Texture;
}
namespace GlobalNamespace {
class BloomFogSO;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace GlobalNamespace {
class IBloomPrePassParams;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct ToneMapping;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BloomPrePassLight__QuadData;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData;
}
// Type: ::PreallocationData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14642))
// CS Name: BloomPrePassRendererSO::PreallocationData
class CORDL_TYPE ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BloomPrePassRendererSO__PreallocationData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BloomPrePassRendererSO__PreallocationData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData(____GlobalNamespace__BloomPrePassRendererSO__PreallocationData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BloomPrePassRendererSO__PreallocationData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData(____GlobalNamespace__BloomPrePassRendererSO__PreallocationData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData& operator=(____GlobalNamespace__BloomPrePassRendererSO__PreallocationData&& o) noexcept = default;
  constexpr ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData& operator=(____GlobalNamespace__BloomPrePassRendererSO__PreallocationData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BloomPrePassLightTypeSO __declspec(property(get=__get_lightType, put=__set_lightType))  lightType;

constexpr void __set_lightType(::GlobalNamespace::BloomPrePassLightTypeSO value) ;

constexpr ::GlobalNamespace::BloomPrePassLightTypeSO __get_lightType() const;

 int32_t __declspec(property(get=__get_preallocateCount, put=__set_preallocateCount))  preallocateCount;

constexpr void __set_preallocateCount(int32_t value) ;

constexpr int32_t __get_preallocateCount() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BloomPrePassRendererSO__PreallocationData() ;

/// @brief Method .ctor addr 0x1f96268 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightsRenderingData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14643))
// CS Name: BloomPrePassRendererSO::LightsRenderingData
class CORDL_TYPE ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData(____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData(____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData& operator=(____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData&& o) noexcept = default;
  constexpr ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData& operator=(____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Mesh __declspec(property(get=__get_mesh, put=__set_mesh))  mesh;

constexpr void __set_mesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get_mesh() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassLight__QuadData> __declspec(property(get=__get_lightQuads, put=__set_lightQuads))  lightQuads;

constexpr void __set_lightQuads(::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassLight__QuadData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassLight__QuadData> __get_lightQuads() const;

 ::UnityEngine::Rendering::SubMeshDescriptor __declspec(property(get=__get_subMeshDescriptor, put=__set_subMeshDescriptor))  subMeshDescriptor;

constexpr void __set_subMeshDescriptor(::UnityEngine::Rendering::SubMeshDescriptor value) ;

constexpr ::UnityEngine::Rendering::SubMeshDescriptor __get_subMeshDescriptor() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData() ;

/// @brief Method .ctor addr 0x1f95258 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePassRendererSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14644))
// CS Name: BloomPrePassRendererSO
class CORDL_TYPE BloomPrePassRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LightsRenderingData = ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData;

using PreallocationData = ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BloomPrePassRendererSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererSO", modifiers: " const&", def_value: None }]
constexpr BloomPrePassRendererSO(BloomPrePassRendererSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererSO", modifiers: "&&", def_value: None }]
constexpr BloomPrePassRendererSO(BloomPrePassRendererSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassRendererSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BloomPrePassRendererSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassRendererSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassRendererSO& operator=(BloomPrePassRendererSO&& o) noexcept = default;
  constexpr BloomPrePassRendererSO& operator=(BloomPrePassRendererSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BloomFogSO __declspec(property(get=__get__bloomFog, put=__set__bloomFog))  _bloomFog;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO value) ;

constexpr ::GlobalNamespace::BloomFogSO __get__bloomFog() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData> __declspec(property(get=__get__preallocationData, put=__set__preallocationData))  _preallocationData;

constexpr void __set__preallocationData(::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData> __get__preallocationData() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO,::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData> __declspec(property(get=__get__lightsRenderingData, put=__set__lightsRenderingData))  _lightsRenderingData;

constexpr void __set__lightsRenderingData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO,::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO,::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData> __get__lightsRenderingData() const;

 ::UnityEngine::Rendering::CommandBuffer __declspec(property(get=__get__commandBuffer, put=__set__commandBuffer))  _commandBuffer;

constexpr void __set__commandBuffer(::UnityEngine::Rendering::CommandBuffer value) ;

constexpr ::UnityEngine::Rendering::CommandBuffer __get__commandBuffer() const;

static int32_t __declspec(property(get=__get__vertexTransformMatrixID, put=__set__vertexTransformMatrixID))  _vertexTransformMatrixID;

static void __set__vertexTransformMatrixID(int32_t value) ;

static int32_t __get__vertexTransformMatrixID() ;

static int32_t __declspec(property(get=__get__bloomPrePassTextureID, put=__set__bloomPrePassTextureID))  _bloomPrePassTextureID;

static void __set__bloomPrePassTextureID(int32_t value) ;

static int32_t __get__bloomPrePassTextureID() ;

static int32_t __declspec(property(get=__get__stereoCameraEyeOffsetID, put=__set__stereoCameraEyeOffsetID))  _stereoCameraEyeOffsetID;

static void __set__stereoCameraEyeOffsetID(int32_t value) ;

static int32_t __get__stereoCameraEyeOffsetID() ;

static int32_t __declspec(property(get=__get__customFogTextureToScreenRatioID, put=__set__customFogTextureToScreenRatioID))  _customFogTextureToScreenRatioID;

static void __set__customFogTextureToScreenRatioID(int32_t value) ;

static int32_t __get__customFogTextureToScreenRatioID() ;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 ::UnityEngine::Texture2D __declspec(property(get=__get__blackTexture, put=__set__blackTexture))  _blackTexture;

constexpr void __set__blackTexture(::UnityEngine::Texture2D value) ;

constexpr ::UnityEngine::Texture2D __get__blackTexture() const;

 ::UnityEngine::RenderTexture __declspec(property(get=__get__lowestResBloomTexture, put=__set__lowestResBloomTexture))  _lowestResBloomTexture;

constexpr void __set__lowestResBloomTexture(::UnityEngine::RenderTexture value) ;

constexpr ::UnityEngine::RenderTexture __get__lowestResBloomTexture() const;


// Methods

/// @brief Method OnEnable addr 0x1f950a0 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f950bc size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method Init addr 0x1f90960 size 0x144 virtual false final false
 void Init() ;

/// @brief Method Cleanup addr 0x1f950c0 size 0x198 virtual false final false
 void Cleanup() ;

/// @brief Method RenderAndSetData addr 0x1f91234 size 0x954 virtual false final false
 void RenderAndSetData(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix, float_t stereoCameraEyeOffset, ::GlobalNamespace::IBloomPrePassParams bloomPrePassParams, ::UnityEngine::RenderTexture dest, ByRef<::UnityEngine::Vector2> textureToScreenRatio, ByRef<::GlobalNamespace::ToneMapping> toneMapping) ;

/// @brief Method SetDataToShaders addr 0x1f91ba4 size 0xf4 virtual false final false
static void SetDataToShaders(float_t stereoCameraEyeOffset, ::UnityEngine::Vector2 textureToScreenRatio, ::UnityEngine::Texture bloomFogTexture, ::GlobalNamespace::ToneMapping toneMapping) ;

/// @brief Method SetCustomStereoCameraEyeOffset addr 0x1f95fb4 size 0x6c virtual false final false
 void SetCustomStereoCameraEyeOffset(float_t stereoCameraEyeOffset) ;

/// @brief Method CreateBloomPrePassRenderTextureIfNeeded addr 0x1f90f44 size 0x2f0 virtual false final false
 ::UnityEngine::RenderTexture CreateBloomPrePassRenderTextureIfNeeded(::UnityEngine::RenderTexture renderTexture, ::GlobalNamespace::IBloomPrePassParams bloomPrePassParams) ;

/// @brief Method EnableBloomFog addr 0x1f91b88 size 0x1c virtual false final false
 void EnableBloomFog() ;

/// @brief Method DisableBloomFog addr 0x1f91d2c size 0x1c virtual false final false
 void DisableBloomFog() ;

/// @brief Method UpdateBloomFogParams addr 0x1f96020 size 0x18 virtual false final false
 void UpdateBloomFogParams() ;

/// @brief Method GetCameraParams addr 0x1f90d9c size 0x1a8 virtual false final false
 void GetCameraParams(::UnityEngine::Camera camera, ByRef<::UnityEngine::Matrix4x4> projectionMatrix, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<float_t> stereoCameraEyeOffset) ;

/// @brief Method RenderAllLights addr 0x1f9575c size 0x7c4 virtual false final false
 void RenderAllLights(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t linesWidth) ;

/// @brief Method PrepareLightsMeshRendering addr 0x1f95260 size 0x4fc virtual false final false
 void PrepareLightsMeshRendering(::GlobalNamespace::BloomPrePassLightTypeSO lightType, ::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData data, int32_t numberOfLights) ;

/// @brief Method MatrixLerp addr 0x1f96038 size 0xb8 virtual false final false
 ::UnityEngine::Matrix4x4 MatrixLerp(::UnityEngine::Matrix4x4 from, ::UnityEngine::Matrix4x4 to, float_t t) ;

// Ctor Parameters []
explicit BloomPrePassRendererSO() ;

/// @brief Method .ctor addr 0x1f960f0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO, "", "BloomPrePassRendererSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__LightsRenderingData, "", "BloomPrePassRendererSO/LightsRenderingData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BloomPrePassRendererSO__PreallocationData, "", "BloomPrePassRendererSO/PreallocationData");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MirrorRendererSO__CameraTransformData;
}
// Type: ::CameraTransformData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15318))
// CS Name: MirrorRendererSO::CameraTransformData
struct CORDL_TYPE ____GlobalNamespace__MirrorRendererSO__CameraTransformData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "stereoEnabled", ty: "bool", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MirrorRendererSO__CameraTransformData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t fov, bool stereoEnabled) noexcept;


                    constexpr ____GlobalNamespace__MirrorRendererSO__CameraTransformData(____GlobalNamespace__MirrorRendererSO__CameraTransformData const&) = default;
                    constexpr ____GlobalNamespace__MirrorRendererSO__CameraTransformData(____GlobalNamespace__MirrorRendererSO__CameraTransformData&&) = default;
                    constexpr ____GlobalNamespace__MirrorRendererSO__CameraTransformData& operator=(____GlobalNamespace__MirrorRendererSO__CameraTransformData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MirrorRendererSO__CameraTransformData& operator=(____GlobalNamespace__MirrorRendererSO__CameraTransformData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MirrorRendererSO__CameraTransformData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rotation() const;

 float_t __declspec(property(get=__get_fov, put=__set_fov))  fov;

constexpr void __set_fov(float_t value) ;

constexpr float_t __get_fov() const;

 bool __declspec(property(get=__get_stereoEnabled, put=__set_stereoEnabled))  stereoEnabled;

constexpr void __set_stereoEnabled(bool value) ;

constexpr bool __get_stereoEnabled() const;


// Methods

/// @brief Method .ctor addr 0x2678ac0 size 0x1c virtual false final false
 void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t fov, bool stereoEnabled) ;

/// @brief Method Equals addr 0x26795a0 size 0x100 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26796a0 size 0x120 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MirrorRendererSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15319))
// CS Name: MirrorRendererSO
class CORDL_TYPE MirrorRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using CameraTransformData = ::GlobalNamespace::____GlobalNamespace__MirrorRendererSO__CameraTransformData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~MirrorRendererSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: " const&", def_value: None }]
constexpr MirrorRendererSO(MirrorRendererSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: "&&", def_value: None }]
constexpr MirrorRendererSO(MirrorRendererSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MirrorRendererSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr MirrorRendererSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MirrorRendererSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MirrorRendererSO& operator=(MirrorRendererSO&& o) noexcept = default;
  constexpr MirrorRendererSO& operator=(MirrorRendererSO const& o) noexcept = default;
                


// Fields

 ::UnityEngine::LayerMask __declspec(property(get=__get__reflectLayers, put=__set__reflectLayers))  _reflectLayers;

constexpr void __set__reflectLayers(::UnityEngine::LayerMask value) ;

constexpr ::UnityEngine::LayerMask __get__reflectLayers() const;

 int32_t __declspec(property(get=__get__stereoTextureWidth, put=__set__stereoTextureWidth))  _stereoTextureWidth;

constexpr void __set__stereoTextureWidth(int32_t value) ;

constexpr int32_t __get__stereoTextureWidth() const;

 int32_t __declspec(property(get=__get__stereoTextureHeight, put=__set__stereoTextureHeight))  _stereoTextureHeight;

constexpr void __set__stereoTextureHeight(int32_t value) ;

constexpr int32_t __get__stereoTextureHeight() const;

 int32_t __declspec(property(get=__get__monoTextureWidth, put=__set__monoTextureWidth))  _monoTextureWidth;

constexpr void __set__monoTextureWidth(int32_t value) ;

constexpr int32_t __get__monoTextureWidth() const;

 int32_t __declspec(property(get=__get__monoTextureHeight, put=__set__monoTextureHeight))  _monoTextureHeight;

constexpr void __set__monoTextureHeight(int32_t value) ;

constexpr int32_t __get__monoTextureHeight() const;

 int32_t __declspec(property(get=__get__maxAntiAliasing, put=__set__maxAntiAliasing))  _maxAntiAliasing;

constexpr void __set__maxAntiAliasing(int32_t value) ;

constexpr int32_t __get__maxAntiAliasing() const;

 bool __declspec(property(get=__get__disableDepthTexture, put=__set__disableDepthTexture))  _disableDepthTexture;

constexpr void __set__disableDepthTexture(bool value) ;

constexpr bool __get__disableDepthTexture() const;

 bool __declspec(property(get=__get__enableBloomPrePass, put=__set__enableBloomPrePass))  _enableBloomPrePass;

constexpr void __set__enableBloomPrePass(bool value) ;

constexpr bool __get__enableBloomPrePass() const;

 ::GlobalNamespace::BloomPrePassRendererSO __declspec(property(get=__get__bloomPrePassRenderer, put=__set__bloomPrePassRenderer))  _bloomPrePassRenderer;

constexpr void __set__bloomPrePassRenderer(::GlobalNamespace::BloomPrePassRendererSO value) ;

constexpr ::GlobalNamespace::BloomPrePassRendererSO __get__bloomPrePassRenderer() const;

 ::GlobalNamespace::BloomPrePassEffectSO __declspec(property(get=__get__bloomPrePassEffect, put=__set__bloomPrePassEffect))  _bloomPrePassEffect;

constexpr void __set__bloomPrePassEffect(::GlobalNamespace::BloomPrePassEffectSO value) ;

constexpr ::GlobalNamespace::BloomPrePassEffectSO __get__bloomPrePassEffect() const;

 ::UnityEngine::Shader __declspec(property(get=__get__clearDepthShader, put=__set__clearDepthShader))  _clearDepthShader;

constexpr void __set__clearDepthShader(::UnityEngine::Shader value) ;

constexpr ::UnityEngine::Shader __get__clearDepthShader() const;

 ::UnityEngine::RenderTexture __declspec(property(get=__get__bloomPrePassRenderTexture, put=__set__bloomPrePassRenderTexture))  _bloomPrePassRenderTexture;

constexpr void __set__bloomPrePassRenderTexture(::UnityEngine::RenderTexture value) ;

constexpr ::UnityEngine::RenderTexture __get__bloomPrePassRenderTexture() const;

 ::UnityEngine::Camera __declspec(property(get=__get__mirrorCamera, put=__set__mirrorCamera))  _mirrorCamera;

constexpr void __set__mirrorCamera(::UnityEngine::Camera value) ;

constexpr ::UnityEngine::Camera __get__mirrorCamera() const;

 int32_t __declspec(property(get=__get__antialiasing, put=__set__antialiasing))  _antialiasing;

constexpr void __set__antialiasing(int32_t value) ;

constexpr int32_t __get__antialiasing() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__MirrorRendererSO__CameraTransformData,::UnityEngine::RenderTexture> __declspec(property(get=__get__renderTextures, put=__set__renderTextures))  _renderTextures;

constexpr void __set__renderTextures(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__MirrorRendererSO__CameraTransformData,::UnityEngine::RenderTexture> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__MirrorRendererSO__CameraTransformData,::UnityEngine::RenderTexture> __get__renderTextures() const;

 ::UnityEngine::Rect __declspec(property(get=__get_kLeftRect, put=__set_kLeftRect))  kLeftRect;

constexpr void __set_kLeftRect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_kLeftRect() const;

 ::UnityEngine::Rect __declspec(property(get=__get_kRightRect, put=__set_kRightRect))  kRightRect;

constexpr void __set_kRightRect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_kRightRect() const;

 ::UnityEngine::Rect __declspec(property(get=__get_kFullRect, put=__set_kFullRect))  kFullRect;

constexpr void __set_kFullRect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_kFullRect() const;

/// @brief Field kWaterLayer offset 0
static constexpr int32_t  kWaterLayer{4};


// Methods

/// @brief Method OnValidate addr 0x2678a2c size 0x4 virtual false final false
 void OnValidate() ;

/// @brief Method Awake addr 0x2678aa4 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method ValidateParams addr 0x2678a30 size 0x74 virtual false final false
 void ValidateParams() ;

/// @brief Method Init addr 0x2678aa8 size 0x18 virtual false final false
 void Init(::UnityEngine::LayerMask reflectLayers, int32_t stereoTextureWidth, int32_t stereoTextureHeight, int32_t monoTextureWidth, int32_t monoTextureHeight, int32_t maxAntiAliasing, bool enableBloomPrePass) ;

/// @brief Method PrepareForNextFrame addr 0x2677dac size 0x18c virtual false final false
 void PrepareForNextFrame() ;

/// @brief Method GetMirrorTexture addr 0x26781cc size 0x7f0 virtual false final false
 ::UnityEngine::Texture GetMirrorTexture(::UnityEngine::Vector3 reflectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal) ;

/// @brief Method RenderMirror addr 0x2678ea4 size 0x270 virtual false final false
 void RenderMirror(::UnityEngine::Vector3 camPosition, ::UnityEngine::Quaternion camRotation, ::UnityEngine::Matrix4x4 camProjectionMatrix, ::UnityEngine::Rect screenRect, ::UnityEngine::Vector3 reclectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal) ;

/// @brief Method OnDisable addr 0x2679240 size 0x224 virtual false final false
 void OnDisable() ;

/// @brief Method CreateOrUpdateMirrorCamera addr 0x2678adc size 0x2b4 virtual false final false
 void CreateOrUpdateMirrorCamera(::UnityEngine::Camera currentCamera, ::UnityEngine::RenderTexture renderTexture) ;

/// @brief Method Plane addr 0x2678d90 size 0x2c virtual false final false
static ::UnityEngine::Vector4 Plane(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal) ;

/// @brief Method CameraSpacePlane addr 0x2679114 size 0x12c virtual false final false
static ::UnityEngine::Vector4 CameraSpacePlane(::UnityEngine::Matrix4x4 worldToCameraMatrix, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal) ;

/// @brief Method CalculateReflectionMatrix addr 0x2678dbc size 0xe8 virtual false final false
static ::UnityEngine::Matrix4x4 CalculateReflectionMatrix(::UnityEngine::Vector4 plane) ;

// Ctor Parameters []
explicit MirrorRendererSO() ;

/// @brief Method .ctor addr 0x2679464 size 0x13c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MirrorRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererSO, "", "MirrorRendererSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MirrorRendererSO__CameraTransformData, "", "MirrorRendererSO/CameraTransformData");

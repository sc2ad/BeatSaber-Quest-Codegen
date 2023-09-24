#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Camera;
}
namespace LIV::SDK::Unity {
struct SDKResolution;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace LIV::SDK::Unity {
class LIV;
}
namespace LIV::SDK::Unity {
struct SDKPose;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine::Rendering {
struct ColorWriteMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Material;
}
namespace LIV::SDK::Unity {
struct TEXTURE_ID;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace LIV::SDK::Unity {
struct SDKOutputFrame;
}
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class SDKRender;
}
// Type: LIV.SDK.Unity::SDKRender
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15145))
// CS Name: LIV.SDK.Unity.SDKRender
class CORDL_TYPE SDKRender : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x340};

virtual ~SDKRender() = default;

// Ctor Parameters [CppParam { name: "", ty: "SDKRender", modifiers: " const&", def_value: None }]
constexpr SDKRender(SDKRender const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SDKRender", modifiers: "&&", def_value: None }]
constexpr SDKRender(SDKRender&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SDKRender(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SDKRender& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SDKRender& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SDKRender& operator=(SDKRender&& o) noexcept = default;
  constexpr SDKRender& operator=(SDKRender const& o) noexcept = default;
                


// Fields

 UnityEngine::Rendering::CommandBuffer __declspec(property(get=__get__clipPlaneCommandBuffer, put=__set__clipPlaneCommandBuffer))  _clipPlaneCommandBuffer;

constexpr void __set__clipPlaneCommandBuffer(UnityEngine::Rendering::CommandBuffer value) ;

constexpr UnityEngine::Rendering::CommandBuffer __get__clipPlaneCommandBuffer() const;

 UnityEngine::Rendering::CommandBuffer __declspec(property(get=__get__combineAlphaCommandBuffer, put=__set__combineAlphaCommandBuffer))  _combineAlphaCommandBuffer;

constexpr void __set__combineAlphaCommandBuffer(UnityEngine::Rendering::CommandBuffer value) ;

constexpr UnityEngine::Rendering::CommandBuffer __get__combineAlphaCommandBuffer() const;

 UnityEngine::Rendering::CommandBuffer __declspec(property(get=__get__captureTextureCommandBuffer, put=__set__captureTextureCommandBuffer))  _captureTextureCommandBuffer;

constexpr void __set__captureTextureCommandBuffer(UnityEngine::Rendering::CommandBuffer value) ;

constexpr UnityEngine::Rendering::CommandBuffer __get__captureTextureCommandBuffer() const;

 UnityEngine::Rendering::CommandBuffer __declspec(property(get=__get__applyTextureCommandBuffer, put=__set__applyTextureCommandBuffer))  _applyTextureCommandBuffer;

constexpr void __set__applyTextureCommandBuffer(UnityEngine::Rendering::CommandBuffer value) ;

constexpr UnityEngine::Rendering::CommandBuffer __get__applyTextureCommandBuffer() const;

 UnityEngine::Rendering::CommandBuffer __declspec(property(get=__get__optimizedRenderingCommandBuffer, put=__set__optimizedRenderingCommandBuffer))  _optimizedRenderingCommandBuffer;

constexpr void __set__optimizedRenderingCommandBuffer(UnityEngine::Rendering::CommandBuffer value) ;

constexpr UnityEngine::Rendering::CommandBuffer __get__optimizedRenderingCommandBuffer() const;

 UnityEngine::Rendering::CameraEvent __declspec(property(get=__get__clipPlaneCameraEvent, put=__set__clipPlaneCameraEvent))  _clipPlaneCameraEvent;

constexpr void __set__clipPlaneCameraEvent(UnityEngine::Rendering::CameraEvent value) ;

constexpr UnityEngine::Rendering::CameraEvent __get__clipPlaneCameraEvent() const;

 UnityEngine::Rendering::CameraEvent __declspec(property(get=__get__optimizedRenderingCameraEvent, put=__set__optimizedRenderingCameraEvent))  _optimizedRenderingCameraEvent;

constexpr void __set__optimizedRenderingCameraEvent(UnityEngine::Rendering::CameraEvent value) ;

constexpr UnityEngine::Rendering::CameraEvent __get__optimizedRenderingCameraEvent() const;

 UnityEngine::Mesh __declspec(property(get=__get__clipPlaneMesh, put=__set__clipPlaneMesh))  _clipPlaneMesh;

constexpr void __set__clipPlaneMesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__clipPlaneMesh() const;

 UnityEngine::Material __declspec(property(get=__get__clipPlaneSimpleMaterial, put=__set__clipPlaneSimpleMaterial))  _clipPlaneSimpleMaterial;

constexpr void __set__clipPlaneSimpleMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__clipPlaneSimpleMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__clipPlaneSimpleDebugMaterial, put=__set__clipPlaneSimpleDebugMaterial))  _clipPlaneSimpleDebugMaterial;

constexpr void __set__clipPlaneSimpleDebugMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__clipPlaneSimpleDebugMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__clipPlaneComplexMaterial, put=__set__clipPlaneComplexMaterial))  _clipPlaneComplexMaterial;

constexpr void __set__clipPlaneComplexMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__clipPlaneComplexMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__clipPlaneComplexDebugMaterial, put=__set__clipPlaneComplexDebugMaterial))  _clipPlaneComplexDebugMaterial;

constexpr void __set__clipPlaneComplexDebugMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__clipPlaneComplexDebugMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__writeOpaqueToAlphaMaterial, put=__set__writeOpaqueToAlphaMaterial))  _writeOpaqueToAlphaMaterial;

constexpr void __set__writeOpaqueToAlphaMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__writeOpaqueToAlphaMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__combineAlphaMaterial, put=__set__combineAlphaMaterial))  _combineAlphaMaterial;

constexpr void __set__combineAlphaMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__combineAlphaMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__writeMaterial, put=__set__writeMaterial))  _writeMaterial;

constexpr void __set__writeMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__writeMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__forceForwardRenderingMaterial, put=__set__forceForwardRenderingMaterial))  _forceForwardRenderingMaterial;

constexpr void __set__forceForwardRenderingMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__forceForwardRenderingMaterial() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__backgroundRenderTexture, put=__set__backgroundRenderTexture))  _backgroundRenderTexture;

constexpr void __set__backgroundRenderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__backgroundRenderTexture() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__foregroundRenderTexture, put=__set__foregroundRenderTexture))  _foregroundRenderTexture;

constexpr void __set__foregroundRenderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__foregroundRenderTexture() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__optimizedRenderTexture, put=__set__optimizedRenderTexture))  _optimizedRenderTexture;

constexpr void __set__optimizedRenderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__optimizedRenderTexture() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__complexClipPlaneRenderTexture, put=__set__complexClipPlaneRenderTexture))  _complexClipPlaneRenderTexture;

constexpr void __set__complexClipPlaneRenderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__complexClipPlaneRenderTexture() const;

 LIV::SDK::Unity::LIV __declspec(property(get=__get__liv, put=__set__liv))  _liv;

constexpr void __set__liv(LIV::SDK::Unity::LIV value) ;

constexpr LIV::SDK::Unity::LIV __get__liv() const;

 LIV::SDK::Unity::SDKOutputFrame __declspec(property(get=__get__outputFrame, put=__set__outputFrame))  _outputFrame;

constexpr void __set__outputFrame(LIV::SDK::Unity::SDKOutputFrame value) ;

constexpr LIV::SDK::Unity::SDKOutputFrame __get__outputFrame() const;

 LIV::SDK::Unity::SDKInputFrame __declspec(property(get=__get__inputFrame, put=__set__inputFrame))  _inputFrame;

constexpr void __set__inputFrame(LIV::SDK::Unity::SDKInputFrame value) ;

constexpr LIV::SDK::Unity::SDKInputFrame __get__inputFrame() const;

 LIV::SDK::Unity::SDKResolution __declspec(property(get=__get__resolution, put=__set__resolution))  _resolution;

constexpr void __set__resolution(LIV::SDK::Unity::SDKResolution value) ;

constexpr LIV::SDK::Unity::SDKResolution __get__resolution() const;

 UnityEngine::Camera __declspec(property(get=__get__cameraInstance, put=__set__cameraInstance))  _cameraInstance;

constexpr void __set__cameraInstance(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__cameraInstance() const;

 LIV::SDK::Unity::SDKPose __declspec(property(get=__get__requestedPose, put=__set__requestedPose))  _requestedPose;

constexpr void __set__requestedPose(LIV::SDK::Unity::SDKPose value) ;

constexpr LIV::SDK::Unity::SDKPose __get__requestedPose() const;

 int32_t __declspec(property(get=__get__requestedPoseFrameIndex, put=__set__requestedPoseFrameIndex))  _requestedPoseFrameIndex;

constexpr void __set__requestedPoseFrameIndex(int32_t value) ;

constexpr int32_t __get__requestedPoseFrameIndex() const;


// Properties

 bool __declspec(property(get=get_useDeferredRendering))  useDeferredRendering;

 bool __declspec(property(get=get_interlacedRendering))  interlacedRendering;

 bool __declspec(property(get=get_canRenderBackground))  canRenderBackground;

 bool __declspec(property(get=get_canRenderForeground))  canRenderForeground;

 bool __declspec(property(get=get_canRenderOptimized))  canRenderOptimized;

 LIV::SDK::Unity::LIV __declspec(property(get=get_liv))  liv;

 LIV::SDK::Unity::SDKOutputFrame __declspec(property(get=get_outputFrame))  outputFrame;

 LIV::SDK::Unity::SDKInputFrame __declspec(property(get=get_inputFrame))  inputFrame;

 LIV::SDK::Unity::SDKResolution __declspec(property(get=get_resolution))  resolution;

 UnityEngine::Camera __declspec(property(get=get_cameraInstance))  cameraInstance;

 UnityEngine::Camera __declspec(property(get=get_cameraReference))  cameraReference;

 UnityEngine::Camera __declspec(property(get=get_hmdCamera))  hmdCamera;

 UnityEngine::Transform __declspec(property(get=get_stage))  stage;

 UnityEngine::Transform __declspec(property(get=get_stageTransform))  stageTransform;

 UnityEngine::Matrix4x4 __declspec(property(get=get_stageLocalToWorldMatrix))  stageLocalToWorldMatrix;

 UnityEngine::Matrix4x4 __declspec(property(get=get_localToWorldMatrix))  localToWorldMatrix;

 int32_t __declspec(property(get=get_spectatorLayerMask))  spectatorLayerMask;

 bool __declspec(property(get=get_disableStandardAssets))  disableStandardAssets;

 bool __declspec(property(get=get_canSetPose))  canSetPose;


// Methods

/// @brief Method GetClipPlaneMaterial addr 0x209d32c size 0x104 virtual false final false
 UnityEngine::Material GetClipPlaneMaterial(bool debugClipPlane, bool complexClipPlane, UnityEngine::Rendering::ColorWriteMask colorWriteMask) ;

/// @brief Method GetGroundClipPlaneMaterial addr 0x209d430 size 0x9c virtual false final false
 UnityEngine::Material GetGroundClipPlaneMaterial(bool debugClipPlane, UnityEngine::Rendering::ColorWriteMask colorWriteMask) ;

/// @brief Method get_useDeferredRendering addr 0x209d4cc size 0x4c virtual false final false
 bool get_useDeferredRendering() ;

/// @brief Method get_interlacedRendering addr 0x209d518 size 0xc virtual false final false
 bool get_interlacedRendering() ;

/// @brief Method get_canRenderBackground addr 0x209d530 size 0x8c virtual false final false
 bool get_canRenderBackground() ;

/// @brief Method get_canRenderForeground addr 0x209d5bc size 0xa0 virtual false final false
 bool get_canRenderForeground() ;

/// @brief Method get_canRenderOptimized addr 0x209d65c size 0x78 virtual false final false
 bool get_canRenderOptimized() ;

static LIV::SDK::Unity::SDKRender New_ctor(LIV::SDK::Unity::LIV liv) ;

/// @brief Method .ctor addr 0x209bac4 size 0x17c virtual false final false
 void _ctor(LIV::SDK::Unity::LIV liv) ;

/// @brief Method UpdateCameraSettings addr 0x209deb0 size 0x84 virtual false final false
 void UpdateCameraSettings() ;

/// @brief Method Render addr 0x209c188 size 0xc4 virtual false final false
 void Render() ;

/// @brief Method RenderBackground addr 0x209e81c size 0x118 virtual false final false
 void RenderBackground() ;

/// @brief Method RenderForeground addr 0x209e934 size 0x4c0 virtual false final false
 void RenderForeground() ;

/// @brief Method RenderOptimized addr 0x209edf4 size 0x500 virtual false final false
 void RenderOptimized() ;

/// @brief Method CreateAssets addr 0x209d7a4 size 0x70c virtual false final false
 void CreateAssets() ;

/// @brief Method DestroyAssets addr 0x20a036c size 0x184 virtual false final false
 void DestroyAssets() ;

/// @brief Method Dispose addr 0x209bc40 size 0x38 virtual true final true
 void Dispose() ;

/// @brief Method get_liv addr 0x20a05e8 size 0x8 virtual false final false
 LIV::SDK::Unity::LIV get_liv() ;

/// @brief Method get_outputFrame addr 0x20a05f0 size 0x10 virtual false final false
 LIV::SDK::Unity::SDKOutputFrame get_outputFrame() ;

/// @brief Method get_inputFrame addr 0x20a0600 size 0x10 virtual false final false
 LIV::SDK::Unity::SDKInputFrame get_inputFrame() ;

/// @brief Method get_resolution addr 0x20a0610 size 0x8 virtual false final false
 LIV::SDK::Unity::SDKResolution get_resolution() ;

/// @brief Method get_cameraInstance addr 0x20a0618 size 0x8 virtual false final false
 UnityEngine::Camera get_cameraInstance() ;

/// @brief Method get_cameraReference addr 0x209faa0 size 0x8c virtual false final false
 UnityEngine::Camera get_cameraReference() ;

/// @brief Method get_hmdCamera addr 0x20a0620 size 0x1c virtual false final false
 UnityEngine::Camera get_hmdCamera() ;

/// @brief Method get_stage addr 0x20a063c size 0x18 virtual false final false
 UnityEngine::Transform get_stage() ;

/// @brief Method get_stageTransform addr 0x20a0654 size 0x1c virtual false final false
 UnityEngine::Transform get_stageTransform() ;

/// @brief Method get_stageLocalToWorldMatrix addr 0x20a0670 size 0xf8 virtual false final false
 UnityEngine::Matrix4x4 get_stageLocalToWorldMatrix() ;

/// @brief Method get_localToWorldMatrix addr 0x209e0ec size 0xc4 virtual false final false
 UnityEngine::Matrix4x4 get_localToWorldMatrix() ;

/// @brief Method get_spectatorLayerMask addr 0x209e1b0 size 0x20 virtual false final false
 int32_t get_spectatorLayerMask() ;

/// @brief Method get_disableStandardAssets addr 0x209f750 size 0x1c virtual false final false
 bool get_disableStandardAssets() ;

/// @brief Method get_canSetPose addr 0x20a0768 size 0x20 virtual false final false
 bool get_canSetPose() ;

/// @brief Method SetPose addr 0x20a0788 size 0x2f4 virtual false final false
 bool SetPose(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, float_t verticalFieldOfView, bool useLocalSpace) ;

/// @brief Method SetGroundPlane addr 0x20a0c2c size 0x194 virtual false final false
 void SetGroundPlane(float_t distance, UnityEngine::Vector3 normal, bool useLocalSpace) ;

/// @brief Method SetGroundPlane addr 0x20a0dc0 size 0x78 virtual false final false
 void SetGroundPlane(UnityEngine::Plane plane, bool useLocalSpace) ;

/// @brief Method SetGroundPlane addr 0x20a0e38 size 0x1a0 virtual false final false
 void SetGroundPlane(UnityEngine::Transform transform, bool useLocalSpace) ;

/// @brief Method ReleaseBridgePoseControl addr 0x20a04f0 size 0x64 virtual false final false
 void ReleaseBridgePoseControl() ;

/// @brief Method UpdateBridgeResolution addr 0x209e41c size 0x58 virtual false final false
 void UpdateBridgeResolution() ;

/// @brief Method UpdateBridgeInputFrame addr 0x209df34 size 0x1b8 virtual false final false
 void UpdateBridgeInputFrame() ;

/// @brief Method InvokePreRender addr 0x209e7e4 size 0x38 virtual false final false
 void InvokePreRender() ;

/// @brief Method IvokePostRender addr 0x209f2f4 size 0x38 virtual false final false
 void IvokePostRender() ;

/// @brief Method InvokePreRenderBackground addr 0x209f53c size 0x38 virtual false final false
 void InvokePreRenderBackground() ;

/// @brief Method InvokePostRenderBackground addr 0x209f690 size 0x38 virtual false final false
 void InvokePostRenderBackground() ;

/// @brief Method InvokePreRenderForeground addr 0x209f964 size 0x38 virtual false final false
 void InvokePreRenderForeground() ;

/// @brief Method InvokePostRenderForeground addr 0x209f99c size 0x38 virtual false final false
 void InvokePostRenderForeground() ;

/// @brief Method CreateBackgroundTexture addr 0x20a0ffc size 0x94 virtual false final false
 void CreateBackgroundTexture() ;

/// @brief Method CreateForegroundTexture addr 0x20a1200 size 0x94 virtual false final false
 void CreateForegroundTexture() ;

/// @brief Method CreateOptimizedTexture addr 0x20a1294 size 0x94 virtual false final false
 void CreateOptimizedTexture() ;

/// @brief Method CreateComplexClipPlaneTexture addr 0x20a1328 size 0x94 virtual false final false
 void CreateComplexClipPlaneTexture() ;

/// @brief Method UpdateTextures addr 0x209e564 size 0x280 virtual false final false
 void UpdateTextures() ;

/// @brief Method SendTextureToBridge addr 0x209f574 size 0x11c virtual false final false
 void SendTextureToBridge(UnityEngine::RenderTexture texture, LIV::SDK::Unity::TEXTURE_ID id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
NEED_NO_BOX(LIV::SDK::Unity::SDKRender);
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKRender, "LIV.SDK.Unity", "SDKRender");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Matrix4x4;
}
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
namespace LIV::SDK::Unity {
struct TEXTURE_DEVICE;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace LIV::SDK::Unity {
struct RENDERING_PIPELINE;
}
namespace LIV::SDK::Unity {
struct FEATURES;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Quaternion;
}
namespace LIV::SDK::Unity {
struct SDKPose;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace LIV::SDK::Unity {
class SDKRender;
}
namespace LIV::SDK::Unity {
struct SDKTrackedSpace;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace LIV::SDK::Unity {
struct TEXTURE_COLOR_SPACE;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class SDKUtils;
}
// Type: LIV.SDK.Unity::SDKUtils
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15171))
// CS Name: LIV.SDK.Unity.SDKUtils
class CORDL_TYPE SDKUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SDKUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "SDKUtils", modifiers: " const&", def_value: None }]
constexpr SDKUtils(SDKUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SDKUtils", modifiers: "&&", def_value: None }]
constexpr SDKUtils(SDKUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SDKUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SDKUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SDKUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SDKUtils& operator=(SDKUtils&& o) noexcept = default;
  constexpr SDKUtils& operator=(SDKUtils const& o) noexcept = default;
                


// Properties

static LIV::SDK::Unity::TEXTURE_COLOR_SPACE __declspec(property(get=get_GetDefaultColorSpace))  GetDefaultColorSpace;


// Methods

/// @brief Method CreateClipPlane addr 0x209feb0 size 0x4bc virtual false final false
static void CreateClipPlane(UnityEngine::Mesh mesh, int32_t resX, int32_t resY, bool useQuads, float_t skirtLength) ;

/// @brief Method GetReadWriteFromColorSpace addr 0x20a3d30 size 0x18 virtual false final false
static UnityEngine::RenderTextureReadWrite GetReadWriteFromColorSpace(LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace) ;

/// @brief Method get_GetDefaultColorSpace addr 0x20a3d48 size 0x2c virtual false final false
static LIV::SDK::Unity::TEXTURE_COLOR_SPACE get_GetDefaultColorSpace() ;

/// @brief Method GetColorSpace addr 0x20a1420 size 0x8c virtual false final false
static LIV::SDK::Unity::TEXTURE_COLOR_SPACE GetColorSpace(UnityEngine::RenderTexture renderTexture) ;

/// @brief Method GetRenderingPipeline addr 0x20a3d74 size 0x20 virtual false final false
static LIV::SDK::Unity::RENDERING_PIPELINE GetRenderingPipeline(UnityEngine::RenderingPath renderingPath) ;

/// @brief Method GetDevice addr 0x20a13bc size 0x64 virtual false final false
static LIV::SDK::Unity::TEXTURE_DEVICE GetDevice() ;

/// @brief Method ContainsFlag addr 0x209bee8 size 0xc virtual false final false
static bool ContainsFlag(uint64_t flags, uint64_t flag) ;

/// @brief Method SetFlag addr 0x209af78 size 0x14 virtual false final false
static uint64_t SetFlag(uint64_t flags, uint64_t flag, bool enabled) ;

/// @brief Method GetCameraPositionAndRotation addr 0x20a3d94 size 0x78 virtual false final false
static void GetCameraPositionAndRotation(LIV::SDK::Unity::SDKPose pose, UnityEngine::Matrix4x4 originLocalToWorldMatrix, ByRef<UnityEngine::Vector3> position, ByRef<UnityEngine::Quaternion> rotation) ;

/// @brief Method CleanCameraBehaviours addr 0x209fb2c size 0x384 virtual false final false
static void CleanCameraBehaviours(UnityEngine::Camera camera, ::ArrayW<::StringW> excludeBehaviours) ;

/// @brief Method SetCamera addr 0x209e1d0 size 0x24c virtual false final false
static void SetCamera(UnityEngine::Camera camera, UnityEngine::Transform cameraTransform, LIV::SDK::Unity::SDKInputFrame inputFrame, UnityEngine::Matrix4x4 originLocalToWorldMatrix, int32_t layerMask) ;

/// @brief Method RotateQuaternionByMatrix addr 0x20a0a7c size 0x164 virtual false final false
static UnityEngine::Quaternion RotateQuaternionByMatrix(UnityEngine::Matrix4x4 matrix, UnityEngine::Quaternion rotation) ;

/// @brief Method GetTrackedSpace addr 0x20a3e0c size 0x27c virtual false final false
static LIV::SDK::Unity::SDKTrackedSpace GetTrackedSpace(UnityEngine::Transform transform) ;

/// @brief Method DestroyObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool DestroyObject(ByRef<T> reference) ;

/// @brief Method DisposeObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool DisposeObject(ByRef<T> reference) ;

/// @brief Method CreateTexture addr 0x20a1090 size 0x170 virtual false final false
static bool CreateTexture(ByRef<UnityEngine::RenderTexture> renderTexture, int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format) ;

/// @brief Method DestroyTexture addr 0x20a0554 size 0x94 virtual false final false
static void DestroyTexture(ByRef<UnityEngine::RenderTexture> _renderTexture) ;

/// @brief Method ApplyUserSpaceTransform addr 0x209e474 size 0xf0 virtual false final false
static void ApplyUserSpaceTransform(LIV::SDK::Unity::SDKRender render) ;

/// @brief Method CreateBridgeOutputFrame addr 0x209f32c size 0x188 virtual false final false
static void CreateBridgeOutputFrame(LIV::SDK::Unity::SDKRender render) ;

/// @brief Method FeatureEnabled addr 0x209d524 size 0xc virtual false final false
static bool FeatureEnabled(LIV::SDK::Unity::FEATURES features, LIV::SDK::Unity::FEATURES feature) ;

/// @brief Method DisableStandardAssets addr 0x209f76c size 0x170 virtual false final false
static void DisableStandardAssets(UnityEngine::Camera cameraInstance, ByRef<::ArrayW<UnityEngine::MonoBehaviour>> behaviours, ByRef<::ArrayW<bool>> wasBehaviourEnabled) ;

/// @brief Method RestoreStandardAssets addr 0x209fa18 size 0x88 virtual false final false
static void RestoreStandardAssets(ByRef<::ArrayW<UnityEngine::MonoBehaviour>> behaviours, ByRef<::ArrayW<bool>> wasBehaviourEnabled) ;

/// @brief Method ForceForwardRendering addr 0x20a4088 size 0x28c virtual false final false
static void ForceForwardRendering(UnityEngine::Camera cameraInstance, UnityEngine::Mesh clipPlaneMesh, UnityEngine::Material forceForwardRenderingMaterial) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
NEED_NO_BOX(LIV::SDK::Unity::SDKUtils);
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKUtils, "LIV.SDK.Unity", "SDKUtils");

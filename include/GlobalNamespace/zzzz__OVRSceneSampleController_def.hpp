#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
class Texture;
}
namespace GlobalNamespace {
class OVRPlayerController;
}
namespace GlobalNamespace {
class OVRGridCube;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneSampleController;
}
// Type: ::OVRSceneSampleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8952))
// CS Name: OVRSceneSampleController
class CORDL_TYPE OVRSceneSampleController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~OVRSceneSampleController() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneSampleController", modifiers: " const&", def_value: None }]
constexpr OVRSceneSampleController(OVRSceneSampleController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneSampleController", modifiers: "&&", def_value: None }]
constexpr OVRSceneSampleController(OVRSceneSampleController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSceneSampleController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSceneSampleController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSceneSampleController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSceneSampleController& operator=(OVRSceneSampleController&& o) noexcept = default;
  constexpr OVRSceneSampleController& operator=(OVRSceneSampleController const& o) noexcept = default;
                


// Fields

 UnityEngine::KeyCode __declspec(property(get=__get_quitKey, put=__set_quitKey))  quitKey;

constexpr void __set_quitKey(UnityEngine::KeyCode value) ;

constexpr UnityEngine::KeyCode __get_quitKey() const;

 UnityEngine::Texture __declspec(property(get=__get_fadeInTexture, put=__set_fadeInTexture))  fadeInTexture;

constexpr void __set_fadeInTexture(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_fadeInTexture() const;

 float_t __declspec(property(get=__get_speedRotationIncrement, put=__set_speedRotationIncrement))  speedRotationIncrement;

constexpr void __set_speedRotationIncrement(float_t value) ;

constexpr float_t __get_speedRotationIncrement() const;

 GlobalNamespace::OVRPlayerController __declspec(property(get=__get_playerController, put=__set_playerController))  playerController;

constexpr void __set_playerController(GlobalNamespace::OVRPlayerController value) ;

constexpr GlobalNamespace::OVRPlayerController __get_playerController() const;

 GlobalNamespace::OVRCameraRig __declspec(property(get=__get_cameraController, put=__set_cameraController))  cameraController;

constexpr void __set_cameraController(GlobalNamespace::OVRCameraRig value) ;

constexpr GlobalNamespace::OVRCameraRig __get_cameraController() const;

 ::StringW __declspec(property(get=__get_layerName, put=__set_layerName))  layerName;

constexpr void __set_layerName(::StringW value) ;

constexpr ::StringW __get_layerName() const;

 bool __declspec(property(get=__get_visionMode, put=__set_visionMode))  visionMode;

constexpr void __set_visionMode(bool value) ;

constexpr bool __get_visionMode() const;

 GlobalNamespace::OVRGridCube __declspec(property(get=__get_gridCube, put=__set_gridCube))  gridCube;

constexpr void __set_gridCube(GlobalNamespace::OVRGridCube value) ;

constexpr GlobalNamespace::OVRGridCube __get_gridCube() const;


// Methods

/// @brief Method Awake addr 0x2630174 size 0x194 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2630308 size 0xe8 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x26303f0 size 0xd4 virtual false final false
 void Update() ;

/// @brief Method UpdateVisionMode addr 0x2630574 size 0xbc virtual false final false
 void UpdateVisionMode() ;

/// @brief Method UpdateSpeedAndRotationScaleMultiplier addr 0x2630630 size 0xc4 virtual false final false
 void UpdateSpeedAndRotationScaleMultiplier() ;

/// @brief Method UpdateRecenterPose addr 0x26304c4 size 0xb0 virtual false final false
 void UpdateRecenterPose() ;

static GlobalNamespace::OVRSceneSampleController New_ctor() ;

/// @brief Method .ctor addr 0x26306f4 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRSceneSampleController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneSampleController, "", "OVRSceneSampleController");

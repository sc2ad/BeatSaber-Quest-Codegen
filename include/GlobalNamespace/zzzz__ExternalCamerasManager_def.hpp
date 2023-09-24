#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class OculusMRCManager;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ExternalCamerasManager;
}
// Type: ::ExternalCamerasManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15302))
// CS Name: ExternalCamerasManager
class CORDL_TYPE ExternalCamerasManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ExternalCamerasManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExternalCamerasManager", modifiers: " const&", def_value: None }]
constexpr ExternalCamerasManager(ExternalCamerasManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExternalCamerasManager", modifiers: "&&", def_value: None }]
constexpr ExternalCamerasManager(ExternalCamerasManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExternalCamerasManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ExternalCamerasManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExternalCamerasManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExternalCamerasManager& operator=(ExternalCamerasManager&& o) noexcept = default;
  constexpr ExternalCamerasManager& operator=(ExternalCamerasManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OculusMRCManager __declspec(property(get=__get__oculusMRCManager, put=__set__oculusMRCManager))  _oculusMRCManager;

constexpr void __set__oculusMRCManager(GlobalNamespace::OculusMRCManager value) ;

constexpr GlobalNamespace::OculusMRCManager __get__oculusMRCManager() const;

 UnityEngine::Camera __declspec(property(get=__get__mrcBackgroundCameraPrefab, put=__set__mrcBackgroundCameraPrefab))  _mrcBackgroundCameraPrefab;

constexpr void __set__mrcBackgroundCameraPrefab(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__mrcBackgroundCameraPrefab() const;

 UnityEngine::Camera __declspec(property(get=__get__mrcForegroundCameraPrefab, put=__set__mrcForegroundCameraPrefab))  _mrcForegroundCameraPrefab;

constexpr void __set__mrcForegroundCameraPrefab(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__mrcForegroundCameraPrefab() const;


// Methods

/// @brief Method OnEnable addr 0x2675f80 size 0xcc virtual false final false
 void OnEnable() ;

/// @brief Method InstantiateMixedRealityBackgroundCameraGameObject addr 0x267604c size 0x80 virtual false final false
 UnityEngine::GameObject InstantiateMixedRealityBackgroundCameraGameObject(UnityEngine::GameObject mainCameraGameObject) ;

/// @brief Method InstantiateMixedRealityForegroundCameraGameObject addr 0x26760cc size 0x80 virtual false final false
 UnityEngine::GameObject InstantiateMixedRealityForegroundCameraGameObject(UnityEngine::GameObject mainCameraGameObject) ;

static GlobalNamespace::ExternalCamerasManager New_ctor() ;

/// @brief Method .ctor addr 0x267614c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ExternalCamerasManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExternalCamerasManager, "", "ExternalCamerasManager");

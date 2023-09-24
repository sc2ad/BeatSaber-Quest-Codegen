#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class SmoothCamera;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothCameraController;
}
// Type: ::SmoothCameraController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5421))
// CS Name: SmoothCameraController
class CORDL_TYPE SmoothCameraController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SmoothCameraController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmoothCameraController", modifiers: " const&", def_value: None }]
constexpr SmoothCameraController(SmoothCameraController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmoothCameraController", modifiers: "&&", def_value: None }]
constexpr SmoothCameraController(SmoothCameraController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmoothCameraController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SmoothCameraController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmoothCameraController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmoothCameraController& operator=(SmoothCameraController&& o) noexcept = default;
  constexpr SmoothCameraController& operator=(SmoothCameraController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 GlobalNamespace::SmoothCamera __declspec(property(get=__get__smoothCamera, put=__set__smoothCamera))  _smoothCamera;

constexpr void __set__smoothCamera(GlobalNamespace::SmoothCamera value) ;

constexpr GlobalNamespace::SmoothCamera __get__smoothCamera() const;


// Methods

/// @brief Method Start addr 0x21107b8 size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2110958 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleDidActivate addr 0x211095c size 0x40 virtual false final false
 void HandleDidActivate() ;

/// @brief Method HandleDidDeactivate addr 0x211099c size 0x4 virtual false final false
 void HandleDidDeactivate() ;

/// @brief Method ActivateSmoothCameraIfNeeded addr 0x21107bc size 0x19c virtual false final false
 void ActivateSmoothCameraIfNeeded() ;

static GlobalNamespace::SmoothCameraController New_ctor() ;

/// @brief Method .ctor addr 0x21109a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SmoothCameraController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCameraController, "", "SmoothCameraController");

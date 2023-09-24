#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class VRCenterAdjust;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class VRController;
}
namespace GlobalNamespace {
class MouseLook;
}
// Forward declare root types
namespace GlobalNamespace {
class FirstPersonFlyingController;
}
// Type: ::FirstPersonFlyingController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5922))
// CS Name: FirstPersonFlyingController
class CORDL_TYPE FirstPersonFlyingController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~FirstPersonFlyingController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonFlyingController", modifiers: " const&", def_value: None }]
constexpr FirstPersonFlyingController(FirstPersonFlyingController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonFlyingController", modifiers: "&&", def_value: None }]
constexpr FirstPersonFlyingController(FirstPersonFlyingController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FirstPersonFlyingController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FirstPersonFlyingController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FirstPersonFlyingController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FirstPersonFlyingController& operator=(FirstPersonFlyingController&& o) noexcept = default;
  constexpr FirstPersonFlyingController& operator=(FirstPersonFlyingController const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__moveSensitivity, put=__set__moveSensitivity))  _moveSensitivity;

constexpr void __set__moveSensitivity(float_t value) ;

constexpr float_t __get__moveSensitivity() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__camera() const;

 float_t __declspec(property(get=__get__cameraFov, put=__set__cameraFov))  _cameraFov;

constexpr void __set__cameraFov(float_t value) ;

constexpr float_t __get__cameraFov() const;

 GlobalNamespace::VRCenterAdjust __declspec(property(get=__get__centerAdjust, put=__set__centerAdjust))  _centerAdjust;

constexpr void __set__centerAdjust(GlobalNamespace::VRCenterAdjust value) ;

constexpr GlobalNamespace::VRCenterAdjust __get__centerAdjust() const;

 GlobalNamespace::VRController __declspec(property(get=__get__controller0, put=__set__controller0))  _controller0;

constexpr void __set__controller0(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__controller0() const;

 GlobalNamespace::VRController __declspec(property(get=__get__controller1, put=__set__controller1))  _controller1;

constexpr void __set__controller1(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__controller1() const;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__controllerModels, put=__set__controllerModels))  _controllerModels;

constexpr void __set__controllerModels(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__controllerModels() const;

 GlobalNamespace::MouseLook __declspec(property(get=__get__mouseLook, put=__set__mouseLook))  _mouseLook;

constexpr void __set__mouseLook(GlobalNamespace::MouseLook value) ;

constexpr GlobalNamespace::MouseLook __get__mouseLook() const;

 bool __declspec(property(get=__get__shouldBeEnabled, put=__set__shouldBeEnabled))  _shouldBeEnabled;

constexpr void __set__shouldBeEnabled(bool value) ;

constexpr bool __get__shouldBeEnabled() const;

 UnityEngine::Transform __declspec(property(get=__get__cameraTransform, put=__set__cameraTransform))  _cameraTransform;

constexpr void __set__cameraTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__cameraTransform() const;


// Methods

/// @brief Method Awake addr 0x21929b0 size 0xc virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x21929bc size 0x1b4 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x2192bdc size 0x48 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2192c58 size 0x5c virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x2192cb4 size 0x3a8 virtual false final false
 void Update() ;

/// @brief Method Inject addr 0x21933b8 size 0x12c virtual false final false
 void Inject(UnityEngine::Camera camera, GlobalNamespace::VRCenterAdjust centerAdjust, GlobalNamespace::VRController controller0, GlobalNamespace::VRController controller1, bool shouldBeEnabled) ;

static GlobalNamespace::FirstPersonFlyingController New_ctor() ;

/// @brief Method .ctor addr 0x21934e4 size 0xa8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FirstPersonFlyingController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FirstPersonFlyingController, "", "FirstPersonFlyingController");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothCamera;
}
// Type: ::SmoothCamera
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5420))
// CS Name: SmoothCamera
class CORDL_TYPE SmoothCamera : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SmoothCamera() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmoothCamera", modifiers: " const&", def_value: None }]
constexpr SmoothCamera(SmoothCamera const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmoothCamera", modifiers: "&&", def_value: None }]
constexpr SmoothCamera(SmoothCamera&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmoothCamera(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SmoothCamera& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmoothCamera& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmoothCamera& operator=(SmoothCamera&& o) noexcept = default;
  constexpr SmoothCamera& operator=(SmoothCamera const& o) noexcept = default;
                


// Fields

 UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__camera() const;

 GlobalNamespace::MainCamera __declspec(property(get=__get__mainCamera, put=__set__mainCamera))  _mainCamera;

constexpr void __set__mainCamera(GlobalNamespace::MainCamera value) ;

constexpr GlobalNamespace::MainCamera __get__mainCamera() const;

 UnityEngine::Vector3 __declspec(property(get=__get__thirdPersonPosition, put=__set__thirdPersonPosition))  _thirdPersonPosition;

constexpr void __set__thirdPersonPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__thirdPersonPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get__thirdPersonEulerAngles, put=__set__thirdPersonEulerAngles))  _thirdPersonEulerAngles;

constexpr void __set__thirdPersonEulerAngles(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__thirdPersonEulerAngles() const;

 bool __declspec(property(get=__get__thirdPersonEnabled, put=__set__thirdPersonEnabled))  _thirdPersonEnabled;

constexpr void __set__thirdPersonEnabled(bool value) ;

constexpr bool __get__thirdPersonEnabled() const;

 float_t __declspec(property(get=__get__rotationSmooth, put=__set__rotationSmooth))  _rotationSmooth;

constexpr void __set__rotationSmooth(float_t value) ;

constexpr float_t __get__rotationSmooth() const;

 float_t __declspec(property(get=__get__positionSmooth, put=__set__positionSmooth))  _positionSmooth;

constexpr void __set__positionSmooth(float_t value) ;

constexpr float_t __get__positionSmooth() const;


// Methods

/// @brief Method Init addr 0x21103d4 size 0x1a8 virtual false final false
 void Init(float_t fieldOfView, float_t positionSmooth, float_t rotationSmooth, bool thirdPersonEnabled, UnityEngine::Vector3 thirdPersonPosition, UnityEngine::Vector3 thirdPersonEulerAngles) ;

/// @brief Method OnEnable addr 0x211057c size 0x20 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x211059c size 0x20 virtual false final false
 void OnDisable() ;

/// @brief Method LateUpdate addr 0x21105bc size 0x1f4 virtual false final false
 void LateUpdate() ;

static GlobalNamespace::SmoothCamera New_ctor() ;

/// @brief Method .ctor addr 0x21107b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SmoothCamera);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCamera, "", "SmoothCamera");

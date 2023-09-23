#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MainCamera;
}
// Type: ::MainCamera
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5970))
// CS Name: MainCamera
class CORDL_TYPE MainCamera : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MainCamera() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: " const&", def_value: None }]
constexpr MainCamera(MainCamera const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: "&&", def_value: None }]
constexpr MainCamera(MainCamera&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainCamera(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MainCamera& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainCamera& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainCamera& operator=(MainCamera&& o) noexcept = default;
  constexpr MainCamera& operator=(MainCamera const& o) noexcept = default;
                


// Fields

 UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__camera() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Properties

 UnityEngine::Camera __declspec(property(get=get_camera))  camera;

 bool __declspec(property(put=set_enableCamera))  enableCamera;

 UnityEngine::Vector3 __declspec(property(get=get_position))  position;

 UnityEngine::Quaternion __declspec(property(get=get_rotation))  rotation;


// Methods

/// @brief Method get_camera addr 0x219eecc size 0x8 virtual false final false
 UnityEngine::Camera get_camera() ;

/// @brief Method set_enableCamera addr 0x219eed4 size 0x28 virtual false final false
 void set_enableCamera(bool value) ;

/// @brief Method get_position addr 0x219eefc size 0x1c virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method get_rotation addr 0x219ef18 size 0x1c virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method Awake addr 0x219ef34 size 0x60 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit MainCamera() ;

/// @brief Method .ctor addr 0x219ef94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MainCamera);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainCamera, "", "MainCamera");

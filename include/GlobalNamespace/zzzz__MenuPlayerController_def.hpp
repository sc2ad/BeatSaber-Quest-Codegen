#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class VRController;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuPlayerController;
}
// Type: ::MenuPlayerController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5624))
// CS Name: MenuPlayerController
class CORDL_TYPE MenuPlayerController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MenuPlayerController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuPlayerController", modifiers: " const&", def_value: None }]
constexpr MenuPlayerController(MenuPlayerController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuPlayerController", modifiers: "&&", def_value: None }]
constexpr MenuPlayerController(MenuPlayerController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuPlayerController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MenuPlayerController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuPlayerController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuPlayerController& operator=(MenuPlayerController&& o) noexcept = default;
  constexpr MenuPlayerController& operator=(MenuPlayerController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::VRController __declspec(property(get=__get__leftController, put=__set__leftController))  _leftController;

constexpr void __set__leftController(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__leftController() const;

 GlobalNamespace::VRController __declspec(property(get=__get__rightController, put=__set__rightController))  _rightController;

constexpr void __set__rightController(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__rightController() const;

 UnityEngine::Transform __declspec(property(get=__get__headTransform, put=__set__headTransform))  _headTransform;

constexpr void __set__headTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__headTransform() const;


// Properties

 GlobalNamespace::VRController __declspec(property(get=get_leftController))  leftController;

 GlobalNamespace::VRController __declspec(property(get=get_rightController))  rightController;

 UnityEngine::Vector3 __declspec(property(get=get_headPos))  headPos;

 UnityEngine::Quaternion __declspec(property(get=get_headRot))  headRot;


// Methods

/// @brief Method get_leftController addr 0x2147128 size 0x8 virtual false final false
 GlobalNamespace::VRController get_leftController() ;

/// @brief Method get_rightController addr 0x2147130 size 0x8 virtual false final false
 GlobalNamespace::VRController get_rightController() ;

/// @brief Method get_headPos addr 0x2147138 size 0x1c virtual false final false
 UnityEngine::Vector3 get_headPos() ;

/// @brief Method get_headRot addr 0x2147154 size 0x1c virtual false final false
 UnityEngine::Quaternion get_headRot() ;

// Ctor Parameters []
explicit MenuPlayerController() ;

/// @brief Method .ctor addr 0x2147170 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MenuPlayerController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuPlayerController, "", "MenuPlayerController");

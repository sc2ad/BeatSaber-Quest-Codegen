#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct CollisionFlags;
}
// Forward declare root types
namespace UnityEngine {
class CharacterController;
}
// Type: UnityEngine::CharacterController
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15469))
// CS Name: UnityEngine.CharacterController
class CORDL_TYPE CharacterController : public ::UnityEngine::Collider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CharacterController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: " const&", def_value: None }]
constexpr CharacterController(CharacterController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "&&", def_value: None }]
constexpr CharacterController(CharacterController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CharacterController(void* ptr) noexcept : ::UnityEngine::Collider(ptr) {
}


  constexpr CharacterController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CharacterController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CharacterController& operator=(CharacterController&& o) noexcept = default;
  constexpr CharacterController& operator=(CharacterController const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_isGrounded))  isGrounded;

 float_t __declspec(property(get=get_height))  height;

 ::UnityEngine::Vector3 __declspec(property(get=get_center))  center;

 float_t __declspec(property(get=get_stepOffset))  stepOffset;


// Methods

/// @brief Method Move addr 0x2b9fc7c size 0x54 virtual false final false
 ::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3 motion) ;

/// @brief Method get_isGrounded addr 0x2b9fd14 size 0x3c virtual false final false
 bool get_isGrounded() ;

/// @brief Method get_height addr 0x2b9fd50 size 0x3c virtual false final false
 float_t get_height() ;

/// @brief Method get_center addr 0x2b9fd8c size 0x5c virtual false final false
 ::UnityEngine::Vector3 get_center() ;

/// @brief Method get_stepOffset addr 0x2b9fe2c size 0x3c virtual false final false
 float_t get_stepOffset() ;

/// @brief Method Move_Injected addr 0x2b9fcd0 size 0x44 virtual false final false
 ::UnityEngine::CollisionFlags Move_Injected(ByRef<::UnityEngine::Vector3> motion) ;

/// @brief Method get_center_Injected addr 0x2b9fde8 size 0x44 virtual false final false
 void get_center_Injected(ByRef<::UnityEngine::Vector3> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::CharacterController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterController, "UnityEngine", "CharacterController");

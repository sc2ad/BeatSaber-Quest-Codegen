#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PhysicsFollow;
}
// Type: ::PhysicsFollow
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13817))
// CS Name: PhysicsFollow
class CORDL_TYPE PhysicsFollow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PhysicsFollow() = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsFollow", modifiers: " const&", def_value: None }]
constexpr PhysicsFollow(PhysicsFollow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsFollow", modifiers: "&&", def_value: None }]
constexpr PhysicsFollow(PhysicsFollow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PhysicsFollow(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PhysicsFollow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PhysicsFollow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PhysicsFollow& operator=(PhysicsFollow&& o) noexcept = default;
  constexpr PhysicsFollow& operator=(PhysicsFollow const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__targetTransform, put=__set__targetTransform))  _targetTransform;

constexpr void __set__targetTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__targetTransform() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__offset() const;

 float_t __declspec(property(get=__get__friction, put=__set__friction))  _friction;

constexpr void __set__friction(float_t value) ;

constexpr float_t __get__friction() const;

 float_t __declspec(property(get=__get__elasticity, put=__set__elasticity))  _elasticity;

constexpr void __set__elasticity(float_t value) ;

constexpr float_t __get__elasticity() const;

 ::UnityEngine::Rigidbody2D __declspec(property(get=__get__rigidBody2D, put=__set__rigidBody2D))  _rigidBody2D;

constexpr void __set__rigidBody2D(::UnityEngine::Rigidbody2D value) ;

constexpr ::UnityEngine::Rigidbody2D __get__rigidBody2D() const;


// Methods

/// @brief Method Start addr 0x1f79870 size 0x98 virtual false final false
 void Start() ;

/// @brief Method FixedUpdate addr 0x1f79908 size 0xd8 virtual false final false
 void FixedUpdate() ;

// Ctor Parameters []
explicit PhysicsFollow() ;

/// @brief Method .ctor addr 0x1f799e0 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PhysicsFollow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhysicsFollow, "", "PhysicsFollow");

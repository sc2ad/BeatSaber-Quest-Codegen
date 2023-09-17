#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace UnityEngine {
class Collider;
}
// Type: UnityEngine::Collider
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15468))
// CS Name: UnityEngine.Collider
class CORDL_TYPE Collider : public ::UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Collider() = default;

// Ctor Parameters [CppParam { name: "", ty: "Collider", modifiers: " const&", def_value: None }]
constexpr Collider(Collider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Collider", modifiers: "&&", def_value: None }]
constexpr Collider(Collider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Collider(void* ptr) noexcept : ::UnityEngine::Component(ptr) {
}


  constexpr Collider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Collider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Collider& operator=(Collider&& o) noexcept = default;
  constexpr Collider& operator=(Collider const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;

 ::UnityEngine::Rigidbody __declspec(property(get=get_attachedRigidbody))  attachedRigidbody;

 bool __declspec(property(get=get_isTrigger, put=set_isTrigger))  isTrigger;

 ::UnityEngine::Bounds __declspec(property(get=get_bounds))  bounds;


// Methods

/// @brief Method get_enabled addr 0x2b9f77c size 0x3c virtual false final false
 bool get_enabled() ;

/// @brief Method set_enabled addr 0x2b9f7b8 size 0x44 virtual false final false
 void set_enabled(bool value) ;

/// @brief Method get_attachedRigidbody addr 0x2b9f7fc size 0x3c virtual false final false
 ::UnityEngine::Rigidbody get_attachedRigidbody() ;

/// @brief Method get_isTrigger addr 0x2b9f838 size 0x3c virtual false final false
 bool get_isTrigger() ;

/// @brief Method set_isTrigger addr 0x2b9f874 size 0x44 virtual false final false
 void set_isTrigger(bool value) ;

/// @brief Method get_bounds addr 0x2b9f8b8 size 0x68 virtual false final false
 ::UnityEngine::Bounds get_bounds() ;

/// @brief Method Raycast addr 0x2b9f964 size 0x94 virtual false final false
 ::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray ray, float_t maxDistance, ByRef<bool> hasHit) ;

/// @brief Method Raycast addr 0x2b9fa64 size 0xac virtual false final false
 bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance) ;

/// @brief Method Internal_ClosestPointOnBounds addr 0x2b9fb10 size 0x6c virtual false final false
 void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ByRef<::UnityEngine::Vector3> outPos, ByRef<float_t> distance) ;

/// @brief Method ClosestPointOnBounds addr 0x2b9fbd8 size 0xa4 virtual false final false
 ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position) ;

/// @brief Method get_bounds_Injected addr 0x2b9f920 size 0x44 virtual false final false
 void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret) ;

/// @brief Method Raycast_Injected addr 0x2b9f9f8 size 0x6c virtual false final false
 void Raycast_Injected(ByRef<::UnityEngine::Ray> ray, float_t maxDistance, ByRef<bool> hasHit, ByRef<::UnityEngine::RaycastHit> ret) ;

/// @brief Method Internal_ClosestPointOnBounds_Injected addr 0x2b9fb7c size 0x5c virtual false final false
 void Internal_ClosestPointOnBounds_Injected(ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> outPos, ByRef<float_t> distance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Collider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collider, "UnityEngine", "Collider");

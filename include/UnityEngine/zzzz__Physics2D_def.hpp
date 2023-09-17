#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct ContactFilter2D;
}
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct PhysicsScene2D;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct RaycastHit2D;
}
// Forward declare root types
namespace UnityEngine {
class Physics2D;
}
// Type: UnityEngine::Physics2D
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15814))
// CS Name: UnityEngine.Physics2D
class CORDL_TYPE Physics2D : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Physics2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: " const&", def_value: None }]
constexpr Physics2D(Physics2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: "&&", def_value: None }]
constexpr Physics2D(Physics2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Physics2D(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Physics2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Physics2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Physics2D& operator=(Physics2D&& o) noexcept = default;
  constexpr Physics2D& operator=(Physics2D const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D> __declspec(property(get=__get_m_LastDisabledRigidbody2D, put=__set_m_LastDisabledRigidbody2D))  m_LastDisabledRigidbody2D;

static void __set_m_LastDisabledRigidbody2D(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D> __get_m_LastDisabledRigidbody2D() ;


// Properties

static ::UnityEngine::PhysicsScene2D __declspec(property(get=get_defaultPhysicsScene))  defaultPhysicsScene;

static bool __declspec(property(get=get_queriesHitTriggers))  queriesHitTriggers;


// Methods

/// @brief Method get_defaultPhysicsScene addr 0x2b9a2c4 size 0x8 virtual false final false
static ::UnityEngine::PhysicsScene2D get_defaultPhysicsScene() ;

/// @brief Method get_queriesHitTriggers addr 0x2b9a2cc size 0x28 virtual false final false
static bool get_queriesHitTriggers() ;

/// @brief Method Raycast addr 0x2b9a2f4 size 0xc4 virtual false final false
static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction) ;

/// @brief Method Raycast addr 0x2b9a3b8 size 0xcc virtual false final false
static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance) ;

/// @brief Method Raycast addr 0x2b9a484 size 0x11c virtual false final false
static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask) ;

/// @brief Method Raycast addr 0x2b9a5a0 size 0x11c virtual false final false
static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask, float_t minDepth) ;

/// @brief Method Raycast addr 0x2b9a6bc size 0x124 virtual false final false
static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask, float_t minDepth, float_t maxDepth) ;

/// @brief Method Raycast addr 0x2b9a7e0 size 0xbc virtual false final false
static int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D> results) ;

/// @brief Method Raycast addr 0x2b9a89c size 0xc4 virtual false final false
static int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D> results, float_t distance) ;

/// @brief Method Raycast addr 0x2b9a960 size 0xc4 virtual false final false
static int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D> results, float_t distance) ;

/// @brief Method GetRayIntersection addr 0x2b9aa24 size 0xc0 virtual false final false
static ::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray ray, float_t distance, int32_t layerMask) ;

/// @brief Method GetRayIntersectionAll addr 0x2b9aae4 size 0xac virtual false final false
static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray) ;

/// @brief Method GetRayIntersectionAll addr 0x2b9ac40 size 0xac virtual false final false
static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray, float_t distance) ;

/// @brief Method GetRayIntersectionAll addr 0x2b9acec size 0xb8 virtual false final false
static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray, float_t distance, int32_t layerMask) ;

/// @brief Method GetRayIntersectionAll_Internal addr 0x2b9ab90 size 0xb0 virtual false final false
static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask) ;

/// @brief Method GetRayIntersectionNonAlloc addr 0x2b9ae10 size 0x98 virtual false final false
static int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results) ;

/// @brief Method GetRayIntersectionNonAlloc addr 0x2b9aea8 size 0xa0 virtual false final false
static int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results, float_t distance) ;

/// @brief Method GetRayIntersectionNonAlloc addr 0x2b9af48 size 0xa4 virtual false final false
static int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results, float_t distance, int32_t layerMask) ;

/// @brief Method GetRayIntersectionAll_Internal_Injected addr 0x2b9ada4 size 0x6c virtual false final false
static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene, ByRef<::UnityEngine::Vector3> origin, ByRef<::UnityEngine::Vector3> direction, float_t distance, int32_t layerMask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Physics2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics2D, "UnityEngine", "Physics2D");

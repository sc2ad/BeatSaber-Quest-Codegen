#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class SphereCollider;
}
// Type: UnityEngine::SphereCollider
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15471))
// CS Name: UnityEngine.SphereCollider
class CORDL_TYPE SphereCollider : public UnityEngine::Collider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SphereCollider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SphereCollider", modifiers: " const&", def_value: None }]
constexpr SphereCollider(SphereCollider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SphereCollider", modifiers: "&&", def_value: None }]
constexpr SphereCollider(SphereCollider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SphereCollider(void* ptr) noexcept : UnityEngine::Collider(ptr) {
}


  constexpr SphereCollider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SphereCollider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SphereCollider& operator=(SphereCollider&& o) noexcept = default;
  constexpr SphereCollider& operator=(SphereCollider const& o) noexcept = default;
                


// Properties

 UnityEngine::Vector3 __declspec(property(put=set_center))  center;

 float_t __declspec(property(get=get_radius, put=set_radius))  radius;


// Methods

/// @brief Method set_center addr 0x2ba00f4 size 0x54 virtual false final false
 void set_center(UnityEngine::Vector3 value) ;

/// @brief Method get_radius addr 0x2ba018c size 0x3c virtual false final false
 float_t get_radius() ;

/// @brief Method set_radius addr 0x2ba01c8 size 0x4c virtual false final false
 void set_radius(float_t value) ;

/// @brief Method set_center_Injected addr 0x2ba0148 size 0x44 virtual false final false
 void set_center_Injected(ByRef<UnityEngine::Vector3> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::SphereCollider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SphereCollider, "UnityEngine", "SphereCollider");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DynamicBonePlaneCollider;
}
// Type: ::DynamicBonePlaneCollider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15905))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15906))
// CS Name: DynamicBonePlaneCollider
class CORDL_TYPE DynamicBonePlaneCollider : public GlobalNamespace::DynamicBoneColliderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DynamicBonePlaneCollider() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBonePlaneCollider", modifiers: " const&", def_value: None }]
constexpr DynamicBonePlaneCollider(DynamicBonePlaneCollider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBonePlaneCollider", modifiers: "&&", def_value: None }]
constexpr DynamicBonePlaneCollider(DynamicBonePlaneCollider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicBonePlaneCollider(void* ptr) noexcept : GlobalNamespace::DynamicBoneColliderBase(ptr) {
}


  constexpr DynamicBonePlaneCollider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicBonePlaneCollider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicBonePlaneCollider& operator=(DynamicBonePlaneCollider&& o) noexcept = default;
  constexpr DynamicBonePlaneCollider& operator=(DynamicBonePlaneCollider const& o) noexcept = default;
                


// Methods

/// @brief Method OnValidate addr 0x11a6658 size 0x4 virtual false final false
 void OnValidate() ;

/// @brief Method Collide addr 0x11a665c size 0x188 virtual true final false
 void Collide(ByRef<UnityEngine::Vector3> particlePosition, float_t particleRadius) ;

/// @brief Method OnDrawGizmosSelected addr 0x11a67e4 size 0x160 virtual false final false
 void OnDrawGizmosSelected() ;

// Ctor Parameters []
explicit DynamicBonePlaneCollider() ;

/// @brief Method .ctor addr 0x11a6944 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DynamicBonePlaneCollider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBonePlaneCollider, "", "DynamicBonePlaneCollider");

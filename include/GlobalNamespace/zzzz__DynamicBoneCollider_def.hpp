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
class DynamicBoneCollider;
}
// Type: ::DynamicBoneCollider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15905))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15902))
// CS Name: DynamicBoneCollider
class CORDL_TYPE DynamicBoneCollider : public GlobalNamespace::DynamicBoneColliderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DynamicBoneCollider() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBoneCollider", modifiers: " const&", def_value: None }]
constexpr DynamicBoneCollider(DynamicBoneCollider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBoneCollider", modifiers: "&&", def_value: None }]
constexpr DynamicBoneCollider(DynamicBoneCollider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicBoneCollider(void* ptr) noexcept : GlobalNamespace::DynamicBoneColliderBase(ptr) {
}


  constexpr DynamicBoneCollider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicBoneCollider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicBoneCollider& operator=(DynamicBoneCollider&& o) noexcept = default;
  constexpr DynamicBoneCollider& operator=(DynamicBoneCollider const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_Radius, put=__set_m_Radius))  m_Radius;

constexpr void __set_m_Radius(float_t value) ;

constexpr float_t __get_m_Radius() const;

 float_t __declspec(property(get=__get_m_Height, put=__set_m_Height))  m_Height;

constexpr void __set_m_Height(float_t value) ;

constexpr float_t __get_m_Height() const;


// Methods

/// @brief Method OnValidate addr 0x11a5eb4 size 0x18 virtual false final false
 void OnValidate() ;

/// @brief Method Collide addr 0x11a5ecc size 0x1f4 virtual true final false
 void Collide(ByRef<UnityEngine::Vector3> particlePosition, float_t particleRadius) ;

/// @brief Method OutsideSphere addr 0x11a60c0 size 0x60 virtual false final false
static void OutsideSphere(ByRef<UnityEngine::Vector3> particlePosition, float_t particleRadius, UnityEngine::Vector3 sphereCenter, float_t sphereRadius) ;

/// @brief Method InsideSphere addr 0x11a6120 size 0x58 virtual false final false
static void InsideSphere(ByRef<UnityEngine::Vector3> particlePosition, float_t particleRadius, UnityEngine::Vector3 sphereCenter, float_t sphereRadius) ;

/// @brief Method OutsideCapsule addr 0x11a6178 size 0x174 virtual false final false
static void OutsideCapsule(ByRef<UnityEngine::Vector3> particlePosition, float_t particleRadius, UnityEngine::Vector3 capsuleP0, UnityEngine::Vector3 capsuleP1, float_t capsuleRadius) ;

/// @brief Method InsideCapsule addr 0x11a62ec size 0x15c virtual false final false
static void InsideCapsule(ByRef<UnityEngine::Vector3> particlePosition, float_t particleRadius, UnityEngine::Vector3 capsuleP0, UnityEngine::Vector3 capsuleP1, float_t capsuleRadius) ;

/// @brief Method OnDrawGizmosSelected addr 0x11a6448 size 0x19c virtual false final false
 void OnDrawGizmosSelected() ;

// Ctor Parameters []
explicit DynamicBoneCollider() ;

/// @brief Method .ctor addr 0x11a65e4 size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DynamicBoneCollider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBoneCollider, "", "DynamicBoneCollider");

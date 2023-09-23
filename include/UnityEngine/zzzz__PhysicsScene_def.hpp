#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene;
}
// Type: UnityEngine::PhysicsScene
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15475))
// CS Name: UnityEngine.PhysicsScene
struct CORDL_TYPE PhysicsScene : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::PhysicsScene>
constexpr operator  System::IEquatable_1<UnityEngine::PhysicsScene>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PhysicsScene(int32_t m_Handle) noexcept;


                    constexpr PhysicsScene(PhysicsScene const&) = default;
                    constexpr PhysicsScene(PhysicsScene&&) = default;
                    constexpr PhysicsScene& operator=(PhysicsScene const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PhysicsScene& operator=(PhysicsScene&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PhysicsScene(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(int32_t value) ;

constexpr int32_t __get_m_Handle() const;


// Methods

/// @brief Method ToString addr 0x2ba0380 size 0xe4 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2ba0464 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2ba046c size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2ba04e4 size 0x10 virtual true final true
 bool Equals(UnityEngine::PhysicsScene other) ;

/// @brief Method Raycast addr 0x2b9c734 size 0x154 virtual false final false
 bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest addr 0x2ba04f4 size 0x7c virtual false final false
static bool Internal_RaycastTest(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Raycast addr 0x2b9cb8c size 0x168 virtual false final false
 bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_Raycast addr 0x2ba05dc size 0x7c virtual false final false
static bool Internal_Raycast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hit, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Raycast addr 0x2b9dc74 size 0x1dc virtual false final false
 int32_t Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::ArrayW<UnityEngine::RaycastHit> raycastHits, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc addr 0x2ba06d4 size 0x78 virtual false final false
static int32_t Internal_RaycastNonAlloc(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, ::ArrayW<UnityEngine::RaycastHit> raycastHits, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCast addr 0x2ba07c8 size 0xb0 virtual false final false
static bool Query_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_CapsuleCast addr 0x2ba0914 size 0x14c virtual false final false
static bool Internal_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method CapsuleCast addr 0x2b9d61c size 0x20 virtual false final false
 bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Query_SphereCast addr 0x2ba0a60 size 0x9c virtual false final false
static bool Query_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_SphereCast addr 0x2ba0b88 size 0x12c virtual false final false
static bool Internal_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method SphereCast addr 0x2b9d728 size 0x8 virtual false final false
 bool SphereCast(UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc_Internal addr 0x2ba0cb4 size 0x8c virtual false final false
static int32_t OverlapBoxNonAlloc_Internal(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::ArrayW<UnityEngine::Collider> results, UnityEngine::Quaternion orientation, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method OverlapBox addr 0x2b9eb10 size 0x1c virtual false final false
 int32_t OverlapBox(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::ArrayW<UnityEngine::Collider> results, UnityEngine::Quaternion orientation, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest_Injected addr 0x2ba0570 size 0x6c virtual false final false
static bool Internal_RaycastTest_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_Raycast_Injected addr 0x2ba0658 size 0x7c virtual false final false
static bool Internal_Raycast_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hit, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc_Injected addr 0x2ba074c size 0x7c virtual false final false
static int32_t Internal_RaycastNonAlloc_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, ::ArrayW<UnityEngine::RaycastHit> raycastHits, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCast_Injected addr 0x2ba0878 size 0x9c virtual false final false
static bool Query_CapsuleCast_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> point1, ByRef<UnityEngine::Vector3> point2, float_t radius, ByRef<UnityEngine::Vector3> direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Query_SphereCast_Injected addr 0x2ba0afc size 0x8c virtual false final false
static bool Query_SphereCast_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> origin, float_t radius, ByRef<UnityEngine::Vector3> direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc_Internal_Injected addr 0x2ba0d40 size 0x84 virtual false final false
static int32_t OverlapBoxNonAlloc_Internal_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> center, ByRef<UnityEngine::Vector3> halfExtents, ::ArrayW<UnityEngine::Collider> results, ByRef<UnityEngine::Quaternion> orientation, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");

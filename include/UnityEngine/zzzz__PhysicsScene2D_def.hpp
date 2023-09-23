#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Ray;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct ContactFilter2D;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene2D;
}
// Type: UnityEngine::PhysicsScene2D
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15813))
// CS Name: UnityEngine.PhysicsScene2D
struct CORDL_TYPE PhysicsScene2D : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::PhysicsScene2D>
constexpr operator  System::IEquatable_1<UnityEngine::PhysicsScene2D>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PhysicsScene2D(int32_t m_Handle) noexcept;


                    constexpr PhysicsScene2D(PhysicsScene2D const&) = default;
                    constexpr PhysicsScene2D(PhysicsScene2D&&) = default;
                    constexpr PhysicsScene2D& operator=(PhysicsScene2D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PhysicsScene2D& operator=(PhysicsScene2D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PhysicsScene2D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

/// @brief Method ToString addr 0x2b99888 size 0xe4 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2b9996c size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b99974 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b999ec size 0x10 virtual true final true
 bool Equals(UnityEngine::PhysicsScene2D other) ;

/// @brief Method Raycast addr 0x2b999fc size 0xc8 virtual false final false
 UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float_t distance, int32_t layerMask) ;

/// @brief Method Raycast addr 0x2b99c58 size 0x54 virtual false final false
 UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float_t distance, UnityEngine::ContactFilter2D contactFilter) ;

/// @brief Method Raycast_Internal addr 0x2b99bc4 size 0x94 virtual false final false
static UnityEngine::RaycastHit2D Raycast_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float_t distance, UnityEngine::ContactFilter2D contactFilter) ;

/// @brief Method Raycast addr 0x2b99d28 size 0x30 virtual false final false
 int32_t Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float_t distance, UnityEngine::ContactFilter2D contactFilter, ::ArrayW<UnityEngine::RaycastHit2D> results) ;

/// @brief Method RaycastArray_Internal addr 0x2b99d58 size 0x78 virtual false final false
static int32_t RaycastArray_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float_t distance, UnityEngine::ContactFilter2D contactFilter, ::ArrayW<UnityEngine::RaycastHit2D> results) ;

/// @brief Method Raycast addr 0x2b99e4c size 0x30 virtual false final false
 int32_t Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float_t distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D> results) ;

/// @brief Method RaycastList_Internal addr 0x2b99e7c size 0x78 virtual false final false
static int32_t RaycastList_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float_t distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D> results) ;

/// @brief Method GetRayIntersection addr 0x2b99f70 size 0xb4 virtual false final false
 UnityEngine::RaycastHit2D GetRayIntersection(UnityEngine::Ray ray, float_t distance, int32_t layerMask) ;

/// @brief Method GetRayIntersection_Internal addr 0x2b9a024 size 0x9c virtual false final false
static UnityEngine::RaycastHit2D GetRayIntersection_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t distance, int32_t layerMask) ;

/// @brief Method GetRayIntersection addr 0x2b9a13c size 0x8c virtual false final false
 int32_t GetRayIntersection(UnityEngine::Ray ray, float_t distance, ::ArrayW<UnityEngine::RaycastHit2D> results, int32_t layerMask) ;

/// @brief Method GetRayIntersectionArray_Internal addr 0x2b9a1c8 size 0x80 virtual false final false
static int32_t GetRayIntersectionArray_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t distance, int32_t layerMask, ::ArrayW<UnityEngine::RaycastHit2D> results) ;

/// @brief Method Raycast_Internal_Injected addr 0x2b99cac size 0x7c virtual false final false
static void Raycast_Internal_Injected(ByRef<UnityEngine::PhysicsScene2D> physicsScene, ByRef<UnityEngine::Vector2> origin, ByRef<UnityEngine::Vector2> direction, float_t distance, ByRef<UnityEngine::ContactFilter2D> contactFilter, ByRef<UnityEngine::RaycastHit2D> ret) ;

/// @brief Method RaycastArray_Internal_Injected addr 0x2b99dd0 size 0x7c virtual false final false
static int32_t RaycastArray_Internal_Injected(ByRef<UnityEngine::PhysicsScene2D> physicsScene, ByRef<UnityEngine::Vector2> origin, ByRef<UnityEngine::Vector2> direction, float_t distance, ByRef<UnityEngine::ContactFilter2D> contactFilter, ::ArrayW<UnityEngine::RaycastHit2D> results) ;

/// @brief Method RaycastList_Internal_Injected addr 0x2b99ef4 size 0x7c virtual false final false
static int32_t RaycastList_Internal_Injected(ByRef<UnityEngine::PhysicsScene2D> physicsScene, ByRef<UnityEngine::Vector2> origin, ByRef<UnityEngine::Vector2> direction, float_t distance, ByRef<UnityEngine::ContactFilter2D> contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D> results) ;

/// @brief Method GetRayIntersection_Internal_Injected addr 0x2b9a0c0 size 0x7c virtual false final false
static void GetRayIntersection_Internal_Injected(ByRef<UnityEngine::PhysicsScene2D> physicsScene, ByRef<UnityEngine::Vector3> origin, ByRef<UnityEngine::Vector3> direction, float_t distance, int32_t layerMask, ByRef<UnityEngine::RaycastHit2D> ret) ;

/// @brief Method GetRayIntersectionArray_Internal_Injected addr 0x2b9a248 size 0x7c virtual false final false
static int32_t GetRayIntersectionArray_Internal_Injected(ByRef<UnityEngine::PhysicsScene2D> physicsScene, ByRef<UnityEngine::Vector3> origin, ByRef<UnityEngine::Vector3> direction, float_t distance, int32_t layerMask, ::ArrayW<UnityEngine::RaycastHit2D> results) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicsScene2D, "UnityEngine", "PhysicsScene2D");

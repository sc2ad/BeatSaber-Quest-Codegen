#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct RaycastHit2D;
}
// Type: UnityEngine::RaycastHit2D
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15818))
// CS Name: UnityEngine.RaycastHit2D
struct CORDL_TYPE RaycastHit2D : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Centroid", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Fraction", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RaycastHit2D(::UnityEngine::Vector2 m_Centroid, ::UnityEngine::Vector2 m_Point, ::UnityEngine::Vector2 m_Normal, float_t m_Distance, float_t m_Fraction, int32_t m_Collider) noexcept;


                    constexpr RaycastHit2D(RaycastHit2D const&) = default;
                    constexpr RaycastHit2D(RaycastHit2D&&) = default;
                    constexpr RaycastHit2D& operator=(RaycastHit2D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RaycastHit2D& operator=(RaycastHit2D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RaycastHit2D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_Centroid, put=__set_m_Centroid))  m_Centroid;

constexpr void __set_m_Centroid(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_Centroid() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_Point, put=__set_m_Point))  m_Point;

constexpr void __set_m_Point(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_Point() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_Normal, put=__set_m_Normal))  m_Normal;

constexpr void __set_m_Normal(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_Normal() const;

 float_t __declspec(property(get=__get_m_Distance, put=__set_m_Distance))  m_Distance;

constexpr void __set_m_Distance(float_t value) ;

constexpr float_t __get_m_Distance() const;

 float_t __declspec(property(get=__get_m_Fraction, put=__set_m_Fraction))  m_Fraction;

constexpr void __set_m_Fraction(float_t value) ;

constexpr float_t __get_m_Fraction() const;

 int32_t __declspec(property(get=__get_m_Collider, put=__set_m_Collider))  m_Collider;

constexpr void __set_m_Collider(int32_t value) ;

constexpr int32_t __get_m_Collider() const;


// Properties

 ::UnityEngine::Vector2 __declspec(property(get=get_point))  point;

 ::UnityEngine::Vector2 __declspec(property(get=get_normal))  normal;

 float_t __declspec(property(get=get_distance))  distance;

 float_t __declspec(property(get=get_fraction))  fraction;

 ::UnityEngine::Collider2D __declspec(property(get=get_collider))  collider;


// Methods

/// @brief Method get_point addr 0x2b9b148 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_point() ;

/// @brief Method get_normal addr 0x2b9b150 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_normal() ;

/// @brief Method get_distance addr 0x2b9b158 size 0x8 virtual false final false
 float_t get_distance() ;

/// @brief Method get_fraction addr 0x2b9b160 size 0x8 virtual false final false
 float_t get_fraction() ;

/// @brief Method get_collider addr 0x2b9b168 size 0xac virtual false final false
 ::UnityEngine::Collider2D get_collider() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastHit2D, "UnityEngine", "RaycastHit2D");

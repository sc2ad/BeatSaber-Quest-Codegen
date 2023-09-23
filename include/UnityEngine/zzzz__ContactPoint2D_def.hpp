#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPoint2D;
}
// Type: UnityEngine::ContactPoint2D
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15817))
// CS Name: UnityEngine.ContactPoint2D
struct CORDL_TYPE ContactPoint2D : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Point", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_RelativeVelocity", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_NormalImpulse", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TangentImpulse", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherCollider", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Rigidbody", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherRigidbody", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Enabled", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ContactPoint2D(UnityEngine::Vector2 m_Point, UnityEngine::Vector2 m_Normal, UnityEngine::Vector2 m_RelativeVelocity, float_t m_Separation, float_t m_NormalImpulse, float_t m_TangentImpulse, int32_t m_Collider, int32_t m_OtherCollider, int32_t m_Rigidbody, int32_t m_OtherRigidbody, int32_t m_Enabled) noexcept;


                    constexpr ContactPoint2D(ContactPoint2D const&) = default;
                    constexpr ContactPoint2D(ContactPoint2D&&) = default;
                    constexpr ContactPoint2D& operator=(ContactPoint2D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ContactPoint2D& operator=(ContactPoint2D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ContactPoint2D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get_m_Point, put=__set_m_Point))  m_Point;

constexpr void __set_m_Point(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Point() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_Normal, put=__set_m_Normal))  m_Normal;

constexpr void __set_m_Normal(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Normal() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_RelativeVelocity, put=__set_m_RelativeVelocity))  m_RelativeVelocity;

constexpr void __set_m_RelativeVelocity(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_RelativeVelocity() const;

 float_t __declspec(property(get=__get_m_Separation, put=__set_m_Separation))  m_Separation;

constexpr void __set_m_Separation(float_t value) ;

constexpr float_t __get_m_Separation() const;

 float_t __declspec(property(get=__get_m_NormalImpulse, put=__set_m_NormalImpulse))  m_NormalImpulse;

constexpr void __set_m_NormalImpulse(float_t value) ;

constexpr float_t __get_m_NormalImpulse() const;

 float_t __declspec(property(get=__get_m_TangentImpulse, put=__set_m_TangentImpulse))  m_TangentImpulse;

constexpr void __set_m_TangentImpulse(float_t value) ;

constexpr float_t __get_m_TangentImpulse() const;

 int32_t __declspec(property(get=__get_m_Collider, put=__set_m_Collider))  m_Collider;

constexpr void __set_m_Collider(int32_t value) ;

constexpr int32_t __get_m_Collider() const;

 int32_t __declspec(property(get=__get_m_OtherCollider, put=__set_m_OtherCollider))  m_OtherCollider;

constexpr void __set_m_OtherCollider(int32_t value) ;

constexpr int32_t __get_m_OtherCollider() const;

 int32_t __declspec(property(get=__get_m_Rigidbody, put=__set_m_Rigidbody))  m_Rigidbody;

constexpr void __set_m_Rigidbody(int32_t value) ;

constexpr int32_t __get_m_Rigidbody() const;

 int32_t __declspec(property(get=__get_m_OtherRigidbody, put=__set_m_OtherRigidbody))  m_OtherRigidbody;

constexpr void __set_m_OtherRigidbody(int32_t value) ;

constexpr int32_t __get_m_OtherRigidbody() const;

 int32_t __declspec(property(get=__get_m_Enabled, put=__set_m_Enabled))  m_Enabled;

constexpr void __set_m_Enabled(int32_t value) ;

constexpr int32_t __get_m_Enabled() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContactPoint2D, "UnityEngine", "ContactPoint2D");

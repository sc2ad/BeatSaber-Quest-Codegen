#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPoint;
}
// Type: UnityEngine::ContactPoint
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15474))
// CS Name: UnityEngine.ContactPoint
struct CORDL_TYPE ContactPoint : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Point", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_ThisColliderInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherColliderInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: None }]
constexpr ContactPoint(UnityEngine::Vector3 m_Point, UnityEngine::Vector3 m_Normal, int32_t m_ThisColliderInstanceID, int32_t m_OtherColliderInstanceID, float_t m_Separation) noexcept;


                    constexpr ContactPoint(ContactPoint const&) = default;
                    constexpr ContactPoint(ContactPoint&&) = default;
                    constexpr ContactPoint& operator=(ContactPoint const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ContactPoint& operator=(ContactPoint&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ContactPoint(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Point, put=__set_m_Point))  m_Point;

constexpr void __set_m_Point(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Point() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Normal, put=__set_m_Normal))  m_Normal;

constexpr void __set_m_Normal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Normal() const;

 int32_t __declspec(property(get=__get_m_ThisColliderInstanceID, put=__set_m_ThisColliderInstanceID))  m_ThisColliderInstanceID;

constexpr void __set_m_ThisColliderInstanceID(int32_t value) ;

constexpr int32_t __get_m_ThisColliderInstanceID() const;

 int32_t __declspec(property(get=__get_m_OtherColliderInstanceID, put=__set_m_OtherColliderInstanceID))  m_OtherColliderInstanceID;

constexpr void __set_m_OtherColliderInstanceID(int32_t value) ;

constexpr int32_t __get_m_OtherColliderInstanceID() const;

 float_t __declspec(property(get=__get_m_Separation, put=__set_m_Separation))  m_Separation;

constexpr void __set_m_Separation(float_t value) ;

constexpr float_t __get_m_Separation() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContactPoint, "UnityEngine", "ContactPoint");

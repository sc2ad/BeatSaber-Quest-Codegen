#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshHit;
}
// Type: UnityEngine.AI::NavMeshHit
namespace UnityEngine::AI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15962))
// CS Name: UnityEngine.AI.NavMeshHit
struct CORDL_TYPE NavMeshHit : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Hit", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NavMeshHit(::UnityEngine::Vector3 m_Position, ::UnityEngine::Vector3 m_Normal, float_t m_Distance, int32_t m_Mask, int32_t m_Hit) noexcept;


                    constexpr NavMeshHit(NavMeshHit const&) = default;
                    constexpr NavMeshHit(NavMeshHit&&) = default;
                    constexpr NavMeshHit& operator=(NavMeshHit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NavMeshHit& operator=(NavMeshHit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NavMeshHit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Position() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Normal, put=__set_m_Normal))  m_Normal;

constexpr void __set_m_Normal(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Normal() const;

 float_t __declspec(property(get=__get_m_Distance, put=__set_m_Distance))  m_Distance;

constexpr void __set_m_Distance(float_t value) ;

constexpr float_t __get_m_Distance() const;

 int32_t __declspec(property(get=__get_m_Mask, put=__set_m_Mask))  m_Mask;

constexpr void __set_m_Mask(int32_t value) ;

constexpr int32_t __get_m_Mask() const;

 int32_t __declspec(property(get=__get_m_Hit, put=__set_m_Hit))  m_Hit;

constexpr void __set_m_Hit(int32_t value) ;

constexpr int32_t __get_m_Hit() const;


// Properties

 ::UnityEngine::Vector3 __declspec(property(get=get_position))  position;


// Methods

/// @brief Method get_position addr 0x2b07b20 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_position() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::AI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshHit, "UnityEngine.AI", "NavMeshHit");

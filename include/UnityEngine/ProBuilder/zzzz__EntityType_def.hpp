#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct EntityType;
}
// Type: UnityEngine.ProBuilder::EntityType
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12098))
// CS Name: UnityEngine.ProBuilder.EntityType
struct CORDL_TYPE EntityType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EntityType(int32_t value__) noexcept;


                    constexpr EntityType(EntityType const&) = default;
                    constexpr EntityType(EntityType&&) = default;
                    constexpr EntityType& operator=(EntityType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EntityType& operator=(EntityType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EntityType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EntityType_Unwrapped : int32_t {
__Detail = 0,
__Occluder = 1,
__Trigger = 2,
__Collider = 3,
__Mover = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EntityType_Unwrapped () const noexcept {
return std::bit_cast<__EntityType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Detail offset 0
static UnityEngine::ProBuilder::EntityType const Detail;

/// @brief Field Occluder offset 0
static UnityEngine::ProBuilder::EntityType const Occluder;

/// @brief Field Trigger offset 0
static UnityEngine::ProBuilder::EntityType const Trigger;

/// @brief Field Collider offset 0
static UnityEngine::ProBuilder::EntityType const Collider;

/// @brief Field Mover offset 0
static UnityEngine::ProBuilder::EntityType const Mover;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EntityType, "UnityEngine.ProBuilder", "EntityType");

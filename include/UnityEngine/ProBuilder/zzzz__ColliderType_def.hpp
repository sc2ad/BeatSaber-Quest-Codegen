#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ColliderType;
}
// Type: UnityEngine.ProBuilder::ColliderType
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12099))
// CS Name: UnityEngine.ProBuilder.ColliderType
struct CORDL_TYPE ColliderType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ColliderType(int32_t value__) noexcept;


                    constexpr ColliderType(ColliderType const&) = default;
                    constexpr ColliderType(ColliderType&&) = default;
                    constexpr ColliderType& operator=(ColliderType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ColliderType& operator=(ColliderType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ColliderType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ColliderType_Unwrapped : int32_t {
__None = 0,
__BoxCollider = 1,
__MeshCollider = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColliderType_Unwrapped () const noexcept {
return std::bit_cast<__ColliderType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::ProBuilder::ColliderType const None;

/// @brief Field BoxCollider offset 0
static UnityEngine::ProBuilder::ColliderType const BoxCollider;

/// @brief Field MeshCollider offset 0
static UnityEngine::ProBuilder::ColliderType const MeshCollider;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColliderType, "UnityEngine.ProBuilder", "ColliderType");

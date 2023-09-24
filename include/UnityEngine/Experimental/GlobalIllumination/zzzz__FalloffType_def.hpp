#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
// Type: UnityEngine.Experimental.GlobalIllumination::FalloffType
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10324))
// CS Name: UnityEngine.Experimental.GlobalIllumination.FalloffType
struct CORDL_TYPE FalloffType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr FalloffType(uint8_t value__) noexcept;


                    constexpr FalloffType(FalloffType const&) = default;
                    constexpr FalloffType(FalloffType&&) = default;
                    constexpr FalloffType& operator=(FalloffType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FalloffType& operator=(FalloffType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FalloffType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FalloffType_Unwrapped : uint8_t {
__InverseSquared = 0u,
__InverseSquaredNoRangeAttenuation = 1u,
__Linear = 2u,
__Legacy = 3u,
__Undefined = 4u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FalloffType_Unwrapped () const noexcept {
return std::bit_cast<__FalloffType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field InverseSquared offset 0
static UnityEngine::Experimental::GlobalIllumination::FalloffType const InverseSquared;

/// @brief Field InverseSquaredNoRangeAttenuation offset 0
static UnityEngine::Experimental::GlobalIllumination::FalloffType const InverseSquaredNoRangeAttenuation;

/// @brief Field Linear offset 0
static UnityEngine::Experimental::GlobalIllumination::FalloffType const Linear;

/// @brief Field Legacy offset 0
static UnityEngine::Experimental::GlobalIllumination::FalloffType const Legacy;

/// @brief Field Undefined offset 0
static UnityEngine::Experimental::GlobalIllumination::FalloffType const Undefined;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::FalloffType, "UnityEngine.Experimental.GlobalIllumination", "FalloffType");

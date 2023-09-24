#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
// Type: UnityEngine.Experimental.GlobalIllumination::LightMode
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10323))
// CS Name: UnityEngine.Experimental.GlobalIllumination.LightMode
struct CORDL_TYPE LightMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr LightMode(uint8_t value__) noexcept;


                    constexpr LightMode(LightMode const&) = default;
                    constexpr LightMode(LightMode&&) = default;
                    constexpr LightMode& operator=(LightMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LightMode& operator=(LightMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LightMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LightMode_Unwrapped : uint8_t {
__Realtime = 0u,
__Mixed = 1u,
__Baked = 2u,
__Unknown = 3u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightMode_Unwrapped () const noexcept {
return std::bit_cast<__LightMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Realtime offset 0
static UnityEngine::Experimental::GlobalIllumination::LightMode const Realtime;

/// @brief Field Mixed offset 0
static UnityEngine::Experimental::GlobalIllumination::LightMode const Mixed;

/// @brief Field Baked offset 0
static UnityEngine::Experimental::GlobalIllumination::LightMode const Baked;

/// @brief Field Unknown offset 0
static UnityEngine::Experimental::GlobalIllumination::LightMode const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::LightMode, "UnityEngine.Experimental.GlobalIllumination", "LightMode");

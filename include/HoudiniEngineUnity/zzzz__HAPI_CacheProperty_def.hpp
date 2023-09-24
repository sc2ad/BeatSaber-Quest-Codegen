#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CacheProperty;
}
// Type: HoudiniEngineUnity::HAPI_CacheProperty
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9661))
// CS Name: HoudiniEngineUnity.HAPI_CacheProperty
struct CORDL_TYPE HAPI_CacheProperty : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_CacheProperty(int32_t value__) noexcept;


                    constexpr HAPI_CacheProperty(HAPI_CacheProperty const&) = default;
                    constexpr HAPI_CacheProperty(HAPI_CacheProperty&&) = default;
                    constexpr HAPI_CacheProperty& operator=(HAPI_CacheProperty const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_CacheProperty& operator=(HAPI_CacheProperty&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_CacheProperty(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_CacheProperty_Unwrapped : int32_t {
__HAPI_CACHEPROP_CURRENT = 0,
__HAPI_CACHEPROP_HAS_MIN = 1,
__HAPI_CACHEPROP_MIN = 2,
__HAPI_CACHEPROP_HAS_MAX = 3,
__HAPI_CACHEPROP_MAX = 4,
__HAPI_CACHEPROP_CULL_LEVEL = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_CacheProperty_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_CacheProperty_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_CACHEPROP_CURRENT offset 0
static HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_CURRENT;

/// @brief Field HAPI_CACHEPROP_HAS_MIN offset 0
static HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_HAS_MIN;

/// @brief Field HAPI_CACHEPROP_MIN offset 0
static HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_MIN;

/// @brief Field HAPI_CACHEPROP_HAS_MAX offset 0
static HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_HAS_MAX;

/// @brief Field HAPI_CACHEPROP_MAX offset 0
static HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_MAX;

/// @brief Field HAPI_CACHEPROP_CULL_LEVEL offset 0
static HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_CULL_LEVEL;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_CacheProperty, "HoudiniEngineUnity", "HAPI_CacheProperty");

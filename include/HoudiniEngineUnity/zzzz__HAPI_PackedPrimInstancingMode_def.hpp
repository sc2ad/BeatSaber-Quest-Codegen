#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PackedPrimInstancingMode;
}
// Type: HoudiniEngineUnity::HAPI_PackedPrimInstancingMode
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9634))
// CS Name: HoudiniEngineUnity.HAPI_PackedPrimInstancingMode
struct CORDL_TYPE HAPI_PackedPrimInstancingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PackedPrimInstancingMode(int32_t value__) noexcept;


                    constexpr HAPI_PackedPrimInstancingMode(HAPI_PackedPrimInstancingMode const&) = default;
                    constexpr HAPI_PackedPrimInstancingMode(HAPI_PackedPrimInstancingMode&&) = default;
                    constexpr HAPI_PackedPrimInstancingMode& operator=(HAPI_PackedPrimInstancingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PackedPrimInstancingMode& operator=(HAPI_PackedPrimInstancingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PackedPrimInstancingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_PackedPrimInstancingMode_Unwrapped : int32_t {
__HAPI_PACKEDPRIM_INSTANCING_MODE_INVALID = -1,
__HAPI_PACKEDPRIM_INSTANCING_MODE_DISABLED = 0,
__HAPI_PACKEDPRIM_INSTANCING_MODE_HIERARCHY = 1,
__HAPI_PACKEDPRIM_INSTANCING_MODE_FLAT = 2,
__HAPI_PACKEDPRIM_INSTANCING_MODE_MAX = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_PackedPrimInstancingMode_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_PackedPrimInstancingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_PACKEDPRIM_INSTANCING_MODE_INVALID offset 0
static ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode const HAPI_PACKEDPRIM_INSTANCING_MODE_INVALID;

/// @brief Field HAPI_PACKEDPRIM_INSTANCING_MODE_DISABLED offset 0
static ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode const HAPI_PACKEDPRIM_INSTANCING_MODE_DISABLED;

/// @brief Field HAPI_PACKEDPRIM_INSTANCING_MODE_HIERARCHY offset 0
static ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode const HAPI_PACKEDPRIM_INSTANCING_MODE_HIERARCHY;

/// @brief Field HAPI_PACKEDPRIM_INSTANCING_MODE_FLAT offset 0
static ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode const HAPI_PACKEDPRIM_INSTANCING_MODE_FLAT;

/// @brief Field HAPI_PACKEDPRIM_INSTANCING_MODE_MAX offset 0
static ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode const HAPI_PACKEDPRIM_INSTANCING_MODE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode, "HoudiniEngineUnity", "HAPI_PackedPrimInstancingMode");

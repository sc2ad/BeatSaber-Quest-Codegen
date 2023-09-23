#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_GeoType;
}
// Type: HoudiniEngineUnity::HAPI_GeoType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9650))
// CS Name: HoudiniEngineUnity.HAPI_GeoType
struct CORDL_TYPE HAPI_GeoType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_GeoType(int32_t value__) noexcept;


                    constexpr HAPI_GeoType(HAPI_GeoType const&) = default;
                    constexpr HAPI_GeoType(HAPI_GeoType&&) = default;
                    constexpr HAPI_GeoType& operator=(HAPI_GeoType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_GeoType& operator=(HAPI_GeoType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_GeoType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_GeoType_Unwrapped : int32_t {
__HAPI_GEOTYPE_INVALID = -1,
__HAPI_GEOTYPE_DEFAULT = 0,
__HAPI_GEOTYPE_INTERMEDIATE = 1,
__HAPI_GEOTYPE_INPUT = 2,
__HAPI_GEOTYPE_CURVE = 3,
__HAPI_GEOTYPE_MAX = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_GeoType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_GeoType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_GEOTYPE_INVALID offset 0
static HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_INVALID;

/// @brief Field HAPI_GEOTYPE_DEFAULT offset 0
static HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_DEFAULT;

/// @brief Field HAPI_GEOTYPE_INTERMEDIATE offset 0
static HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_INTERMEDIATE;

/// @brief Field HAPI_GEOTYPE_INPUT offset 0
static HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_INPUT;

/// @brief Field HAPI_GEOTYPE_CURVE offset 0
static HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_CURVE;

/// @brief Field HAPI_GEOTYPE_MAX offset 0
static HoudiniEngineUnity::HAPI_GeoType const HAPI_GEOTYPE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_GeoType, "HoudiniEngineUnity", "HAPI_GeoType");

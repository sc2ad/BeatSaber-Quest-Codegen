#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_RampType;
}
// Type: HoudiniEngineUnity::HAPI_RampType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9636))
// CS Name: HoudiniEngineUnity.HAPI_RampType
struct CORDL_TYPE HAPI_RampType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_RampType(int32_t value__) noexcept;


                    constexpr HAPI_RampType(HAPI_RampType const&) = default;
                    constexpr HAPI_RampType(HAPI_RampType&&) = default;
                    constexpr HAPI_RampType& operator=(HAPI_RampType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_RampType& operator=(HAPI_RampType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_RampType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_RampType_Unwrapped : int32_t {
__HAPI_RAMPTYPE_INVALID = -1,
__HAPI_RAMPTYPE_FLOAT = 0,
__HAPI_RAMPTYPE_COLOR = 1,
__HAPI_RAMPTYPE_MAX = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_RampType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_RampType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_RAMPTYPE_INVALID offset 0
static HoudiniEngineUnity::HAPI_RampType const HAPI_RAMPTYPE_INVALID;

/// @brief Field HAPI_RAMPTYPE_FLOAT offset 0
static HoudiniEngineUnity::HAPI_RampType const HAPI_RAMPTYPE_FLOAT;

/// @brief Field HAPI_RAMPTYPE_COLOR offset 0
static HoudiniEngineUnity::HAPI_RampType const HAPI_RAMPTYPE_COLOR;

/// @brief Field HAPI_RAMPTYPE_MAX offset 0
static HoudiniEngineUnity::HAPI_RampType const HAPI_RAMPTYPE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_RampType, "HoudiniEngineUnity", "HAPI_RampType");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PresetType;
}
// Type: HoudiniEngineUnity::HAPI_PresetType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9640))
// CS Name: HoudiniEngineUnity.HAPI_PresetType
struct CORDL_TYPE HAPI_PresetType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PresetType(int32_t value__) noexcept;


                    constexpr HAPI_PresetType(HAPI_PresetType const&) = default;
                    constexpr HAPI_PresetType(HAPI_PresetType&&) = default;
                    constexpr HAPI_PresetType& operator=(HAPI_PresetType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PresetType& operator=(HAPI_PresetType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PresetType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_PresetType_Unwrapped : int32_t {
__HAPI_PRESETTYPE_INVALID = -1,
__HAPI_PRESETTYPE_BINARY = 0,
__HAPI_PRESETTYPE_IDX = 1,
__HAPI_PRESETTYPE_MAX = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_PresetType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_PresetType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_PRESETTYPE_INVALID offset 0
static HoudiniEngineUnity::HAPI_PresetType const HAPI_PRESETTYPE_INVALID;

/// @brief Field HAPI_PRESETTYPE_BINARY offset 0
static HoudiniEngineUnity::HAPI_PresetType const HAPI_PRESETTYPE_BINARY;

/// @brief Field HAPI_PRESETTYPE_IDX offset 0
static HoudiniEngineUnity::HAPI_PresetType const HAPI_PRESETTYPE_IDX;

/// @brief Field HAPI_PRESETTYPE_MAX offset 0
static HoudiniEngineUnity::HAPI_PresetType const HAPI_PRESETTYPE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_PresetType, "HoudiniEngineUnity", "HAPI_PresetType");

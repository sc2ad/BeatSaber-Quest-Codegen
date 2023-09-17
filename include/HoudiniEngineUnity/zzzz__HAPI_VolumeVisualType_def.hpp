#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeVisualType;
}
// Type: HoudiniEngineUnity::HAPI_VolumeVisualType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9647))
// CS Name: HoudiniEngineUnity.HAPI_VolumeVisualType
struct CORDL_TYPE HAPI_VolumeVisualType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_VolumeVisualType(int32_t value__) noexcept;


                    constexpr HAPI_VolumeVisualType(HAPI_VolumeVisualType const&) = default;
                    constexpr HAPI_VolumeVisualType(HAPI_VolumeVisualType&&) = default;
                    constexpr HAPI_VolumeVisualType& operator=(HAPI_VolumeVisualType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_VolumeVisualType& operator=(HAPI_VolumeVisualType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_VolumeVisualType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_VolumeVisualType_Unwrapped : int32_t {
__HAPI_VOLUMEVISTYPE_INVALID = -1,
__HAPI_VOLUMEVISTYPE_SMOKE = 0,
__HAPI_VOLUMEVISTYPE_RAINBOW = 1,
__HAPI_VOLUMEVISTYPE_ISO = 2,
__HAPI_VOLUMEVISTYPE_INVISIBLE = 3,
__HAPI_VOLUMEVISTYPE_HEIGHTFIELD = 4,
__HAPI_VOLUMEVISTYPE_MAX = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_VolumeVisualType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_VolumeVisualType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_VOLUMEVISTYPE_INVALID offset 0
static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_INVALID;

/// @brief Field HAPI_VOLUMEVISTYPE_SMOKE offset 0
static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_SMOKE;

/// @brief Field HAPI_VOLUMEVISTYPE_RAINBOW offset 0
static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_RAINBOW;

/// @brief Field HAPI_VOLUMEVISTYPE_ISO offset 0
static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_ISO;

/// @brief Field HAPI_VOLUMEVISTYPE_INVISIBLE offset 0
static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_INVISIBLE;

/// @brief Field HAPI_VOLUMEVISTYPE_HEIGHTFIELD offset 0
static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_HEIGHTFIELD;

/// @brief Field HAPI_VOLUMEVISTYPE_MAX offset 0
static ::HoudiniEngineUnity::HAPI_VolumeVisualType const HAPI_VOLUMEVISTYPE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeVisualType, "HoudiniEngineUnity", "HAPI_VolumeVisualType");

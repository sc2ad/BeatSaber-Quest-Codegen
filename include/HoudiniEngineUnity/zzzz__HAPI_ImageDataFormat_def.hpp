#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImageDataFormat;
}
// Type: HoudiniEngineUnity::HAPI_ImageDataFormat
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9657))
// CS Name: HoudiniEngineUnity.HAPI_ImageDataFormat
struct CORDL_TYPE HAPI_ImageDataFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ImageDataFormat(int32_t value__) noexcept;


                    constexpr HAPI_ImageDataFormat(HAPI_ImageDataFormat const&) = default;
                    constexpr HAPI_ImageDataFormat(HAPI_ImageDataFormat&&) = default;
                    constexpr HAPI_ImageDataFormat& operator=(HAPI_ImageDataFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ImageDataFormat& operator=(HAPI_ImageDataFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ImageDataFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_ImageDataFormat_Unwrapped : int32_t {
__HAPI_IMAGE_DATA_UNKNOWN = -1,
__HAPI_IMAGE_DATA_INT8 = 0,
__HAPI_IMAGE_DATA_INT16 = 1,
__HAPI_IMAGE_DATA_INT32 = 2,
__HAPI_IMAGE_DATA_FLOAT16 = 3,
__HAPI_IMAGE_DATA_FLOAT32 = 4,
__HAPI_IMAGE_DATA_MAX = 5,
__HAPI_IMAGE_DATA_DEFAULT = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_ImageDataFormat_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_ImageDataFormat_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_IMAGE_DATA_UNKNOWN offset 0
static HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_UNKNOWN;

/// @brief Field HAPI_IMAGE_DATA_INT8 offset 0
static HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_INT8;

/// @brief Field HAPI_IMAGE_DATA_INT16 offset 0
static HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_INT16;

/// @brief Field HAPI_IMAGE_DATA_INT32 offset 0
static HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_INT32;

/// @brief Field HAPI_IMAGE_DATA_FLOAT16 offset 0
static HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_FLOAT16;

/// @brief Field HAPI_IMAGE_DATA_FLOAT32 offset 0
static HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_FLOAT32;

/// @brief Field HAPI_IMAGE_DATA_MAX offset 0
static HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_MAX;

/// @brief Field HAPI_IMAGE_DATA_DEFAULT offset 0
static HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_DEFAULT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_ImageDataFormat, "HoudiniEngineUnity", "HAPI_ImageDataFormat");

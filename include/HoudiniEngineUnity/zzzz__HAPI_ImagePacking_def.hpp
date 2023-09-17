#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImagePacking;
}
// Type: HoudiniEngineUnity::HAPI_ImagePacking
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9658))
// CS Name: HoudiniEngineUnity.HAPI_ImagePacking
struct CORDL_TYPE HAPI_ImagePacking : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ImagePacking(int32_t value__) noexcept;


                    constexpr HAPI_ImagePacking(HAPI_ImagePacking const&) = default;
                    constexpr HAPI_ImagePacking(HAPI_ImagePacking&&) = default;
                    constexpr HAPI_ImagePacking& operator=(HAPI_ImagePacking const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ImagePacking& operator=(HAPI_ImagePacking&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ImagePacking(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_ImagePacking_Unwrapped : int32_t {
__HAPI_IMAGE_PACKING_UNKNOWN = -1,
__HAPI_IMAGE_PACKING_SINGLE = 0,
__HAPI_IMAGE_PACKING_DUAL = 1,
__HAPI_IMAGE_PACKING_RGB = 2,
__HAPI_IMAGE_PACKING_BGR = 3,
__HAPI_IMAGE_PACKING_RGBA = 4,
__HAPI_IMAGE_PACKING_ABGR = 5,
__HAPI_IMAGE_PACKING_MAX = 6,
__HAPI_IMAGE_PACKING_DEFAULT3 = 2,
__HAPI_IMAGE_PACKING_DEFAULT4 = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_ImagePacking_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_ImagePacking_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_IMAGE_PACKING_UNKNOWN offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_UNKNOWN;

/// @brief Field HAPI_IMAGE_PACKING_SINGLE offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_SINGLE;

/// @brief Field HAPI_IMAGE_PACKING_DUAL offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_DUAL;

/// @brief Field HAPI_IMAGE_PACKING_RGB offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_RGB;

/// @brief Field HAPI_IMAGE_PACKING_BGR offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_BGR;

/// @brief Field HAPI_IMAGE_PACKING_RGBA offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_RGBA;

/// @brief Field HAPI_IMAGE_PACKING_ABGR offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_ABGR;

/// @brief Field HAPI_IMAGE_PACKING_MAX offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_MAX;

/// @brief Field HAPI_IMAGE_PACKING_DEFAULT3 offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_DEFAULT3;

/// @brief Field HAPI_IMAGE_PACKING_DEFAULT4 offset 0
static ::HoudiniEngineUnity::HAPI_ImagePacking const HAPI_IMAGE_PACKING_DEFAULT4;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImagePacking, "HoudiniEngineUnity", "HAPI_ImagePacking");

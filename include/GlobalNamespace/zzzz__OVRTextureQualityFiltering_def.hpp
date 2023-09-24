#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct OVRTextureQualityFiltering;
}
// Type: ::OVRTextureQualityFiltering
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8479))
// CS Name: OVRTextureQualityFiltering
struct CORDL_TYPE OVRTextureQualityFiltering : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVRTextureQualityFiltering(int32_t value__) noexcept;


                    constexpr OVRTextureQualityFiltering(OVRTextureQualityFiltering const&) = default;
                    constexpr OVRTextureQualityFiltering(OVRTextureQualityFiltering&&) = default;
                    constexpr OVRTextureQualityFiltering& operator=(OVRTextureQualityFiltering const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRTextureQualityFiltering& operator=(OVRTextureQualityFiltering&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRTextureQualityFiltering(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OVRTextureQualityFiltering_Unwrapped : int32_t {
__None = -1,
__Bilinear = 0,
__Trilinear = 1,
__Aniso2x = 2,
__Aniso4x = 3,
__Aniso8x = 4,
__Aniso16x = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRTextureQualityFiltering_Unwrapped () const noexcept {
return std::bit_cast<__OVRTextureQualityFiltering_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::OVRTextureQualityFiltering const None;

/// @brief Field Bilinear offset 0
static GlobalNamespace::OVRTextureQualityFiltering const Bilinear;

/// @brief Field Trilinear offset 0
static GlobalNamespace::OVRTextureQualityFiltering const Trilinear;

/// @brief Field Aniso2x offset 0
static GlobalNamespace::OVRTextureQualityFiltering const Aniso2x;

/// @brief Field Aniso4x offset 0
static GlobalNamespace::OVRTextureQualityFiltering const Aniso4x;

/// @brief Field Aniso8x offset 0
static GlobalNamespace::OVRTextureQualityFiltering const Aniso8x;

/// @brief Field Aniso16x offset 0
static GlobalNamespace::OVRTextureQualityFiltering const Aniso16x;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRTextureQualityFiltering, "", "OVRTextureQualityFiltering");

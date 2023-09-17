#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
// Type: OVR.OpenVR::VRTextureBounds_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9442))
// CS Name: OVR.OpenVR.VRTextureBounds_t
struct CORDL_TYPE VRTextureBounds_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "uMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "uMax", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vMax", ty: "float_t", modifiers: "", def_value: None }]
constexpr VRTextureBounds_t(float_t uMin, float_t vMin, float_t uMax, float_t vMax) noexcept;


                    constexpr VRTextureBounds_t(VRTextureBounds_t const&) = default;
                    constexpr VRTextureBounds_t(VRTextureBounds_t&&) = default;
                    constexpr VRTextureBounds_t& operator=(VRTextureBounds_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRTextureBounds_t& operator=(VRTextureBounds_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRTextureBounds_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_uMin, put=__set_uMin))  uMin;

constexpr void __set_uMin(float_t value) ;

constexpr float_t __get_uMin() const;

 float_t __declspec(property(get=__get_vMin, put=__set_vMin))  vMin;

constexpr void __set_vMin(float_t value) ;

constexpr float_t __get_vMin() const;

 float_t __declspec(property(get=__get_uMax, put=__set_uMax))  uMax;

constexpr void __set_uMax(float_t value) ;

constexpr float_t __get_uMax() const;

 float_t __declspec(property(get=__get_vMax, put=__set_vMax))  vMax;

constexpr void __set_vMax(float_t value) ;

constexpr float_t __get_vMax() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureBounds_t, "OVR.OpenVR", "VRTextureBounds_t");

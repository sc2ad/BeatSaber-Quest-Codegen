#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace OVR::OpenVR {
struct HmdQuaternionf_t;
}
// Type: OVR.OpenVR::HmdQuaternionf_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9435))
// CS Name: OVR.OpenVR.HmdQuaternionf_t
struct CORDL_TYPE HmdQuaternionf_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdQuaternionf_t(float_t w, float_t x, float_t y, float_t z) noexcept;


                    constexpr HmdQuaternionf_t(HmdQuaternionf_t const&) = default;
                    constexpr HmdQuaternionf_t(HmdQuaternionf_t&&) = default;
                    constexpr HmdQuaternionf_t& operator=(HmdQuaternionf_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HmdQuaternionf_t& operator=(HmdQuaternionf_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HmdQuaternionf_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_w, put=__set_w))  w;

constexpr void __set_w(float_t value) ;

constexpr float_t __get_w() const;

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 float_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(float_t value) ;

constexpr float_t __get_z() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdQuaternionf_t, "OVR.OpenVR", "HmdQuaternionf_t");

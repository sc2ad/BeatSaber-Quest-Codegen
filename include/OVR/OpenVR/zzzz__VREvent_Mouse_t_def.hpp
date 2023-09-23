#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Mouse_t;
}
// Type: OVR.OpenVR::VREvent_Mouse_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9450))
// CS Name: OVR.OpenVR.VREvent_Mouse_t
struct CORDL_TYPE VREvent_Mouse_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "button", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_Mouse_t(float_t x, float_t y, uint32_t button) noexcept;


                    constexpr VREvent_Mouse_t(VREvent_Mouse_t const&) = default;
                    constexpr VREvent_Mouse_t(VREvent_Mouse_t&&) = default;
                    constexpr VREvent_Mouse_t& operator=(VREvent_Mouse_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Mouse_t& operator=(VREvent_Mouse_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Mouse_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 uint32_t __declspec(property(get=__get_button, put=__set_button))  button;

constexpr void __set_button(uint32_t value) ;

constexpr uint32_t __get_button() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Mouse_t, "OVR.OpenVR", "VREvent_Mouse_t");

#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace OVR::OpenVR {
struct HmdQuaternion_t;
}
// Type: OVR.OpenVR::HmdQuaternion_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9434))
// CS Name: OVR.OpenVR.HmdQuaternion_t
struct CORDL_TYPE HmdQuaternion_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "w", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "double_t", modifiers: "", def_value: None }]
constexpr HmdQuaternion_t(double_t w, double_t x, double_t y, double_t z) noexcept;


                    constexpr HmdQuaternion_t(HmdQuaternion_t const&) = default;
                    constexpr HmdQuaternion_t(HmdQuaternion_t&&) = default;
                    constexpr HmdQuaternion_t& operator=(HmdQuaternion_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HmdQuaternion_t& operator=(HmdQuaternion_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HmdQuaternion_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 double_t __declspec(property(get=__get_w, put=__set_w))  w;

constexpr void __set_w(double_t value) ;

constexpr double_t __get_w() const;

 double_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(double_t value) ;

constexpr double_t __get_x() const;

 double_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(double_t value) ;

constexpr double_t __get_y() const;

 double_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(double_t value) ;

constexpr double_t __get_z() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdQuaternion_t, "OVR.OpenVR", "HmdQuaternion_t");

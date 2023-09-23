#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace OVR::OpenVR {
struct HmdColor_t;
}
// Type: OVR.OpenVR::HmdColor_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9436))
// CS Name: OVR.OpenVR.HmdColor_t
struct CORDL_TYPE HmdColor_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdColor_t(float_t r, float_t g, float_t b, float_t a) noexcept;


                    constexpr HmdColor_t(HmdColor_t const&) = default;
                    constexpr HmdColor_t(HmdColor_t&&) = default;
                    constexpr HmdColor_t& operator=(HmdColor_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HmdColor_t& operator=(HmdColor_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HmdColor_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(float_t value) ;

constexpr float_t __get_r() const;

 float_t __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(float_t value) ;

constexpr float_t __get_g() const;

 float_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(float_t value) ;

constexpr float_t __get_b() const;

 float_t __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(float_t value) ;

constexpr float_t __get_a() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdColor_t, "OVR.OpenVR", "HmdColor_t");

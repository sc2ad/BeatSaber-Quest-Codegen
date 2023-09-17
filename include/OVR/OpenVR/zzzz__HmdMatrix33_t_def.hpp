#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct HmdMatrix33_t;
}
// Type: OVR.OpenVR::HmdMatrix33_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9428))
// CS Name: OVR.OpenVR.HmdMatrix33_t
struct CORDL_TYPE HmdMatrix33_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m4", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m7", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m8", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdMatrix33_t(float_t m0, float_t m1, float_t m2, float_t m3, float_t m4, float_t m5, float_t m6, float_t m7, float_t m8) noexcept;


                    constexpr HmdMatrix33_t(HmdMatrix33_t const&) = default;
                    constexpr HmdMatrix33_t(HmdMatrix33_t&&) = default;
                    constexpr HmdMatrix33_t& operator=(HmdMatrix33_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HmdMatrix33_t& operator=(HmdMatrix33_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HmdMatrix33_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m0, put=__set_m0))  m0;

constexpr void __set_m0(float_t value) ;

constexpr float_t __get_m0() const;

 float_t __declspec(property(get=__get_m1, put=__set_m1))  m1;

constexpr void __set_m1(float_t value) ;

constexpr float_t __get_m1() const;

 float_t __declspec(property(get=__get_m2, put=__set_m2))  m2;

constexpr void __set_m2(float_t value) ;

constexpr float_t __get_m2() const;

 float_t __declspec(property(get=__get_m3, put=__set_m3))  m3;

constexpr void __set_m3(float_t value) ;

constexpr float_t __get_m3() const;

 float_t __declspec(property(get=__get_m4, put=__set_m4))  m4;

constexpr void __set_m4(float_t value) ;

constexpr float_t __get_m4() const;

 float_t __declspec(property(get=__get_m5, put=__set_m5))  m5;

constexpr void __set_m5(float_t value) ;

constexpr float_t __get_m5() const;

 float_t __declspec(property(get=__get_m6, put=__set_m6))  m6;

constexpr void __set_m6(float_t value) ;

constexpr float_t __get_m6() const;

 float_t __declspec(property(get=__get_m7, put=__set_m7))  m7;

constexpr void __set_m7(float_t value) ;

constexpr float_t __get_m7() const;

 float_t __declspec(property(get=__get_m8, put=__set_m8))  m8;

constexpr void __set_m8(float_t value) ;

constexpr float_t __get_m8() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdMatrix33_t, "OVR.OpenVR", "HmdMatrix33_t");

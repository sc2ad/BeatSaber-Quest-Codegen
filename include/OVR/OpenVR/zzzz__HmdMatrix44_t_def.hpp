#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
// Type: OVR.OpenVR::HmdMatrix44_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9429))
// CS Name: OVR.OpenVR.HmdMatrix44_t
struct CORDL_TYPE HmdMatrix44_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m4", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m7", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m8", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m9", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m14", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m15", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdMatrix44_t(float_t m0, float_t m1, float_t m2, float_t m3, float_t m4, float_t m5, float_t m6, float_t m7, float_t m8, float_t m9, float_t m10, float_t m11, float_t m12, float_t m13, float_t m14, float_t m15) noexcept;


                    constexpr HmdMatrix44_t(HmdMatrix44_t const&) = default;
                    constexpr HmdMatrix44_t(HmdMatrix44_t&&) = default;
                    constexpr HmdMatrix44_t& operator=(HmdMatrix44_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HmdMatrix44_t& operator=(HmdMatrix44_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HmdMatrix44_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 float_t __declspec(property(get=__get_m9, put=__set_m9))  m9;

constexpr void __set_m9(float_t value) ;

constexpr float_t __get_m9() const;

 float_t __declspec(property(get=__get_m10, put=__set_m10))  m10;

constexpr void __set_m10(float_t value) ;

constexpr float_t __get_m10() const;

 float_t __declspec(property(get=__get_m11, put=__set_m11))  m11;

constexpr void __set_m11(float_t value) ;

constexpr float_t __get_m11() const;

 float_t __declspec(property(get=__get_m12, put=__set_m12))  m12;

constexpr void __set_m12(float_t value) ;

constexpr float_t __get_m12() const;

 float_t __declspec(property(get=__get_m13, put=__set_m13))  m13;

constexpr void __set_m13(float_t value) ;

constexpr float_t __get_m13() const;

 float_t __declspec(property(get=__get_m14, put=__set_m14))  m14;

constexpr void __set_m14(float_t value) ;

constexpr float_t __get_m14() const;

 float_t __declspec(property(get=__get_m15, put=__set_m15))  m15;

constexpr void __set_m15(float_t value) ;

constexpr float_t __get_m15() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdMatrix44_t, "OVR.OpenVR", "HmdMatrix44_t");

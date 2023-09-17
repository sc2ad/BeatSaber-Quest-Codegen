#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct HmdVector4_t;
}
// Type: OVR.OpenVR::HmdVector4_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9431))
// CS Name: OVR.OpenVR.HmdVector4_t
struct CORDL_TYPE HmdVector4_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "v0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "v2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "v3", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdVector4_t(float_t v0, float_t v1, float_t v2, float_t v3) noexcept;


                    constexpr HmdVector4_t(HmdVector4_t const&) = default;
                    constexpr HmdVector4_t(HmdVector4_t&&) = default;
                    constexpr HmdVector4_t& operator=(HmdVector4_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HmdVector4_t& operator=(HmdVector4_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HmdVector4_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_v0, put=__set_v0))  v0;

constexpr void __set_v0(float_t value) ;

constexpr float_t __get_v0() const;

 float_t __declspec(property(get=__get_v1, put=__set_v1))  v1;

constexpr void __set_v1(float_t value) ;

constexpr float_t __get_v1() const;

 float_t __declspec(property(get=__get_v2, put=__set_v2))  v2;

constexpr void __set_v2(float_t value) ;

constexpr float_t __get_v2() const;

 float_t __declspec(property(get=__get_v3, put=__set_v3))  v3;

constexpr void __set_v3(float_t value) ;

constexpr float_t __get_v3() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdVector4_t, "OVR.OpenVR", "HmdVector4_t");
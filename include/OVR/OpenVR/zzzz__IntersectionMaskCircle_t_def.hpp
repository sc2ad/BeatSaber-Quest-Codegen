#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct IntersectionMaskCircle_t;
}
// Type: OVR.OpenVR::IntersectionMaskCircle_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9492))
// CS Name: OVR.OpenVR.IntersectionMaskCircle_t
struct CORDL_TYPE IntersectionMaskCircle_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_flCenterX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCenterY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flRadius", ty: "float_t", modifiers: "", def_value: None }]
constexpr IntersectionMaskCircle_t(float_t m_flCenterX, float_t m_flCenterY, float_t m_flRadius) noexcept;


                    constexpr IntersectionMaskCircle_t(IntersectionMaskCircle_t const&) = default;
                    constexpr IntersectionMaskCircle_t(IntersectionMaskCircle_t&&) = default;
                    constexpr IntersectionMaskCircle_t& operator=(IntersectionMaskCircle_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IntersectionMaskCircle_t& operator=(IntersectionMaskCircle_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IntersectionMaskCircle_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_flCenterX, put=__set_m_flCenterX))  m_flCenterX;

constexpr void __set_m_flCenterX(float_t value) ;

constexpr float_t __get_m_flCenterX() const;

 float_t __declspec(property(get=__get_m_flCenterY, put=__set_m_flCenterY))  m_flCenterY;

constexpr void __set_m_flCenterY(float_t value) ;

constexpr float_t __get_m_flCenterY() const;

 float_t __declspec(property(get=__get_m_flRadius, put=__set_m_flRadius))  m_flRadius;

constexpr void __set_m_flRadius(float_t value) ;

constexpr float_t __get_m_flRadius() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IntersectionMaskCircle_t, "OVR.OpenVR", "IntersectionMaskCircle_t");

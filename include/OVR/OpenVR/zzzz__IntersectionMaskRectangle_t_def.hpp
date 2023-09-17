#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct IntersectionMaskRectangle_t;
}
// Type: OVR.OpenVR::IntersectionMaskRectangle_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9491))
// CS Name: OVR.OpenVR.IntersectionMaskRectangle_t
struct CORDL_TYPE IntersectionMaskRectangle_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_flTopLeftX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flTopLeftY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flHeight", ty: "float_t", modifiers: "", def_value: None }]
constexpr IntersectionMaskRectangle_t(float_t m_flTopLeftX, float_t m_flTopLeftY, float_t m_flWidth, float_t m_flHeight) noexcept;


                    constexpr IntersectionMaskRectangle_t(IntersectionMaskRectangle_t const&) = default;
                    constexpr IntersectionMaskRectangle_t(IntersectionMaskRectangle_t&&) = default;
                    constexpr IntersectionMaskRectangle_t& operator=(IntersectionMaskRectangle_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IntersectionMaskRectangle_t& operator=(IntersectionMaskRectangle_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IntersectionMaskRectangle_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_flTopLeftX, put=__set_m_flTopLeftX))  m_flTopLeftX;

constexpr void __set_m_flTopLeftX(float_t value) ;

constexpr float_t __get_m_flTopLeftX() const;

 float_t __declspec(property(get=__get_m_flTopLeftY, put=__set_m_flTopLeftY))  m_flTopLeftY;

constexpr void __set_m_flTopLeftY(float_t value) ;

constexpr float_t __get_m_flTopLeftY() const;

 float_t __declspec(property(get=__get_m_flWidth, put=__set_m_flWidth))  m_flWidth;

constexpr void __set_m_flWidth(float_t value) ;

constexpr float_t __get_m_flWidth() const;

 float_t __declspec(property(get=__get_m_flHeight, put=__set_m_flHeight))  m_flHeight;

constexpr void __set_m_flHeight(float_t value) ;

constexpr float_t __get_m_flHeight() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IntersectionMaskRectangle_t, "OVR.OpenVR", "IntersectionMaskRectangle_t");

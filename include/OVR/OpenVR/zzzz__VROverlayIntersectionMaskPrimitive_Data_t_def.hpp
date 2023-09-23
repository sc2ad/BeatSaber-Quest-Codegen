#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct IntersectionMaskCircle_t;
}
namespace OVR::OpenVR {
struct IntersectionMaskRectangle_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_Data_t;
}
// Type: OVR.OpenVR::VROverlayIntersectionMaskPrimitive_Data_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9426))
// CS Name: OVR.OpenVR.VROverlayIntersectionMaskPrimitive_Data_t
struct CORDL_TYPE VROverlayIntersectionMaskPrimitive_Data_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Rectangle", ty: "OVR::OpenVR::IntersectionMaskRectangle_t", modifiers: "", def_value: None }, CppParam { name: "m_Circle", ty: "OVR::OpenVR::IntersectionMaskCircle_t", modifiers: "", def_value: None }]
constexpr VROverlayIntersectionMaskPrimitive_Data_t(OVR::OpenVR::IntersectionMaskRectangle_t m_Rectangle, OVR::OpenVR::IntersectionMaskCircle_t m_Circle) noexcept;


                    constexpr VROverlayIntersectionMaskPrimitive_Data_t(VROverlayIntersectionMaskPrimitive_Data_t const&) = default;
                    constexpr VROverlayIntersectionMaskPrimitive_Data_t(VROverlayIntersectionMaskPrimitive_Data_t&&) = default;
                    constexpr VROverlayIntersectionMaskPrimitive_Data_t& operator=(VROverlayIntersectionMaskPrimitive_Data_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VROverlayIntersectionMaskPrimitive_Data_t& operator=(VROverlayIntersectionMaskPrimitive_Data_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VROverlayIntersectionMaskPrimitive_Data_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::IntersectionMaskRectangle_t __declspec(property(get=__get_m_Rectangle, put=__set_m_Rectangle))  m_Rectangle;

constexpr void __set_m_Rectangle(OVR::OpenVR::IntersectionMaskRectangle_t value) ;

constexpr OVR::OpenVR::IntersectionMaskRectangle_t __get_m_Rectangle() const;

 OVR::OpenVR::IntersectionMaskCircle_t __declspec(property(get=__get_m_Circle, put=__set_m_Circle))  m_Circle;

constexpr void __set_m_Circle(OVR::OpenVR::IntersectionMaskCircle_t value) ;

constexpr OVR::OpenVR::IntersectionMaskCircle_t __get_m_Circle() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t, "OVR.OpenVR", "VROverlayIntersectionMaskPrimitive_Data_t");

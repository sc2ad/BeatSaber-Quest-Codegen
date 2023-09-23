#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_Data_t;
}
namespace OVR::OpenVR {
struct EVROverlayIntersectionMaskPrimitiveType;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
// Type: OVR.OpenVR::VROverlayIntersectionMaskPrimitive_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9493))
// CS Name: OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t
struct CORDL_TYPE VROverlayIntersectionMaskPrimitive_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_nPrimitiveType", ty: "OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType", modifiers: "", def_value: None }, CppParam { name: "m_Primitive", ty: "OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t", modifiers: "", def_value: None }]
constexpr VROverlayIntersectionMaskPrimitive_t(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType, OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive) noexcept;


                    constexpr VROverlayIntersectionMaskPrimitive_t(VROverlayIntersectionMaskPrimitive_t const&) = default;
                    constexpr VROverlayIntersectionMaskPrimitive_t(VROverlayIntersectionMaskPrimitive_t&&) = default;
                    constexpr VROverlayIntersectionMaskPrimitive_t& operator=(VROverlayIntersectionMaskPrimitive_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VROverlayIntersectionMaskPrimitive_t& operator=(VROverlayIntersectionMaskPrimitive_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VROverlayIntersectionMaskPrimitive_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType __declspec(property(get=__get_m_nPrimitiveType, put=__set_m_nPrimitiveType))  m_nPrimitiveType;

constexpr void __set_m_nPrimitiveType(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType value) ;

constexpr OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType __get_m_nPrimitiveType() const;

 OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t __declspec(property(get=__get_m_Primitive, put=__set_m_Primitive))  m_Primitive;

constexpr void __set_m_Primitive(OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t value) ;

constexpr OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t __get_m_Primitive() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t, "OVR.OpenVR", "VROverlayIntersectionMaskPrimitive_t");

#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct HmdQuad_t;
}
// Type: OVR.OpenVR::HmdQuad_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9437))
// CS Name: OVR.OpenVR.HmdQuad_t
struct CORDL_TYPE HmdQuad_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vCorners0", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vCorners1", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vCorners2", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vCorners3", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }]
constexpr HmdQuad_t(OVR::OpenVR::HmdVector3_t vCorners0, OVR::OpenVR::HmdVector3_t vCorners1, OVR::OpenVR::HmdVector3_t vCorners2, OVR::OpenVR::HmdVector3_t vCorners3) noexcept;


                    constexpr HmdQuad_t(HmdQuad_t const&) = default;
                    constexpr HmdQuad_t(HmdQuad_t&&) = default;
                    constexpr HmdQuad_t& operator=(HmdQuad_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HmdQuad_t& operator=(HmdQuad_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HmdQuad_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vCorners0, put=__set_vCorners0))  vCorners0;

constexpr void __set_vCorners0(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vCorners0() const;

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vCorners1, put=__set_vCorners1))  vCorners1;

constexpr void __set_vCorners1(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vCorners1() const;

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vCorners2, put=__set_vCorners2))  vCorners2;

constexpr void __set_vCorners2(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vCorners2() const;

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vCorners3, put=__set_vCorners3))  vCorners3;

constexpr void __set_vCorners3(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vCorners3() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdQuad_t, "OVR.OpenVR", "HmdQuad_t");

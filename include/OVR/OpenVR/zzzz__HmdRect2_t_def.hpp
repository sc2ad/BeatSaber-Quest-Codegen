#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct HmdVector2_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct HmdRect2_t;
}
// Type: OVR.OpenVR::HmdRect2_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9438))
// CS Name: OVR.OpenVR.HmdRect2_t
struct CORDL_TYPE HmdRect2_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vTopLeft", ty: "OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }, CppParam { name: "vBottomRight", ty: "OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }]
constexpr HmdRect2_t(OVR::OpenVR::HmdVector2_t vTopLeft, OVR::OpenVR::HmdVector2_t vBottomRight) noexcept;


                    constexpr HmdRect2_t(HmdRect2_t const&) = default;
                    constexpr HmdRect2_t(HmdRect2_t&&) = default;
                    constexpr HmdRect2_t& operator=(HmdRect2_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HmdRect2_t& operator=(HmdRect2_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HmdRect2_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::HmdVector2_t __declspec(property(get=__get_vTopLeft, put=__set_vTopLeft))  vTopLeft;

constexpr void __set_vTopLeft(OVR::OpenVR::HmdVector2_t value) ;

constexpr OVR::OpenVR::HmdVector2_t __get_vTopLeft() const;

 OVR::OpenVR::HmdVector2_t __declspec(property(get=__get_vBottomRight, put=__set_vBottomRight))  vBottomRight;

constexpr void __set_vBottomRight(OVR::OpenVR::HmdVector2_t value) ;

constexpr OVR::OpenVR::HmdVector2_t __get_vBottomRight() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdRect2_t, "OVR.OpenVR", "HmdRect2_t");

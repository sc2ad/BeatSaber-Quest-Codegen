#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Scroll_t;
}
// Type: OVR.OpenVR::VREvent_Scroll_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9451))
// CS Name: OVR.OpenVR.VREvent_Scroll_t
struct CORDL_TYPE VREvent_Scroll_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "xdelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ydelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "repeatCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_Scroll_t(float_t xdelta, float_t ydelta, uint32_t repeatCount) noexcept;


                    constexpr VREvent_Scroll_t(VREvent_Scroll_t const&) = default;
                    constexpr VREvent_Scroll_t(VREvent_Scroll_t&&) = default;
                    constexpr VREvent_Scroll_t& operator=(VREvent_Scroll_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Scroll_t& operator=(VREvent_Scroll_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Scroll_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_xdelta, put=__set_xdelta))  xdelta;

constexpr void __set_xdelta(float_t value) ;

constexpr float_t __get_xdelta() const;

 float_t __declspec(property(get=__get_ydelta, put=__set_ydelta))  ydelta;

constexpr void __set_ydelta(float_t value) ;

constexpr float_t __get_ydelta() const;

 uint32_t __declspec(property(get=__get_repeatCount, put=__set_repeatCount))  repeatCount;

constexpr void __set_repeatCount(uint32_t value) ;

constexpr uint32_t __get_repeatCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Scroll_t, "OVR.OpenVR", "VREvent_Scroll_t");

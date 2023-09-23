#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_EditingCameraSurface_t;
}
// Type: OVR.OpenVR::VREvent_EditingCameraSurface_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9466))
// CS Name: OVR.OpenVR.VREvent_EditingCameraSurface_t
struct CORDL_TYPE VREvent_EditingCameraSurface_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "overlayHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "nVisualMode", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_EditingCameraSurface_t(uint64_t overlayHandle, uint32_t nVisualMode) noexcept;


                    constexpr VREvent_EditingCameraSurface_t(VREvent_EditingCameraSurface_t const&) = default;
                    constexpr VREvent_EditingCameraSurface_t(VREvent_EditingCameraSurface_t&&) = default;
                    constexpr VREvent_EditingCameraSurface_t& operator=(VREvent_EditingCameraSurface_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_EditingCameraSurface_t& operator=(VREvent_EditingCameraSurface_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_EditingCameraSurface_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_overlayHandle, put=__set_overlayHandle))  overlayHandle;

constexpr void __set_overlayHandle(uint64_t value) ;

constexpr uint64_t __get_overlayHandle() const;

 uint32_t __declspec(property(get=__get_nVisualMode, put=__set_nVisualMode))  nVisualMode;

constexpr void __set_nVisualMode(uint32_t value) ;

constexpr uint32_t __get_nVisualMode() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_EditingCameraSurface_t, "OVR.OpenVR", "VREvent_EditingCameraSurface_t");

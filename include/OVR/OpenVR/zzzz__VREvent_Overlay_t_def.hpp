#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Overlay_t;
}
// Type: OVR.OpenVR::VREvent_Overlay_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9455))
// CS Name: OVR.OpenVR.VREvent_Overlay_t
struct CORDL_TYPE VREvent_Overlay_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "overlayHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "devicePath", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_Overlay_t(uint64_t overlayHandle, uint64_t devicePath) noexcept;


                    constexpr VREvent_Overlay_t(VREvent_Overlay_t const&) = default;
                    constexpr VREvent_Overlay_t(VREvent_Overlay_t&&) = default;
                    constexpr VREvent_Overlay_t& operator=(VREvent_Overlay_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Overlay_t& operator=(VREvent_Overlay_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Overlay_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_overlayHandle, put=__set_overlayHandle))  overlayHandle;

constexpr void __set_overlayHandle(uint64_t value) ;

constexpr uint64_t __get_overlayHandle() const;

 uint64_t __declspec(property(get=__get_devicePath, put=__set_devicePath))  devicePath;

constexpr void __set_devicePath(uint64_t value) ;

constexpr uint64_t __get_devicePath() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Overlay_t, "OVR.OpenVR", "VREvent_Overlay_t");

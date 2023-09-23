#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureDepthInfo_t;
}
// Type: OVR.OpenVR::VRTextureDepthInfo_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9444))
// CS Name: OVR.OpenVR.VRTextureDepthInfo_t
struct CORDL_TYPE VRTextureDepthInfo_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "mProjection", ty: "OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: None }, CppParam { name: "vRange", ty: "OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }]
constexpr VRTextureDepthInfo_t(::cordl_internals::intptr_t handle, OVR::OpenVR::HmdMatrix44_t mProjection, OVR::OpenVR::HmdVector2_t vRange) noexcept;


                    constexpr VRTextureDepthInfo_t(VRTextureDepthInfo_t const&) = default;
                    constexpr VRTextureDepthInfo_t(VRTextureDepthInfo_t&&) = default;
                    constexpr VRTextureDepthInfo_t& operator=(VRTextureDepthInfo_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRTextureDepthInfo_t& operator=(VRTextureDepthInfo_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRTextureDepthInfo_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_handle() const;

 OVR::OpenVR::HmdMatrix44_t __declspec(property(get=__get_mProjection, put=__set_mProjection))  mProjection;

constexpr void __set_mProjection(OVR::OpenVR::HmdMatrix44_t value) ;

constexpr OVR::OpenVR::HmdMatrix44_t __get_mProjection() const;

 OVR::OpenVR::HmdVector2_t __declspec(property(get=__get_vRange, put=__set_vRange))  vRange;

constexpr void __set_vRange(OVR::OpenVR::HmdVector2_t value) ;

constexpr OVR::OpenVR::HmdVector2_t __get_vRange() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRTextureDepthInfo_t, "OVR.OpenVR", "VRTextureDepthInfo_t");

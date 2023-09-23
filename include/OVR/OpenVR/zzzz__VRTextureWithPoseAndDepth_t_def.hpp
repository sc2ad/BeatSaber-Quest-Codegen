#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct VRTextureDepthInfo_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureWithPoseAndDepth_t;
}
// Type: OVR.OpenVR::VRTextureWithPoseAndDepth_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9446))
// CS Name: OVR.OpenVR.VRTextureWithPoseAndDepth_t
struct CORDL_TYPE VRTextureWithPoseAndDepth_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "depth", ty: "OVR::OpenVR::VRTextureDepthInfo_t", modifiers: "", def_value: None }]
constexpr VRTextureWithPoseAndDepth_t(OVR::OpenVR::VRTextureDepthInfo_t depth) noexcept;


                    constexpr VRTextureWithPoseAndDepth_t(VRTextureWithPoseAndDepth_t const&) = default;
                    constexpr VRTextureWithPoseAndDepth_t(VRTextureWithPoseAndDepth_t&&) = default;
                    constexpr VRTextureWithPoseAndDepth_t& operator=(VRTextureWithPoseAndDepth_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRTextureWithPoseAndDepth_t& operator=(VRTextureWithPoseAndDepth_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRTextureWithPoseAndDepth_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::VRTextureDepthInfo_t __declspec(property(get=__get_depth, put=__set_depth))  depth;

constexpr void __set_depth(OVR::OpenVR::VRTextureDepthInfo_t value) ;

constexpr OVR::OpenVR::VRTextureDepthInfo_t __get_depth() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRTextureWithPoseAndDepth_t, "OVR.OpenVR", "VRTextureWithPoseAndDepth_t");

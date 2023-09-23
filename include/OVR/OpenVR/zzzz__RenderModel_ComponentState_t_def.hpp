#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
// Type: OVR.OpenVR::RenderModel_ComponentState_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9494))
// CS Name: OVR.OpenVR.RenderModel_ComponentState_t
struct CORDL_TYPE RenderModel_ComponentState_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "mTrackingToComponentRenderModel", ty: "OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }, CppParam { name: "mTrackingToComponentLocal", ty: "OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }, CppParam { name: "uProperties", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RenderModel_ComponentState_t(OVR::OpenVR::HmdMatrix34_t mTrackingToComponentRenderModel, OVR::OpenVR::HmdMatrix34_t mTrackingToComponentLocal, uint32_t uProperties) noexcept;


                    constexpr RenderModel_ComponentState_t(RenderModel_ComponentState_t const&) = default;
                    constexpr RenderModel_ComponentState_t(RenderModel_ComponentState_t&&) = default;
                    constexpr RenderModel_ComponentState_t& operator=(RenderModel_ComponentState_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderModel_ComponentState_t& operator=(RenderModel_ComponentState_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x64};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderModel_ComponentState_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::HmdMatrix34_t __declspec(property(get=__get_mTrackingToComponentRenderModel, put=__set_mTrackingToComponentRenderModel))  mTrackingToComponentRenderModel;

constexpr void __set_mTrackingToComponentRenderModel(OVR::OpenVR::HmdMatrix34_t value) ;

constexpr OVR::OpenVR::HmdMatrix34_t __get_mTrackingToComponentRenderModel() const;

 OVR::OpenVR::HmdMatrix34_t __declspec(property(get=__get_mTrackingToComponentLocal, put=__set_mTrackingToComponentLocal))  mTrackingToComponentLocal;

constexpr void __set_mTrackingToComponentLocal(OVR::OpenVR::HmdMatrix34_t value) ;

constexpr OVR::OpenVR::HmdMatrix34_t __get_mTrackingToComponentLocal() const;

 uint32_t __declspec(property(get=__get_uProperties, put=__set_uProperties))  uProperties;

constexpr void __set_uProperties(uint32_t value) ;

constexpr uint32_t __get_uProperties() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::RenderModel_ComponentState_t, "OVR.OpenVR", "RenderModel_ComponentState_t");

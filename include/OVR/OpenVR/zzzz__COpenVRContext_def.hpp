#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct COpenVRContext;
}
// Type: OVR.OpenVR::COpenVRContext
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9510))
// CS Name: OVR.OpenVR.COpenVRContext
struct CORDL_TYPE COpenVRContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_pVRSystem", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRChaperone", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRChaperoneSetup", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRCompositor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVROverlay", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRResources", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRRenderModels", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRExtendedDisplay", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRSettings", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRApplications", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRTrackedCamera", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRScreenshots", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRDriverManager", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRInput", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRIOBuffer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRSpatialAnchors", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr COpenVRContext(::cordl_internals::intptr_t m_pVRSystem, ::cordl_internals::intptr_t m_pVRChaperone, ::cordl_internals::intptr_t m_pVRChaperoneSetup, ::cordl_internals::intptr_t m_pVRCompositor, ::cordl_internals::intptr_t m_pVROverlay, ::cordl_internals::intptr_t m_pVRResources, ::cordl_internals::intptr_t m_pVRRenderModels, ::cordl_internals::intptr_t m_pVRExtendedDisplay, ::cordl_internals::intptr_t m_pVRSettings, ::cordl_internals::intptr_t m_pVRApplications, ::cordl_internals::intptr_t m_pVRTrackedCamera, ::cordl_internals::intptr_t m_pVRScreenshots, ::cordl_internals::intptr_t m_pVRDriverManager, ::cordl_internals::intptr_t m_pVRInput, ::cordl_internals::intptr_t m_pVRIOBuffer, ::cordl_internals::intptr_t m_pVRSpatialAnchors) noexcept;


                    constexpr COpenVRContext(COpenVRContext const&) = default;
                    constexpr COpenVRContext(COpenVRContext&&) = default;
                    constexpr COpenVRContext& operator=(COpenVRContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr COpenVRContext& operator=(COpenVRContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x80};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit COpenVRContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRSystem, put=__set_m_pVRSystem))  m_pVRSystem;

constexpr void __set_m_pVRSystem(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRSystem() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRChaperone, put=__set_m_pVRChaperone))  m_pVRChaperone;

constexpr void __set_m_pVRChaperone(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRChaperone() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRChaperoneSetup, put=__set_m_pVRChaperoneSetup))  m_pVRChaperoneSetup;

constexpr void __set_m_pVRChaperoneSetup(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRChaperoneSetup() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRCompositor, put=__set_m_pVRCompositor))  m_pVRCompositor;

constexpr void __set_m_pVRCompositor(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRCompositor() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVROverlay, put=__set_m_pVROverlay))  m_pVROverlay;

constexpr void __set_m_pVROverlay(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVROverlay() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRResources, put=__set_m_pVRResources))  m_pVRResources;

constexpr void __set_m_pVRResources(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRResources() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRRenderModels, put=__set_m_pVRRenderModels))  m_pVRRenderModels;

constexpr void __set_m_pVRRenderModels(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRRenderModels() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRExtendedDisplay, put=__set_m_pVRExtendedDisplay))  m_pVRExtendedDisplay;

constexpr void __set_m_pVRExtendedDisplay(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRExtendedDisplay() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRSettings, put=__set_m_pVRSettings))  m_pVRSettings;

constexpr void __set_m_pVRSettings(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRSettings() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRApplications, put=__set_m_pVRApplications))  m_pVRApplications;

constexpr void __set_m_pVRApplications(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRApplications() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRTrackedCamera, put=__set_m_pVRTrackedCamera))  m_pVRTrackedCamera;

constexpr void __set_m_pVRTrackedCamera(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRTrackedCamera() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRScreenshots, put=__set_m_pVRScreenshots))  m_pVRScreenshots;

constexpr void __set_m_pVRScreenshots(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRScreenshots() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRDriverManager, put=__set_m_pVRDriverManager))  m_pVRDriverManager;

constexpr void __set_m_pVRDriverManager(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRDriverManager() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRInput, put=__set_m_pVRInput))  m_pVRInput;

constexpr void __set_m_pVRInput(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRInput() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRIOBuffer, put=__set_m_pVRIOBuffer))  m_pVRIOBuffer;

constexpr void __set_m_pVRIOBuffer(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRIOBuffer() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pVRSpatialAnchors, put=__set_m_pVRSpatialAnchors))  m_pVRSpatialAnchors;

constexpr void __set_m_pVRSpatialAnchors(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pVRSpatialAnchors() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::COpenVRContext, "OVR.OpenVR", "COpenVRContext");

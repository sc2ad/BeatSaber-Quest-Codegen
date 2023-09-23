#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
class XRSettings;
}
// Type: UnityEngine.XR::XRSettings
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15968))
// CS Name: UnityEngine.XR.XRSettings
class CORDL_TYPE XRSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XRSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: " const&", def_value: None }]
constexpr XRSettings(XRSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: "&&", def_value: None }]
constexpr XRSettings(XRSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XRSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRSettings& operator=(XRSettings&& o) noexcept = default;
  constexpr XRSettings& operator=(XRSettings const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_showDeviceView, put=set_showDeviceView))  showDeviceView;

static float_t __declspec(property(put=set_eyeTextureResolutionScale))  eyeTextureResolutionScale;

static int32_t __declspec(property(get=get_eyeTextureWidth))  eyeTextureWidth;

static int32_t __declspec(property(get=get_eyeTextureHeight))  eyeTextureHeight;

static float_t __declspec(property(get=get_renderViewportScale, put=set_renderViewportScale))  renderViewportScale;

static float_t __declspec(property(get=get_renderViewportScaleInternal, put=set_renderViewportScaleInternal))  renderViewportScaleInternal;

static ::StringW __declspec(property(get=get_loadedDeviceName))  loadedDeviceName;


// Methods

/// @brief Method get_showDeviceView addr 0x2d387ac size 0x28 virtual false final false
static bool get_showDeviceView() ;

/// @brief Method set_showDeviceView addr 0x2d387d4 size 0x3c virtual false final false
static void set_showDeviceView(bool value) ;

/// @brief Method set_eyeTextureResolutionScale addr 0x2d38810 size 0x38 virtual false final false
static void set_eyeTextureResolutionScale(float_t value) ;

/// @brief Method get_eyeTextureWidth addr 0x2d38848 size 0x28 virtual false final false
static int32_t get_eyeTextureWidth() ;

/// @brief Method get_eyeTextureHeight addr 0x2d38870 size 0x28 virtual false final false
static int32_t get_eyeTextureHeight() ;

/// @brief Method get_renderViewportScale addr 0x2d38898 size 0x28 virtual false final false
static float_t get_renderViewportScale() ;

/// @brief Method set_renderViewportScale addr 0x2d388e8 size 0xb4 virtual false final false
static void set_renderViewportScale(float_t value) ;

/// @brief Method get_renderViewportScaleInternal addr 0x2d388c0 size 0x28 virtual false final false
static float_t get_renderViewportScaleInternal() ;

/// @brief Method set_renderViewportScaleInternal addr 0x2d3899c size 0x38 virtual false final false
static void set_renderViewportScaleInternal(float_t value) ;

/// @brief Method get_loadedDeviceName addr 0x2d389d4 size 0x28 virtual false final false
static ::StringW get_loadedDeviceName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
NEED_NO_BOX(UnityEngine::XR::XRSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRSettings, "UnityEngine.XR", "XRSettings");

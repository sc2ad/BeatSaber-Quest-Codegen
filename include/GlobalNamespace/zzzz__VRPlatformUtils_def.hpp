#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class VRPlatformUtils;
}
// Type: ::VRPlatformUtils
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13919))
// CS Name: VRPlatformUtils
class CORDL_TYPE VRPlatformUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VRPlatformUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRPlatformUtils", modifiers: " const&", def_value: None }]
constexpr VRPlatformUtils(VRPlatformUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRPlatformUtils", modifiers: "&&", def_value: None }]
constexpr VRPlatformUtils(VRPlatformUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRPlatformUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VRPlatformUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRPlatformUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRPlatformUtils& operator=(VRPlatformUtils&& o) noexcept = default;
  constexpr VRPlatformUtils& operator=(VRPlatformUtils const& o) noexcept = default;
                


// Fields

/// @brief Field kTriggerLeftHand offset 0
static constexpr ::ConstString  kTriggerLeftHand{u"TriggerLeftHand"};

/// @brief Field kTriggerRightHand offset 0
static constexpr ::ConstString  kTriggerRightHand{u"TriggerRightHand"};

/// @brief Field kMenuButtonLeftHand offset 0
static constexpr ::ConstString  kMenuButtonLeftHand{u"OpenXRPrimaryButtonRightHand"};

/// @brief Field kMenuButtonRightHand offset 0
static constexpr ::ConstString  kMenuButtonRightHand{u"OpenXRPrimaryButtonLeftHand"};

/// @brief Field kMenuButtonOculusTouch offset 0
static constexpr ::ConstString  kMenuButtonOculusTouch{u"MenuButtonOculusTouch"};


// Methods

/// @brief Method TriggerValueDefaultImplementation addr 0x1f85288 size 0x80 virtual false final false
static float_t TriggerValueDefaultImplementation(::UnityEngine::XR::XRNode node) ;

/// @brief Method GetMenuButtonDefaultImplementation addr 0x1f84c24 size 0x78 virtual false final false
static bool GetMenuButtonDefaultImplementation() ;

/// @brief Method GetMenuButtonDownDefaultImplementation addr 0x1f84ca0 size 0x78 virtual false final false
static bool GetMenuButtonDownDefaultImplementation() ;

/// @brief Method GetAnyJoystickMaxAxisDefaultImplementation addr 0x1f85308 size 0x154 virtual false final false
static ::UnityEngine::Vector2 GetAnyJoystickMaxAxisDefaultImplementation(::GlobalNamespace::IVRPlatformHelper vrPlatformHelper) ;

/// @brief Method StopXR addr 0x1f847d0 size 0xe8 virtual false final false
static void StopXR(::GlobalNamespace::IVerboseLogger logger) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::VRPlatformUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRPlatformUtils, "", "VRPlatformUtils");

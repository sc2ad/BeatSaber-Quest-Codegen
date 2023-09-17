#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::XR {
struct ConnectionChangeType;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::XR {
class InputDevices;
}
// Type: UnityEngine.XR::InputDevices
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15574))
// CS Name: UnityEngine.XR.InputDevices
class CORDL_TYPE InputDevices : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputDevices() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: " const&", def_value: None }]
constexpr InputDevices(InputDevices const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: "&&", def_value: None }]
constexpr InputDevices(InputDevices&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputDevices(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputDevices& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputDevices& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputDevices& operator=(InputDevices&& o) noexcept = default;
  constexpr InputDevices& operator=(InputDevices const& o) noexcept = default;
                


// Fields

static ::System::Action_1<::UnityEngine::XR::InputDevice> __declspec(property(get=__get_deviceConnected, put=__set_deviceConnected))  deviceConnected;

static void __set_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice> value) ;

static ::System::Action_1<::UnityEngine::XR::InputDevice> __get_deviceConnected() ;

static ::System::Action_1<::UnityEngine::XR::InputDevice> __declspec(property(get=__get_deviceDisconnected, put=__set_deviceDisconnected))  deviceDisconnected;

static void __set_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice> value) ;

static ::System::Action_1<::UnityEngine::XR::InputDevice> __get_deviceDisconnected() ;

static ::System::Action_1<::UnityEngine::XR::InputDevice> __declspec(property(get=__get_deviceConfigChanged, put=__set_deviceConfigChanged))  deviceConfigChanged;

static void __set_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice> value) ;

static ::System::Action_1<::UnityEngine::XR::InputDevice> __get_deviceConfigChanged() ;


// Methods

/// @brief Method GetDeviceAtXRNode addr 0x2d39390 size 0x44 virtual false final false
static ::UnityEngine::XR::InputDevice GetDeviceAtXRNode(::UnityEngine::XR::XRNode node) ;

/// @brief Method InvokeConnectionEvent addr 0x2d39410 size 0xac virtual false final false
static void InvokeConnectionEvent(uint64_t deviceId, ::UnityEngine::XR::ConnectionChangeType change) ;

/// @brief Method SendHapticImpulse addr 0x2d38e98 size 0x5c virtual false final false
static bool SendHapticImpulse(uint64_t deviceId, uint32_t channel, float_t amplitude, float_t duration) ;

/// @brief Method StopHaptics addr 0x2d38f4c size 0x3c virtual false final false
static void StopHaptics(uint64_t deviceId) ;

/// @brief Method IsDeviceValid addr 0x2d38cc4 size 0x3c virtual false final false
static bool IsDeviceValid(uint64_t deviceId) ;

/// @brief Method GetDeviceManufacturer addr 0x2d38d5c size 0x3c virtual false final false
static ::StringW GetDeviceManufacturer(uint64_t deviceId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::InputDevices);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDevices, "UnityEngine.XR", "InputDevices");

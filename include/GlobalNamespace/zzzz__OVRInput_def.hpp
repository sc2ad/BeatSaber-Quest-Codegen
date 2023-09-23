#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__ControllerState5;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Version;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Step;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Axis1D;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Axis2D;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Button;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Controller;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Hand;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Handedness;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__HapticsLocation;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__InteractionProfile;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__NearTouch;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__OpenVRButton;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__OpenVRController;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__RawAxis1D;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__RawAxis2D;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__RawButton;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__RawNearTouch;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__RawTouch;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Touch;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__HapticInfo;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerBase;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerGamepadAndroid;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerGamepadPC;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerHands;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerLHand;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerLTouch;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerRHand;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerRTouch;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerRemote;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRInput__OVRControllerTouch;
}
namespace GlobalNamespace {
class OVRInput;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__HapticsPcmVibration;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__OpenVRControllerDetails;
}
// Type: ::Button
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8495))
// CS Name: OVRInput::Button
struct CORDL_TYPE GlobalNamespace__OVRInput__Button : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__Button(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__Button(GlobalNamespace__OVRInput__Button const&) = default;
                    constexpr GlobalNamespace__OVRInput__Button(GlobalNamespace__OVRInput__Button&&) = default;
                    constexpr GlobalNamespace__OVRInput__Button& operator=(GlobalNamespace__OVRInput__Button const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__Button& operator=(GlobalNamespace__OVRInput__Button&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__Button(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__Button_Unwrapped : int32_t {
__None = 0,
__One = 1,
__Two = 2,
__Three = 4,
__Four = 8,
__Start = 256,
__Back = 512,
__PrimaryShoulder = 4096,
__PrimaryIndexTrigger = 8192,
__PrimaryHandTrigger = 16384,
__PrimaryThumbstick = 32768,
__PrimaryThumbstickUp = 65536,
__PrimaryThumbstickDown = 131072,
__PrimaryThumbstickLeft = 262144,
__PrimaryThumbstickRight = 524288,
__PrimaryTouchpad = 1024,
__SecondaryShoulder = 1048576,
__SecondaryIndexTrigger = 2097152,
__SecondaryHandTrigger = 4194304,
__SecondaryThumbstick = 8388608,
__SecondaryThumbstickUp = 16777216,
__SecondaryThumbstickDown = 33554432,
__SecondaryThumbstickLeft = 67108864,
__SecondaryThumbstickRight = 134217728,
__SecondaryTouchpad = 2048,
__DpadUp = 16,
__DpadDown = 32,
__DpadLeft = 64,
__DpadRight = 128,
__Up = 268435456,
__Down = 536870912,
__Left = 1073741824,
__Right = -2147483648,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__Button_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__Button_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const None;

/// @brief Field One offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const One;

/// @brief Field Two offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Two;

/// @brief Field Three offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Three;

/// @brief Field Four offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Four;

/// @brief Field Start offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Start;

/// @brief Field Back offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Back;

/// @brief Field PrimaryShoulder offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const PrimaryShoulder;

/// @brief Field PrimaryIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const PrimaryIndexTrigger;

/// @brief Field PrimaryHandTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const PrimaryHandTrigger;

/// @brief Field PrimaryThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const PrimaryThumbstick;

/// @brief Field PrimaryThumbstickUp offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const PrimaryThumbstickUp;

/// @brief Field PrimaryThumbstickDown offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const PrimaryThumbstickDown;

/// @brief Field PrimaryThumbstickLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const PrimaryThumbstickLeft;

/// @brief Field PrimaryThumbstickRight offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const PrimaryThumbstickRight;

/// @brief Field PrimaryTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const PrimaryTouchpad;

/// @brief Field SecondaryShoulder offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const SecondaryShoulder;

/// @brief Field SecondaryIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const SecondaryIndexTrigger;

/// @brief Field SecondaryHandTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const SecondaryHandTrigger;

/// @brief Field SecondaryThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const SecondaryThumbstick;

/// @brief Field SecondaryThumbstickUp offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const SecondaryThumbstickUp;

/// @brief Field SecondaryThumbstickDown offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const SecondaryThumbstickDown;

/// @brief Field SecondaryThumbstickLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const SecondaryThumbstickLeft;

/// @brief Field SecondaryThumbstickRight offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const SecondaryThumbstickRight;

/// @brief Field SecondaryTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const SecondaryTouchpad;

/// @brief Field DpadUp offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const DpadUp;

/// @brief Field DpadDown offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const DpadDown;

/// @brief Field DpadLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const DpadLeft;

/// @brief Field DpadRight offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const DpadRight;

/// @brief Field Up offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Up;

/// @brief Field Down offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Down;

/// @brief Field Left offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Left;

/// @brief Field Right offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Right;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Button const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RawButton
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8496))
// CS Name: OVRInput::RawButton
struct CORDL_TYPE GlobalNamespace__OVRInput__RawButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__RawButton(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__RawButton(GlobalNamespace__OVRInput__RawButton const&) = default;
                    constexpr GlobalNamespace__OVRInput__RawButton(GlobalNamespace__OVRInput__RawButton&&) = default;
                    constexpr GlobalNamespace__OVRInput__RawButton& operator=(GlobalNamespace__OVRInput__RawButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__RawButton& operator=(GlobalNamespace__OVRInput__RawButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__RawButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__RawButton_Unwrapped : int32_t {
__None = 0,
__A = 1,
__B = 2,
__X = 256,
__Y = 512,
__Start = 1048576,
__Back = 2097152,
__LShoulder = 2048,
__LIndexTrigger = 268435456,
__LHandTrigger = 536870912,
__LThumbstick = 1024,
__LThumbstickUp = 16,
__LThumbstickDown = 32,
__LThumbstickLeft = 64,
__LThumbstickRight = 128,
__LTouchpad = 1073741824,
__RShoulder = 8,
__RIndexTrigger = 67108864,
__RHandTrigger = 134217728,
__RThumbstick = 4,
__RThumbstickUp = 4096,
__RThumbstickDown = 8192,
__RThumbstickLeft = 16384,
__RThumbstickRight = 32768,
__RTouchpad = -2147483648,
__DpadUp = 65536,
__DpadDown = 131072,
__DpadLeft = 262144,
__DpadRight = 524288,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__RawButton_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__RawButton_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const None;

/// @brief Field A offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const A;

/// @brief Field B offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const B;

/// @brief Field X offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const X;

/// @brief Field Y offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const Y;

/// @brief Field Start offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const Start;

/// @brief Field Back offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const Back;

/// @brief Field LShoulder offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const LShoulder;

/// @brief Field LIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const LIndexTrigger;

/// @brief Field LHandTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const LHandTrigger;

/// @brief Field LThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const LThumbstick;

/// @brief Field LThumbstickUp offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const LThumbstickUp;

/// @brief Field LThumbstickDown offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const LThumbstickDown;

/// @brief Field LThumbstickLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const LThumbstickLeft;

/// @brief Field LThumbstickRight offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const LThumbstickRight;

/// @brief Field LTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const LTouchpad;

/// @brief Field RShoulder offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const RShoulder;

/// @brief Field RIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const RIndexTrigger;

/// @brief Field RHandTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const RHandTrigger;

/// @brief Field RThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const RThumbstick;

/// @brief Field RThumbstickUp offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const RThumbstickUp;

/// @brief Field RThumbstickDown offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const RThumbstickDown;

/// @brief Field RThumbstickLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const RThumbstickLeft;

/// @brief Field RThumbstickRight offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const RThumbstickRight;

/// @brief Field RTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const RTouchpad;

/// @brief Field DpadUp offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const DpadUp;

/// @brief Field DpadDown offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const DpadDown;

/// @brief Field DpadLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const DpadLeft;

/// @brief Field DpadRight offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const DpadRight;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawButton const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Touch
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8497))
// CS Name: OVRInput::Touch
struct CORDL_TYPE GlobalNamespace__OVRInput__Touch : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__Touch(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__Touch(GlobalNamespace__OVRInput__Touch const&) = default;
                    constexpr GlobalNamespace__OVRInput__Touch(GlobalNamespace__OVRInput__Touch&&) = default;
                    constexpr GlobalNamespace__OVRInput__Touch& operator=(GlobalNamespace__OVRInput__Touch const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__Touch& operator=(GlobalNamespace__OVRInput__Touch&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__Touch(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__Touch_Unwrapped : int32_t {
__None = 0,
__One = 1,
__Two = 2,
__Three = 4,
__Four = 8,
__PrimaryIndexTrigger = 8192,
__PrimaryThumbstick = 32768,
__PrimaryThumbRest = 4096,
__PrimaryTouchpad = 1024,
__SecondaryIndexTrigger = 2097152,
__SecondaryThumbstick = 8388608,
__SecondaryThumbRest = 1048576,
__SecondaryTouchpad = 2048,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__Touch_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__Touch_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const None;

/// @brief Field One offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const One;

/// @brief Field Two offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const Two;

/// @brief Field Three offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const Three;

/// @brief Field Four offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const Four;

/// @brief Field PrimaryIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const PrimaryIndexTrigger;

/// @brief Field PrimaryThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const PrimaryThumbstick;

/// @brief Field PrimaryThumbRest offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const PrimaryThumbRest;

/// @brief Field PrimaryTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const PrimaryTouchpad;

/// @brief Field SecondaryIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const SecondaryIndexTrigger;

/// @brief Field SecondaryThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const SecondaryThumbstick;

/// @brief Field SecondaryThumbRest offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const SecondaryThumbRest;

/// @brief Field SecondaryTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const SecondaryTouchpad;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Touch const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RawTouch
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8498))
// CS Name: OVRInput::RawTouch
struct CORDL_TYPE GlobalNamespace__OVRInput__RawTouch : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__RawTouch(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__RawTouch(GlobalNamespace__OVRInput__RawTouch const&) = default;
                    constexpr GlobalNamespace__OVRInput__RawTouch(GlobalNamespace__OVRInput__RawTouch&&) = default;
                    constexpr GlobalNamespace__OVRInput__RawTouch& operator=(GlobalNamespace__OVRInput__RawTouch const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__RawTouch& operator=(GlobalNamespace__OVRInput__RawTouch&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__RawTouch(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__RawTouch_Unwrapped : int32_t {
__None = 0,
__A = 1,
__B = 2,
__X = 256,
__Y = 512,
__LIndexTrigger = 4096,
__LThumbstick = 1024,
__LThumbRest = 2048,
__LTouchpad = 1073741824,
__RIndexTrigger = 16,
__RThumbstick = 4,
__RThumbRest = 8,
__RTouchpad = -2147483648,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__RawTouch_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__RawTouch_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const None;

/// @brief Field A offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const A;

/// @brief Field B offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const B;

/// @brief Field X offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const X;

/// @brief Field Y offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const Y;

/// @brief Field LIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const LIndexTrigger;

/// @brief Field LThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const LThumbstick;

/// @brief Field LThumbRest offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const LThumbRest;

/// @brief Field LTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const LTouchpad;

/// @brief Field RIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const RIndexTrigger;

/// @brief Field RThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const RThumbstick;

/// @brief Field RThumbRest offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const RThumbRest;

/// @brief Field RTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const RTouchpad;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawTouch const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NearTouch
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8499))
// CS Name: OVRInput::NearTouch
struct CORDL_TYPE GlobalNamespace__OVRInput__NearTouch : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__NearTouch(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__NearTouch(GlobalNamespace__OVRInput__NearTouch const&) = default;
                    constexpr GlobalNamespace__OVRInput__NearTouch(GlobalNamespace__OVRInput__NearTouch&&) = default;
                    constexpr GlobalNamespace__OVRInput__NearTouch& operator=(GlobalNamespace__OVRInput__NearTouch const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__NearTouch& operator=(GlobalNamespace__OVRInput__NearTouch&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__NearTouch(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__NearTouch_Unwrapped : int32_t {
__None = 0,
__PrimaryIndexTrigger = 1,
__PrimaryThumbButtons = 2,
__SecondaryIndexTrigger = 4,
__SecondaryThumbButtons = 8,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__NearTouch_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__NearTouch_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__NearTouch const None;

/// @brief Field PrimaryIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__NearTouch const PrimaryIndexTrigger;

/// @brief Field PrimaryThumbButtons offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__NearTouch const PrimaryThumbButtons;

/// @brief Field SecondaryIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__NearTouch const SecondaryIndexTrigger;

/// @brief Field SecondaryThumbButtons offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__NearTouch const SecondaryThumbButtons;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__NearTouch const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RawNearTouch
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8500))
// CS Name: OVRInput::RawNearTouch
struct CORDL_TYPE GlobalNamespace__OVRInput__RawNearTouch : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__RawNearTouch(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__RawNearTouch(GlobalNamespace__OVRInput__RawNearTouch const&) = default;
                    constexpr GlobalNamespace__OVRInput__RawNearTouch(GlobalNamespace__OVRInput__RawNearTouch&&) = default;
                    constexpr GlobalNamespace__OVRInput__RawNearTouch& operator=(GlobalNamespace__OVRInput__RawNearTouch const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__RawNearTouch& operator=(GlobalNamespace__OVRInput__RawNearTouch&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__RawNearTouch(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__RawNearTouch_Unwrapped : int32_t {
__None = 0,
__LIndexTrigger = 1,
__LThumbButtons = 2,
__RIndexTrigger = 4,
__RThumbButtons = 8,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__RawNearTouch_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__RawNearTouch_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch const None;

/// @brief Field LIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch const LIndexTrigger;

/// @brief Field LThumbButtons offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch const LThumbButtons;

/// @brief Field RIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch const RIndexTrigger;

/// @brief Field RThumbButtons offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch const RThumbButtons;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Axis1D
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8501))
// CS Name: OVRInput::Axis1D
struct CORDL_TYPE GlobalNamespace__OVRInput__Axis1D : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__Axis1D(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__Axis1D(GlobalNamespace__OVRInput__Axis1D const&) = default;
                    constexpr GlobalNamespace__OVRInput__Axis1D(GlobalNamespace__OVRInput__Axis1D&&) = default;
                    constexpr GlobalNamespace__OVRInput__Axis1D& operator=(GlobalNamespace__OVRInput__Axis1D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__Axis1D& operator=(GlobalNamespace__OVRInput__Axis1D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__Axis1D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__Axis1D_Unwrapped : int32_t {
__None = 0,
__PrimaryIndexTrigger = 1,
__PrimaryHandTrigger = 4,
__SecondaryIndexTrigger = 2,
__SecondaryHandTrigger = 8,
__PrimaryIndexTriggerCurl = 16,
__PrimaryIndexTriggerSlide = 32,
__PrimaryThumbRestForce = 64,
__PrimaryStylusForce = 128,
__SecondaryIndexTriggerCurl = 256,
__SecondaryIndexTriggerSlide = 512,
__SecondaryThumbRestForce = 1024,
__SecondaryStylusForce = 2048,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__Axis1D_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__Axis1D_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const None;

/// @brief Field PrimaryIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const PrimaryIndexTrigger;

/// @brief Field PrimaryHandTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const PrimaryHandTrigger;

/// @brief Field SecondaryIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const SecondaryIndexTrigger;

/// @brief Field SecondaryHandTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const SecondaryHandTrigger;

/// @brief Field PrimaryIndexTriggerCurl offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const PrimaryIndexTriggerCurl;

/// @brief Field PrimaryIndexTriggerSlide offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const PrimaryIndexTriggerSlide;

/// @brief Field PrimaryThumbRestForce offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const PrimaryThumbRestForce;

/// @brief Field PrimaryStylusForce offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const PrimaryStylusForce;

/// @brief Field SecondaryIndexTriggerCurl offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const SecondaryIndexTriggerCurl;

/// @brief Field SecondaryIndexTriggerSlide offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const SecondaryIndexTriggerSlide;

/// @brief Field SecondaryThumbRestForce offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const SecondaryThumbRestForce;

/// @brief Field SecondaryStylusForce offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const SecondaryStylusForce;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis1D const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RawAxis1D
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8502))
// CS Name: OVRInput::RawAxis1D
struct CORDL_TYPE GlobalNamespace__OVRInput__RawAxis1D : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__RawAxis1D(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__RawAxis1D(GlobalNamespace__OVRInput__RawAxis1D const&) = default;
                    constexpr GlobalNamespace__OVRInput__RawAxis1D(GlobalNamespace__OVRInput__RawAxis1D&&) = default;
                    constexpr GlobalNamespace__OVRInput__RawAxis1D& operator=(GlobalNamespace__OVRInput__RawAxis1D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__RawAxis1D& operator=(GlobalNamespace__OVRInput__RawAxis1D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__RawAxis1D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__RawAxis1D_Unwrapped : int32_t {
__None = 0,
__LIndexTrigger = 1,
__LHandTrigger = 4,
__RIndexTrigger = 2,
__RHandTrigger = 8,
__LIndexTriggerCurl = 16,
__LIndexTriggerSlide = 32,
__LThumbRestForce = 64,
__LStylusForce = 128,
__RIndexTriggerCurl = 256,
__RIndexTriggerSlide = 512,
__RThumbRestForce = 1024,
__RStylusForce = 2048,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__RawAxis1D_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__RawAxis1D_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const None;

/// @brief Field LIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const LIndexTrigger;

/// @brief Field LHandTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const LHandTrigger;

/// @brief Field RIndexTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const RIndexTrigger;

/// @brief Field RHandTrigger offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const RHandTrigger;

/// @brief Field LIndexTriggerCurl offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const LIndexTriggerCurl;

/// @brief Field LIndexTriggerSlide offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const LIndexTriggerSlide;

/// @brief Field LThumbRestForce offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const LThumbRestForce;

/// @brief Field LStylusForce offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const LStylusForce;

/// @brief Field RIndexTriggerCurl offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const RIndexTriggerCurl;

/// @brief Field RIndexTriggerSlide offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const RIndexTriggerSlide;

/// @brief Field RThumbRestForce offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const RThumbRestForce;

/// @brief Field RStylusForce offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const RStylusForce;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Axis2D
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8503))
// CS Name: OVRInput::Axis2D
struct CORDL_TYPE GlobalNamespace__OVRInput__Axis2D : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__Axis2D(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__Axis2D(GlobalNamespace__OVRInput__Axis2D const&) = default;
                    constexpr GlobalNamespace__OVRInput__Axis2D(GlobalNamespace__OVRInput__Axis2D&&) = default;
                    constexpr GlobalNamespace__OVRInput__Axis2D& operator=(GlobalNamespace__OVRInput__Axis2D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__Axis2D& operator=(GlobalNamespace__OVRInput__Axis2D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__Axis2D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__Axis2D_Unwrapped : int32_t {
__None = 0,
__PrimaryThumbstick = 1,
__PrimaryTouchpad = 4,
__SecondaryThumbstick = 2,
__SecondaryTouchpad = 8,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__Axis2D_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__Axis2D_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis2D const None;

/// @brief Field PrimaryThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis2D const PrimaryThumbstick;

/// @brief Field PrimaryTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis2D const PrimaryTouchpad;

/// @brief Field SecondaryThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis2D const SecondaryThumbstick;

/// @brief Field SecondaryTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis2D const SecondaryTouchpad;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Axis2D const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RawAxis2D
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8504))
// CS Name: OVRInput::RawAxis2D
struct CORDL_TYPE GlobalNamespace__OVRInput__RawAxis2D : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__RawAxis2D(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__RawAxis2D(GlobalNamespace__OVRInput__RawAxis2D const&) = default;
                    constexpr GlobalNamespace__OVRInput__RawAxis2D(GlobalNamespace__OVRInput__RawAxis2D&&) = default;
                    constexpr GlobalNamespace__OVRInput__RawAxis2D& operator=(GlobalNamespace__OVRInput__RawAxis2D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__RawAxis2D& operator=(GlobalNamespace__OVRInput__RawAxis2D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__RawAxis2D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__RawAxis2D_Unwrapped : int32_t {
__None = 0,
__LThumbstick = 1,
__LTouchpad = 4,
__RThumbstick = 2,
__RTouchpad = 8,
__Any = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__RawAxis2D_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__RawAxis2D_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D const None;

/// @brief Field LThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D const LThumbstick;

/// @brief Field LTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D const LTouchpad;

/// @brief Field RThumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D const RThumbstick;

/// @brief Field RTouchpad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D const RTouchpad;

/// @brief Field Any offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OpenVRButton
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8505))
// CS Name: OVRInput::OpenVRButton
struct CORDL_TYPE GlobalNamespace__OVRInput__OpenVRButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__OpenVRButton(uint64_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__OpenVRButton(GlobalNamespace__OVRInput__OpenVRButton const&) = default;
                    constexpr GlobalNamespace__OVRInput__OpenVRButton(GlobalNamespace__OVRInput__OpenVRButton&&) = default;
                    constexpr GlobalNamespace__OVRInput__OpenVRButton& operator=(GlobalNamespace__OVRInput__OpenVRButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__OpenVRButton& operator=(GlobalNamespace__OVRInput__OpenVRButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OpenVRButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__OpenVRButton_Unwrapped : uint64_t {
__None = 0u,
__Two = 2u,
__Thumbstick = 4294967296u,
__Grip = 4u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__OpenVRButton_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__OpenVRButton_Unwrapped>(__instance);
}


// Fields

 uint64_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint64_t value) ;

constexpr uint64_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton const None;

/// @brief Field Two offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton const Two;

/// @brief Field Thumbstick offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton const Thumbstick;

/// @brief Field Grip offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton const Grip;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Controller
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8506))
// CS Name: OVRInput::Controller
struct CORDL_TYPE GlobalNamespace__OVRInput__Controller : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__Controller(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__Controller(GlobalNamespace__OVRInput__Controller const&) = default;
                    constexpr GlobalNamespace__OVRInput__Controller(GlobalNamespace__OVRInput__Controller&&) = default;
                    constexpr GlobalNamespace__OVRInput__Controller& operator=(GlobalNamespace__OVRInput__Controller const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__Controller& operator=(GlobalNamespace__OVRInput__Controller&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__Controller(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__Controller_Unwrapped : int32_t {
__None = 0,
__LTouch = 1,
__RTouch = 2,
__Touch = 3,
__Remote = 4,
__Gamepad = 16,
__Hands = 96,
__LHand = 32,
__RHand = 64,
__Active = -2147483648,
__All = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__Controller_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__Controller_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const None;

/// @brief Field LTouch offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const LTouch;

/// @brief Field RTouch offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const RTouch;

/// @brief Field Touch offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const Touch;

/// @brief Field Remote offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const Remote;

/// @brief Field Gamepad offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const Gamepad;

/// @brief Field Hands offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const Hands;

/// @brief Field LHand offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const LHand;

/// @brief Field RHand offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const RHand;

/// @brief Field Active offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const Active;

/// @brief Field All offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Controller const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Handedness
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8507))
// CS Name: OVRInput::Handedness
struct CORDL_TYPE GlobalNamespace__OVRInput__Handedness : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__Handedness(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__Handedness(GlobalNamespace__OVRInput__Handedness const&) = default;
                    constexpr GlobalNamespace__OVRInput__Handedness(GlobalNamespace__OVRInput__Handedness&&) = default;
                    constexpr GlobalNamespace__OVRInput__Handedness& operator=(GlobalNamespace__OVRInput__Handedness const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__Handedness& operator=(GlobalNamespace__OVRInput__Handedness&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__Handedness(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__Handedness_Unwrapped : int32_t {
__Unsupported = 0,
__LeftHanded = 1,
__RightHanded = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__Handedness_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__Handedness_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unsupported offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Handedness const Unsupported;

/// @brief Field LeftHanded offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Handedness const LeftHanded;

/// @brief Field RightHanded offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Handedness const RightHanded;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HapticsLocation
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8508))
// CS Name: OVRInput::HapticsLocation
struct CORDL_TYPE GlobalNamespace__OVRInput__HapticsLocation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__HapticsLocation(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__HapticsLocation(GlobalNamespace__OVRInput__HapticsLocation const&) = default;
                    constexpr GlobalNamespace__OVRInput__HapticsLocation(GlobalNamespace__OVRInput__HapticsLocation&&) = default;
                    constexpr GlobalNamespace__OVRInput__HapticsLocation& operator=(GlobalNamespace__OVRInput__HapticsLocation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__HapticsLocation& operator=(GlobalNamespace__OVRInput__HapticsLocation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__HapticsLocation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__HapticsLocation_Unwrapped : int32_t {
__None = 0,
__Hand = 1,
__Thumb = 2,
__Index = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__HapticsLocation_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__HapticsLocation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation const None;

/// @brief Field Hand offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation const Hand;

/// @brief Field Thumb offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation const Thumb;

/// @brief Field Index offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation const Index;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InteractionProfile
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8509))
// CS Name: OVRInput::InteractionProfile
struct CORDL_TYPE GlobalNamespace__OVRInput__InteractionProfile : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__InteractionProfile(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__InteractionProfile(GlobalNamespace__OVRInput__InteractionProfile const&) = default;
                    constexpr GlobalNamespace__OVRInput__InteractionProfile(GlobalNamespace__OVRInput__InteractionProfile&&) = default;
                    constexpr GlobalNamespace__OVRInput__InteractionProfile& operator=(GlobalNamespace__OVRInput__InteractionProfile const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__InteractionProfile& operator=(GlobalNamespace__OVRInput__InteractionProfile&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__InteractionProfile(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__InteractionProfile_Unwrapped : int32_t {
__None = 0,
__Touch = 1,
__TouchPro = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__InteractionProfile_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__InteractionProfile_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile const None;

/// @brief Field Touch offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile const Touch;

/// @brief Field TouchPro offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile const TouchPro;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Hand
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8510))
// CS Name: OVRInput::Hand
struct CORDL_TYPE GlobalNamespace__OVRInput__Hand : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__Hand(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__Hand(GlobalNamespace__OVRInput__Hand const&) = default;
                    constexpr GlobalNamespace__OVRInput__Hand(GlobalNamespace__OVRInput__Hand&&) = default;
                    constexpr GlobalNamespace__OVRInput__Hand& operator=(GlobalNamespace__OVRInput__Hand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__Hand& operator=(GlobalNamespace__OVRInput__Hand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__Hand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__Hand_Unwrapped : int32_t {
__None = -1,
__HandLeft = 0,
__HandRight = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__Hand_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__Hand_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Hand const None;

/// @brief Field HandLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Hand const HandLeft;

/// @brief Field HandRight offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__Hand const HandRight;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HapticsAmplitudeEnvelopeVibration
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8511))
// CS Name: OVRInput::HapticsAmplitudeEnvelopeVibration
struct CORDL_TYPE GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration(int32_t SamplesCount, ::ArrayW<float_t> Samples, float_t Duration) noexcept;


                    constexpr GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration(GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration const&) = default;
                    constexpr GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration(GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration&&) = default;
                    constexpr GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration& operator=(GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration& operator=(GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_SamplesCount, put=__set_SamplesCount))  SamplesCount;

constexpr void __set_SamplesCount(int32_t value) ;

constexpr int32_t __get_SamplesCount() const;

 ::ArrayW<float_t> __declspec(property(get=__get_Samples, put=__set_Samples))  Samples;

constexpr void __set_Samples(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_Samples() const;

 float_t __declspec(property(get=__get_Duration, put=__set_Duration))  Duration;

constexpr void __set_Duration(float_t value) ;

constexpr float_t __get_Duration() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HapticsPcmVibration
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8512))
// CS Name: OVRInput::HapticsPcmVibration
struct CORDL_TYPE GlobalNamespace__OVRInput__HapticsPcmVibration : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Append", ty: "bool", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__HapticsPcmVibration(int32_t SamplesCount, ::ArrayW<float_t> Samples, float_t SampleRateHz, bool Append) noexcept;


                    constexpr GlobalNamespace__OVRInput__HapticsPcmVibration(GlobalNamespace__OVRInput__HapticsPcmVibration const&) = default;
                    constexpr GlobalNamespace__OVRInput__HapticsPcmVibration(GlobalNamespace__OVRInput__HapticsPcmVibration&&) = default;
                    constexpr GlobalNamespace__OVRInput__HapticsPcmVibration& operator=(GlobalNamespace__OVRInput__HapticsPcmVibration const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__HapticsPcmVibration& operator=(GlobalNamespace__OVRInput__HapticsPcmVibration&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__HapticsPcmVibration(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_SamplesCount, put=__set_SamplesCount))  SamplesCount;

constexpr void __set_SamplesCount(int32_t value) ;

constexpr int32_t __get_SamplesCount() const;

 ::ArrayW<float_t> __declspec(property(get=__get_Samples, put=__set_Samples))  Samples;

constexpr void __set_Samples(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_Samples() const;

 float_t __declspec(property(get=__get_SampleRateHz, put=__set_SampleRateHz))  SampleRateHz;

constexpr void __set_SampleRateHz(float_t value) ;

constexpr float_t __get_SampleRateHz() const;

 bool __declspec(property(get=__get_Append, put=__set_Append))  Append;

constexpr void __set_Append(bool value) ;

constexpr bool __get_Append() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OpenVRController
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8513))
// CS Name: OVRInput::OpenVRController
struct CORDL_TYPE GlobalNamespace__OVRInput__OpenVRController : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__OpenVRController(uint64_t value__) noexcept;


                    constexpr GlobalNamespace__OVRInput__OpenVRController(GlobalNamespace__OVRInput__OpenVRController const&) = default;
                    constexpr GlobalNamespace__OVRInput__OpenVRController(GlobalNamespace__OVRInput__OpenVRController&&) = default;
                    constexpr GlobalNamespace__OVRInput__OpenVRController& operator=(GlobalNamespace__OVRInput__OpenVRController const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__OpenVRController& operator=(GlobalNamespace__OVRInput__OpenVRController&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OpenVRController(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRInput__OpenVRController_Unwrapped : uint64_t {
__Unknown = 0u,
__OculusTouch = 1u,
__ViveController = 2u,
__WindowsMRController = 3u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRInput__OpenVRController_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRInput__OpenVRController_Unwrapped>(__instance);
}


// Fields

 uint64_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint64_t value) ;

constexpr uint64_t __get_value__() const;

/// @brief Field Unknown offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController const Unknown;

/// @brief Field OculusTouch offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController const OculusTouch;

/// @brief Field ViveController offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController const ViveController;

/// @brief Field WindowsMRController offset 0
static GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController const WindowsMRController;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OpenVRControllerDetails
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8514))
// CS Name: OVRInput::OpenVRControllerDetails
struct CORDL_TYPE GlobalNamespace__OVRInput__OpenVRControllerDetails : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "state", ty: "OVR::OpenVR::VRControllerState_t", modifiers: "", def_value: None }, CppParam { name: "controllerType", ty: "GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController", modifiers: "", def_value: None }, CppParam { name: "deviceID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "localPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localOrientation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRInput__OpenVRControllerDetails(OVR::OpenVR::VRControllerState_t state, GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController controllerType, uint32_t deviceID, UnityEngine::Vector3 localPosition, UnityEngine::Quaternion localOrientation) noexcept;


                    constexpr GlobalNamespace__OVRInput__OpenVRControllerDetails(GlobalNamespace__OVRInput__OpenVRControllerDetails const&) = default;
                    constexpr GlobalNamespace__OVRInput__OpenVRControllerDetails(GlobalNamespace__OVRInput__OpenVRControllerDetails&&) = default;
                    constexpr GlobalNamespace__OVRInput__OpenVRControllerDetails& operator=(GlobalNamespace__OVRInput__OpenVRControllerDetails const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRInput__OpenVRControllerDetails& operator=(GlobalNamespace__OVRInput__OpenVRControllerDetails&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OpenVRControllerDetails(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::VRControllerState_t __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(OVR::OpenVR::VRControllerState_t value) ;

constexpr OVR::OpenVR::VRControllerState_t __get_state() const;

 GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController __declspec(property(get=__get_controllerType, put=__set_controllerType))  controllerType;

constexpr void __set_controllerType(GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController __get_controllerType() const;

 uint32_t __declspec(property(get=__get_deviceID, put=__set_deviceID))  deviceID;

constexpr void __set_deviceID(uint32_t value) ;

constexpr uint32_t __get_deviceID() const;

 UnityEngine::Vector3 __declspec(property(get=__get_localPosition, put=__set_localPosition))  localPosition;

constexpr void __set_localPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_localPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_localOrientation, put=__set_localOrientation))  localOrientation;

constexpr void __set_localOrientation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_localOrientation() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HapticInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8515))
// CS Name: OVRInput::HapticInfo
class CORDL_TYPE GlobalNamespace__OVRInput__HapticInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OVRInput__HapticInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__HapticInfo", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__HapticInfo(GlobalNamespace__OVRInput__HapticInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__HapticInfo", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__HapticInfo(GlobalNamespace__OVRInput__HapticInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__HapticInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRInput__HapticInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__HapticInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__HapticInfo& operator=(GlobalNamespace__OVRInput__HapticInfo&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__HapticInfo& operator=(GlobalNamespace__OVRInput__HapticInfo const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_playingHaptics, put=__set_playingHaptics))  playingHaptics;

constexpr void __set_playingHaptics(bool value) ;

constexpr bool __get_playingHaptics() const;

 float_t __declspec(property(get=__get_hapticsDurationPlayed, put=__set_hapticsDurationPlayed))  hapticsDurationPlayed;

constexpr void __set_hapticsDurationPlayed(float_t value) ;

constexpr float_t __get_hapticsDurationPlayed() const;

 float_t __declspec(property(get=__get_hapticsDuration, put=__set_hapticsDuration))  hapticsDuration;

constexpr void __set_hapticsDuration(float_t value) ;

constexpr float_t __get_hapticsDuration() const;

 float_t __declspec(property(get=__get_hapticAmplitude, put=__set_hapticAmplitude))  hapticAmplitude;

constexpr void __set_hapticAmplitude(float_t value) ;

constexpr float_t __get_hapticAmplitude() const;

 UnityEngine::XR::XRNode __declspec(property(get=__get_node, put=__set_node))  node;

constexpr void __set_node(UnityEngine::XR::XRNode value) ;

constexpr UnityEngine::XR::XRNode __get_node() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__HapticInfo() ;

/// @brief Method .ctor addr 0x25c1734 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VirtualButtonMap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8516))
// CS Name: OVRInput::OVRControllerBase::VirtualButtonMap
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_None, put=__set_None))  None;

constexpr void __set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_None() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_One, put=__set_One))  One;

constexpr void __set_One(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_One() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_Two, put=__set_Two))  Two;

constexpr void __set_Two(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_Two() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_Three, put=__set_Three))  Three;

constexpr void __set_Three(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_Three() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_Four, put=__set_Four))  Four;

constexpr void __set_Four(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_Four() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_Start, put=__set_Start))  Start;

constexpr void __set_Start(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_Start() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_Back, put=__set_Back))  Back;

constexpr void __set_Back(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_Back() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_PrimaryShoulder, put=__set_PrimaryShoulder))  PrimaryShoulder;

constexpr void __set_PrimaryShoulder(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_PrimaryShoulder() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_PrimaryIndexTrigger, put=__set_PrimaryIndexTrigger))  PrimaryIndexTrigger;

constexpr void __set_PrimaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_PrimaryIndexTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_PrimaryHandTrigger, put=__set_PrimaryHandTrigger))  PrimaryHandTrigger;

constexpr void __set_PrimaryHandTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_PrimaryHandTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_PrimaryThumbstick, put=__set_PrimaryThumbstick))  PrimaryThumbstick;

constexpr void __set_PrimaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_PrimaryThumbstick() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_PrimaryThumbstickUp, put=__set_PrimaryThumbstickUp))  PrimaryThumbstickUp;

constexpr void __set_PrimaryThumbstickUp(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_PrimaryThumbstickUp() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_PrimaryThumbstickDown, put=__set_PrimaryThumbstickDown))  PrimaryThumbstickDown;

constexpr void __set_PrimaryThumbstickDown(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_PrimaryThumbstickDown() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_PrimaryThumbstickLeft, put=__set_PrimaryThumbstickLeft))  PrimaryThumbstickLeft;

constexpr void __set_PrimaryThumbstickLeft(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_PrimaryThumbstickLeft() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_PrimaryThumbstickRight, put=__set_PrimaryThumbstickRight))  PrimaryThumbstickRight;

constexpr void __set_PrimaryThumbstickRight(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_PrimaryThumbstickRight() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_PrimaryTouchpad, put=__set_PrimaryTouchpad))  PrimaryTouchpad;

constexpr void __set_PrimaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_PrimaryTouchpad() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_SecondaryShoulder, put=__set_SecondaryShoulder))  SecondaryShoulder;

constexpr void __set_SecondaryShoulder(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_SecondaryShoulder() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_SecondaryIndexTrigger, put=__set_SecondaryIndexTrigger))  SecondaryIndexTrigger;

constexpr void __set_SecondaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_SecondaryIndexTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_SecondaryHandTrigger, put=__set_SecondaryHandTrigger))  SecondaryHandTrigger;

constexpr void __set_SecondaryHandTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_SecondaryHandTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_SecondaryThumbstick, put=__set_SecondaryThumbstick))  SecondaryThumbstick;

constexpr void __set_SecondaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_SecondaryThumbstick() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_SecondaryThumbstickUp, put=__set_SecondaryThumbstickUp))  SecondaryThumbstickUp;

constexpr void __set_SecondaryThumbstickUp(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_SecondaryThumbstickUp() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_SecondaryThumbstickDown, put=__set_SecondaryThumbstickDown))  SecondaryThumbstickDown;

constexpr void __set_SecondaryThumbstickDown(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_SecondaryThumbstickDown() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_SecondaryThumbstickLeft, put=__set_SecondaryThumbstickLeft))  SecondaryThumbstickLeft;

constexpr void __set_SecondaryThumbstickLeft(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_SecondaryThumbstickLeft() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_SecondaryThumbstickRight, put=__set_SecondaryThumbstickRight))  SecondaryThumbstickRight;

constexpr void __set_SecondaryThumbstickRight(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_SecondaryThumbstickRight() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_SecondaryTouchpad, put=__set_SecondaryTouchpad))  SecondaryTouchpad;

constexpr void __set_SecondaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_SecondaryTouchpad() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_DpadUp, put=__set_DpadUp))  DpadUp;

constexpr void __set_DpadUp(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_DpadUp() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_DpadDown, put=__set_DpadDown))  DpadDown;

constexpr void __set_DpadDown(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_DpadDown() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_DpadLeft, put=__set_DpadLeft))  DpadLeft;

constexpr void __set_DpadLeft(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_DpadLeft() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_DpadRight, put=__set_DpadRight))  DpadRight;

constexpr void __set_DpadRight(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_DpadRight() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_Up, put=__set_Up))  Up;

constexpr void __set_Up(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_Up() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_Down, put=__set_Down))  Down;

constexpr void __set_Down(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_Down() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_Left, put=__set_Left))  Left;

constexpr void __set_Left(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_Left() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_Right, put=__set_Right))  Right;

constexpr void __set_Right(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_Right() const;


// Methods

/// @brief Method ToRawMask addr 0x25c2ee8 size 0x214 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawButton ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask) ;

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap() ;

/// @brief Method .ctor addr 0x25c21ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VirtualTouchMap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8517))
// CS Name: OVRInput::OVRControllerBase::VirtualTouchMap
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_None, put=__set_None))  None;

constexpr void __set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_None() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_One, put=__set_One))  One;

constexpr void __set_One(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_One() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_Two, put=__set_Two))  Two;

constexpr void __set_Two(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_Two() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_Three, put=__set_Three))  Three;

constexpr void __set_Three(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_Three() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_Four, put=__set_Four))  Four;

constexpr void __set_Four(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_Four() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_PrimaryIndexTrigger, put=__set_PrimaryIndexTrigger))  PrimaryIndexTrigger;

constexpr void __set_PrimaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_PrimaryIndexTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_PrimaryThumbstick, put=__set_PrimaryThumbstick))  PrimaryThumbstick;

constexpr void __set_PrimaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_PrimaryThumbstick() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_PrimaryThumbRest, put=__set_PrimaryThumbRest))  PrimaryThumbRest;

constexpr void __set_PrimaryThumbRest(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_PrimaryThumbRest() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_PrimaryTouchpad, put=__set_PrimaryTouchpad))  PrimaryTouchpad;

constexpr void __set_PrimaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_PrimaryTouchpad() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_SecondaryIndexTrigger, put=__set_SecondaryIndexTrigger))  SecondaryIndexTrigger;

constexpr void __set_SecondaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_SecondaryIndexTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_SecondaryThumbstick, put=__set_SecondaryThumbstick))  SecondaryThumbstick;

constexpr void __set_SecondaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_SecondaryThumbstick() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_SecondaryThumbRest, put=__set_SecondaryThumbRest))  SecondaryThumbRest;

constexpr void __set_SecondaryThumbRest(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_SecondaryThumbRest() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __declspec(property(get=__get_SecondaryTouchpad, put=__set_SecondaryTouchpad))  SecondaryTouchpad;

constexpr void __set_SecondaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawTouch __get_SecondaryTouchpad() const;


// Methods

/// @brief Method ToRawMask addr 0x25c30fc size 0xd4 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask) ;

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap() ;

/// @brief Method .ctor addr 0x25c21b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VirtualNearTouchMap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8518))
// CS Name: OVRInput::OVRControllerBase::VirtualNearTouchMap
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __declspec(property(get=__get_None, put=__set_None))  None;

constexpr void __set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __get_None() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __declspec(property(get=__get_PrimaryIndexTrigger, put=__set_PrimaryIndexTrigger))  PrimaryIndexTrigger;

constexpr void __set_PrimaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __get_PrimaryIndexTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __declspec(property(get=__get_PrimaryThumbButtons, put=__set_PrimaryThumbButtons))  PrimaryThumbButtons;

constexpr void __set_PrimaryThumbButtons(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __get_PrimaryThumbButtons() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __declspec(property(get=__get_SecondaryIndexTrigger, put=__set_SecondaryIndexTrigger))  SecondaryIndexTrigger;

constexpr void __set_SecondaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __get_SecondaryIndexTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __declspec(property(get=__get_SecondaryThumbButtons, put=__set_SecondaryThumbButtons))  SecondaryThumbButtons;

constexpr void __set_SecondaryThumbButtons(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch __get_SecondaryThumbButtons() const;


// Methods

/// @brief Method ToRawMask addr 0x25c31d0 size 0x54 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask) ;

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap() ;

/// @brief Method .ctor addr 0x25c21bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VirtualAxis1DMap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8519))
// CS Name: OVRInput::OVRControllerBase::VirtualAxis1DMap
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_None, put=__set_None))  None;

constexpr void __set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_None() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_PrimaryIndexTrigger, put=__set_PrimaryIndexTrigger))  PrimaryIndexTrigger;

constexpr void __set_PrimaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_PrimaryIndexTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_PrimaryHandTrigger, put=__set_PrimaryHandTrigger))  PrimaryHandTrigger;

constexpr void __set_PrimaryHandTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_PrimaryHandTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_SecondaryIndexTrigger, put=__set_SecondaryIndexTrigger))  SecondaryIndexTrigger;

constexpr void __set_SecondaryIndexTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_SecondaryIndexTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_SecondaryHandTrigger, put=__set_SecondaryHandTrigger))  SecondaryHandTrigger;

constexpr void __set_SecondaryHandTrigger(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_SecondaryHandTrigger() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_PrimaryIndexTriggerCurl, put=__set_PrimaryIndexTriggerCurl))  PrimaryIndexTriggerCurl;

constexpr void __set_PrimaryIndexTriggerCurl(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_PrimaryIndexTriggerCurl() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_PrimaryIndexTriggerSlide, put=__set_PrimaryIndexTriggerSlide))  PrimaryIndexTriggerSlide;

constexpr void __set_PrimaryIndexTriggerSlide(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_PrimaryIndexTriggerSlide() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_PrimaryThumbRestForce, put=__set_PrimaryThumbRestForce))  PrimaryThumbRestForce;

constexpr void __set_PrimaryThumbRestForce(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_PrimaryThumbRestForce() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_PrimaryStylusForce, put=__set_PrimaryStylusForce))  PrimaryStylusForce;

constexpr void __set_PrimaryStylusForce(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_PrimaryStylusForce() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_SecondaryIndexTriggerCurl, put=__set_SecondaryIndexTriggerCurl))  SecondaryIndexTriggerCurl;

constexpr void __set_SecondaryIndexTriggerCurl(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_SecondaryIndexTriggerCurl() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_SecondaryIndexTriggerSlide, put=__set_SecondaryIndexTriggerSlide))  SecondaryIndexTriggerSlide;

constexpr void __set_SecondaryIndexTriggerSlide(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_SecondaryIndexTriggerSlide() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_SecondaryThumbRestForce, put=__set_SecondaryThumbRestForce))  SecondaryThumbRestForce;

constexpr void __set_SecondaryThumbRestForce(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_SecondaryThumbRestForce() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __declspec(property(get=__get_SecondaryStylusForce, put=__set_SecondaryStylusForce))  SecondaryStylusForce;

constexpr void __set_SecondaryStylusForce(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D __get_SecondaryStylusForce() const;


// Methods

/// @brief Method ToRawMask addr 0x25c3224 size 0xd4 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D virtualMask) ;

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap() ;

/// @brief Method .ctor addr 0x25c21c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VirtualAxis2DMap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8520))
// CS Name: OVRInput::OVRControllerBase::VirtualAxis2DMap
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap(GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap& operator=(GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __declspec(property(get=__get_None, put=__set_None))  None;

constexpr void __set_None(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __get_None() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __declspec(property(get=__get_PrimaryThumbstick, put=__set_PrimaryThumbstick))  PrimaryThumbstick;

constexpr void __set_PrimaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __get_PrimaryThumbstick() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __declspec(property(get=__get_PrimaryTouchpad, put=__set_PrimaryTouchpad))  PrimaryTouchpad;

constexpr void __set_PrimaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __get_PrimaryTouchpad() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __declspec(property(get=__get_SecondaryThumbstick, put=__set_SecondaryThumbstick))  SecondaryThumbstick;

constexpr void __set_SecondaryThumbstick(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __get_SecondaryThumbstick() const;

 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __declspec(property(get=__get_SecondaryTouchpad, put=__set_SecondaryTouchpad))  SecondaryTouchpad;

constexpr void __set_SecondaryTouchpad(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D __get_SecondaryTouchpad() const;


// Methods

/// @brief Method ToRawMask addr 0x25c32f8 size 0x54 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D ToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D virtualMask) ;

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap() ;

/// @brief Method .ctor addr 0x25c21cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8521))
// CS Name: OVRInput::OVRControllerBase
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using VirtualAxis2DMap = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap;

using VirtualAxis1DMap = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap;

using VirtualNearTouchMap = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap;

using VirtualTouchMap = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap;

using VirtualButtonMap = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase(GlobalNamespace__OVRInput__OVRControllerBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerBase", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerBase(GlobalNamespace__OVRInput__OVRControllerBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerBase& operator=(GlobalNamespace__OVRInput__OVRControllerBase&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerBase& operator=(GlobalNamespace__OVRInput__OVRControllerBase const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__Controller __declspec(property(get=__get_controllerType, put=__set_controllerType))  controllerType;

constexpr void __set_controllerType(GlobalNamespace::GlobalNamespace__OVRInput__Controller value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller __get_controllerType() const;

 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap __declspec(property(get=__get_buttonMap, put=__set_buttonMap))  buttonMap;

constexpr void __set_buttonMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap __get_buttonMap() const;

 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap __declspec(property(get=__get_touchMap, put=__set_touchMap))  touchMap;

constexpr void __set_touchMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap __get_touchMap() const;

 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap __declspec(property(get=__get_nearTouchMap, put=__set_nearTouchMap))  nearTouchMap;

constexpr void __set_nearTouchMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap __get_nearTouchMap() const;

 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap __declspec(property(get=__get_axis1DMap, put=__set_axis1DMap))  axis1DMap;

constexpr void __set_axis1DMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap __get_axis1DMap() const;

 GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap __declspec(property(get=__get_axis2DMap, put=__set_axis2DMap))  axis2DMap;

constexpr void __set_axis2DMap(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap __get_axis2DMap() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 __declspec(property(get=__get_previousState, put=__set_previousState))  previousState;

constexpr void __set_previousState(GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 __get_previousState() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 __declspec(property(get=__get_currentState, put=__set_currentState))  currentState;

constexpr void __set_currentState(GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 __get_currentState() const;

 bool __declspec(property(get=__get_shouldApplyDeadzone, put=__set_shouldApplyDeadzone))  shouldApplyDeadzone;

constexpr void __set_shouldApplyDeadzone(bool value) ;

constexpr bool __get_shouldApplyDeadzone() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_HapticsPcmSamplesConsumedCache, put=__set_HapticsPcmSamplesConsumedCache))  HapticsPcmSamplesConsumedCache;

constexpr void __set_HapticsPcmSamplesConsumedCache(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_HapticsPcmSamplesConsumedCache() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerBase() ;

/// @brief Method .ctor addr 0x25c1ffc size 0x1b0 virtual false final false
 void _ctor() ;

/// @brief Method Update addr 0x25c21d4 size 0x3e4 virtual true final false
 GlobalNamespace::GlobalNamespace__OVRInput__Controller Update() ;

/// @brief Method GetOpenVRControllerState addr 0x25c25b8 size 0x474 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__ControllerState5 GetOpenVRControllerState(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method SetControllerVibration addr 0x25c2a2c size 0x74 virtual true final false
 void SetControllerVibration(float_t frequency, float_t amplitude) ;

/// @brief Method SetControllerLocalizedVibration addr 0x25c2aa0 size 0x84 virtual true final false
 void SetControllerLocalizedVibration(GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude) ;

/// @brief Method SetControllerHapticsAmplitudeEnvelope addr 0x25c2b24 size 0x138 virtual true final false
 void SetControllerHapticsAmplitudeEnvelope(GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration) ;

/// @brief Method SetControllerHapticsPcm addr 0x25c2c5c size 0x210 virtual true final false
 int32_t SetControllerHapticsPcm(GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration hapticsVibration) ;

/// @brief Method GetControllerSampleRateHz addr 0x25c2e6c size 0x74 virtual true final false
 float_t GetControllerSampleRateHz() ;

/// @brief Method GetBatteryPercentRemaining addr 0x25c2ee0 size 0x8 virtual true final false
 uint8_t GetBatteryPercentRemaining() ;

/// @brief Method ConfigureButtonMap addr 0x0 size 0xffffffffffffffff virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x0 size 0xffffffffffffffff virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x0 size 0xffffffffffffffff virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x0 size 0xffffffffffffffff virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x0 size 0xffffffffffffffff virtual true final false
 void ConfigureAxis2DMap() ;

/// @brief Method ResolveToRawMask addr 0x25bf378 size 0x18 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawButton ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask) ;

/// @brief Method ResolveToRawMask addr 0x25bf9a0 size 0x18 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawTouch ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask) ;

/// @brief Method ResolveToRawMask addr 0x25c0030 size 0x18 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask) ;

/// @brief Method ResolveToRawMask addr 0x25c0b7c size 0x18 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D virtualMask) ;

/// @brief Method ResolveToRawMask addr 0x25c1028 size 0x18 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D ResolveToRawMask(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D virtualMask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerTouch
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8521))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8522))
// CS Name: OVRInput::OVRControllerTouch
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerTouch : public GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerTouch() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerTouch", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerTouch(GlobalNamespace__OVRInput__OVRControllerTouch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerTouch", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerTouch(GlobalNamespace__OVRInput__OVRControllerTouch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerTouch(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerTouch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerTouch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerTouch& operator=(GlobalNamespace__OVRInput__OVRControllerTouch&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerTouch& operator=(GlobalNamespace__OVRInput__OVRControllerTouch const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerTouch() ;

/// @brief Method .ctor addr 0x25bcff8 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method ConfigureButtonMap addr 0x25c334c size 0x68 virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x25c33b4 size 0x3c virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x25c33f0 size 0x2c virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x25c341c size 0x40 virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x25c345c size 0x2c virtual true final false
 void ConfigureAxis2DMap() ;

/// @brief Method GetBatteryPercentRemaining addr 0x25c3488 size 0x14 virtual true final false
 uint8_t GetBatteryPercentRemaining() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerLTouch
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8521))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8523))
// CS Name: OVRInput::OVRControllerLTouch
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerLTouch : public GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerLTouch() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerLTouch", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerLTouch(GlobalNamespace__OVRInput__OVRControllerLTouch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerLTouch", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerLTouch(GlobalNamespace__OVRInput__OVRControllerLTouch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerLTouch(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerLTouch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerLTouch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerLTouch& operator=(GlobalNamespace__OVRInput__OVRControllerLTouch&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerLTouch& operator=(GlobalNamespace__OVRInput__OVRControllerLTouch const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerLTouch() ;

/// @brief Method .ctor addr 0x25bd014 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method ConfigureButtonMap addr 0x25c349c size 0x78 virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x25c3514 size 0x34 virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x25c3548 size 0x28 virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x25c3570 size 0x3c virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x25c35ac size 0x28 virtual true final false
 void ConfigureAxis2DMap() ;

/// @brief Method GetBatteryPercentRemaining addr 0x25c35d4 size 0x8 virtual true final false
 uint8_t GetBatteryPercentRemaining() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerRTouch
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8521))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8524))
// CS Name: OVRInput::OVRControllerRTouch
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerRTouch : public GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerRTouch() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerRTouch", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerRTouch(GlobalNamespace__OVRInput__OVRControllerRTouch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerRTouch", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerRTouch(GlobalNamespace__OVRInput__OVRControllerRTouch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerRTouch(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerRTouch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerRTouch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerRTouch& operator=(GlobalNamespace__OVRInput__OVRControllerRTouch&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerRTouch& operator=(GlobalNamespace__OVRInput__OVRControllerRTouch const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerRTouch() ;

/// @brief Method .ctor addr 0x25bd030 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method ConfigureButtonMap addr 0x25c35dc size 0x78 virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x25c3654 size 0x34 virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x25c3688 size 0x28 virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x25c36b0 size 0x3c virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x25c36ec size 0x28 virtual true final false
 void ConfigureAxis2DMap() ;

/// @brief Method GetBatteryPercentRemaining addr 0x25c3714 size 0x8 virtual true final false
 uint8_t GetBatteryPercentRemaining() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerHands
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8521))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8525))
// CS Name: OVRInput::OVRControllerHands
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerHands : public GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerHands() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerHands", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerHands(GlobalNamespace__OVRInput__OVRControllerHands const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerHands", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerHands(GlobalNamespace__OVRInput__OVRControllerHands&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerHands(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerHands& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerHands& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerHands& operator=(GlobalNamespace__OVRInput__OVRControllerHands&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerHands& operator=(GlobalNamespace__OVRInput__OVRControllerHands const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerHands() ;

/// @brief Method .ctor addr 0x25bd04c size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method ConfigureButtonMap addr 0x25c371c size 0x4c virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x25c3768 size 0x28 virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x25c3790 size 0x20 virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x25c37b0 size 0x28 virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x25c37d8 size 0x20 virtual true final false
 void ConfigureAxis2DMap() ;

/// @brief Method GetBatteryPercentRemaining addr 0x25c37f8 size 0x14 virtual true final false
 uint8_t GetBatteryPercentRemaining() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerLHand
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8521))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8526))
// CS Name: OVRInput::OVRControllerLHand
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerLHand : public GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerLHand() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerLHand", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerLHand(GlobalNamespace__OVRInput__OVRControllerLHand const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerLHand", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerLHand(GlobalNamespace__OVRInput__OVRControllerLHand&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerLHand(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerLHand& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerLHand& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerLHand& operator=(GlobalNamespace__OVRInput__OVRControllerLHand&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerLHand& operator=(GlobalNamespace__OVRInput__OVRControllerLHand const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerLHand() ;

/// @brief Method .ctor addr 0x25bd068 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method ConfigureButtonMap addr 0x25c380c size 0x4c virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x25c3858 size 0x28 virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x25c3880 size 0x20 virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x25c38a0 size 0x28 virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x25c38c8 size 0x20 virtual true final false
 void ConfigureAxis2DMap() ;

/// @brief Method GetBatteryPercentRemaining addr 0x25c38e8 size 0x8 virtual true final false
 uint8_t GetBatteryPercentRemaining() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerRHand
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8521))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8527))
// CS Name: OVRInput::OVRControllerRHand
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerRHand : public GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerRHand() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerRHand", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerRHand(GlobalNamespace__OVRInput__OVRControllerRHand const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerRHand", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerRHand(GlobalNamespace__OVRInput__OVRControllerRHand&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerRHand(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerRHand& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerRHand& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerRHand& operator=(GlobalNamespace__OVRInput__OVRControllerRHand&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerRHand& operator=(GlobalNamespace__OVRInput__OVRControllerRHand const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerRHand() ;

/// @brief Method .ctor addr 0x25bd084 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method ConfigureButtonMap addr 0x25c38f0 size 0x4c virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x25c393c size 0x28 virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x25c3964 size 0x20 virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x25c3984 size 0x28 virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x25c39ac size 0x20 virtual true final false
 void ConfigureAxis2DMap() ;

/// @brief Method GetBatteryPercentRemaining addr 0x25c39cc size 0x8 virtual true final false
 uint8_t GetBatteryPercentRemaining() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerRemote
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8521))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8528))
// CS Name: OVRInput::OVRControllerRemote
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerRemote : public GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerRemote() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerRemote", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerRemote(GlobalNamespace__OVRInput__OVRControllerRemote const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerRemote", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerRemote(GlobalNamespace__OVRInput__OVRControllerRemote&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerRemote(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerRemote& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerRemote& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerRemote& operator=(GlobalNamespace__OVRInput__OVRControllerRemote&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerRemote& operator=(GlobalNamespace__OVRInput__OVRControllerRemote const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerRemote() ;

/// @brief Method .ctor addr 0x25c39d4 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method ConfigureButtonMap addr 0x25c39f0 size 0x5c virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x25c3a4c size 0x28 virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x25c3a74 size 0x20 virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x25c3a94 size 0x28 virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x25c3abc size 0x20 virtual true final false
 void ConfigureAxis2DMap() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerGamepadPC
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8521))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8529))
// CS Name: OVRInput::OVRControllerGamepadPC
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerGamepadPC : public GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerGamepadPC() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerGamepadPC", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerGamepadPC(GlobalNamespace__OVRInput__OVRControllerGamepadPC const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerGamepadPC", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerGamepadPC(GlobalNamespace__OVRInput__OVRControllerGamepadPC&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerGamepadPC(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerGamepadPC& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerGamepadPC& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerGamepadPC& operator=(GlobalNamespace__OVRInput__OVRControllerGamepadPC&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerGamepadPC& operator=(GlobalNamespace__OVRInput__OVRControllerGamepadPC const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerGamepadPC() ;

/// @brief Method .ctor addr 0x25c3adc size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method ConfigureButtonMap addr 0x25c3af8 size 0x70 virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x25c3b68 size 0x28 virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x25c3b90 size 0x20 virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x25c3bb0 size 0x30 virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x25c3be0 size 0x28 virtual true final false
 void ConfigureAxis2DMap() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerGamepadAndroid
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8521))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8530))
// CS Name: OVRInput::OVRControllerGamepadAndroid
class CORDL_TYPE GlobalNamespace__OVRInput__OVRControllerGamepadAndroid : public GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~GlobalNamespace__OVRInput__OVRControllerGamepadAndroid() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerGamepadAndroid", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerGamepadAndroid(GlobalNamespace__OVRInput__OVRControllerGamepadAndroid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRInput__OVRControllerGamepadAndroid", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRInput__OVRControllerGamepadAndroid(GlobalNamespace__OVRInput__OVRControllerGamepadAndroid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRInput__OVRControllerGamepadAndroid(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase(ptr) {
}


  constexpr GlobalNamespace__OVRInput__OVRControllerGamepadAndroid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerGamepadAndroid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRInput__OVRControllerGamepadAndroid& operator=(GlobalNamespace__OVRInput__OVRControllerGamepadAndroid&& o) noexcept = default;
  constexpr GlobalNamespace__OVRInput__OVRControllerGamepadAndroid& operator=(GlobalNamespace__OVRInput__OVRControllerGamepadAndroid const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRInput__OVRControllerGamepadAndroid() ;

/// @brief Method .ctor addr 0x25bcfdc size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method ConfigureButtonMap addr 0x25c3c08 size 0x70 virtual true final false
 void ConfigureButtonMap() ;

/// @brief Method ConfigureTouchMap addr 0x25c3c78 size 0x28 virtual true final false
 void ConfigureTouchMap() ;

/// @brief Method ConfigureNearTouchMap addr 0x25c3ca0 size 0x20 virtual true final false
 void ConfigureNearTouchMap() ;

/// @brief Method ConfigureAxis1DMap addr 0x25c3cc0 size 0x30 virtual true final false
 void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap addr 0x25c3cf0 size 0x28 virtual true final false
 void ConfigureAxis2DMap() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRInput
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8531))
// CS Name: OVRInput
class CORDL_TYPE OVRInput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OVRControllerGamepadAndroid = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid;

using OVRControllerGamepadPC = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC;

using OVRControllerRemote = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote;

using OVRControllerRHand = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand;

using OVRControllerLHand = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand;

using OVRControllerHands = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands;

using OVRControllerRTouch = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch;

using OVRControllerLTouch = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch;

using OVRControllerTouch = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch;

using OVRControllerBase = GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase;

using HapticInfo = GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo;

using OpenVRControllerDetails = GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails;

using OpenVRController = GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController;

using HapticsPcmVibration = GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration;

using HapticsAmplitudeEnvelopeVibration = GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration;

using Hand = GlobalNamespace::GlobalNamespace__OVRInput__Hand;

using InteractionProfile = GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile;

using HapticsLocation = GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation;

using Handedness = GlobalNamespace::GlobalNamespace__OVRInput__Handedness;

using Controller = GlobalNamespace::GlobalNamespace__OVRInput__Controller;

using OpenVRButton = GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton;

using RawAxis2D = GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D;

using Axis2D = GlobalNamespace::GlobalNamespace__OVRInput__Axis2D;

using RawAxis1D = GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D;

using Axis1D = GlobalNamespace::GlobalNamespace__OVRInput__Axis1D;

using RawNearTouch = GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch;

using NearTouch = GlobalNamespace::GlobalNamespace__OVRInput__NearTouch;

using RawTouch = GlobalNamespace::GlobalNamespace__OVRInput__RawTouch;

using Touch = GlobalNamespace::GlobalNamespace__OVRInput__Touch;

using RawButton = GlobalNamespace::GlobalNamespace__OVRInput__RawButton;

using Button = GlobalNamespace::GlobalNamespace__OVRInput__Button;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput", modifiers: " const&", def_value: None }]
constexpr OVRInput(OVRInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput", modifiers: "&&", def_value: None }]
constexpr OVRInput(OVRInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRInput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRInput& operator=(OVRInput&& o) noexcept = default;
  constexpr OVRInput& operator=(OVRInput const& o) noexcept = default;
                


// Fields

static float_t __declspec(property(get=__get_AXIS_AS_BUTTON_THRESHOLD, put=__set_AXIS_AS_BUTTON_THRESHOLD))  AXIS_AS_BUTTON_THRESHOLD;

static void __set_AXIS_AS_BUTTON_THRESHOLD(float_t value) ;

static float_t __get_AXIS_AS_BUTTON_THRESHOLD() ;

static float_t __declspec(property(get=__get_AXIS_DEADZONE_THRESHOLD, put=__set_AXIS_DEADZONE_THRESHOLD))  AXIS_DEADZONE_THRESHOLD;

static void __set_AXIS_DEADZONE_THRESHOLD(float_t value) ;

static float_t __get_AXIS_DEADZONE_THRESHOLD() ;

static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase> __declspec(property(get=__get_controllers, put=__set_controllers))  controllers;

static void __set_controllers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase> value) ;

static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase> __get_controllers() ;

static GlobalNamespace::GlobalNamespace__OVRInput__Controller __declspec(property(get=__get_activeControllerType, put=__set_activeControllerType))  activeControllerType;

static void __set_activeControllerType(GlobalNamespace::GlobalNamespace__OVRInput__Controller value) ;

static GlobalNamespace::GlobalNamespace__OVRInput__Controller __get_activeControllerType() ;

static GlobalNamespace::GlobalNamespace__OVRInput__Controller __declspec(property(get=__get_connectedControllerTypes, put=__set_connectedControllerTypes))  connectedControllerTypes;

static void __set_connectedControllerTypes(GlobalNamespace::GlobalNamespace__OVRInput__Controller value) ;

static GlobalNamespace::GlobalNamespace__OVRInput__Controller __get_connectedControllerTypes() ;

static GlobalNamespace::GlobalNamespace__OVRPlugin__Step __declspec(property(get=__get_stepType, put=__set_stepType))  stepType;

static void __set_stepType(GlobalNamespace::GlobalNamespace__OVRPlugin__Step value) ;

static GlobalNamespace::GlobalNamespace__OVRPlugin__Step __get_stepType() ;

static int32_t __declspec(property(get=__get_fixedUpdateCount, put=__set_fixedUpdateCount))  fixedUpdateCount;

static void __set_fixedUpdateCount(int32_t value) ;

static int32_t __get_fixedUpdateCount() ;

static bool __declspec(property(get=__get__pluginSupportsActiveController, put=__set__pluginSupportsActiveController))  _pluginSupportsActiveController;

static void __set__pluginSupportsActiveController(bool value) ;

static bool __get__pluginSupportsActiveController() ;

static bool __declspec(property(get=__get__pluginSupportsActiveControllerCached, put=__set__pluginSupportsActiveControllerCached))  _pluginSupportsActiveControllerCached;

static void __set__pluginSupportsActiveControllerCached(bool value) ;

static bool __get__pluginSupportsActiveControllerCached() ;

static System::Version __declspec(property(get=__get__pluginSupportsActiveControllerMinVersion, put=__set__pluginSupportsActiveControllerMinVersion))  _pluginSupportsActiveControllerMinVersion;

static void __set__pluginSupportsActiveControllerMinVersion(System::Version value) ;

static System::Version __get__pluginSupportsActiveControllerMinVersion() ;

static int32_t __declspec(property(get=__get_NUM_HAPTIC_CHANNELS, put=__set_NUM_HAPTIC_CHANNELS))  NUM_HAPTIC_CHANNELS;

static void __set_NUM_HAPTIC_CHANNELS(int32_t value) ;

static int32_t __get_NUM_HAPTIC_CHANNELS() ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo> __declspec(property(get=__get_hapticInfos, put=__set_hapticInfos))  hapticInfos;

static void __set_hapticInfos(::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo> value) ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo> __get_hapticInfos() ;

static float_t __declspec(property(get=__get_OPENVR_MAX_HAPTIC_AMPLITUDE, put=__set_OPENVR_MAX_HAPTIC_AMPLITUDE))  OPENVR_MAX_HAPTIC_AMPLITUDE;

static void __set_OPENVR_MAX_HAPTIC_AMPLITUDE(float_t value) ;

static float_t __get_OPENVR_MAX_HAPTIC_AMPLITUDE() ;

static float_t __declspec(property(get=__get_HAPTIC_VIBRATION_DURATION_SECONDS, put=__set_HAPTIC_VIBRATION_DURATION_SECONDS))  HAPTIC_VIBRATION_DURATION_SECONDS;

static void __set_HAPTIC_VIBRATION_DURATION_SECONDS(float_t value) ;

static float_t __get_HAPTIC_VIBRATION_DURATION_SECONDS() ;

static ::StringW __declspec(property(get=__get_OPENVR_TOUCH_NAME, put=__set_OPENVR_TOUCH_NAME))  OPENVR_TOUCH_NAME;

static void __set_OPENVR_TOUCH_NAME(::StringW value) ;

static ::StringW __get_OPENVR_TOUCH_NAME() ;

static ::StringW __declspec(property(get=__get_OPENVR_VIVE_CONTROLLER_NAME, put=__set_OPENVR_VIVE_CONTROLLER_NAME))  OPENVR_VIVE_CONTROLLER_NAME;

static void __set_OPENVR_VIVE_CONTROLLER_NAME(::StringW value) ;

static ::StringW __get_OPENVR_VIVE_CONTROLLER_NAME() ;

static ::StringW __declspec(property(get=__get_OPENVR_WINDOWSMR_CONTROLLER_NAME, put=__set_OPENVR_WINDOWSMR_CONTROLLER_NAME))  OPENVR_WINDOWSMR_CONTROLLER_NAME;

static void __set_OPENVR_WINDOWSMR_CONTROLLER_NAME(::StringW value) ;

static ::StringW __get_OPENVR_WINDOWSMR_CONTROLLER_NAME() ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails> __declspec(property(get=__get_openVRControllerDetails, put=__set_openVRControllerDetails))  openVRControllerDetails;

static void __set_openVRControllerDetails(::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails> value) ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails> __get_openVRControllerDetails() ;


// Properties

static bool __declspec(property(get=get_pluginSupportsActiveController))  pluginSupportsActiveController;


// Methods

/// @brief Method get_pluginSupportsActiveController addr 0x25bc9dc size 0x9c virtual false final false
static bool get_pluginSupportsActiveController() ;

/// @brief Method Update addr 0x25bd1e0 size 0x420 virtual false final false
static void Update() ;

/// @brief Method FixedUpdate addr 0x25bdc4c size 0x10c virtual false final false
static void FixedUpdate() ;

/// @brief Method GetCurrentInteractionProfile addr 0x25bdd58 size 0x58 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile GetCurrentInteractionProfile(GlobalNamespace::GlobalNamespace__OVRInput__Hand hand) ;

/// @brief Method GetControllerOrientationTracked addr 0x25bddb0 size 0xac virtual false final false
static bool GetControllerOrientationTracked(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetControllerOrientationValid addr 0x25bde5c size 0xac virtual false final false
static bool GetControllerOrientationValid(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetControllerPositionTracked addr 0x25bdf08 size 0xac virtual false final false
static bool GetControllerPositionTracked(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetControllerPositionValid addr 0x25bdfb4 size 0xac virtual false final false
static bool GetControllerPositionValid(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetLocalControllerPosition addr 0x25be060 size 0x350 virtual false final false
static UnityEngine::Vector3 GetLocalControllerPosition(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetLocalControllerVelocity addr 0x25be3b0 size 0x1b8 virtual false final false
static UnityEngine::Vector3 GetLocalControllerVelocity(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetLocalControllerAcceleration addr 0x25be568 size 0x1b4 virtual false final false
static UnityEngine::Vector3 GetLocalControllerAcceleration(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetLocalControllerRotation addr 0x25be71c size 0x338 virtual false final false
static UnityEngine::Quaternion GetLocalControllerRotation(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetLocalControllerAngularVelocity addr 0x25bea54 size 0x1b8 virtual false final false
static UnityEngine::Vector3 GetLocalControllerAngularVelocity(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetLocalControllerAngularAcceleration addr 0x25bec0c size 0x1b8 virtual false final false
static UnityEngine::Vector3 GetLocalControllerAngularAcceleration(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType) ;

/// @brief Method GetLocalControllerStatesWithoutPrediction addr 0x25bedc4 size 0x368 virtual false final false
static bool GetLocalControllerStatesWithoutPrediction(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType, ByRef<UnityEngine::Vector3> position, ByRef<UnityEngine::Quaternion> rotation, ByRef<UnityEngine::Vector3> velocity, ByRef<UnityEngine::Vector3> angularVelocity) ;

/// @brief Method GetDominantHand addr 0x25bf12c size 0x50 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRInput__Handedness GetDominantHand() ;

/// @brief Method Get addr 0x25bf17c size 0x68 virtual false final false
static bool Get(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method Get addr 0x25bdb7c size 0x68 virtual false final false
static bool Get(GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedButton addr 0x25bf1e4 size 0x148 virtual false final false
static bool GetResolvedButton(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetDown addr 0x25bf390 size 0x68 virtual false final false
static bool GetDown(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetDown addr 0x25bf558 size 0x68 virtual false final false
static bool GetDown(GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedButtonDown addr 0x25bf3f8 size 0x160 virtual false final false
static bool GetResolvedButtonDown(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetUp addr 0x25bf5c0 size 0x68 virtual false final false
static bool GetUp(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetUp addr 0x25bf788 size 0x68 virtual false final false
static bool GetUp(GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedButtonUp addr 0x25bf628 size 0x160 virtual false final false
static bool GetResolvedButtonUp(GlobalNamespace::GlobalNamespace__OVRInput__Button virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawButton rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method Get addr 0x25bf7f0 size 0x68 virtual false final false
static bool Get(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method Get addr 0x25bdbe4 size 0x68 virtual false final false
static bool Get(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedTouch addr 0x25bf858 size 0x148 virtual false final false
static bool GetResolvedTouch(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetDown addr 0x25bf9b8 size 0x68 virtual false final false
static bool GetDown(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetDown addr 0x25bfb80 size 0x68 virtual false final false
static bool GetDown(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedTouchDown addr 0x25bfa20 size 0x160 virtual false final false
static bool GetResolvedTouchDown(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetUp addr 0x25bfbe8 size 0x68 virtual false final false
static bool GetUp(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetUp addr 0x25bfdb0 size 0x68 virtual false final false
static bool GetUp(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedTouchUp addr 0x25bfc50 size 0x160 virtual false final false
static bool GetResolvedTouchUp(GlobalNamespace::GlobalNamespace__OVRInput__Touch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method Get addr 0x25bfe18 size 0x68 virtual false final false
static bool Get(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method Get addr 0x25bffc8 size 0x68 virtual false final false
static bool Get(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedNearTouch addr 0x25bfe80 size 0x148 virtual false final false
static bool GetResolvedNearTouch(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetDown addr 0x25c0048 size 0x68 virtual false final false
static bool GetDown(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetDown addr 0x25c0210 size 0x68 virtual false final false
static bool GetDown(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedNearTouchDown addr 0x25c00b0 size 0x160 virtual false final false
static bool GetResolvedNearTouchDown(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetUp addr 0x25c0278 size 0x68 virtual false final false
static bool GetUp(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetUp addr 0x25c0440 size 0x68 virtual false final false
static bool GetUp(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedNearTouchUp addr 0x25c02e0 size 0x160 virtual false final false
static bool GetResolvedNearTouchUp(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method Get addr 0x25c04a8 size 0x68 virtual false final false
static float_t Get(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method Get addr 0x25c0b14 size 0x68 virtual false final false
static float_t Get(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedAxis1D addr 0x25c0510 size 0x604 virtual false final false
static float_t GetResolvedAxis1D(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method Get addr 0x25c0c08 size 0x68 virtual false final false
static UnityEngine::Vector2 Get(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method Get addr 0x25c0fc0 size 0x68 virtual false final false
static UnityEngine::Vector2 Get(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetResolvedAxis2D addr 0x25c0c70 size 0x350 virtual false final false
static UnityEngine::Vector2 GetResolvedAxis2D(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D virtualMask, GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D rawMask, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetConnectedControllers addr 0x25c11a0 size 0x58 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRInput__Controller GetConnectedControllers() ;

/// @brief Method IsControllerConnected addr 0x25c11f8 size 0x64 virtual false final false
static bool IsControllerConnected(GlobalNamespace::GlobalNamespace__OVRInput__Controller controller) ;

/// @brief Method GetActiveController addr 0x25c125c size 0x58 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRInput__Controller GetActiveController() ;

/// @brief Method StartVibration addr 0x25c12b4 size 0x104 virtual false final false
static void StartVibration(float_t amplitude, float_t duration, UnityEngine::XR::XRNode controllerNode) ;

/// @brief Method SetOpenVRLocalPose addr 0x25c13b8 size 0x110 virtual false final false
static void SetOpenVRLocalPose(UnityEngine::Vector3 leftPos, UnityEngine::Vector3 rightPos, UnityEngine::Quaternion leftRot, UnityEngine::Quaternion rightRot) ;

/// @brief Method GetOpenVRStringProperty addr 0x25c14c8 size 0x150 virtual false final false
static ::StringW GetOpenVRStringProperty(OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t deviceId) ;

/// @brief Method UpdateXRControllerNodeIds addr 0x25bd600 size 0x398 virtual false final false
static void UpdateXRControllerNodeIds() ;

/// @brief Method UpdateXRControllerHaptics addr 0x25bd998 size 0x1e4 virtual false final false
static void UpdateXRControllerHaptics() ;

/// @brief Method InitHapticInfo addr 0x25bd0a0 size 0x140 virtual false final false
static void InitHapticInfo() ;

/// @brief Method PlayHapticImpulse addr 0x25c1618 size 0x11c virtual false final false
static void PlayHapticImpulse(float_t amplitude, UnityEngine::XR::XRNode deviceNode) ;

/// @brief Method IsValidOpenVRDevice addr 0x25c173c size 0xc virtual false final false
static bool IsValidOpenVRDevice(uint32_t deviceId) ;

/// @brief Method SetControllerVibration addr 0x25c1748 size 0x1dc virtual false final false
static void SetControllerVibration(float_t frequency, float_t amplitude, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method SetControllerLocalizedVibration addr 0x25c1924 size 0x1dc virtual false final false
static void SetControllerLocalizedVibration(GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method SetControllerHapticsAmplitudeEnvelope addr 0x25c1b00 size 0x150 virtual false final false
static void SetControllerHapticsAmplitudeEnvelope(GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method SetControllerHapticsPcm addr 0x25c1c50 size 0x15c virtual false final false
static int32_t SetControllerHapticsPcm(GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration hapticsVibration, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetControllerSampleRateHz addr 0x25c1dac size 0x128 virtual false final false
static float_t GetControllerSampleRateHz(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method GetControllerBatteryPercentRemaining addr 0x25c1ed4 size 0x128 virtual false final false
static uint8_t GetControllerBatteryPercentRemaining(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

/// @brief Method CalculateAbsMax addr 0x25c1178 size 0x28 virtual false final false
static UnityEngine::Vector2 CalculateAbsMax(UnityEngine::Vector2 a, UnityEngine::Vector2 b) ;

/// @brief Method CalculateAbsMax addr 0x25c0be4 size 0x24 virtual false final false
static float_t CalculateAbsMax(float_t a, float_t b) ;

/// @brief Method CalculateDeadzone addr 0x25c1040 size 0x138 virtual false final false
static UnityEngine::Vector2 CalculateDeadzone(UnityEngine::Vector2 a, float_t deadzone) ;

/// @brief Method CalculateDeadzone addr 0x25c0b94 size 0x50 virtual false final false
static float_t CalculateDeadzone(float_t a, float_t deadzone) ;

/// @brief Method ShouldResolveController addr 0x25bf32c size 0x4c virtual false final false
static bool ShouldResolveController(GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerType, GlobalNamespace::GlobalNamespace__OVRInput__Controller controllerMask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__Axis1D, "", "OVRInput/Axis1D");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__Axis2D, "", "OVRInput/Axis2D");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__Button, "", "OVRInput/Button");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__Controller, "", "OVRInput/Controller");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__Hand, "", "OVRInput/Hand");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__Handedness, "", "OVRInput/Handedness");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__HapticsLocation, "", "OVRInput/HapticsLocation");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__InteractionProfile, "", "OVRInput/InteractionProfile");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__NearTouch, "", "OVRInput/NearTouch");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OpenVRButton, "", "OVRInput/OpenVRButton");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OpenVRController, "", "OVRInput/OpenVRController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis1D, "", "OVRInput/RawAxis1D");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__RawAxis2D, "", "OVRInput/RawAxis2D");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__RawButton, "", "OVRInput/RawButton");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__RawNearTouch, "", "OVRInput/RawNearTouch");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__RawTouch, "", "OVRInput/RawTouch");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__Touch, "", "OVRInput/Touch");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__HapticInfo, "", "OVRInput/HapticInfo");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase, "", "OVRInput/OVRControllerBase");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis1DMap, "", "OVRInput/OVRControllerBase/VirtualAxis1DMap");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualAxis2DMap, "", "OVRInput/OVRControllerBase/VirtualAxis2DMap");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualButtonMap, "", "OVRInput/OVRControllerBase/VirtualButtonMap");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualNearTouchMap, "", "OVRInput/OVRControllerBase/VirtualNearTouchMap");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerBase__VirtualTouchMap, "", "OVRInput/OVRControllerBase/VirtualTouchMap");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadAndroid, "", "OVRInput/OVRControllerGamepadAndroid");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerGamepadPC, "", "OVRInput/OVRControllerGamepadPC");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerHands, "", "OVRInput/OVRControllerHands");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLHand, "", "OVRInput/OVRControllerLHand");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerLTouch, "", "OVRInput/OVRControllerLTouch");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRHand, "", "OVRInput/OVRControllerRHand");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRTouch, "", "OVRInput/OVRControllerRTouch");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerRemote, "", "OVRInput/OVRControllerRemote");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OVRControllerTouch, "", "OVRInput/OVRControllerTouch");
NEED_NO_BOX(GlobalNamespace::OVRInput);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput, "", "OVRInput");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__HapticsAmplitudeEnvelopeVibration, "", "OVRInput/HapticsAmplitudeEnvelopeVibration");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__HapticsPcmVibration, "", "OVRInput/HapticsPcmVibration");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRInput__OpenVRControllerDetails, "", "OVRInput/OpenVRControllerDetails");

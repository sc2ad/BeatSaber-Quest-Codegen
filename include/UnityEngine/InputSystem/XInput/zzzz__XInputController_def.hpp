#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XInput {
struct UnityEngine__InputSystem__XInput__XInputController__DeviceFlags;
}
namespace UnityEngine::InputSystem::XInput {
struct UnityEngine__InputSystem__XInput__XInputController__DeviceSubType;
}
namespace UnityEngine::InputSystem::XInput {
struct UnityEngine__InputSystem__XInput__XInputController__DeviceType;
}
namespace UnityEngine::InputSystem::XInput {
class XInputController;
}
namespace UnityEngine::InputSystem::XInput {
struct UnityEngine__InputSystem__XInput__XInputController__Capabilities;
}
// Type: ::DeviceType
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6434))
// CS Name: UnityEngine.InputSystem.XInput.XInputController::DeviceType
struct CORDL_TYPE UnityEngine__InputSystem__XInput__XInputController__DeviceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceType(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceType(UnityEngine__InputSystem__XInput__XInputController__DeviceType const&) = default;
                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceType(UnityEngine__InputSystem__XInput__XInputController__DeviceType&&) = default;
                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceType& operator=(UnityEngine__InputSystem__XInput__XInputController__DeviceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceType& operator=(UnityEngine__InputSystem__XInput__XInputController__DeviceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__XInput__XInputController__DeviceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__XInput__XInputController__DeviceType_Unwrapped : int32_t {
__Gamepad = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__XInput__XInputController__DeviceType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__XInput__XInputController__DeviceType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Gamepad offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceType const Gamepad;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XInput
// Type: ::DeviceSubType
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6435))
// CS Name: UnityEngine.InputSystem.XInput.XInputController::DeviceSubType
struct CORDL_TYPE UnityEngine__InputSystem__XInput__XInputController__DeviceSubType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceSubType(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceSubType(UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const&) = default;
                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceSubType(UnityEngine__InputSystem__XInput__XInputController__DeviceSubType&&) = default;
                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceSubType& operator=(UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceSubType& operator=(UnityEngine__InputSystem__XInput__XInputController__DeviceSubType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__XInput__XInputController__DeviceSubType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__XInput__XInputController__DeviceSubType_Unwrapped : int32_t {
__Unknown = 0,
__Gamepad = 1,
__Wheel = 2,
__ArcadeStick = 3,
__FlightStick = 4,
__DancePad = 5,
__Guitar = 6,
__GuitarAlternate = 7,
__DrumKit = 8,
__GuitarBass = 11,
__ArcadePad = 19,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__XInput__XInputController__DeviceSubType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__XInput__XInputController__DeviceSubType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const Unknown;

/// @brief Field Gamepad offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const Gamepad;

/// @brief Field Wheel offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const Wheel;

/// @brief Field ArcadeStick offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const ArcadeStick;

/// @brief Field FlightStick offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const FlightStick;

/// @brief Field DancePad offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const DancePad;

/// @brief Field Guitar offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const Guitar;

/// @brief Field GuitarAlternate offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const GuitarAlternate;

/// @brief Field DrumKit offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const DrumKit;

/// @brief Field GuitarBass offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const GuitarBass;

/// @brief Field ArcadePad offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType const ArcadePad;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XInput
// Type: ::DeviceFlags
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6436))
// CS Name: UnityEngine.InputSystem.XInput.XInputController::DeviceFlags
struct CORDL_TYPE UnityEngine__InputSystem__XInput__XInputController__DeviceFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceFlags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceFlags(UnityEngine__InputSystem__XInput__XInputController__DeviceFlags const&) = default;
                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceFlags(UnityEngine__InputSystem__XInput__XInputController__DeviceFlags&&) = default;
                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceFlags& operator=(UnityEngine__InputSystem__XInput__XInputController__DeviceFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__XInput__XInputController__DeviceFlags& operator=(UnityEngine__InputSystem__XInput__XInputController__DeviceFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__XInput__XInputController__DeviceFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__XInput__XInputController__DeviceFlags_Unwrapped : int32_t {
__ForceFeedbackSupported = 1,
__Wireless = 2,
__VoiceSupported = 4,
__PluginModulesSupported = 8,
__NoNavigation = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__XInput__XInputController__DeviceFlags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__XInput__XInputController__DeviceFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ForceFeedbackSupported offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags const ForceFeedbackSupported;

/// @brief Field Wireless offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags const Wireless;

/// @brief Field VoiceSupported offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags const VoiceSupported;

/// @brief Field PluginModulesSupported offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags const PluginModulesSupported;

/// @brief Field NoNavigation offset 0
static UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags const NoNavigation;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XInput
// Type: ::Capabilities
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6437))
// CS Name: UnityEngine.InputSystem.XInput.XInputController::Capabilities
struct CORDL_TYPE UnityEngine__InputSystem__XInput__XInputController__Capabilities : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceType", modifiers: "", def_value: None }, CppParam { name: "subType", ty: "UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__XInput__XInputController__Capabilities(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceType type, UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType subType, UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags flags) noexcept;


                    constexpr UnityEngine__InputSystem__XInput__XInputController__Capabilities(UnityEngine__InputSystem__XInput__XInputController__Capabilities const&) = default;
                    constexpr UnityEngine__InputSystem__XInput__XInputController__Capabilities(UnityEngine__InputSystem__XInput__XInputController__Capabilities&&) = default;
                    constexpr UnityEngine__InputSystem__XInput__XInputController__Capabilities& operator=(UnityEngine__InputSystem__XInput__XInputController__Capabilities const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__XInput__XInputController__Capabilities& operator=(UnityEngine__InputSystem__XInput__XInputController__Capabilities&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__XInput__XInputController__Capabilities(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceType value) ;

constexpr UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceType __get_type() const;

 UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType __declspec(property(get=__get_subType, put=__set_subType))  subType;

constexpr void __set_subType(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType value) ;

constexpr UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType __get_subType() const;

 UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags value) ;

constexpr UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags __get_flags() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XInput
// Type: UnityEngine.InputSystem.XInput::XInputController
namespace UnityEngine::InputSystem::XInput {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6320))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6438))
// CS Name: UnityEngine.InputSystem.XInput.XInputController
class CORDL_TYPE XInputController : public UnityEngine::InputSystem::Gamepad {
public:
// Declarations
using Capabilities = UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__Capabilities;

using DeviceFlags = UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags;

using DeviceSubType = UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType;

using DeviceType = UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1f8};

virtual ~XInputController() = default;

// Ctor Parameters [CppParam { name: "", ty: "XInputController", modifiers: " const&", def_value: None }]
constexpr XInputController(XInputController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XInputController", modifiers: "&&", def_value: None }]
constexpr XInputController(XInputController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XInputController(void* ptr) noexcept : UnityEngine::InputSystem::Gamepad(ptr) {
}


  constexpr XInputController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XInputController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XInputController& operator=(XInputController&& o) noexcept = default;
  constexpr XInputController& operator=(XInputController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__menu_k__BackingField, put=__set__menu_k__BackingField))  _menu_k__BackingField;

constexpr void __set__menu_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__menu_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__view_k__BackingField, put=__set__view_k__BackingField))  _view_k__BackingField;

constexpr void __set__view_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__view_k__BackingField() const;

 bool __declspec(property(get=__get_m_HaveParsedCapabilities, put=__set_m_HaveParsedCapabilities))  m_HaveParsedCapabilities;

constexpr void __set_m_HaveParsedCapabilities(bool value) ;

constexpr bool __get_m_HaveParsedCapabilities() const;

 UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType __declspec(property(get=__get_m_SubType, put=__set_m_SubType))  m_SubType;

constexpr void __set_m_SubType(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType value) ;

constexpr UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType __get_m_SubType() const;

 UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags value) ;

constexpr UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags __get_m_Flags() const;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_menu, put=set_menu))  menu;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_view, put=set_view))  view;

 UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType __declspec(property(get=get_subType))  subType;

 UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags __declspec(property(get=get_flags))  flags;


// Methods

/// @brief Method get_menu addr 0x2937090 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_menu() ;

/// @brief Method set_menu addr 0x2937098 size 0x8 virtual false final false
 void set_menu(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_view addr 0x29370a0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_view() ;

/// @brief Method set_view addr 0x29370a8 size 0x8 virtual false final false
 void set_view(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_subType addr 0x29370b0 size 0x24 virtual false final false
 UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType get_subType() ;

/// @brief Method get_flags addr 0x2937144 size 0x24 virtual false final false
 UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags get_flags() ;

/// @brief Method FinishSetup addr 0x2937168 size 0x20 virtual true final false
 void FinishSetup() ;

/// @brief Method ParseCapabilities addr 0x29370d4 size 0x70 virtual false final false
 void ParseCapabilities() ;

// Ctor Parameters []
explicit XInputController() ;

/// @brief Method .ctor addr 0x2937188 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XInput
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceFlags, "UnityEngine.InputSystem.XInput", "XInputController/DeviceFlags");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceSubType, "UnityEngine.InputSystem.XInput", "XInputController/DeviceSubType");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__DeviceType, "UnityEngine.InputSystem.XInput", "XInputController/DeviceType");
NEED_NO_BOX(UnityEngine::InputSystem::XInput::XInputController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XInput::XInputController, "UnityEngine.InputSystem.XInput", "XInputController");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XInput::UnityEngine__InputSystem__XInput__XInputController__Capabilities, "UnityEngine.InputSystem.XInput", "XInputController/Capabilities");

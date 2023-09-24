#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct SendHapticImpulseCommand;
}
// Type: UnityEngine.InputSystem.XR.Haptics::SendHapticImpulseCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6432))
// CS Name: UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand
struct CORDL_TYPE SendHapticImpulseCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "amplitude", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }]
constexpr SendHapticImpulseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel, float_t amplitude, float_t duration) noexcept;


                    constexpr SendHapticImpulseCommand(SendHapticImpulseCommand const&) = default;
                    constexpr SendHapticImpulseCommand(SendHapticImpulseCommand&&) = default;
                    constexpr SendHapticImpulseCommand& operator=(SendHapticImpulseCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SendHapticImpulseCommand& operator=(SendHapticImpulseCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SendHapticImpulseCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{20};

 UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 int32_t __declspec(property(get=__get_channel, put=__set_channel))  channel;

constexpr void __set_channel(int32_t value) ;

constexpr int32_t __get_channel() const;

 float_t __declspec(property(get=__get_amplitude, put=__set_amplitude))  amplitude;

constexpr void __set_amplitude(float_t value) ;

constexpr float_t __get_amplitude() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2937030 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2937060 size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2933374 size 0x7c virtual false final false
static UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand Create(int32_t motorChannel, float_t motorAmplitude, float_t motorDuration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand, "UnityEngine.InputSystem.XR.Haptics", "SendHapticImpulseCommand");

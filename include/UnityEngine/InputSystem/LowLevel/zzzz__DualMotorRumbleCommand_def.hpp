#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DualMotorRumbleCommand;
}
// Type: UnityEngine.InputSystem.LowLevel::DualMotorRumbleCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6577))
// CS Name: UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand
struct CORDL_TYPE DualMotorRumbleCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "lowFrequencyMotorSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "highFrequencyMotorSpeed", ty: "float_t", modifiers: "", def_value: None }]
constexpr DualMotorRumbleCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, float_t lowFrequencyMotorSpeed, float_t highFrequencyMotorSpeed) noexcept;


                    constexpr DualMotorRumbleCommand(DualMotorRumbleCommand const&) = default;
                    constexpr DualMotorRumbleCommand(DualMotorRumbleCommand&&) = default;
                    constexpr DualMotorRumbleCommand& operator=(DualMotorRumbleCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DualMotorRumbleCommand& operator=(DualMotorRumbleCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DualMotorRumbleCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{16};

 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 float_t __declspec(property(get=__get_lowFrequencyMotorSpeed, put=__set_lowFrequencyMotorSpeed))  lowFrequencyMotorSpeed;

constexpr void __set_lowFrequencyMotorSpeed(float_t value) ;

constexpr float_t __get_lowFrequencyMotorSpeed() const;

 float_t __declspec(property(get=__get_highFrequencyMotorSpeed, put=__set_highFrequencyMotorSpeed))  highFrequencyMotorSpeed;

constexpr void __set_highFrequencyMotorSpeed(float_t value) ;

constexpr float_t __get_highFrequencyMotorSpeed() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2955e80 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2955eb0 size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2954818 size 0x50 virtual false final false
static ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand Create(float_t lowFrequency, float_t highFrequency) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand, "UnityEngine.InputSystem.LowLevel", "DualMotorRumbleCommand");

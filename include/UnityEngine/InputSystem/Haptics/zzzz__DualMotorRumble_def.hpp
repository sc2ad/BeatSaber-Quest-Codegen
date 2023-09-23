#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Haptics {
struct DualMotorRumble;
}
// Type: UnityEngine.InputSystem.Haptics::DualMotorRumble
namespace UnityEngine::InputSystem::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6543))
// CS Name: UnityEngine.InputSystem.Haptics.DualMotorRumble
struct CORDL_TYPE DualMotorRumble : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_lowFrequencyMotorSpeed_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_highFrequencyMotorSpeed_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr DualMotorRumble(float_t _lowFrequencyMotorSpeed_k__BackingField, float_t _highFrequencyMotorSpeed_k__BackingField) noexcept;


                    constexpr DualMotorRumble(DualMotorRumble const&) = default;
                    constexpr DualMotorRumble(DualMotorRumble&&) = default;
                    constexpr DualMotorRumble& operator=(DualMotorRumble const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DualMotorRumble& operator=(DualMotorRumble&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DualMotorRumble(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get__lowFrequencyMotorSpeed_k__BackingField, put=__set__lowFrequencyMotorSpeed_k__BackingField))  _lowFrequencyMotorSpeed_k__BackingField;

constexpr void __set__lowFrequencyMotorSpeed_k__BackingField(float_t value) ;

constexpr float_t __get__lowFrequencyMotorSpeed_k__BackingField() const;

 float_t __declspec(property(get=__get__highFrequencyMotorSpeed_k__BackingField, put=__set__highFrequencyMotorSpeed_k__BackingField))  _highFrequencyMotorSpeed_k__BackingField;

constexpr void __set__highFrequencyMotorSpeed_k__BackingField(float_t value) ;

constexpr float_t __get__highFrequencyMotorSpeed_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_lowFrequencyMotorSpeed, put=set_lowFrequencyMotorSpeed))  lowFrequencyMotorSpeed;

 float_t __declspec(property(get=get_highFrequencyMotorSpeed, put=set_highFrequencyMotorSpeed))  highFrequencyMotorSpeed;

 bool __declspec(property(get=get_isRumbling))  isRumbling;


// Methods

/// @brief Method get_lowFrequencyMotorSpeed addr 0x2954630 size 0x8 virtual false final false
 float_t get_lowFrequencyMotorSpeed() ;

/// @brief Method set_lowFrequencyMotorSpeed addr 0x2954638 size 0x8 virtual false final false
 void set_lowFrequencyMotorSpeed(float_t value) ;

/// @brief Method get_highFrequencyMotorSpeed addr 0x2954640 size 0x8 virtual false final false
 float_t get_highFrequencyMotorSpeed() ;

/// @brief Method set_highFrequencyMotorSpeed addr 0x2954648 size 0x8 virtual false final false
 void set_highFrequencyMotorSpeed(float_t value) ;

/// @brief Method get_isRumbling addr 0x2954650 size 0xb8 virtual false final false
 bool get_isRumbling() ;

/// @brief Method PauseHaptics addr 0x2954708 size 0x110 virtual false final false
 void PauseHaptics(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method ResumeHaptics addr 0x2954868 size 0x8c virtual false final false
 void ResumeHaptics(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method ResetHaptics addr 0x2954a38 size 0x90 virtual false final false
 void ResetHaptics(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method SetMotorSpeeds addr 0x29548f4 size 0x144 virtual false final false
 void SetMotorSpeeds(UnityEngine::InputSystem::InputDevice device, float_t lowFrequency, float_t highFrequency) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Haptics
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Haptics::DualMotorRumble, "UnityEngine.InputSystem.Haptics", "DualMotorRumble");

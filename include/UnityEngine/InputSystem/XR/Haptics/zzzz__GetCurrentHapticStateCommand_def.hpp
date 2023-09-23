#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticState;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct GetCurrentHapticStateCommand;
}
// Type: UnityEngine.InputSystem.XR.Haptics::GetCurrentHapticStateCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6427))
// CS Name: UnityEngine.InputSystem.XR.Haptics.GetCurrentHapticStateCommand
struct CORDL_TYPE GetCurrentHapticStateCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "samplesQueued", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "samplesAvailable", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GetCurrentHapticStateCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t samplesQueued, uint32_t samplesAvailable) noexcept;


                    constexpr GetCurrentHapticStateCommand(GetCurrentHapticStateCommand const&) = default;
                    constexpr GetCurrentHapticStateCommand(GetCurrentHapticStateCommand&&) = default;
                    constexpr GetCurrentHapticStateCommand& operator=(GetCurrentHapticStateCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GetCurrentHapticStateCommand& operator=(GetCurrentHapticStateCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GetCurrentHapticStateCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{16};

 UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 uint32_t __declspec(property(get=__get_samplesQueued, put=__set_samplesQueued))  samplesQueued;

constexpr void __set_samplesQueued(uint32_t value) ;

constexpr uint32_t __get_samplesQueued() const;

 uint32_t __declspec(property(get=__get_samplesAvailable, put=__set_samplesAvailable))  samplesAvailable;

constexpr void __set_samplesAvailable(uint32_t value) ;

constexpr uint32_t __get_samplesAvailable() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;

 UnityEngine::InputSystem::XR::Haptics::HapticState __declspec(property(get=get_currentState))  currentState;


// Methods

/// @brief Method get_Type addr 0x2936e7c size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2936eac size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method get_currentState addr 0x2936edc size 0x8 virtual false final false
 UnityEngine::InputSystem::XR::Haptics::HapticState get_currentState() ;

/// @brief Method Create addr 0x2936ee4 size 0x50 virtual false final false
static UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand, "UnityEngine.InputSystem.XR.Haptics", "GetCurrentHapticStateCommand");

#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticCapabilities;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct GetHapticCapabilitiesCommand;
}
// Type: UnityEngine.InputSystem.XR.Haptics::GetHapticCapabilitiesCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6429))
// CS Name: UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand
struct CORDL_TYPE GetHapticCapabilitiesCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "numChannels", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "frequencyHz", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxBufferSize", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GetHapticCapabilitiesCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t numChannels, uint32_t frequencyHz, uint32_t maxBufferSize) noexcept;


                    constexpr GetHapticCapabilitiesCommand(GetHapticCapabilitiesCommand const&) = default;
                    constexpr GetHapticCapabilitiesCommand(GetHapticCapabilitiesCommand&&) = default;
                    constexpr GetHapticCapabilitiesCommand& operator=(GetHapticCapabilitiesCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GetHapticCapabilitiesCommand& operator=(GetHapticCapabilitiesCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GetHapticCapabilitiesCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{20};

 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 uint32_t __declspec(property(get=__get_numChannels, put=__set_numChannels))  numChannels;

constexpr void __set_numChannels(uint32_t value) ;

constexpr uint32_t __get_numChannels() const;

 uint32_t __declspec(property(get=__get_frequencyHz, put=__set_frequencyHz))  frequencyHz;

constexpr void __set_frequencyHz(uint32_t value) ;

constexpr uint32_t __get_frequencyHz() const;

 uint32_t __declspec(property(get=__get_maxBufferSize, put=__set_maxBufferSize))  maxBufferSize;

constexpr void __set_maxBufferSize(uint32_t value) ;

constexpr uint32_t __get_maxBufferSize() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;

 ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities __declspec(property(get=get_capabilities))  capabilities;


// Methods

/// @brief Method get_Type addr 0x2936f70 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2936fa0 size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method get_capabilities addr 0x2936c3c size 0xc virtual false final false
 ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities get_capabilities() ;

/// @brief Method Create addr 0x2936be0 size 0x5c virtual false final false
static ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR::Haptics
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand, "UnityEngine.InputSystem.XR.Haptics", "GetHapticCapabilitiesCommand");

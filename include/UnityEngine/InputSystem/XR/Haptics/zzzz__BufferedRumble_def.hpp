#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticCapabilities;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct BufferedRumble;
}
// Type: UnityEngine.InputSystem.XR.Haptics::BufferedRumble
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6425))
// CS Name: UnityEngine.InputSystem.XR.Haptics.BufferedRumble
struct CORDL_TYPE BufferedRumble : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_capabilities_k__BackingField", ty: "UnityEngine::InputSystem::XR::Haptics::HapticCapabilities", modifiers: "", def_value: None }, CppParam { name: "_device_k__BackingField", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }]
constexpr BufferedRumble(UnityEngine::InputSystem::XR::Haptics::HapticCapabilities _capabilities_k__BackingField, UnityEngine::InputSystem::InputDevice _device_k__BackingField) noexcept;


                    constexpr BufferedRumble(BufferedRumble const&) = default;
                    constexpr BufferedRumble(BufferedRumble&&) = default;
                    constexpr BufferedRumble& operator=(BufferedRumble const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BufferedRumble& operator=(BufferedRumble&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BufferedRumble(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::XR::Haptics::HapticCapabilities __declspec(property(get=__get__capabilities_k__BackingField, put=__set__capabilities_k__BackingField))  _capabilities_k__BackingField;

constexpr void __set__capabilities_k__BackingField(UnityEngine::InputSystem::XR::Haptics::HapticCapabilities value) ;

constexpr UnityEngine::InputSystem::XR::Haptics::HapticCapabilities __get__capabilities_k__BackingField() const;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get__device_k__BackingField, put=__set__device_k__BackingField))  _device_k__BackingField;

constexpr void __set__device_k__BackingField(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get__device_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::XR::Haptics::HapticCapabilities __declspec(property(get=get_capabilities, put=set_capabilities))  capabilities;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=get_device, put=set_device))  device;


// Methods

/// @brief Method get_capabilities addr 0x2936abc size 0x10 virtual false final false
 UnityEngine::InputSystem::XR::Haptics::HapticCapabilities get_capabilities() ;

/// @brief Method set_capabilities addr 0x2936acc size 0xc virtual false final false
 void set_capabilities(UnityEngine::InputSystem::XR::Haptics::HapticCapabilities value) ;

/// @brief Method get_device addr 0x2936ad8 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputDevice get_device() ;

/// @brief Method set_device addr 0x2936ae0 size 0x8 virtual false final false
 void set_device(UnityEngine::InputSystem::InputDevice value) ;

/// @brief Method .ctor addr 0x2936ae8 size 0xf8 virtual false final false
 void _ctor(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method EnqueueRumble addr 0x2936c48 size 0xa8 virtual false final false
 void EnqueueRumble(::ArrayW<uint8_t> samples) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::Haptics::BufferedRumble, "UnityEngine.InputSystem.XR.Haptics", "BufferedRumble");

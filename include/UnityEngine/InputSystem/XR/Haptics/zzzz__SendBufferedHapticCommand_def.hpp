#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct SendBufferedHapticCommand;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer;
}
// Type: ::<buffer>e__FixedBuffer
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6430))
// CS Name: UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand::<buffer>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer(UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer(UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer& operator=(UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer& operator=(UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x400};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR::Haptics
// Type: UnityEngine.InputSystem.XR.Haptics::SendBufferedHapticCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6431))
// CS Name: UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand
struct CORDL_TYPE SendBufferedHapticCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _buffer_e__FixedBuffer = UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr SendBufferedHapticCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel, int32_t bufferSize, UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer buffer) noexcept;


                    constexpr SendBufferedHapticCommand(SendBufferedHapticCommand const&) = default;
                    constexpr SendBufferedHapticCommand(SendBufferedHapticCommand&&) = default;
                    constexpr SendBufferedHapticCommand& operator=(SendBufferedHapticCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SendBufferedHapticCommand& operator=(SendBufferedHapticCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x410};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SendBufferedHapticCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kMaxHapticBufferSize offset 0
static constexpr int32_t  kMaxHapticBufferSize{1024};

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{1040};

 UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 int32_t __declspec(property(get=__get_channel, put=__set_channel))  channel;

constexpr void __set_channel(int32_t value) ;

constexpr int32_t __get_channel() const;

 int32_t __declspec(property(get=__get_bufferSize, put=__set_bufferSize))  bufferSize;

constexpr void __set_bufferSize(int32_t value) ;

constexpr int32_t __get_bufferSize() const;

 UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer value) ;

constexpr UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer __get_buffer() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2936fd0 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2937000 size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2936cf0 size 0x164 virtual false final false
static UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand Create(::ArrayW<uint8_t> rumbleBuffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand, "UnityEngine.InputSystem.XR.Haptics", "SendBufferedHapticCommand");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer, "UnityEngine.InputSystem.XR.Haptics", "SendBufferedHapticCommand/<buffer>e__FixedBuffer");

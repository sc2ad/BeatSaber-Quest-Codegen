#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
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
namespace UnityEngine::InputSystem::LowLevel {
struct DisableDeviceCommand;
}
// Type: UnityEngine.InputSystem.LowLevel::DisableDeviceCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6546))
// CS Name: UnityEngine.InputSystem.LowLevel.DisableDeviceCommand
struct CORDL_TYPE DisableDeviceCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }]
constexpr DisableDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand) noexcept;


                    constexpr DisableDeviceCommand(DisableDeviceCommand const&) = default;
                    constexpr DisableDeviceCommand(DisableDeviceCommand&&) = default;
                    constexpr DisableDeviceCommand& operator=(DisableDeviceCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DisableDeviceCommand& operator=(DisableDeviceCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DisableDeviceCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{8};

 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2954ac8 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2954af8 size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2954b28 size 0x34 virtual false final false
static ::UnityEngine::InputSystem::LowLevel::DisableDeviceCommand Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DisableDeviceCommand, "UnityEngine.InputSystem.LowLevel", "DisableDeviceCommand");

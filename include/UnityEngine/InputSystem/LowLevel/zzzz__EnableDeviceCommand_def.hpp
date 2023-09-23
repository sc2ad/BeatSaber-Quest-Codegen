#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
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
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct EnableDeviceCommand;
}
// Type: UnityEngine.InputSystem.LowLevel::EnableDeviceCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6547))
// CS Name: UnityEngine.InputSystem.LowLevel.EnableDeviceCommand
struct CORDL_TYPE EnableDeviceCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }]
constexpr EnableDeviceCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand) noexcept;


                    constexpr EnableDeviceCommand(EnableDeviceCommand const&) = default;
                    constexpr EnableDeviceCommand(EnableDeviceCommand&&) = default;
                    constexpr EnableDeviceCommand& operator=(EnableDeviceCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EnableDeviceCommand& operator=(EnableDeviceCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EnableDeviceCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{8};

 UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2954b64 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2954b94 size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2954bc4 size 0x34 virtual false final false
static UnityEngine::InputSystem::LowLevel::EnableDeviceCommand Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::EnableDeviceCommand, "UnityEngine.InputSystem.LowLevel", "EnableDeviceCommand");

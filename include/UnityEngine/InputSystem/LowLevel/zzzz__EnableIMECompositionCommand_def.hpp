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
struct EnableIMECompositionCommand;
}
// Type: UnityEngine.InputSystem.LowLevel::EnableIMECompositionCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6548))
// CS Name: UnityEngine.InputSystem.LowLevel.EnableIMECompositionCommand
struct CORDL_TYPE EnableIMECompositionCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "m_ImeEnabled", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr EnableIMECompositionCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint8_t m_ImeEnabled) noexcept;


                    constexpr EnableIMECompositionCommand(EnableIMECompositionCommand const&) = default;
                    constexpr EnableIMECompositionCommand(EnableIMECompositionCommand&&) = default;
                    constexpr EnableIMECompositionCommand& operator=(EnableIMECompositionCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EnableIMECompositionCommand& operator=(EnableIMECompositionCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EnableIMECompositionCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{12};

 UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 uint8_t __declspec(property(get=__get_m_ImeEnabled, put=__set_m_ImeEnabled))  m_ImeEnabled;

constexpr void __set_m_ImeEnabled(uint8_t value) ;

constexpr uint8_t __get_m_ImeEnabled() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 bool __declspec(property(get=get_imeEnabled))  imeEnabled;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2954bf8 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_imeEnabled addr 0x2954c28 size 0x10 virtual false final false
 bool get_imeEnabled() ;

/// @brief Method get_typeStatic addr 0x2954c38 size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2954c68 size 0x58 virtual false final false
static UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand Create(bool enabled) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand, "UnityEngine.InputSystem.LowLevel", "EnableIMECompositionCommand");

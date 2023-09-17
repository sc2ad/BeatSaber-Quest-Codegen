#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct WarpMousePositionCommand;
}
// Type: UnityEngine.InputSystem.LowLevel::WarpMousePositionCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6574))
// CS Name: UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand
struct CORDL_TYPE WarpMousePositionCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "warpPositionInPlayerDisplaySpace", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr WarpMousePositionCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, ::UnityEngine::Vector2 warpPositionInPlayerDisplaySpace) noexcept;


                    constexpr WarpMousePositionCommand(WarpMousePositionCommand const&) = default;
                    constexpr WarpMousePositionCommand(WarpMousePositionCommand&&) = default;
                    constexpr WarpMousePositionCommand& operator=(WarpMousePositionCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WarpMousePositionCommand& operator=(WarpMousePositionCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WarpMousePositionCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::UnityEngine::Vector2 __declspec(property(get=__get_warpPositionInPlayerDisplaySpace, put=__set_warpPositionInPlayerDisplaySpace))  warpPositionInPlayerDisplaySpace;

constexpr void __set_warpPositionInPlayerDisplaySpace(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_warpPositionInPlayerDisplaySpace() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2955c88 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2955cb8 size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2955ce8 size 0x50 virtual false final false
static ::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand Create(::UnityEngine::Vector2 position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand, "UnityEngine.InputSystem.LowLevel", "WarpMousePositionCommand");
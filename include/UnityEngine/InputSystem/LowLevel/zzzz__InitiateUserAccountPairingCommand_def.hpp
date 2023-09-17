#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct ____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InitiateUserAccountPairingCommand;
}
// Type: ::Result
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6550))
// CS Name: UnityEngine.InputSystem.LowLevel.InitiateUserAccountPairingCommand::Result
struct CORDL_TYPE ____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result(____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result const&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result(____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result&&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result& operator=(____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result& operator=(____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result_Unwrapped : int32_t {
__SuccessfullyInitiated = 1,
__ErrorNotSupported = -1,
__ErrorAlreadyInProgress = -2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SuccessfullyInitiated offset 0
static ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result const SuccessfullyInitiated;

/// @brief Field ErrorNotSupported offset 0
static ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result const ErrorNotSupported;

/// @brief Field ErrorAlreadyInProgress offset 0
static ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result const ErrorAlreadyInProgress;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InitiateUserAccountPairingCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6551))
// CS Name: UnityEngine.InputSystem.LowLevel.InitiateUserAccountPairingCommand
struct CORDL_TYPE InitiateUserAccountPairingCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Result = ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result;

/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }]
constexpr InitiateUserAccountPairingCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand) noexcept;


                    constexpr InitiateUserAccountPairingCommand(InitiateUserAccountPairingCommand const&) = default;
                    constexpr InitiateUserAccountPairingCommand(InitiateUserAccountPairingCommand&&) = default;
                    constexpr InitiateUserAccountPairingCommand& operator=(InitiateUserAccountPairingCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InitiateUserAccountPairingCommand& operator=(InitiateUserAccountPairingCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InitiateUserAccountPairingCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

/// @brief Method get_Type addr 0x2954cc0 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2954cf0 size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2954d20 size 0x34 virtual false final false
static ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InitiateUserAccountPairingCommand__Result, "UnityEngine.InputSystem.LowLevel", "InitiateUserAccountPairingCommand/Result");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand, "UnityEngine.InputSystem.LowLevel", "InitiateUserAccountPairingCommand");

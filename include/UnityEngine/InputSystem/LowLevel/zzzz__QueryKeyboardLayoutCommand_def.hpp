#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryKeyboardLayoutCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer;
}
// Type: ::<nameBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6558))
// CS Name: UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand::<nameBuffer>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x100};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::QueryKeyboardLayoutCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6559))
// CS Name: UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand
struct CORDL_TYPE QueryKeyboardLayoutCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _nameBuffer_e__FixedBuffer = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "nameBuffer", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr QueryKeyboardLayoutCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer nameBuffer) noexcept;


                    constexpr QueryKeyboardLayoutCommand(QueryKeyboardLayoutCommand const&) = default;
                    constexpr QueryKeyboardLayoutCommand(QueryKeyboardLayoutCommand&&) = default;
                    constexpr QueryKeyboardLayoutCommand& operator=(QueryKeyboardLayoutCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr QueryKeyboardLayoutCommand& operator=(QueryKeyboardLayoutCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x108};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit QueryKeyboardLayoutCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kMaxNameLength offset 0
static constexpr int32_t  kMaxNameLength{256};

 UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer __declspec(property(get=__get_nameBuffer, put=__set_nameBuffer))  nameBuffer;

constexpr void __set_nameBuffer(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer value) ;

constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer __get_nameBuffer() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2955328 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method ReadLayoutName addr 0x2955358 size 0x10 virtual false final false
 ::StringW ReadLayoutName() ;

/// @brief Method WriteLayoutName addr 0x2955368 size 0x24 virtual false final false
 void WriteLayoutName(::StringW name) ;

/// @brief Method get_typeStatic addr 0x295538c size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x29553bc size 0x58 virtual false final false
static UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand, "UnityEngine.InputSystem.LowLevel", "QueryKeyboardLayoutCommand");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer");

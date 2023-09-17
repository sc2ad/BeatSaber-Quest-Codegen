#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryKeyNameCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct ____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer;
}
// Type: ::<nameBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6560))
// CS Name: UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand::<nameBuffer>e__FixedBuffer
struct CORDL_TYPE ____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer const&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer&&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x100};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
// Type: UnityEngine.InputSystem.LowLevel::QueryKeyNameCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6561))
// CS Name: UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand
struct CORDL_TYPE QueryKeyNameCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _nameBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer;

/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "scanOrKeyCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameBuffer", ty: "::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr QueryKeyNameCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t scanOrKeyCode, ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer nameBuffer) noexcept;


                    constexpr QueryKeyNameCommand(QueryKeyNameCommand const&) = default;
                    constexpr QueryKeyNameCommand(QueryKeyNameCommand&&) = default;
                    constexpr QueryKeyNameCommand& operator=(QueryKeyNameCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr QueryKeyNameCommand& operator=(QueryKeyNameCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit QueryKeyNameCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kMaxNameLength offset 0
static constexpr int32_t  kMaxNameLength{256};

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{268};

 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 int32_t __declspec(property(get=__get_scanOrKeyCode, put=__set_scanOrKeyCode))  scanOrKeyCode;

constexpr void __set_scanOrKeyCode(int32_t value) ;

constexpr int32_t __get_scanOrKeyCode() const;

 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer __declspec(property(get=__get_nameBuffer, put=__set_nameBuffer))  nameBuffer;

constexpr void __set_nameBuffer(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer __get_nameBuffer() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2955414 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method ReadKeyName addr 0x2955444 size 0x10 virtual false final false
 ::StringW ReadKeyName() ;

/// @brief Method get_typeStatic addr 0x2955454 size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2955484 size 0x60 virtual false final false
static ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand Create(::UnityEngine::InputSystem::Key key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand, "UnityEngine.InputSystem.LowLevel", "QueryKeyNameCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryKeyNameCommand___nameBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryKeyNameCommand/<nameBuffer>e__FixedBuffer");

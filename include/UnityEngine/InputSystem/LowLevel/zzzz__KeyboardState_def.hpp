#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct KeyboardState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer;
}
// Type: ::<keys>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6585))
// CS Name: UnityEngine.InputSystem.LowLevel.KeyboardState::<keys>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xe};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
// Type: UnityEngine.InputSystem.LowLevel::KeyboardState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6586))
// CS Name: UnityEngine.InputSystem.LowLevel.KeyboardState
struct CORDL_TYPE KeyboardState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _keys_e__FixedBuffer = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "keys", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr KeyboardState(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer keys) noexcept;


                    constexpr KeyboardState(KeyboardState const&) = default;
                    constexpr KeyboardState(KeyboardState&&) = default;
                    constexpr KeyboardState& operator=(KeyboardState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr KeyboardState& operator=(KeyboardState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xe};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit KeyboardState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSizeInBits offset 0
static constexpr int32_t  kSizeInBits{110};

/// @brief Field kSizeInBytes offset 0
static constexpr int32_t  kSizeInBytes{14};

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer value) ;

constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer __get_keys() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Format))  Format;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_Format addr 0x2955f40 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method .ctor addr 0x2955f70 size 0xc8 virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Key> pressedKeys) ;

/// @brief Method Set addr 0x2956038 size 0xc virtual false final false
 void Set(UnityEngine::InputSystem::Key key, bool state) ;

/// @brief Method Press addr 0x2956044 size 0xc virtual false final false
 void Press(UnityEngine::InputSystem::Key key) ;

/// @brief Method Release addr 0x2956050 size 0xc virtual false final false
 void Release(UnityEngine::InputSystem::Key key) ;

/// @brief Method get_format addr 0x295605c size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::KeyboardState, "UnityEngine.InputSystem.LowLevel", "KeyboardState");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__KeyboardState___keys_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "KeyboardState/<keys>e__FixedBuffer");

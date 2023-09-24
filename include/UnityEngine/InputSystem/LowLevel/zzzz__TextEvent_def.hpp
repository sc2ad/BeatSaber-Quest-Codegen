#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TextEvent;
}
// Type: UnityEngine.InputSystem.LowLevel::TextEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6630))
// CS Name: UnityEngine.InputSystem.LowLevel.TextEvent
struct CORDL_TYPE TextEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "character", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextEvent(UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, int32_t character) noexcept;


                    constexpr TextEvent(TextEvent const&) = default;
                    constexpr TextEvent(TextEvent&&) = default;
                    constexpr TextEvent& operator=(TextEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextEvent& operator=(TextEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field Type offset 0
static constexpr int32_t  Type{1413830740};

 UnityEngine::InputSystem::LowLevel::InputEvent __declspec(property(get=__get_baseEvent, put=__set_baseEvent))  baseEvent;

constexpr void __set_baseEvent(UnityEngine::InputSystem::LowLevel::InputEvent value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEvent __get_baseEvent() const;

 int32_t __declspec(property(get=__get_character, put=__set_character))  character;

constexpr void __set_character(int32_t value) ;

constexpr int32_t __get_character() const;


// Properties

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_typeStatic addr 0x295de24 size 0x20 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method From addr 0x295de44 size 0x12c virtual false final false
static void* From(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method Create addr 0x295df70 size 0xa0 virtual false final false
static UnityEngine::InputSystem::LowLevel::TextEvent Create(int32_t deviceId, char16_t character, double_t time) ;

/// @brief Method Create addr 0x295e010 size 0x9c virtual false final false
static UnityEngine::InputSystem::LowLevel::TextEvent Create(int32_t deviceId, int32_t character, double_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::TextEvent, "UnityEngine.InputSystem.LowLevel", "TextEvent");

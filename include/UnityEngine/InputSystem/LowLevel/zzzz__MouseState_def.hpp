#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct MouseButton;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct MouseState;
}
// Type: UnityEngine.InputSystem.LowLevel::MouseState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6587))
// CS Name: UnityEngine.InputSystem.LowLevel.MouseState
struct CORDL_TYPE MouseState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scroll", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "clickCount", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr MouseState(UnityEngine::Vector2 position, UnityEngine::Vector2 delta, UnityEngine::Vector2 scroll, uint16_t buttons, uint16_t displayIndex, uint16_t clickCount) noexcept;


                    constexpr MouseState(MouseState const&) = default;
                    constexpr MouseState(MouseState&&) = default;
                    constexpr MouseState& operator=(MouseState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MouseState& operator=(MouseState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MouseState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_position() const;

 UnityEngine::Vector2 __declspec(property(get=__get_delta, put=__set_delta))  delta;

constexpr void __set_delta(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_delta() const;

 UnityEngine::Vector2 __declspec(property(get=__get_scroll, put=__set_scroll))  scroll;

constexpr void __set_scroll(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_scroll() const;

 uint16_t __declspec(property(get=__get_buttons, put=__set_buttons))  buttons;

constexpr void __set_buttons(uint16_t value) ;

constexpr uint16_t __get_buttons() const;

 uint16_t __declspec(property(get=__get_displayIndex, put=__set_displayIndex))  displayIndex;

constexpr void __set_displayIndex(uint16_t value) ;

constexpr uint16_t __get_displayIndex() const;

 uint16_t __declspec(property(get=__get_clickCount, put=__set_clickCount))  clickCount;

constexpr void __set_clickCount(uint16_t value) ;

constexpr uint16_t __get_clickCount() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Format))  Format;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_Format addr 0x295608c size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method WithButton addr 0x29560bc size 0x2c virtual false final false
 UnityEngine::InputSystem::LowLevel::MouseState WithButton(UnityEngine::InputSystem::LowLevel::MouseButton button, bool state) ;

/// @brief Method get_format addr 0x29560e8 size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::MouseState, "UnityEngine.InputSystem.LowLevel", "MouseState");

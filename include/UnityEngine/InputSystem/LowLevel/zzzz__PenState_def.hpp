#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem {
struct PenButton;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct PenState;
}
// Type: UnityEngine.InputSystem.LowLevel::PenState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6589))
// CS Name: UnityEngine.InputSystem.LowLevel.PenState
struct CORDL_TYPE PenState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "tilt", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "twist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr PenState(UnityEngine::Vector2 position, UnityEngine::Vector2 delta, UnityEngine::Vector2 tilt, float_t pressure, float_t twist, uint16_t buttons, uint16_t displayIndex) noexcept;


                    constexpr PenState(PenState const&) = default;
                    constexpr PenState(PenState&&) = default;
                    constexpr PenState& operator=(PenState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PenState& operator=(PenState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PenState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 UnityEngine::Vector2 __declspec(property(get=__get_tilt, put=__set_tilt))  tilt;

constexpr void __set_tilt(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_tilt() const;

 float_t __declspec(property(get=__get_pressure, put=__set_pressure))  pressure;

constexpr void __set_pressure(float_t value) ;

constexpr float_t __get_pressure() const;

 float_t __declspec(property(get=__get_twist, put=__set_twist))  twist;

constexpr void __set_twist(float_t value) ;

constexpr float_t __get_twist() const;

 uint16_t __declspec(property(get=__get_buttons, put=__set_buttons))  buttons;

constexpr void __set_buttons(uint16_t value) ;

constexpr uint16_t __get_buttons() const;

 uint16_t __declspec(property(get=__get_displayIndex, put=__set_displayIndex))  displayIndex;

constexpr void __set_displayIndex(uint16_t value) ;

constexpr uint16_t __get_displayIndex() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Format))  Format;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_Format addr 0x2956118 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method WithButton addr 0x2956148 size 0x34 virtual false final false
 UnityEngine::InputSystem::LowLevel::PenState WithButton(UnityEngine::InputSystem::PenButton button, bool state) ;

/// @brief Method get_format addr 0x295617c size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::PenState, "UnityEngine.InputSystem.LowLevel", "PenState");

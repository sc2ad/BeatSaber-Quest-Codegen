#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct PointerState;
}
// Type: UnityEngine.InputSystem.LowLevel::PointerState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6590))
// CS Name: UnityEngine.InputSystem.LowLevel.PointerState
struct CORDL_TYPE PointerState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "pointerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr PointerState(uint32_t pointerId, UnityEngine::Vector2 position, UnityEngine::Vector2 delta, float_t pressure, UnityEngine::Vector2 radius, uint16_t buttons) noexcept;


                    constexpr PointerState(PointerState const&) = default;
                    constexpr PointerState(PointerState&&) = default;
                    constexpr PointerState& operator=(PointerState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PointerState& operator=(PointerState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PointerState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_pointerId, put=__set_pointerId))  pointerId;

constexpr void __set_pointerId(uint32_t value) ;

constexpr uint32_t __get_pointerId() const;

 UnityEngine::Vector2 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_position() const;

 UnityEngine::Vector2 __declspec(property(get=__get_delta, put=__set_delta))  delta;

constexpr void __set_delta(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_delta() const;

 float_t __declspec(property(get=__get_pressure, put=__set_pressure))  pressure;

constexpr void __set_pressure(float_t value) ;

constexpr float_t __get_pressure() const;

 UnityEngine::Vector2 __declspec(property(get=__get_radius, put=__set_radius))  radius;

constexpr void __set_radius(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_radius() const;

 uint16_t __declspec(property(get=__get_buttons, put=__set_buttons))  buttons;

constexpr void __set_buttons(uint16_t value) ;

constexpr uint16_t __get_buttons() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_kFormat))  kFormat;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_kFormat addr 0x29561ac size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Method get_format addr 0x29561dc size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::PointerState, "UnityEngine.InputSystem.LowLevel", "PointerState");

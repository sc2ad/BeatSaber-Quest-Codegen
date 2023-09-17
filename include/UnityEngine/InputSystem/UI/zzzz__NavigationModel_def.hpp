#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct NavigationModel;
}
// Type: UnityEngine.InputSystem.UI::NavigationModel
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6461))
// CS Name: UnityEngine.InputSystem.UI.NavigationModel
struct CORDL_TYPE NavigationModel : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "move", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "consecutiveMoveCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastMoveDirection", ty: "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: None }, CppParam { name: "lastMoveTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "eventData", ty: "::UnityEngine::EventSystems::AxisEventData", modifiers: "", def_value: None }]
constexpr NavigationModel(::UnityEngine::Vector2 move, int32_t consecutiveMoveCount, ::UnityEngine::EventSystems::MoveDirection lastMoveDirection, float_t lastMoveTime, ::UnityEngine::EventSystems::AxisEventData eventData) noexcept;


                    constexpr NavigationModel(NavigationModel const&) = default;
                    constexpr NavigationModel(NavigationModel&&) = default;
                    constexpr NavigationModel& operator=(NavigationModel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NavigationModel& operator=(NavigationModel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NavigationModel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get_move, put=__set_move))  move;

constexpr void __set_move(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_move() const;

 int32_t __declspec(property(get=__get_consecutiveMoveCount, put=__set_consecutiveMoveCount))  consecutiveMoveCount;

constexpr void __set_consecutiveMoveCount(int32_t value) ;

constexpr int32_t __get_consecutiveMoveCount() const;

 ::UnityEngine::EventSystems::MoveDirection __declspec(property(get=__get_lastMoveDirection, put=__set_lastMoveDirection))  lastMoveDirection;

constexpr void __set_lastMoveDirection(::UnityEngine::EventSystems::MoveDirection value) ;

constexpr ::UnityEngine::EventSystems::MoveDirection __get_lastMoveDirection() const;

 float_t __declspec(property(get=__get_lastMoveTime, put=__set_lastMoveTime))  lastMoveTime;

constexpr void __set_lastMoveTime(float_t value) ;

constexpr float_t __get_lastMoveTime() const;

 ::UnityEngine::EventSystems::AxisEventData __declspec(property(get=__get_eventData, put=__set_eventData))  eventData;

constexpr void __set_eventData(::UnityEngine::EventSystems::AxisEventData value) ;

constexpr ::UnityEngine::EventSystems::AxisEventData __get_eventData() const;


// Methods

/// @brief Method Reset addr 0x29405d0 size 0x50 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::NavigationModel, "UnityEngine.InputSystem.UI", "NavigationModel");

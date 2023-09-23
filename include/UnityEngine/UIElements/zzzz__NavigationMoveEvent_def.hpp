#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__NavigationMoveEvent__Direction;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
// Type: ::Direction
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7348))
// CS Name: UnityEngine.UIElements.NavigationMoveEvent::Direction
struct CORDL_TYPE UnityEngine__UIElements__NavigationMoveEvent__Direction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__NavigationMoveEvent__Direction(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__NavigationMoveEvent__Direction(UnityEngine__UIElements__NavigationMoveEvent__Direction const&) = default;
                    constexpr UnityEngine__UIElements__NavigationMoveEvent__Direction(UnityEngine__UIElements__NavigationMoveEvent__Direction&&) = default;
                    constexpr UnityEngine__UIElements__NavigationMoveEvent__Direction& operator=(UnityEngine__UIElements__NavigationMoveEvent__Direction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__NavigationMoveEvent__Direction& operator=(UnityEngine__UIElements__NavigationMoveEvent__Direction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__NavigationMoveEvent__Direction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__NavigationMoveEvent__Direction_Unwrapped : int32_t {
__None = 0,
__Left = 1,
__Up = 2,
__Right = 3,
__Down = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__NavigationMoveEvent__Direction_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__NavigationMoveEvent__Direction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction const None;

/// @brief Field Left offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction const Left;

/// @brief Field Up offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction const Up;

/// @brief Field Right offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction const Right;

/// @brief Field Down offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction const Down;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigationMoveEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7347), inst: 4561 }), TypeDefinitionIndex(TypeDefinitionIndex(7347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7349))
// CS Name: UnityEngine.UIElements.NavigationMoveEvent
class CORDL_TYPE NavigationMoveEvent : public UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationMoveEvent> {
public:
// Declarations
using Direction = UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~NavigationMoveEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent", modifiers: " const&", def_value: None }]
constexpr NavigationMoveEvent(NavigationMoveEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent", modifiers: "&&", def_value: None }]
constexpr NavigationMoveEvent(NavigationMoveEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavigationMoveEvent(void* ptr) noexcept : UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationMoveEvent>(ptr) {
}


  constexpr NavigationMoveEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavigationMoveEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavigationMoveEvent& operator=(NavigationMoveEvent&& o) noexcept = default;
  constexpr NavigationMoveEvent& operator=(NavigationMoveEvent const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction __declspec(property(get=__get__direction_k__BackingField, put=__set__direction_k__BackingField))  _direction_k__BackingField;

constexpr void __set__direction_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction __get__direction_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__move_k__BackingField, put=__set__move_k__BackingField))  _move_k__BackingField;

constexpr void __set__move_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__move_k__BackingField() const;


// Properties

 UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction __declspec(property(get=get_direction, put=set_direction))  direction;

 UnityEngine::Vector2 __declspec(property(put=set_move))  move;


// Methods

/// @brief Method DetermineMoveDirection addr 0x2cdbb2c size 0x54 virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction DetermineMoveDirection(float_t x, float_t y, float_t deadZone) ;

/// @brief Method get_direction addr 0x2cdbb80 size 0x8 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction get_direction() ;

/// @brief Method set_direction addr 0x2cdbb88 size 0x8 virtual false final false
 void set_direction(UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction value) ;

/// @brief Method set_move addr 0x2cdbb90 size 0x8 virtual false final false
 void set_move(UnityEngine::Vector2 value) ;

/// @brief Method GetPooled addr 0x2cdbb98 size 0xe0 virtual false final false
static UnityEngine::UIElements::NavigationMoveEvent GetPooled(UnityEngine::Vector2 moveVector) ;

/// @brief Method Init addr 0x2cdbc78 size 0x88 virtual true final false
 void Init() ;

// Ctor Parameters []
explicit NavigationMoveEvent() ;

/// @brief Method .ctor addr 0x2cdbd00 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__NavigationMoveEvent__Direction, "UnityEngine.UIElements", "NavigationMoveEvent/Direction");
NEED_NO_BOX(UnityEngine::UIElements::NavigationMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::NavigationMoveEvent, "UnityEngine.UIElements", "NavigationMoveEvent");

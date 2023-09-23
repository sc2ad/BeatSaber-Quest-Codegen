#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__NavigationTabEvent__Direction;
}
namespace UnityEngine::UIElements {
class NavigationTabEvent;
}
// Type: ::Direction
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7350))
// CS Name: UnityEngine.UIElements.NavigationTabEvent::Direction
struct CORDL_TYPE UnityEngine__UIElements__NavigationTabEvent__Direction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__NavigationTabEvent__Direction(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__NavigationTabEvent__Direction(UnityEngine__UIElements__NavigationTabEvent__Direction const&) = default;
                    constexpr UnityEngine__UIElements__NavigationTabEvent__Direction(UnityEngine__UIElements__NavigationTabEvent__Direction&&) = default;
                    constexpr UnityEngine__UIElements__NavigationTabEvent__Direction& operator=(UnityEngine__UIElements__NavigationTabEvent__Direction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__NavigationTabEvent__Direction& operator=(UnityEngine__UIElements__NavigationTabEvent__Direction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__NavigationTabEvent__Direction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__NavigationTabEvent__Direction_Unwrapped : int32_t {
__None = 0,
__Next = 1,
__Previous = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__NavigationTabEvent__Direction_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__NavigationTabEvent__Direction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction const None;

/// @brief Field Next offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction const Next;

/// @brief Field Previous offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction const Previous;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigationTabEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7347)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7347), inst: 4563 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7351))
// CS Name: UnityEngine.UIElements.NavigationTabEvent
class CORDL_TYPE NavigationTabEvent : public UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationTabEvent> {
public:
// Declarations
using Direction = UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NavigationTabEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationTabEvent", modifiers: " const&", def_value: None }]
constexpr NavigationTabEvent(NavigationTabEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationTabEvent", modifiers: "&&", def_value: None }]
constexpr NavigationTabEvent(NavigationTabEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavigationTabEvent(void* ptr) noexcept : UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationTabEvent>(ptr) {
}


  constexpr NavigationTabEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavigationTabEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavigationTabEvent& operator=(NavigationTabEvent&& o) noexcept = default;
  constexpr NavigationTabEvent& operator=(NavigationTabEvent const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction __declspec(property(get=__get__direction_k__BackingField, put=__set__direction_k__BackingField))  _direction_k__BackingField;

constexpr void __set__direction_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction __get__direction_k__BackingField() const;


// Properties

 UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction __declspec(property(put=set_direction))  direction;


// Methods

/// @brief Method set_direction addr 0x2cdbd58 size 0x8 virtual false final false
 void set_direction(UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction value) ;

/// @brief Method DetermineMoveDirection addr 0x2cdbd60 size 0x1c virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction DetermineMoveDirection(int32_t moveValue) ;

/// @brief Method GetPooled addr 0x2cdbd7c size 0x8c virtual false final false
static UnityEngine::UIElements::NavigationTabEvent GetPooled(int32_t moveValue) ;

/// @brief Method Init addr 0x2cdbe08 size 0x50 virtual true final false
 void Init() ;

// Ctor Parameters []
explicit NavigationTabEvent() ;

/// @brief Method .ctor addr 0x2cdbe58 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__NavigationTabEvent__Direction, "UnityEngine.UIElements", "NavigationTabEvent/Direction");
NEED_NO_BOX(UnityEngine::UIElements::NavigationTabEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::NavigationTabEvent, "UnityEngine.UIElements", "NavigationTabEvent");

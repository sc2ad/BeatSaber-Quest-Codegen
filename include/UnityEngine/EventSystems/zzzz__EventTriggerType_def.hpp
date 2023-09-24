#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::EventSystems {
struct EventTriggerType;
}
// Type: UnityEngine.EventSystems::EventTriggerType
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13134))
// CS Name: UnityEngine.EventSystems.EventTriggerType
struct CORDL_TYPE EventTriggerType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventTriggerType(int32_t value__) noexcept;


                    constexpr EventTriggerType(EventTriggerType const&) = default;
                    constexpr EventTriggerType(EventTriggerType&&) = default;
                    constexpr EventTriggerType& operator=(EventTriggerType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventTriggerType& operator=(EventTriggerType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventTriggerType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EventTriggerType_Unwrapped : int32_t {
__PointerEnter = 0,
__PointerExit = 1,
__PointerDown = 2,
__PointerUp = 3,
__PointerClick = 4,
__Drag = 5,
__Drop = 6,
__Scroll = 7,
__UpdateSelected = 8,
__Select = 9,
__Deselect = 10,
__Move = 11,
__InitializePotentialDrag = 12,
__BeginDrag = 13,
__EndDrag = 14,
__Submit = 15,
__Cancel = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventTriggerType_Unwrapped () const noexcept {
return std::bit_cast<__EventTriggerType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PointerEnter offset 0
static UnityEngine::EventSystems::EventTriggerType const PointerEnter;

/// @brief Field PointerExit offset 0
static UnityEngine::EventSystems::EventTriggerType const PointerExit;

/// @brief Field PointerDown offset 0
static UnityEngine::EventSystems::EventTriggerType const PointerDown;

/// @brief Field PointerUp offset 0
static UnityEngine::EventSystems::EventTriggerType const PointerUp;

/// @brief Field PointerClick offset 0
static UnityEngine::EventSystems::EventTriggerType const PointerClick;

/// @brief Field Drag offset 0
static UnityEngine::EventSystems::EventTriggerType const Drag;

/// @brief Field Drop offset 0
static UnityEngine::EventSystems::EventTriggerType const Drop;

/// @brief Field Scroll offset 0
static UnityEngine::EventSystems::EventTriggerType const Scroll;

/// @brief Field UpdateSelected offset 0
static UnityEngine::EventSystems::EventTriggerType const UpdateSelected;

/// @brief Field Select offset 0
static UnityEngine::EventSystems::EventTriggerType const Select;

/// @brief Field Deselect offset 0
static UnityEngine::EventSystems::EventTriggerType const Deselect;

/// @brief Field Move offset 0
static UnityEngine::EventSystems::EventTriggerType const Move;

/// @brief Field InitializePotentialDrag offset 0
static UnityEngine::EventSystems::EventTriggerType const InitializePotentialDrag;

/// @brief Field BeginDrag offset 0
static UnityEngine::EventSystems::EventTriggerType const BeginDrag;

/// @brief Field EndDrag offset 0
static UnityEngine::EventSystems::EventTriggerType const EndDrag;

/// @brief Field Submit offset 0
static UnityEngine::EventSystems::EventTriggerType const Submit;

/// @brief Field Cancel offset 0
static UnityEngine::EventSystems::EventTriggerType const Cancel;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::EventTriggerType, "UnityEngine.EventSystems", "EventTriggerType");

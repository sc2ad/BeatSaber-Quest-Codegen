#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State;
}
namespace UnityEngine::UIElements {
class BaseVisualTreeHierarchyTrackerUpdater;
}
// Type: ::State
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6871))
// CS Name: UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater::State
struct CORDL_TYPE UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State(UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State const&) = default;
                    constexpr UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State(UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State&&) = default;
                    constexpr UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State& operator=(UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State& operator=(UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped : int32_t {
__Waiting = 0,
__TrackingAddOrMove = 1,
__TrackingRemove = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Waiting offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State const Waiting;

/// @brief Field TrackingAddOrMove offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State const TrackingAddOrMove;

/// @brief Field TrackingRemove offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State const TrackingRemove;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseVisualTreeHierarchyTrackerUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6872))
// CS Name: UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater
class CORDL_TYPE BaseVisualTreeHierarchyTrackerUpdater : public UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
using State = UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BaseVisualTreeHierarchyTrackerUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeHierarchyTrackerUpdater", modifiers: " const&", def_value: None }]
constexpr BaseVisualTreeHierarchyTrackerUpdater(BaseVisualTreeHierarchyTrackerUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeHierarchyTrackerUpdater", modifiers: "&&", def_value: None }]
constexpr BaseVisualTreeHierarchyTrackerUpdater(BaseVisualTreeHierarchyTrackerUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseVisualTreeHierarchyTrackerUpdater(void* ptr) noexcept : UnityEngine::UIElements::BaseVisualTreeUpdater(ptr) {
}


  constexpr BaseVisualTreeHierarchyTrackerUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseVisualTreeHierarchyTrackerUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseVisualTreeHierarchyTrackerUpdater& operator=(BaseVisualTreeHierarchyTrackerUpdater&& o) noexcept = default;
  constexpr BaseVisualTreeHierarchyTrackerUpdater& operator=(BaseVisualTreeHierarchyTrackerUpdater const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State __get_m_State() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CurrentChangeElement, put=__set_m_CurrentChangeElement))  m_CurrentChangeElement;

constexpr void __set_m_CurrentChangeElement(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_CurrentChangeElement() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CurrentChangeParent, put=__set_m_CurrentChangeParent))  m_CurrentChangeParent;

constexpr void __set_m_CurrentChangeParent(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_CurrentChangeParent() const;


// Methods

/// @brief Method OnHierarchyChange addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnHierarchyChange(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::HierarchyChangeType type) ;

/// @brief Method OnVersionChanged addr 0x2c419ac size 0x2c virtual true final false
 void OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method Update addr 0x2c41b7c size 0x94 virtual true final false
 void Update() ;

/// @brief Method ProcessNewChange addr 0x2c419d8 size 0x84 virtual false final false
 void ProcessNewChange(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method ProcessAddOrMove addr 0x2c41ac0 size 0xbc virtual false final false
 void ProcessAddOrMove(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method ProcessRemove addr 0x2c41a5c size 0x64 virtual false final false
 void ProcessRemove(UnityEngine::UIElements::VisualElement ve) ;

static UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater New_ctor() ;

/// @brief Method .ctor addr 0x2c41c10 size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State, "UnityEngine.UIElements", "BaseVisualTreeHierarchyTrackerUpdater/State");
NEED_NO_BOX(UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, "UnityEngine.UIElements", "BaseVisualTreeHierarchyTrackerUpdater");

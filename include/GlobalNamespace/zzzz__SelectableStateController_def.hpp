#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Tweening {
class TimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SelectableStateController__ViewState;
}
namespace GlobalNamespace {
class SelectableStateController;
}
// Type: ::ViewState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5557))
// CS Name: SelectableStateController::ViewState
struct CORDL_TYPE GlobalNamespace__SelectableStateController__ViewState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SelectableStateController__ViewState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SelectableStateController__ViewState(GlobalNamespace__SelectableStateController__ViewState const&) = default;
                    constexpr GlobalNamespace__SelectableStateController__ViewState(GlobalNamespace__SelectableStateController__ViewState&&) = default;
                    constexpr GlobalNamespace__SelectableStateController__ViewState& operator=(GlobalNamespace__SelectableStateController__ViewState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SelectableStateController__ViewState& operator=(GlobalNamespace__SelectableStateController__ViewState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SelectableStateController__ViewState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SelectableStateController__ViewState_Unwrapped : int32_t {
__Normal = 0,
__Highlighted = 1,
__Pressed = 2,
__Disabled = 3,
__Selected = 4,
__SelectedAndHighlighted = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SelectableStateController__ViewState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SelectableStateController__ViewState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState const Normal;

/// @brief Field Highlighted offset 0
static GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState const Highlighted;

/// @brief Field Pressed offset 0
static GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState const Pressed;

/// @brief Field Disabled offset 0
static GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState const Disabled;

/// @brief Field Selected offset 0
static GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState const Selected;

/// @brief Field SelectedAndHighlighted offset 0
static GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState const SelectedAndHighlighted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SelectableStateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5558))
// CS Name: SelectableStateController
class CORDL_TYPE SelectableStateController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using ViewState = GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SelectableStateController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableStateController", modifiers: " const&", def_value: None }]
constexpr SelectableStateController(SelectableStateController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableStateController", modifiers: "&&", def_value: None }]
constexpr SelectableStateController(SelectableStateController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectableStateController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SelectableStateController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectableStateController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectableStateController& operator=(SelectableStateController&& o) noexcept = default;
  constexpr SelectableStateController& operator=(SelectableStateController const& o) noexcept = default;
                


// Fields

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;

 System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool> __declspec(property(get=__get_stateDidChangeEvent, put=__set_stateDidChangeEvent))  stateDidChangeEvent;

constexpr void __set_stateDidChangeEvent(System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool> value) ;

constexpr System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool> __get_stateDidChangeEvent() const;

 GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState __declspec(property(get=__get__currentViewState_k__BackingField, put=__set__currentViewState_k__BackingField))  _currentViewState_k__BackingField;

constexpr void __set__currentViewState_k__BackingField(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState value) ;

constexpr GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState __get__currentViewState_k__BackingField() const;


// Properties

 Tweening::TimeTweeningManager __declspec(property(get=get_tweeningManager))  tweeningManager;

 GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState __declspec(property(get=get_viewState))  viewState;

 GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState __declspec(property(get=get_currentViewState, put=set_currentViewState))  currentViewState;


// Methods

/// @brief Method add_stateDidChangeEvent addr 0x212b678 size 0xb0 virtual false final false
 void add_stateDidChangeEvent(System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool> value) ;

/// @brief Method remove_stateDidChangeEvent addr 0x212b728 size 0xb0 virtual false final false
 void remove_stateDidChangeEvent(System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool> value) ;

/// @brief Method get_tweeningManager addr 0x212b7d8 size 0x8 virtual false final false
 Tweening::TimeTweeningManager get_tweeningManager() ;

/// @brief Method get_viewState addr 0x212b7e0 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState get_viewState() ;

/// @brief Method get_currentViewState addr 0x212b7e8 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState get_currentViewState() ;

/// @brief Method set_currentViewState addr 0x212b7f0 size 0x8 virtual false final false
 void set_currentViewState(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState value) ;

/// @brief Method SetState addr 0x212b7f8 size 0x24 virtual false final false
 void SetState(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState state, bool animated) ;

// Ctor Parameters []
explicit SelectableStateController() ;

/// @brief Method .ctor addr 0x212b81c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState, "", "SelectableStateController/ViewState");
NEED_NO_BOX(GlobalNamespace::SelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectableStateController, "", "SelectableStateController");

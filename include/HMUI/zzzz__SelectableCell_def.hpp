#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__Interactable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace GlobalNamespace {
class Signal;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Forward declare root types
namespace HMUI {
struct HMUI__SelectableCell__TransitionType;
}
namespace HMUI {
class SelectableCell;
}
// Type: ::TransitionType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13703))
// CS Name: HMUI.SelectableCell::TransitionType
struct CORDL_TYPE HMUI__SelectableCell__TransitionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__SelectableCell__TransitionType(int32_t value__) noexcept;


                    constexpr HMUI__SelectableCell__TransitionType(HMUI__SelectableCell__TransitionType const&) = default;
                    constexpr HMUI__SelectableCell__TransitionType(HMUI__SelectableCell__TransitionType&&) = default;
                    constexpr HMUI__SelectableCell__TransitionType& operator=(HMUI__SelectableCell__TransitionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__SelectableCell__TransitionType& operator=(HMUI__SelectableCell__TransitionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__SelectableCell__TransitionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__SelectableCell__TransitionType_Unwrapped : int32_t {
__Instant = 0,
__Animated = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__SelectableCell__TransitionType_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__SelectableCell__TransitionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Instant offset 0
static HMUI::HMUI__SelectableCell__TransitionType const Instant;

/// @brief Field Animated offset 0
static HMUI::HMUI__SelectableCell__TransitionType const Animated;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::SelectableCell
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13590))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13704))
// CS Name: HMUI.SelectableCell
class CORDL_TYPE SelectableCell : public HMUI::Interactable {
public:
// Declarations
using TransitionType = HMUI::HMUI__SelectableCell__TransitionType;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr operator  UnityEngine::EventSystems::ISubmitHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SelectableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCell", modifiers: " const&", def_value: None }]
constexpr SelectableCell(SelectableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCell", modifiers: "&&", def_value: None }]
constexpr SelectableCell(SelectableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectableCell(void* ptr) noexcept : HMUI::Interactable(ptr) {
}


  constexpr SelectableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectableCell& operator=(SelectableCell&& o) noexcept = default;
  constexpr SelectableCell& operator=(SelectableCell const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Signal __declspec(property(get=__get__wasPressedSignal, put=__set__wasPressedSignal))  _wasPressedSignal;

constexpr void __set__wasPressedSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__wasPressedSignal() const;

 System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_selectionDidChangeEvent, put=__set_selectionDidChangeEvent))  selectionDidChangeEvent;

constexpr void __set_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType> __get_selectionDidChangeEvent() const;

 System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType> __declspec(property(get=__get_highlightDidChangeEvent, put=__set_highlightDidChangeEvent))  highlightDidChangeEvent;

constexpr void __set_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType> value) ;

constexpr System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType> __get_highlightDidChangeEvent() const;

 bool __declspec(property(get=__get__highlighted_k__BackingField, put=__set__highlighted_k__BackingField))  _highlighted_k__BackingField;

constexpr void __set__highlighted_k__BackingField(bool value) ;

constexpr bool __get__highlighted_k__BackingField() const;

 bool __declspec(property(get=__get__selected_k__BackingField, put=__set__selected_k__BackingField))  _selected_k__BackingField;

constexpr void __set__selected_k__BackingField(bool value) ;

constexpr bool __get__selected_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_highlighted, put=set_highlighted))  highlighted;

 bool __declspec(property(get=get_selected, put=set_selected))  selected;


// Methods

/// @brief Method add_selectionDidChangeEvent addr 0x1fd1ffc size 0xb0 virtual false final false
 void add_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method remove_selectionDidChangeEvent addr 0x1fd20ac size 0xb0 virtual false final false
 void remove_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType,::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method add_highlightDidChangeEvent addr 0x1fd215c size 0xb0 virtual false final false
 void add_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType> value) ;

/// @brief Method remove_highlightDidChangeEvent addr 0x1fd220c size 0xb0 virtual false final false
 void remove_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell,HMUI::HMUI__SelectableCell__TransitionType> value) ;

/// @brief Method get_highlighted addr 0x1fd22bc size 0x8 virtual false final false
 bool get_highlighted() ;

/// @brief Method set_highlighted addr 0x1fd22c4 size 0xc virtual false final false
 void set_highlighted(bool value) ;

/// @brief Method get_selected addr 0x1fd22d0 size 0x8 virtual false final false
 bool get_selected() ;

/// @brief Method set_selected addr 0x1fd22d8 size 0xc virtual false final false
 void set_selected(bool value) ;

/// @brief Method Start addr 0x1fd22e4 size 0x30 virtual true final false
 void Start() ;

/// @brief Method SetSelected addr 0x1fd2314 size 0x80 virtual false final false
 void SetSelected(bool value, HMUI::HMUI__SelectableCell__TransitionType transitionType, ::bs_hook::Il2CppWrapperType changeOwner, bool ignoreCurrentValue) ;

/// @brief Method ClearHighlight addr 0x1fd2394 size 0x10 virtual false final false
 void ClearHighlight(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method SetHighlight addr 0x1fd23a4 size 0x78 virtual false final false
 void SetHighlight(bool value, HMUI::HMUI__SelectableCell__TransitionType transitionType, bool ignoreCurrentValue) ;

/// @brief Method InternalToggle addr 0x0 size 0xffffffffffffffff virtual true final false
 void InternalToggle() ;

/// @brief Method SelectionDidChange addr 0x1fd241c size 0x4 virtual true final false
 void SelectionDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x1fd2420 size 0x4 virtual true final false
 void HighlightDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method OnPointerClick addr 0x1fd2424 size 0xb0 virtual true final false
 void OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSubmit addr 0x1fd24d4 size 0xa0 virtual true final false
 void OnSubmit(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnPointerEnter addr 0x1fd2574 size 0x10 virtual true final false
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x1fd2584 size 0x10 virtual true final false
 void OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData) ;

// Ctor Parameters []
explicit SelectableCell() ;

/// @brief Method .ctor addr 0x1fd2594 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__SelectableCell__TransitionType, "HMUI", "SelectableCell/TransitionType");
NEED_NO_BOX(HMUI::SelectableCell);
DEFINE_IL2CPP_ARG_TYPE(HMUI::SelectableCell, "HMUI", "SelectableCell");

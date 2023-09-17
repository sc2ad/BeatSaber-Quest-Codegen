#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace GlobalNamespace {
class Signal;
}
namespace HMUI {
class Interactable;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionToggle;
}
// Type: ::MissionToggle
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5644))
// CS Name: MissionToggle
class CORDL_TYPE MissionToggle : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::ISubmitHandler
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~MissionToggle() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionToggle", modifiers: " const&", def_value: None }]
constexpr MissionToggle(MissionToggle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionToggle", modifiers: "&&", def_value: None }]
constexpr MissionToggle(MissionToggle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionToggle(void* ptr) noexcept : ::UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr MissionToggle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionToggle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionToggle& operator=(MissionToggle&& o) noexcept = default;
  constexpr MissionToggle& operator=(MissionToggle const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::Signal __declspec(property(get=__get__missionToggleWasPressedSignal, put=__set__missionToggleWasPressedSignal))  _missionToggleWasPressedSignal;

constexpr void __set__missionToggleWasPressedSignal(::GlobalNamespace::Signal value) ;

constexpr ::GlobalNamespace::Signal __get__missionToggleWasPressedSignal() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__lockedImage, put=__set__lockedImage))  _lockedImage;

constexpr void __set__lockedImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__lockedImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__clearedImage, put=__set__clearedImage))  _clearedImage;

constexpr void __set__clearedImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__clearedImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__bgImage, put=__set__bgImage))  _bgImage;

constexpr void __set__bgImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__bgImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__strokeImage, put=__set__strokeImage))  _strokeImage;

constexpr void __set__strokeImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__strokeImage() const;

 ::HMUI::Interactable __declspec(property(get=__get__vrInteractable, put=__set__vrInteractable))  _vrInteractable;

constexpr void __set__vrInteractable(::HMUI::Interactable value) ;

constexpr ::HMUI::Interactable __get__vrInteractable() const;

 ::UnityEngine::Color __declspec(property(get=__get__disabledColor, put=__set__disabledColor))  _disabledColor;

constexpr void __set__disabledColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__disabledColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__normalColor, put=__set__normalColor))  _normalColor;

constexpr void __set__normalColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__normalColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__invertColor, put=__set__invertColor))  _invertColor;

constexpr void __set__invertColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__invertColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__highlightColor, put=__set__highlightColor))  _highlightColor;

constexpr void __set__highlightColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__highlightColor() const;

 ::System::Action_1<::GlobalNamespace::MissionToggle> __declspec(property(get=__get_selectionDidChangeEvent, put=__set_selectionDidChangeEvent))  selectionDidChangeEvent;

constexpr void __set_selectionDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionToggle> value) ;

constexpr ::System::Action_1<::GlobalNamespace::MissionToggle> __get_selectionDidChangeEvent() const;

 bool __declspec(property(get=__get__selected, put=__set__selected))  _selected;

constexpr void __set__selected(bool value) ;

constexpr bool __get__selected() const;

 bool __declspec(property(get=__get__highlighted, put=__set__highlighted))  _highlighted;

constexpr void __set__highlighted(bool value) ;

constexpr bool __get__highlighted() const;

 bool __declspec(property(get=__get__interactable, put=__set__interactable))  _interactable;

constexpr void __set__interactable(bool value) ;

constexpr bool __get__interactable() const;

 bool __declspec(property(get=__get__missionCleared, put=__set__missionCleared))  _missionCleared;

constexpr void __set__missionCleared(bool value) ;

constexpr bool __get__missionCleared() const;


// Properties

 bool __declspec(property(put=set_missionCleared))  missionCleared;

 bool __declspec(property(get=get_selected, put=set_selected))  selected;

 bool __declspec(property(get=get_interactable, put=set_interactable))  interactable;

 bool __declspec(property(get=get_highlighted))  highlighted;


// Methods

/// @brief Method add_selectionDidChangeEvent addr 0x214a730 size 0xb0 virtual false final false
 void add_selectionDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionToggle> value) ;

/// @brief Method remove_selectionDidChangeEvent addr 0x214a918 size 0xb0 virtual false final false
 void remove_selectionDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionToggle> value) ;

/// @brief Method set_missionCleared addr 0x214ae30 size 0xc virtual false final false
 void set_missionCleared(bool value) ;

/// @brief Method get_selected addr 0x214ae3c size 0x8 virtual false final false
 bool get_selected() ;

/// @brief Method set_selected addr 0x214a664 size 0x10 virtual false final false
 void set_selected(bool value) ;

/// @brief Method get_interactable addr 0x214ae44 size 0x8 virtual false final false
 bool get_interactable() ;

/// @brief Method set_interactable addr 0x214a7e0 size 0xc virtual false final false
 void set_interactable(bool value) ;

/// @brief Method get_highlighted addr 0x214b0f4 size 0x8 virtual false final false
 bool get_highlighted() ;

/// @brief Method Start addr 0x214b0fc size 0x1c virtual true final false
 void Start() ;

/// @brief Method ChangeSelection addr 0x214aa4c size 0x64 virtual false final false
 void ChangeSelection(bool value, bool callSelectionDidChange, bool ignoreCurrentValue) ;

/// @brief Method ChangeHighlight addr 0x214b118 size 0x20 virtual false final false
 void ChangeHighlight(bool value, bool ignoreCurrentValue) ;

/// @brief Method SetText addr 0x214a9c8 size 0x24 virtual false final false
 void SetText(::StringW text) ;

/// @brief Method InternalToggle addr 0x214b138 size 0x30 virtual false final false
 void InternalToggle() ;

/// @brief Method RefreshUI addr 0x214ae4c size 0x2a8 virtual false final false
 void RefreshUI() ;

/// @brief Method OnPointerClick addr 0x214b168 size 0xa8 virtual true final false
 void OnPointerClick(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSubmit addr 0x214b210 size 0x98 virtual true final false
 void OnSubmit(::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnPointerEnter addr 0x214b2a8 size 0x24 virtual true final false
 void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x214b2cc size 0x1c virtual true final false
 void OnPointerExit(::UnityEngine::EventSystems::PointerEventData eventData) ;

// Ctor Parameters []
explicit MissionToggle() ;

/// @brief Method .ctor addr 0x214b2e8 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionToggle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionToggle, "", "MissionToggle");

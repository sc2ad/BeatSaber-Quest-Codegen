#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace HMUI {
class EventSystemListener;
}
// Type: HMUI::EventSystemListener
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13584))
// CS Name: HMUI.EventSystemListener
class CORDL_TYPE EventSystemListener : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EventSystemListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemListener", modifiers: " const&", def_value: None }]
constexpr EventSystemListener(EventSystemListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemListener", modifiers: "&&", def_value: None }]
constexpr EventSystemListener(EventSystemListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventSystemListener(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EventSystemListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventSystemListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventSystemListener& operator=(EventSystemListener&& o) noexcept = default;
  constexpr EventSystemListener& operator=(EventSystemListener const& o) noexcept = default;
                


// Fields

 System::Action_1<UnityEngine::EventSystems::PointerEventData> __declspec(property(get=__get_pointerDidEnterEvent, put=__set_pointerDidEnterEvent))  pointerDidEnterEvent;

constexpr void __set_pointerDidEnterEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData> value) ;

constexpr System::Action_1<UnityEngine::EventSystems::PointerEventData> __get_pointerDidEnterEvent() const;

 System::Action_1<UnityEngine::EventSystems::PointerEventData> __declspec(property(get=__get_pointerDidExitEvent, put=__set_pointerDidExitEvent))  pointerDidExitEvent;

constexpr void __set_pointerDidExitEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData> value) ;

constexpr System::Action_1<UnityEngine::EventSystems::PointerEventData> __get_pointerDidExitEvent() const;


// Methods

/// @brief Method add_pointerDidEnterEvent addr 0x1fa9560 size 0xb0 virtual false final false
 void add_pointerDidEnterEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData> value) ;

/// @brief Method remove_pointerDidEnterEvent addr 0x1fa9610 size 0xb0 virtual false final false
 void remove_pointerDidEnterEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData> value) ;

/// @brief Method add_pointerDidExitEvent addr 0x1fa96c0 size 0xb0 virtual false final false
 void add_pointerDidExitEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData> value) ;

/// @brief Method remove_pointerDidExitEvent addr 0x1fa9770 size 0xb0 virtual false final false
 void remove_pointerDidExitEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData> value) ;

/// @brief Method OnPointerEnter addr 0x1fa9820 size 0x1c virtual true final true
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x1fa983c size 0x1c virtual true final true
 void OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData) ;

// Ctor Parameters []
explicit EventSystemListener() ;

/// @brief Method .ctor addr 0x1fa9858 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::EventSystemListener);
DEFINE_IL2CPP_ARG_TYPE(HMUI::EventSystemListener, "HMUI", "EventSystemListener");

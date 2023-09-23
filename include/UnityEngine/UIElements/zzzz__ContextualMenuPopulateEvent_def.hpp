#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class DropdownMenu;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class ContextualMenuManager;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
// Type: UnityEngine.UIElements::ContextualMenuPopulateEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 4504 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7326))
// CS Name: UnityEngine.UIElements.ContextualMenuPopulateEvent
class CORDL_TYPE ContextualMenuPopulateEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::ContextualMenuPopulateEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~ContextualMenuPopulateEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextualMenuPopulateEvent", modifiers: " const&", def_value: None }]
constexpr ContextualMenuPopulateEvent(ContextualMenuPopulateEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextualMenuPopulateEvent", modifiers: "&&", def_value: None }]
constexpr ContextualMenuPopulateEvent(ContextualMenuPopulateEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextualMenuPopulateEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::ContextualMenuPopulateEvent>(ptr) {
}


  constexpr ContextualMenuPopulateEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextualMenuPopulateEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextualMenuPopulateEvent& operator=(ContextualMenuPopulateEvent&& o) noexcept = default;
  constexpr ContextualMenuPopulateEvent& operator=(ContextualMenuPopulateEvent const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::DropdownMenu __declspec(property(get=__get__menu_k__BackingField, put=__set__menu_k__BackingField))  _menu_k__BackingField;

constexpr void __set__menu_k__BackingField(UnityEngine::UIElements::DropdownMenu value) ;

constexpr UnityEngine::UIElements::DropdownMenu __get__menu_k__BackingField() const;

 UnityEngine::UIElements::EventBase __declspec(property(get=__get__triggerEvent_k__BackingField, put=__set__triggerEvent_k__BackingField))  _triggerEvent_k__BackingField;

constexpr void __set__triggerEvent_k__BackingField(UnityEngine::UIElements::EventBase value) ;

constexpr UnityEngine::UIElements::EventBase __get__triggerEvent_k__BackingField() const;

 UnityEngine::UIElements::ContextualMenuManager __declspec(property(get=__get_m_ContextualMenuManager, put=__set_m_ContextualMenuManager))  m_ContextualMenuManager;

constexpr void __set_m_ContextualMenuManager(UnityEngine::UIElements::ContextualMenuManager value) ;

constexpr UnityEngine::UIElements::ContextualMenuManager __get_m_ContextualMenuManager() const;


// Properties

 UnityEngine::UIElements::DropdownMenu __declspec(property(get=get_menu, put=set_menu))  menu;

 UnityEngine::UIElements::EventBase __declspec(property(get=get_triggerEvent, put=set_triggerEvent))  triggerEvent;


// Methods

/// @brief Method get_menu addr 0x2cda990 size 0x8 virtual false final false
 UnityEngine::UIElements::DropdownMenu get_menu() ;

/// @brief Method set_menu addr 0x2cda998 size 0x8 virtual false final false
 void set_menu(UnityEngine::UIElements::DropdownMenu value) ;

/// @brief Method get_triggerEvent addr 0x2cda9a0 size 0x8 virtual false final false
 UnityEngine::UIElements::EventBase get_triggerEvent() ;

/// @brief Method set_triggerEvent addr 0x2cda9a8 size 0x8 virtual false final false
 void set_triggerEvent(UnityEngine::UIElements::EventBase value) ;

/// @brief Method Init addr 0x2cda9b0 size 0x70 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cdaa20 size 0x34 virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit ContextualMenuPopulateEvent() ;

/// @brief Method .ctor addr 0x2cdaa54 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method PostDispatch addr 0x2cdaac4 size 0x90 virtual true final false
 void PostDispatch(UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ContextualMenuPopulateEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ContextualMenuPopulateEvent, "UnityEngine.UIElements", "ContextualMenuPopulateEvent");

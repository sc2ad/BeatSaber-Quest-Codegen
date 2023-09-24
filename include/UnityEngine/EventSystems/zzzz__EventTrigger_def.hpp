#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IDropHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class UnityEngine__EventSystems__EventTrigger__TriggerEvent;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class UnityEngine__EventSystems__EventTrigger__Entry;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct EventTriggerType;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class EventTrigger;
}
namespace UnityEngine::EventSystems {
class UnityEngine__EventSystems__EventTrigger__Entry;
}
namespace UnityEngine::EventSystems {
class UnityEngine__EventSystems__EventTrigger__TriggerEvent;
}
// Type: ::TriggerEvent
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13104)), TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 5061 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13131))
// CS Name: UnityEngine.EventSystems.EventTrigger::TriggerEvent
class CORDL_TYPE UnityEngine__EventSystems__EventTrigger__TriggerEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::EventSystems::BaseEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__EventSystems__EventTrigger__TriggerEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__EventTrigger__TriggerEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__EventSystems__EventTrigger__TriggerEvent(UnityEngine__EventSystems__EventTrigger__TriggerEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__EventTrigger__TriggerEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__EventSystems__EventTrigger__TriggerEvent(UnityEngine__EventSystems__EventTrigger__TriggerEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__EventSystems__EventTrigger__TriggerEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<UnityEngine::EventSystems::BaseEventData>(ptr) {
}


  constexpr UnityEngine__EventSystems__EventTrigger__TriggerEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__EventSystems__EventTrigger__TriggerEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__EventSystems__EventTrigger__TriggerEvent& operator=(UnityEngine__EventSystems__EventTrigger__TriggerEvent&& o) noexcept = default;
  constexpr UnityEngine__EventSystems__EventTrigger__TriggerEvent& operator=(UnityEngine__EventSystems__EventTrigger__TriggerEvent const& o) noexcept = default;
                


// Methods

static UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent New_ctor() ;

/// @brief Method .ctor addr 0x2c1f744 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: ::Entry
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13132))
// CS Name: UnityEngine.EventSystems.EventTrigger::Entry
class CORDL_TYPE UnityEngine__EventSystems__EventTrigger__Entry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__EventSystems__EventTrigger__Entry() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__EventTrigger__Entry", modifiers: " const&", def_value: None }]
constexpr UnityEngine__EventSystems__EventTrigger__Entry(UnityEngine__EventSystems__EventTrigger__Entry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__EventTrigger__Entry", modifiers: "&&", def_value: None }]
constexpr UnityEngine__EventSystems__EventTrigger__Entry(UnityEngine__EventSystems__EventTrigger__Entry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__EventSystems__EventTrigger__Entry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__EventSystems__EventTrigger__Entry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__EventSystems__EventTrigger__Entry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__EventSystems__EventTrigger__Entry& operator=(UnityEngine__EventSystems__EventTrigger__Entry&& o) noexcept = default;
  constexpr UnityEngine__EventSystems__EventTrigger__Entry& operator=(UnityEngine__EventSystems__EventTrigger__Entry const& o) noexcept = default;
                


// Fields

 UnityEngine::EventSystems::EventTriggerType __declspec(property(get=__get_eventID, put=__set_eventID))  eventID;

constexpr void __set_eventID(UnityEngine::EventSystems::EventTriggerType value) ;

constexpr UnityEngine::EventSystems::EventTriggerType __get_eventID() const;

 UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent value) ;

constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent __get_callback() const;


// Methods

static UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry New_ctor() ;

/// @brief Method .ctor addr 0x2c1f78c size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::EventTrigger
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13133))
// CS Name: UnityEngine.EventSystems.EventTrigger
class CORDL_TYPE EventTrigger : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Entry = UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry;

using TriggerEvent = UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerDownHandler
constexpr operator  UnityEngine::EventSystems::IPointerDownHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerUpHandler
constexpr operator  UnityEngine::EventSystems::IPointerUpHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IInitializePotentialDragHandler
constexpr operator  UnityEngine::EventSystems::IInitializePotentialDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IBeginDragHandler
constexpr operator  UnityEngine::EventSystems::IBeginDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IDragHandler
constexpr operator  UnityEngine::EventSystems::IDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEndDragHandler
constexpr operator  UnityEngine::EventSystems::IEndDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IDropHandler
constexpr operator  UnityEngine::EventSystems::IDropHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IScrollHandler
constexpr operator  UnityEngine::EventSystems::IScrollHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IUpdateSelectedHandler
constexpr operator  UnityEngine::EventSystems::IUpdateSelectedHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISelectHandler
constexpr operator  UnityEngine::EventSystems::ISelectHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IDeselectHandler
constexpr operator  UnityEngine::EventSystems::IDeselectHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IMoveHandler
constexpr operator  UnityEngine::EventSystems::IMoveHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr operator  UnityEngine::EventSystems::ISubmitHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ICancelHandler
constexpr operator  UnityEngine::EventSystems::ICancelHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EventTrigger() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventTrigger", modifiers: " const&", def_value: None }]
constexpr EventTrigger(EventTrigger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventTrigger", modifiers: "&&", def_value: None }]
constexpr EventTrigger(EventTrigger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventTrigger(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EventTrigger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventTrigger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventTrigger& operator=(EventTrigger&& o) noexcept = default;
  constexpr EventTrigger& operator=(EventTrigger const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> __declspec(property(get=__get_m_Delegates, put=__set_m_Delegates))  m_Delegates;

constexpr void __set_m_Delegates(System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> __get_m_Delegates() const;


// Properties

 System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> __declspec(property(get=get_delegates, put=set_delegates))  delegates;

 System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> __declspec(property(get=get_triggers, put=set_triggers))  triggers;


// Methods

/// @brief Method get_delegates addr 0x2c1f4f0 size 0x4 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> get_delegates() ;

/// @brief Method set_delegates addr 0x2c1f574 size 0x8 virtual false final false
 void set_delegates(System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> value) ;

static UnityEngine::EventSystems::EventTrigger New_ctor() ;

/// @brief Method .ctor addr 0x2c1f57c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_triggers addr 0x2c1f4f4 size 0x80 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> get_triggers() ;

/// @brief Method set_triggers addr 0x2c1f584 size 0x8 virtual false final false
 void set_triggers(System::Collections::Generic::List_1<UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry> value) ;

/// @brief Method Execute addr 0x2c1f58c size 0xec virtual false final false
 void Execute(UnityEngine::EventSystems::EventTriggerType id, UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnPointerEnter addr 0x2c1f678 size 0xc virtual true final false
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x2c1f684 size 0xc virtual true final false
 void OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x2c1f690 size 0xc virtual true final false
 void OnDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrop addr 0x2c1f69c size 0xc virtual true final false
 void OnDrop(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x2c1f6a8 size 0xc virtual true final false
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerUp addr 0x2c1f6b4 size 0xc virtual true final false
 void OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerClick addr 0x2c1f6c0 size 0xc virtual true final false
 void OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSelect addr 0x2c1f6cc size 0xc virtual true final false
 void OnSelect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnDeselect addr 0x2c1f6d8 size 0xc virtual true final false
 void OnDeselect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnScroll addr 0x2c1f6e4 size 0xc virtual true final false
 void OnScroll(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnMove addr 0x2c1f6f0 size 0xc virtual true final false
 void OnMove(UnityEngine::EventSystems::AxisEventData eventData) ;

/// @brief Method OnUpdateSelected addr 0x2c1f6fc size 0xc virtual true final false
 void OnUpdateSelected(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnInitializePotentialDrag addr 0x2c1f708 size 0xc virtual true final false
 void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnBeginDrag addr 0x2c1f714 size 0xc virtual true final false
 void OnBeginDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnEndDrag addr 0x2c1f720 size 0xc virtual true final false
 void OnEndDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSubmit addr 0x2c1f72c size 0xc virtual true final false
 void OnSubmit(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnCancel addr 0x2c1f738 size 0xc virtual true final false
 void OnCancel(UnityEngine::EventSystems::BaseEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::EventTrigger);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::EventTrigger, "UnityEngine.EventSystems", "EventTrigger");
NEED_NO_BOX(UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__Entry, "UnityEngine.EventSystems", "EventTrigger/Entry");
NEED_NO_BOX(UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::UnityEngine__EventSystems__EventTrigger__TriggerEvent, "UnityEngine.EventSystems", "EventTrigger/TriggerEvent");

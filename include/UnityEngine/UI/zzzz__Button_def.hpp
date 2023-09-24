#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Button___OnFinishSubmit_d__9;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Button__ButtonClickedEvent;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Button__ButtonClickedEvent;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Button___OnFinishSubmit_d__9;
}
// Type: ::ButtonClickedEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12956))
// CS Name: UnityEngine.UI.Button::ButtonClickedEvent
class CORDL_TYPE UnityEngine__UI__Button__ButtonClickedEvent : public UnityEngine::Events::UnityEvent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__Button__ButtonClickedEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Button__ButtonClickedEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Button__ButtonClickedEvent(UnityEngine__UI__Button__ButtonClickedEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Button__ButtonClickedEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Button__ButtonClickedEvent(UnityEngine__UI__Button__ButtonClickedEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Button__ButtonClickedEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent(ptr) {
}


  constexpr UnityEngine__UI__Button__ButtonClickedEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Button__ButtonClickedEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Button__ButtonClickedEvent& operator=(UnityEngine__UI__Button__ButtonClickedEvent&& o) noexcept = default;
  constexpr UnityEngine__UI__Button__ButtonClickedEvent& operator=(UnityEngine__UI__Button__ButtonClickedEvent const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent New_ctor() ;

/// @brief Method .ctor addr 0x2bd7e24 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::<OnFinishSubmit>d__9
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12957))
// CS Name: UnityEngine.UI.Button::<OnFinishSubmit>d__9
class CORDL_TYPE UnityEngine__UI__Button___OnFinishSubmit_d__9 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__Button___OnFinishSubmit_d__9() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Button___OnFinishSubmit_d__9", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Button___OnFinishSubmit_d__9(UnityEngine__UI__Button___OnFinishSubmit_d__9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Button___OnFinishSubmit_d__9", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Button___OnFinishSubmit_d__9(UnityEngine__UI__Button___OnFinishSubmit_d__9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Button___OnFinishSubmit_d__9(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__Button___OnFinishSubmit_d__9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Button___OnFinishSubmit_d__9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Button___OnFinishSubmit_d__9& operator=(UnityEngine__UI__Button___OnFinishSubmit_d__9&& o) noexcept = default;
  constexpr UnityEngine__UI__Button___OnFinishSubmit_d__9& operator=(UnityEngine__UI__Button___OnFinishSubmit_d__9 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 UnityEngine::UI::Button __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get___4__this() const;

 float_t __declspec(property(get=__get__fadeTime_5__2, put=__set__fadeTime_5__2))  _fadeTime_5__2;

constexpr void __set__fadeTime_5__2(float_t value) ;

constexpr float_t __get__fadeTime_5__2() const;

 float_t __declspec(property(get=__get__elapsedTime_5__3, put=__set__elapsedTime_5__3))  _elapsedTime_5__3;

constexpr void __set__elapsedTime_5__3(float_t value) ;

constexpr float_t __get__elapsedTime_5__3() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static UnityEngine::UI::UnityEngine__UI__Button___OnFinishSubmit_d__9 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2bd7fd8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2bd8000 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2bd8004 size 0xbc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2bd80c0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2bd80c8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2bd8108 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Button
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12958))
// CS Name: UnityEngine.UI.Button
class CORDL_TYPE Button : public UnityEngine::UI::Selectable {
public:
// Declarations
using _OnFinishSubmit_d__9 = UnityEngine::UI::UnityEngine__UI__Button___OnFinishSubmit_d__9;

using ButtonClickedEvent = UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr operator  UnityEngine::EventSystems::ISubmitHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~Button() = default;

// Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: " const&", def_value: None }]
constexpr Button(Button const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "&&", def_value: None }]
constexpr Button(Button&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Button(void* ptr) noexcept : UnityEngine::UI::Selectable(ptr) {
}


  constexpr Button& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Button& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Button& operator=(Button&& o) noexcept = default;
  constexpr Button& operator=(Button const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent __declspec(property(get=__get_m_OnClick, put=__set_m_OnClick))  m_OnClick;

constexpr void __set_m_OnClick(UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent __get_m_OnClick() const;


// Properties

 UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent __declspec(property(get=get_onClick, put=set_onClick))  onClick;


// Methods

static UnityEngine::UI::Button New_ctor() ;

/// @brief Method .ctor addr 0x2bd7d98 size 0x8c virtual false final false
 void _ctor() ;

/// @brief Method get_onClick addr 0x2bd7e2c size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent get_onClick() ;

/// @brief Method set_onClick addr 0x2bd7e34 size 0x8 virtual false final false
 void set_onClick(UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent value) ;

/// @brief Method Press addr 0x2bd7e3c size 0x98 virtual false final false
 void Press() ;

/// @brief Method OnPointerClick addr 0x2bd7ed4 size 0x24 virtual true final false
 void OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSubmit addr 0x2bd7ef8 size 0x78 virtual true final false
 void OnSubmit(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnFinishSubmit addr 0x2bd7f70 size 0x68 virtual false final false
 System::Collections::IEnumerator OnFinishSubmit() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::Button);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Button, "UnityEngine.UI", "Button");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Button__ButtonClickedEvent, "UnityEngine.UI", "Button/ButtonClickedEvent");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Button___OnFinishSubmit_d__9);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Button___OnFinishSubmit_d__9, "UnityEngine.UI", "Button/<OnFinishSubmit>d__9");

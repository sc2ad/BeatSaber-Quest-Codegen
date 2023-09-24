#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown__OptionData;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown__DropdownEvent;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown__DropdownItem;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown__OptionDataList;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown____c__DisplayClass63_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::UI::CoroutineTween {
struct FloatTween;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::UI::CoroutineTween {
template<typename T>
class TweenRunner_1;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
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
class Dropdown;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown__DropdownEvent;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown__DropdownItem;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown__OptionData;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown__OptionDataList;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Dropdown____c__DisplayClass63_0;
}
// Type: ::DropdownItem
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12972))
// CS Name: UnityEngine.UI.Dropdown::DropdownItem
class CORDL_TYPE UnityEngine__UI__Dropdown__DropdownItem : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ICancelHandler
constexpr operator  UnityEngine::EventSystems::ICancelHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UnityEngine__UI__Dropdown__DropdownItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown__DropdownItem", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Dropdown__DropdownItem(UnityEngine__UI__Dropdown__DropdownItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown__DropdownItem", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Dropdown__DropdownItem(UnityEngine__UI__Dropdown__DropdownItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Dropdown__DropdownItem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UnityEngine__UI__Dropdown__DropdownItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown__DropdownItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown__DropdownItem& operator=(UnityEngine__UI__Dropdown__DropdownItem&& o) noexcept = default;
  constexpr UnityEngine__UI__Dropdown__DropdownItem& operator=(UnityEngine__UI__Dropdown__DropdownItem const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Text __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_Text() const;

 UnityEngine::UI::Image __declspec(property(get=__get_m_Image, put=__set_m_Image))  m_Image;

constexpr void __set_m_Image(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get_m_Image() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_RectTransform, put=__set_m_RectTransform))  m_RectTransform;

constexpr void __set_m_RectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_RectTransform() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get_m_Toggle, put=__set_m_Toggle))  m_Toggle;

constexpr void __set_m_Toggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get_m_Toggle() const;


// Properties

 UnityEngine::UI::Text __declspec(property(get=get_text, put=set_text))  text;

 UnityEngine::UI::Image __declspec(property(get=get_image, put=set_image))  image;

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform, put=set_rectTransform))  rectTransform;

 UnityEngine::UI::Toggle __declspec(property(get=get_toggle, put=set_toggle))  toggle;


// Methods

/// @brief Method get_text addr 0x2be1be8 size 0x8 virtual false final false
 UnityEngine::UI::Text get_text() ;

/// @brief Method set_text addr 0x2be1bf0 size 0x8 virtual false final false
 void set_text(UnityEngine::UI::Text value) ;

/// @brief Method get_image addr 0x2be1bf8 size 0x8 virtual false final false
 UnityEngine::UI::Image get_image() ;

/// @brief Method set_image addr 0x2be1c00 size 0x8 virtual false final false
 void set_image(UnityEngine::UI::Image value) ;

/// @brief Method get_rectTransform addr 0x2be1c08 size 0x8 virtual false final false
 UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method set_rectTransform addr 0x2be1c10 size 0x8 virtual false final false
 void set_rectTransform(UnityEngine::RectTransform value) ;

/// @brief Method get_toggle addr 0x2be1c18 size 0x8 virtual false final false
 UnityEngine::UI::Toggle get_toggle() ;

/// @brief Method set_toggle addr 0x2be1c20 size 0x8 virtual false final false
 void set_toggle(UnityEngine::UI::Toggle value) ;

/// @brief Method OnPointerEnter addr 0x2be1c28 size 0x7c virtual true final false
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnCancel addr 0x2be1ca4 size 0xac virtual true final false
 void OnCancel(UnityEngine::EventSystems::BaseEventData eventData) ;

static UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem New_ctor() ;

/// @brief Method .ctor addr 0x2be1d50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::OptionData
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12973))
// CS Name: UnityEngine.UI.Dropdown::OptionData
class CORDL_TYPE UnityEngine__UI__Dropdown__OptionData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__UI__Dropdown__OptionData() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown__OptionData", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Dropdown__OptionData(UnityEngine__UI__Dropdown__OptionData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown__OptionData", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Dropdown__OptionData(UnityEngine__UI__Dropdown__OptionData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Dropdown__OptionData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__Dropdown__OptionData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown__OptionData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown__OptionData& operator=(UnityEngine__UI__Dropdown__OptionData&& o) noexcept = default;
  constexpr UnityEngine__UI__Dropdown__OptionData& operator=(UnityEngine__UI__Dropdown__OptionData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::StringW value) ;

constexpr ::StringW __get_m_Text() const;

 UnityEngine::Sprite __declspec(property(get=__get_m_Image, put=__set_m_Image))  m_Image;

constexpr void __set_m_Image(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_m_Image() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 UnityEngine::Sprite __declspec(property(get=get_image, put=set_image))  image;


// Methods

/// @brief Method get_text addr 0x2be1d58 size 0x8 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2be1d60 size 0x8 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_image addr 0x2be1d68 size 0x8 virtual false final false
 UnityEngine::Sprite get_image() ;

/// @brief Method set_image addr 0x2be1d70 size 0x8 virtual false final false
 void set_image(UnityEngine::Sprite value) ;

static UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData New_ctor() ;

/// @brief Method .ctor addr 0x2bde2f4 size 0x8 virtual false final false
 void _ctor() ;

static UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData New_ctor(::StringW text) ;

/// @brief Method .ctor addr 0x2bdf838 size 0x28 virtual false final false
 void _ctor(::StringW text) ;

static UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData New_ctor(UnityEngine::Sprite image) ;

/// @brief Method .ctor addr 0x2bdf9bc size 0x28 virtual false final false
 void _ctor(UnityEngine::Sprite image) ;

static UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData New_ctor(::StringW text, UnityEngine::Sprite image) ;

/// @brief Method .ctor addr 0x2be1d78 size 0x2c virtual false final false
 void _ctor(::StringW text, UnityEngine::Sprite image) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::OptionDataList
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12974))
// CS Name: UnityEngine.UI.Dropdown::OptionDataList
class CORDL_TYPE UnityEngine__UI__Dropdown__OptionDataList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UI__Dropdown__OptionDataList() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown__OptionDataList", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Dropdown__OptionDataList(UnityEngine__UI__Dropdown__OptionDataList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown__OptionDataList", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Dropdown__OptionDataList(UnityEngine__UI__Dropdown__OptionDataList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Dropdown__OptionDataList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__Dropdown__OptionDataList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown__OptionDataList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown__OptionDataList& operator=(UnityEngine__UI__Dropdown__OptionDataList&& o) noexcept = default;
  constexpr UnityEngine__UI__Dropdown__OptionDataList& operator=(UnityEngine__UI__Dropdown__OptionDataList const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> __declspec(property(get=__get_m_Options, put=__set_m_Options))  m_Options;

constexpr void __set_m_Options(System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> __get_m_Options() const;


// Properties

 System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> __declspec(property(get=get_options, put=set_options))  options;


// Methods

/// @brief Method get_options addr 0x2be1da4 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> get_options() ;

/// @brief Method set_options addr 0x2be1dac size 0x8 virtual false final false
 void set_options(System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> value) ;

static UnityEngine::UI::UnityEngine__UI__Dropdown__OptionDataList New_ctor() ;

/// @brief Method .ctor addr 0x2bdf218 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::DropdownEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 92 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12975))
// CS Name: UnityEngine.UI.Dropdown::DropdownEvent
class CORDL_TYPE UnityEngine__UI__Dropdown__DropdownEvent : public UnityEngine::Events::UnityEvent_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__Dropdown__DropdownEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown__DropdownEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Dropdown__DropdownEvent(UnityEngine__UI__Dropdown__DropdownEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown__DropdownEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Dropdown__DropdownEvent(UnityEngine__UI__Dropdown__DropdownEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Dropdown__DropdownEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<int32_t>(ptr) {
}


  constexpr UnityEngine__UI__Dropdown__DropdownEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown__DropdownEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown__DropdownEvent& operator=(UnityEngine__UI__Dropdown__DropdownEvent&& o) noexcept = default;
  constexpr UnityEngine__UI__Dropdown__DropdownEvent& operator=(UnityEngine__UI__Dropdown__DropdownEvent const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent New_ctor() ;

/// @brief Method .ctor addr 0x2bdf298 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::<>c__DisplayClass63_0
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12976))
// CS Name: UnityEngine.UI.Dropdown::<>c__DisplayClass63_0
class CORDL_TYPE UnityEngine__UI__Dropdown____c__DisplayClass63_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__UI__Dropdown____c__DisplayClass63_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown____c__DisplayClass63_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Dropdown____c__DisplayClass63_0(UnityEngine__UI__Dropdown____c__DisplayClass63_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown____c__DisplayClass63_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Dropdown____c__DisplayClass63_0(UnityEngine__UI__Dropdown____c__DisplayClass63_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Dropdown____c__DisplayClass63_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__Dropdown____c__DisplayClass63_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown____c__DisplayClass63_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown____c__DisplayClass63_0& operator=(UnityEngine__UI__Dropdown____c__DisplayClass63_0&& o) noexcept = default;
  constexpr UnityEngine__UI__Dropdown____c__DisplayClass63_0& operator=(UnityEngine__UI__Dropdown____c__DisplayClass63_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem __get_item() const;

 UnityEngine::UI::Dropdown __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UI::Dropdown value) ;

constexpr UnityEngine::UI::Dropdown __get___4__this() const;


// Methods

static UnityEngine::UI::UnityEngine__UI__Dropdown____c__DisplayClass63_0 New_ctor() ;

/// @brief Method .ctor addr 0x2be0df4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Show>b__0 addr 0x2be1db4 size 0x24 virtual false final false
 void _Show_b__0(bool x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::<DelayedDestroyDropdownList>d__75
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12977))
// CS Name: UnityEngine.UI.Dropdown::<DelayedDestroyDropdownList>d__75
class CORDL_TYPE UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75(UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75(UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75& operator=(UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75&& o) noexcept = default;
  constexpr UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75& operator=(UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 UnityEngine::UI::Dropdown __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UI::Dropdown value) ;

constexpr UnityEngine::UI::Dropdown __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static UnityEngine::UI::UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2be1a14 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2be1dd8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2be1ddc size 0xac virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2be1e88 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2be1e90 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2be1ed0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Dropdown
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12978))
// CS Name: UnityEngine.UI.Dropdown
class CORDL_TYPE Dropdown : public UnityEngine::UI::Selectable {
public:
// Declarations
using _DelayedDestroyDropdownList_d__75 = UnityEngine::UI::UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75;

using __c__DisplayClass63_0 = UnityEngine::UI::UnityEngine__UI__Dropdown____c__DisplayClass63_0;

using DropdownEvent = UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent;

using OptionDataList = UnityEngine::UI::UnityEngine__UI__Dropdown__OptionDataList;

using OptionData = UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData;

using DropdownItem = UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr operator  UnityEngine::EventSystems::ISubmitHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ICancelHandler
constexpr operator  UnityEngine::EventSystems::ICancelHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x168};

virtual ~Dropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "Dropdown", modifiers: " const&", def_value: None }]
constexpr Dropdown(Dropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Dropdown", modifiers: "&&", def_value: None }]
constexpr Dropdown(Dropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Dropdown(void* ptr) noexcept : UnityEngine::UI::Selectable(ptr) {
}


  constexpr Dropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Dropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Dropdown& operator=(Dropdown&& o) noexcept = default;
  constexpr Dropdown& operator=(Dropdown const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get_m_Template, put=__set_m_Template))  m_Template;

constexpr void __set_m_Template(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_Template() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_CaptionText, put=__set_m_CaptionText))  m_CaptionText;

constexpr void __set_m_CaptionText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_CaptionText() const;

 UnityEngine::UI::Image __declspec(property(get=__get_m_CaptionImage, put=__set_m_CaptionImage))  m_CaptionImage;

constexpr void __set_m_CaptionImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get_m_CaptionImage() const;

 UnityEngine::UI::Text __declspec(property(get=__get_m_ItemText, put=__set_m_ItemText))  m_ItemText;

constexpr void __set_m_ItemText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_ItemText() const;

 UnityEngine::UI::Image __declspec(property(get=__get_m_ItemImage, put=__set_m_ItemImage))  m_ItemImage;

constexpr void __set_m_ItemImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get_m_ItemImage() const;

 int32_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(int32_t value) ;

constexpr int32_t __get_m_Value() const;

 UnityEngine::UI::UnityEngine__UI__Dropdown__OptionDataList __declspec(property(get=__get_m_Options, put=__set_m_Options))  m_Options;

constexpr void __set_m_Options(UnityEngine::UI::UnityEngine__UI__Dropdown__OptionDataList value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Dropdown__OptionDataList __get_m_Options() const;

 UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent __declspec(property(get=__get_m_OnValueChanged, put=__set_m_OnValueChanged))  m_OnValueChanged;

constexpr void __set_m_OnValueChanged(UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent __get_m_OnValueChanged() const;

 float_t __declspec(property(get=__get_m_AlphaFadeSpeed, put=__set_m_AlphaFadeSpeed))  m_AlphaFadeSpeed;

constexpr void __set_m_AlphaFadeSpeed(float_t value) ;

constexpr float_t __get_m_AlphaFadeSpeed() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_Dropdown, put=__set_m_Dropdown))  m_Dropdown;

constexpr void __set_m_Dropdown(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_Dropdown() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_Blocker, put=__set_m_Blocker))  m_Blocker;

constexpr void __set_m_Blocker(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_Blocker() const;

 System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem> __declspec(property(get=__get_m_Items, put=__set_m_Items))  m_Items;

constexpr void __set_m_Items(System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem> __get_m_Items() const;

 UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::FloatTween> __declspec(property(get=__get_m_AlphaTweenRunner, put=__set_m_AlphaTweenRunner))  m_AlphaTweenRunner;

constexpr void __set_m_AlphaTweenRunner(UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::FloatTween> value) ;

constexpr UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::FloatTween> __get_m_AlphaTweenRunner() const;

 bool __declspec(property(get=__get_validTemplate, put=__set_validTemplate))  validTemplate;

constexpr void __set_validTemplate(bool value) ;

constexpr bool __get_validTemplate() const;

/// @brief Field kHighSortingLayer offset 0
static constexpr int32_t  kHighSortingLayer{30000};

static UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData __declspec(property(get=__get_s_NoOptionData, put=__set_s_NoOptionData))  s_NoOptionData;

static void __set_s_NoOptionData(UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData value) ;

static UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData __get_s_NoOptionData() ;


// Properties

 UnityEngine::RectTransform __declspec(property(get=get_template, put=set_template))  template;

 UnityEngine::UI::Text __declspec(property(get=get_captionText, put=set_captionText))  captionText;

 UnityEngine::UI::Image __declspec(property(get=get_captionImage, put=set_captionImage))  captionImage;

 UnityEngine::UI::Text __declspec(property(get=get_itemText, put=set_itemText))  itemText;

 UnityEngine::UI::Image __declspec(property(get=get_itemImage, put=set_itemImage))  itemImage;

 System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> __declspec(property(get=get_options, put=set_options))  options;

 UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent __declspec(property(get=get_onValueChanged, put=set_onValueChanged))  onValueChanged;

 float_t __declspec(property(get=get_alphaFadeSpeed, put=set_alphaFadeSpeed))  alphaFadeSpeed;

 int32_t __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_template addr 0x2bdef78 size 0x8 virtual false final false
 UnityEngine::RectTransform get_template() ;

/// @brief Method set_template addr 0x2bde2c0 size 0x8 virtual false final false
 void set_template(UnityEngine::RectTransform value) ;

/// @brief Method get_captionText addr 0x2bdef80 size 0x8 virtual false final false
 UnityEngine::UI::Text get_captionText() ;

/// @brief Method set_captionText addr 0x2bde2c8 size 0x8 virtual false final false
 void set_captionText(UnityEngine::UI::Text value) ;

/// @brief Method get_captionImage addr 0x2bdef88 size 0x8 virtual false final false
 UnityEngine::UI::Image get_captionImage() ;

/// @brief Method set_captionImage addr 0x2bdef90 size 0x8 virtual false final false
 void set_captionImage(UnityEngine::UI::Image value) ;

/// @brief Method get_itemText addr 0x2bdef98 size 0x8 virtual false final false
 UnityEngine::UI::Text get_itemText() ;

/// @brief Method set_itemText addr 0x2bde2d0 size 0x8 virtual false final false
 void set_itemText(UnityEngine::UI::Text value) ;

/// @brief Method get_itemImage addr 0x2bdefa0 size 0x8 virtual false final false
 UnityEngine::UI::Image get_itemImage() ;

/// @brief Method set_itemImage addr 0x2bdefa8 size 0x8 virtual false final false
 void set_itemImage(UnityEngine::UI::Image value) ;

/// @brief Method get_options addr 0x2bde2d8 size 0x1c virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> get_options() ;

/// @brief Method set_options addr 0x2bdefb0 size 0x1c virtual false final false
 void set_options(System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> value) ;

/// @brief Method get_onValueChanged addr 0x2bdefcc size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent get_onValueChanged() ;

/// @brief Method set_onValueChanged addr 0x2bdefd4 size 0x8 virtual false final false
 void set_onValueChanged(UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent value) ;

/// @brief Method get_alphaFadeSpeed addr 0x2bdefdc size 0x8 virtual false final false
 float_t get_alphaFadeSpeed() ;

/// @brief Method set_alphaFadeSpeed addr 0x2bdefe4 size 0x8 virtual false final false
 void set_alphaFadeSpeed(float_t value) ;

/// @brief Method get_value addr 0x2bdefec size 0x8 virtual false final false
 int32_t get_value() ;

/// @brief Method set_value addr 0x2bdeff4 size 0x8 virtual false final false
 void set_value(int32_t value) ;

/// @brief Method SetValueWithoutNotify addr 0x2bdf10c size 0x8 virtual false final false
 void SetValueWithoutNotify(int32_t input) ;

/// @brief Method Set addr 0x2bdeffc size 0x110 virtual false final false
 void Set(int32_t value, bool sendCallback) ;

static UnityEngine::UI::Dropdown New_ctor() ;

/// @brief Method .ctor addr 0x2bdf114 size 0x104 virtual false final false
 void _ctor() ;

/// @brief Method Awake addr 0x2bdf2e0 size 0xfc virtual true final false
 void Awake() ;

/// @brief Method Start addr 0x2bdf3dc size 0x94 virtual true final false
 void Start() ;

/// @brief Method OnDisable addr 0x2bdf470 size 0x94 virtual true final false
 void OnDisable() ;

/// @brief Method RefreshShownValue addr 0x2bde2fc size 0x1dc virtual false final false
 void RefreshShownValue() ;

/// @brief Method AddOptions addr 0x2bdf674 size 0x68 virtual false final false
 void AddOptions(System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData> options) ;

/// @brief Method AddOptions addr 0x2bdf6dc size 0x15c virtual false final false
 void AddOptions(System::Collections::Generic::List_1<::StringW> options) ;

/// @brief Method AddOptions addr 0x2bdf860 size 0x15c virtual false final false
 void AddOptions(System::Collections::Generic::List_1<UnityEngine::Sprite> options) ;

/// @brief Method ClearOptions addr 0x2bdf9e4 size 0x78 virtual false final false
 void ClearOptions() ;

/// @brief Method SetupTemplate addr 0x2bdfa5c size 0x678 virtual false final false
 void SetupTemplate(UnityEngine::Canvas rootCanvas) ;

/// @brief Method GetOrAddComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetOrAddComponent(UnityEngine::GameObject go) ;

/// @brief Method OnPointerClick addr 0x2be00d4 size 0x4 virtual true final false
 void OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSubmit addr 0x2be0cf0 size 0x4 virtual true final false
 void OnSubmit(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnCancel addr 0x2be0cf4 size 0x4 virtual true final false
 void OnCancel(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Show addr 0x2be00d8 size 0xc18 virtual false final false
 void Show() ;

/// @brief Method CreateBlocker addr 0x2be1210 size 0x4cc virtual true final false
 UnityEngine::GameObject CreateBlocker(UnityEngine::Canvas rootCanvas) ;

/// @brief Method DestroyBlocker addr 0x2be16dc size 0x58 virtual true final false
 void DestroyBlocker(UnityEngine::GameObject blocker) ;

/// @brief Method CreateDropdownList addr 0x2be1734 size 0x6c virtual true final false
 UnityEngine::GameObject CreateDropdownList(UnityEngine::GameObject template) ;

/// @brief Method DestroyDropdownList addr 0x2be17a0 size 0x58 virtual true final false
 void DestroyDropdownList(UnityEngine::GameObject dropdownList) ;

/// @brief Method CreateItem addr 0x2be17f8 size 0x6c virtual true final false
 UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem CreateItem(UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem itemTemplate) ;

/// @brief Method DestroyItem addr 0x2be1864 size 0x4 virtual true final false
 void DestroyItem(UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem item) ;

/// @brief Method AddItem addr 0x2be0dfc size 0x2ec virtual false final false
 UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem AddItem(UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData data, bool selected, UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem itemTemplate, System::Collections::Generic::List_1<UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem> items) ;

/// @brief Method AlphaFadeList addr 0x2be1868 size 0x80 virtual false final false
 void AlphaFadeList(float_t duration, float_t alpha) ;

/// @brief Method AlphaFadeList addr 0x2be10e8 size 0x128 virtual false final false
 void AlphaFadeList(float_t duration, float_t start, float_t end) ;

/// @brief Method SetAlpha addr 0x2be18e8 size 0xb4 virtual false final false
 void SetAlpha(float_t alpha) ;

/// @brief Method Hide addr 0x2be0cf8 size 0xfc virtual false final false
 void Hide() ;

/// @brief Method DelayedDestroyDropdownList addr 0x2be199c size 0x78 virtual false final false
 System::Collections::IEnumerator DelayedDestroyDropdownList(float_t delay) ;

/// @brief Method ImmediateDestroyDropdownList addr 0x2bdf504 size 0x170 virtual false final false
 void ImmediateDestroyDropdownList() ;

/// @brief Method OnSelectItem addr 0x2be1a3c size 0x134 virtual false final false
 void OnSelectItem(UnityEngine::UI::Toggle toggle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::Dropdown);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown, "UnityEngine.UI", "Dropdown");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownEvent, "UnityEngine.UI", "Dropdown/DropdownEvent");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Dropdown__DropdownItem, "UnityEngine.UI", "Dropdown/DropdownItem");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Dropdown__OptionData, "UnityEngine.UI", "Dropdown/OptionData");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Dropdown__OptionDataList);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Dropdown__OptionDataList, "UnityEngine.UI", "Dropdown/OptionDataList");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Dropdown___DelayedDestroyDropdownList_d__75, "UnityEngine.UI", "Dropdown/<DelayedDestroyDropdownList>d__75");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Dropdown____c__DisplayClass63_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Dropdown____c__DisplayClass63_0, "UnityEngine.UI", "Dropdown/<>c__DisplayClass63_0");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Sprite;
}
namespace TMPro {
struct FloatTween;
}
namespace System::Collections {
class IEnumerator;
}
namespace TMPro {
template<typename T>
class TweenRunner_1;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class Coroutine;
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
namespace TMPro {
class TMP_Dropdown;
}
namespace TMPro {
class ____TMPro__TMP_Dropdown__DropdownEvent;
}
namespace TMPro {
class ____TMPro__TMP_Dropdown__DropdownItem;
}
namespace TMPro {
class ____TMPro__TMP_Dropdown__OptionData;
}
namespace TMPro {
class ____TMPro__TMP_Dropdown__OptionDataList;
}
namespace TMPro {
class ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81;
}
namespace TMPro {
class ____TMPro__TMP_Dropdown____c__DisplayClass69_0;
}
// Type: ::DropdownItem
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12289))
// CS Name: TMPro.TMP_Dropdown::DropdownItem
class CORDL_TYPE ____TMPro__TMP_Dropdown__DropdownItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::ICancelHandler
constexpr operator  ::UnityEngine::EventSystems::ICancelHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____TMPro__TMP_Dropdown__DropdownItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown__DropdownItem", modifiers: " const&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown__DropdownItem(____TMPro__TMP_Dropdown__DropdownItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown__DropdownItem", modifiers: "&&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown__DropdownItem(____TMPro__TMP_Dropdown__DropdownItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____TMPro__TMP_Dropdown__DropdownItem(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ____TMPro__TMP_Dropdown__DropdownItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown__DropdownItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown__DropdownItem& operator=(____TMPro__TMP_Dropdown__DropdownItem&& o) noexcept = default;
  constexpr ____TMPro__TMP_Dropdown__DropdownItem& operator=(____TMPro__TMP_Dropdown__DropdownItem const& o) noexcept = default;
                


// Fields

 ::TMPro::TMP_Text __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::TMPro::TMP_Text value) ;

constexpr ::TMPro::TMP_Text __get_m_Text() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get_m_Image, put=__set_m_Image))  m_Image;

constexpr void __set_m_Image(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get_m_Image() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_RectTransform, put=__set_m_RectTransform))  m_RectTransform;

constexpr void __set_m_RectTransform(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_RectTransform() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get_m_Toggle, put=__set_m_Toggle))  m_Toggle;

constexpr void __set_m_Toggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get_m_Toggle() const;


// Properties

 ::TMPro::TMP_Text __declspec(property(get=get_text, put=set_text))  text;

 ::UnityEngine::UI::Image __declspec(property(get=get_image, put=set_image))  image;

 ::UnityEngine::RectTransform __declspec(property(get=get_rectTransform, put=set_rectTransform))  rectTransform;

 ::UnityEngine::UI::Toggle __declspec(property(get=get_toggle, put=set_toggle))  toggle;


// Methods

/// @brief Method get_text addr 0x2a6fbf0 size 0x8 virtual false final false
 ::TMPro::TMP_Text get_text() ;

/// @brief Method set_text addr 0x2a6fbf8 size 0x8 virtual false final false
 void set_text(::TMPro::TMP_Text value) ;

/// @brief Method get_image addr 0x2a6fc00 size 0x8 virtual false final false
 ::UnityEngine::UI::Image get_image() ;

/// @brief Method set_image addr 0x2a6fc08 size 0x8 virtual false final false
 void set_image(::UnityEngine::UI::Image value) ;

/// @brief Method get_rectTransform addr 0x2a6fc10 size 0x8 virtual false final false
 ::UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method set_rectTransform addr 0x2a6fc18 size 0x8 virtual false final false
 void set_rectTransform(::UnityEngine::RectTransform value) ;

/// @brief Method get_toggle addr 0x2a6fc20 size 0x8 virtual false final false
 ::UnityEngine::UI::Toggle get_toggle() ;

/// @brief Method set_toggle addr 0x2a6fc28 size 0x8 virtual false final false
 void set_toggle(::UnityEngine::UI::Toggle value) ;

/// @brief Method OnPointerEnter addr 0x2a6fc30 size 0x7c virtual true final false
 void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnCancel addr 0x2a6fcac size 0xac virtual true final false
 void OnCancel(::UnityEngine::EventSystems::BaseEventData eventData) ;

// Ctor Parameters []
explicit ____TMPro__TMP_Dropdown__DropdownItem() ;

/// @brief Method .ctor addr 0x2a6fd58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::OptionData
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12290))
// CS Name: TMPro.TMP_Dropdown::OptionData
class CORDL_TYPE ____TMPro__TMP_Dropdown__OptionData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____TMPro__TMP_Dropdown__OptionData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown__OptionData", modifiers: " const&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown__OptionData(____TMPro__TMP_Dropdown__OptionData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown__OptionData", modifiers: "&&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown__OptionData(____TMPro__TMP_Dropdown__OptionData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____TMPro__TMP_Dropdown__OptionData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____TMPro__TMP_Dropdown__OptionData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown__OptionData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown__OptionData& operator=(____TMPro__TMP_Dropdown__OptionData&& o) noexcept = default;
  constexpr ____TMPro__TMP_Dropdown__OptionData& operator=(____TMPro__TMP_Dropdown__OptionData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::StringW value) ;

constexpr ::StringW __get_m_Text() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_m_Image, put=__set_m_Image))  m_Image;

constexpr void __set_m_Image(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_m_Image() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 ::UnityEngine::Sprite __declspec(property(get=get_image, put=set_image))  image;


// Methods

/// @brief Method get_text addr 0x2a6fd60 size 0x8 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2a6fd68 size 0x8 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_image addr 0x2a6fd70 size 0x8 virtual false final false
 ::UnityEngine::Sprite get_image() ;

/// @brief Method set_image addr 0x2a6fd78 size 0x8 virtual false final false
 void set_image(::UnityEngine::Sprite value) ;

// Ctor Parameters []
explicit ____TMPro__TMP_Dropdown__OptionData() ;

/// @brief Method .ctor addr 0x2a6cb78 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }]
explicit ____TMPro__TMP_Dropdown__OptionData(::StringW text) ;

/// @brief Method .ctor addr 0x2a6d7d0 size 0x28 virtual false final false
 void _ctor(::StringW text) ;

// Ctor Parameters [CppParam { name: "image", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }]
explicit ____TMPro__TMP_Dropdown__OptionData(::UnityEngine::Sprite image) ;

/// @brief Method .ctor addr 0x2a6d950 size 0x28 virtual false final false
 void _ctor(::UnityEngine::Sprite image) ;

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "image", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }]
explicit ____TMPro__TMP_Dropdown__OptionData(::StringW text, ::UnityEngine::Sprite image) ;

/// @brief Method .ctor addr 0x2a6fd80 size 0x2c virtual false final false
 void _ctor(::StringW text, ::UnityEngine::Sprite image) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::OptionDataList
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12291))
// CS Name: TMPro.TMP_Dropdown::OptionDataList
class CORDL_TYPE ____TMPro__TMP_Dropdown__OptionDataList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____TMPro__TMP_Dropdown__OptionDataList() = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown__OptionDataList", modifiers: " const&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown__OptionDataList(____TMPro__TMP_Dropdown__OptionDataList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown__OptionDataList", modifiers: "&&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown__OptionDataList(____TMPro__TMP_Dropdown__OptionDataList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____TMPro__TMP_Dropdown__OptionDataList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____TMPro__TMP_Dropdown__OptionDataList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown__OptionDataList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown__OptionDataList& operator=(____TMPro__TMP_Dropdown__OptionDataList&& o) noexcept = default;
  constexpr ____TMPro__TMP_Dropdown__OptionDataList& operator=(____TMPro__TMP_Dropdown__OptionDataList const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> __declspec(property(get=__get_m_Options, put=__set_m_Options))  m_Options;

constexpr void __set_m_Options(::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> __get_m_Options() const;


// Properties

 ::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> __declspec(property(get=get_options, put=set_options))  options;


// Methods

/// @brief Method get_options addr 0x2a6fdac size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> get_options() ;

/// @brief Method set_options addr 0x2a6fdb4 size 0x8 virtual false final false
 void set_options(::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> value) ;

// Ctor Parameters []
explicit ____TMPro__TMP_Dropdown__OptionDataList() ;

/// @brief Method .ctor addr 0x2a6d18c size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::DropdownEvent
namespace TMPro {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 92 }), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12292))
// CS Name: TMPro.TMP_Dropdown::DropdownEvent
class CORDL_TYPE ____TMPro__TMP_Dropdown__DropdownEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____TMPro__TMP_Dropdown__DropdownEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown__DropdownEvent", modifiers: " const&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown__DropdownEvent(____TMPro__TMP_Dropdown__DropdownEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown__DropdownEvent", modifiers: "&&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown__DropdownEvent(____TMPro__TMP_Dropdown__DropdownEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____TMPro__TMP_Dropdown__DropdownEvent(void* ptr) noexcept : ::UnityEngine::Events::UnityEvent_1<int32_t>(ptr) {
}


  constexpr ____TMPro__TMP_Dropdown__DropdownEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown__DropdownEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown__DropdownEvent& operator=(____TMPro__TMP_Dropdown__DropdownEvent&& o) noexcept = default;
  constexpr ____TMPro__TMP_Dropdown__DropdownEvent& operator=(____TMPro__TMP_Dropdown__DropdownEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____TMPro__TMP_Dropdown__DropdownEvent() ;

/// @brief Method .ctor addr 0x2a6d20c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<>c__DisplayClass69_0
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12293))
// CS Name: TMPro.TMP_Dropdown::<>c__DisplayClass69_0
class CORDL_TYPE ____TMPro__TMP_Dropdown____c__DisplayClass69_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____TMPro__TMP_Dropdown____c__DisplayClass69_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown____c__DisplayClass69_0", modifiers: " const&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown____c__DisplayClass69_0(____TMPro__TMP_Dropdown____c__DisplayClass69_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown____c__DisplayClass69_0", modifiers: "&&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown____c__DisplayClass69_0(____TMPro__TMP_Dropdown____c__DisplayClass69_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____TMPro__TMP_Dropdown____c__DisplayClass69_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____TMPro__TMP_Dropdown____c__DisplayClass69_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown____c__DisplayClass69_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown____c__DisplayClass69_0& operator=(____TMPro__TMP_Dropdown____c__DisplayClass69_0&& o) noexcept = default;
  constexpr ____TMPro__TMP_Dropdown____c__DisplayClass69_0& operator=(____TMPro__TMP_Dropdown____c__DisplayClass69_0 const& o) noexcept = default;
                


// Fields

 ::TMPro::____TMPro__TMP_Dropdown__DropdownItem __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(::TMPro::____TMPro__TMP_Dropdown__DropdownItem value) ;

constexpr ::TMPro::____TMPro__TMP_Dropdown__DropdownItem __get_item() const;

 ::TMPro::TMP_Dropdown __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::TMPro::TMP_Dropdown value) ;

constexpr ::TMPro::TMP_Dropdown __get___4__this() const;


// Methods

// Ctor Parameters []
explicit ____TMPro__TMP_Dropdown____c__DisplayClass69_0() ;

/// @brief Method .ctor addr 0x2a6edfc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Show>b__0 addr 0x2a6fdbc size 0x24 virtual false final false
 void _Show_b__0(bool x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<DelayedDestroyDropdownList>d__81
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12294))
// CS Name: TMPro.TMP_Dropdown::<DelayedDestroyDropdownList>d__81
class CORDL_TYPE ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81() = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81", modifiers: " const&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81(____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81", modifiers: "&&", def_value: None }]
constexpr ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81(____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81& operator=(____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81&& o) noexcept = default;
  constexpr ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81& operator=(____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81 const& o) noexcept = default;
                


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

 ::TMPro::TMP_Dropdown __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::TMPro::TMP_Dropdown value) ;

constexpr ::TMPro::TMP_Dropdown __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2a6fa1c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2a6fde0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2a6fde4 size 0xac virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2a6fe90 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2a6fe98 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2a6fed8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_Dropdown
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12295))
// CS Name: TMPro.TMP_Dropdown
class CORDL_TYPE TMP_Dropdown : public ::UnityEngine::UI::Selectable {
public:
// Declarations
using _DelayedDestroyDropdownList_d__81 = ::TMPro::____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81;

using __c__DisplayClass69_0 = ::TMPro::____TMPro__TMP_Dropdown____c__DisplayClass69_0;

using DropdownEvent = ::TMPro::____TMPro__TMP_Dropdown__DropdownEvent;

using OptionDataList = ::TMPro::____TMPro__TMP_Dropdown__OptionDataList;

using OptionData = ::TMPro::____TMPro__TMP_Dropdown__OptionData;

using DropdownItem = ::TMPro::____TMPro__TMP_Dropdown__DropdownItem;

/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::ISubmitHandler
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::ICancelHandler
constexpr operator  ::UnityEngine::EventSystems::ICancelHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~TMP_Dropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown", modifiers: " const&", def_value: None }]
constexpr TMP_Dropdown(TMP_Dropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown", modifiers: "&&", def_value: None }]
constexpr TMP_Dropdown(TMP_Dropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Dropdown(void* ptr) noexcept : ::UnityEngine::UI::Selectable(ptr) {
}


  constexpr TMP_Dropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Dropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Dropdown& operator=(TMP_Dropdown&& o) noexcept = default;
  constexpr TMP_Dropdown& operator=(TMP_Dropdown const& o) noexcept = default;
                


// Fields

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_Template, put=__set_m_Template))  m_Template;

constexpr void __set_m_Template(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_Template() const;

 ::TMPro::TMP_Text __declspec(property(get=__get_m_CaptionText, put=__set_m_CaptionText))  m_CaptionText;

constexpr void __set_m_CaptionText(::TMPro::TMP_Text value) ;

constexpr ::TMPro::TMP_Text __get_m_CaptionText() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get_m_CaptionImage, put=__set_m_CaptionImage))  m_CaptionImage;

constexpr void __set_m_CaptionImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get_m_CaptionImage() const;

 ::UnityEngine::UI::Graphic __declspec(property(get=__get_m_Placeholder, put=__set_m_Placeholder))  m_Placeholder;

constexpr void __set_m_Placeholder(::UnityEngine::UI::Graphic value) ;

constexpr ::UnityEngine::UI::Graphic __get_m_Placeholder() const;

 ::TMPro::TMP_Text __declspec(property(get=__get_m_ItemText, put=__set_m_ItemText))  m_ItemText;

constexpr void __set_m_ItemText(::TMPro::TMP_Text value) ;

constexpr ::TMPro::TMP_Text __get_m_ItemText() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get_m_ItemImage, put=__set_m_ItemImage))  m_ItemImage;

constexpr void __set_m_ItemImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get_m_ItemImage() const;

 int32_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(int32_t value) ;

constexpr int32_t __get_m_Value() const;

 ::TMPro::____TMPro__TMP_Dropdown__OptionDataList __declspec(property(get=__get_m_Options, put=__set_m_Options))  m_Options;

constexpr void __set_m_Options(::TMPro::____TMPro__TMP_Dropdown__OptionDataList value) ;

constexpr ::TMPro::____TMPro__TMP_Dropdown__OptionDataList __get_m_Options() const;

 ::TMPro::____TMPro__TMP_Dropdown__DropdownEvent __declspec(property(get=__get_m_OnValueChanged, put=__set_m_OnValueChanged))  m_OnValueChanged;

constexpr void __set_m_OnValueChanged(::TMPro::____TMPro__TMP_Dropdown__DropdownEvent value) ;

constexpr ::TMPro::____TMPro__TMP_Dropdown__DropdownEvent __get_m_OnValueChanged() const;

 float_t __declspec(property(get=__get_m_AlphaFadeSpeed, put=__set_m_AlphaFadeSpeed))  m_AlphaFadeSpeed;

constexpr void __set_m_AlphaFadeSpeed(float_t value) ;

constexpr float_t __get_m_AlphaFadeSpeed() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_m_Dropdown, put=__set_m_Dropdown))  m_Dropdown;

constexpr void __set_m_Dropdown(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_Dropdown() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_m_Blocker, put=__set_m_Blocker))  m_Blocker;

constexpr void __set_m_Blocker(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_Blocker() const;

 ::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__DropdownItem> __declspec(property(get=__get_m_Items, put=__set_m_Items))  m_Items;

constexpr void __set_m_Items(::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__DropdownItem> value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__DropdownItem> __get_m_Items() const;

 ::TMPro::TweenRunner_1<::TMPro::FloatTween> __declspec(property(get=__get_m_AlphaTweenRunner, put=__set_m_AlphaTweenRunner))  m_AlphaTweenRunner;

constexpr void __set_m_AlphaTweenRunner(::TMPro::TweenRunner_1<::TMPro::FloatTween> value) ;

constexpr ::TMPro::TweenRunner_1<::TMPro::FloatTween> __get_m_AlphaTweenRunner() const;

 bool __declspec(property(get=__get_validTemplate, put=__set_validTemplate))  validTemplate;

constexpr void __set_validTemplate(bool value) ;

constexpr bool __get_validTemplate() const;

 ::UnityEngine::Coroutine __declspec(property(get=__get_m_Coroutine, put=__set_m_Coroutine))  m_Coroutine;

constexpr void __set_m_Coroutine(::UnityEngine::Coroutine value) ;

constexpr ::UnityEngine::Coroutine __get_m_Coroutine() const;

static ::TMPro::____TMPro__TMP_Dropdown__OptionData __declspec(property(get=__get_s_NoOptionData, put=__set_s_NoOptionData))  s_NoOptionData;

static void __set_s_NoOptionData(::TMPro::____TMPro__TMP_Dropdown__OptionData value) ;

static ::TMPro::____TMPro__TMP_Dropdown__OptionData __get_s_NoOptionData() ;


// Properties

 ::UnityEngine::RectTransform __declspec(property(get=get_template, put=set_template))  template;

 ::TMPro::TMP_Text __declspec(property(get=get_captionText, put=set_captionText))  captionText;

 ::UnityEngine::UI::Image __declspec(property(get=get_captionImage, put=set_captionImage))  captionImage;

 ::UnityEngine::UI::Graphic __declspec(property(get=get_placeholder, put=set_placeholder))  placeholder;

 ::TMPro::TMP_Text __declspec(property(get=get_itemText, put=set_itemText))  itemText;

 ::UnityEngine::UI::Image __declspec(property(get=get_itemImage, put=set_itemImage))  itemImage;

 ::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> __declspec(property(get=get_options, put=set_options))  options;

 ::TMPro::____TMPro__TMP_Dropdown__DropdownEvent __declspec(property(get=get_onValueChanged, put=set_onValueChanged))  onValueChanged;

 float_t __declspec(property(get=get_alphaFadeSpeed, put=set_alphaFadeSpeed))  alphaFadeSpeed;

 int32_t __declspec(property(get=get_value, put=set_value))  value;

 bool __declspec(property(get=get_IsExpanded))  IsExpanded;


// Methods

/// @brief Method get_template addr 0x2a6ce48 size 0x8 virtual false final false
 ::UnityEngine::RectTransform get_template() ;

/// @brief Method set_template addr 0x2a6cb44 size 0x8 virtual false final false
 void set_template(::UnityEngine::RectTransform value) ;

/// @brief Method get_captionText addr 0x2a6ce50 size 0x8 virtual false final false
 ::TMPro::TMP_Text get_captionText() ;

/// @brief Method set_captionText addr 0x2a6cb4c size 0x8 virtual false final false
 void set_captionText(::TMPro::TMP_Text value) ;

/// @brief Method get_captionImage addr 0x2a6ce58 size 0x8 virtual false final false
 ::UnityEngine::UI::Image get_captionImage() ;

/// @brief Method set_captionImage addr 0x2a6ce60 size 0x8 virtual false final false
 void set_captionImage(::UnityEngine::UI::Image value) ;

/// @brief Method get_placeholder addr 0x2a6ce68 size 0x8 virtual false final false
 ::UnityEngine::UI::Graphic get_placeholder() ;

/// @brief Method set_placeholder addr 0x2a6ce70 size 0x8 virtual false final false
 void set_placeholder(::UnityEngine::UI::Graphic value) ;

/// @brief Method get_itemText addr 0x2a6ce78 size 0x8 virtual false final false
 ::TMPro::TMP_Text get_itemText() ;

/// @brief Method set_itemText addr 0x2a6cb54 size 0x8 virtual false final false
 void set_itemText(::TMPro::TMP_Text value) ;

/// @brief Method get_itemImage addr 0x2a6ce80 size 0x8 virtual false final false
 ::UnityEngine::UI::Image get_itemImage() ;

/// @brief Method set_itemImage addr 0x2a6ce88 size 0x8 virtual false final false
 void set_itemImage(::UnityEngine::UI::Image value) ;

/// @brief Method get_options addr 0x2a6cb5c size 0x1c virtual false final false
 ::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> get_options() ;

/// @brief Method set_options addr 0x2a6ce90 size 0x1c virtual false final false
 void set_options(::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> value) ;

/// @brief Method get_onValueChanged addr 0x2a6ceac size 0x8 virtual false final false
 ::TMPro::____TMPro__TMP_Dropdown__DropdownEvent get_onValueChanged() ;

/// @brief Method set_onValueChanged addr 0x2a6ceb4 size 0x8 virtual false final false
 void set_onValueChanged(::TMPro::____TMPro__TMP_Dropdown__DropdownEvent value) ;

/// @brief Method get_alphaFadeSpeed addr 0x2a6cebc size 0x8 virtual false final false
 float_t get_alphaFadeSpeed() ;

/// @brief Method set_alphaFadeSpeed addr 0x2a6cec4 size 0x8 virtual false final false
 void set_alphaFadeSpeed(float_t value) ;

/// @brief Method get_value addr 0x2a6cecc size 0x8 virtual false final false
 int32_t get_value() ;

/// @brief Method set_value addr 0x2a6ced4 size 0x8 virtual false final false
 void set_value(int32_t value) ;

/// @brief Method SetValueWithoutNotify addr 0x2a6d020 size 0x8 virtual false final false
 void SetValueWithoutNotify(int32_t input) ;

/// @brief Method SetValue addr 0x2a6cedc size 0x144 virtual false final false
 void SetValue(int32_t value, bool sendCallback) ;

/// @brief Method get_IsExpanded addr 0x2a6d028 size 0x60 virtual false final false
 bool get_IsExpanded() ;

// Ctor Parameters []
explicit TMP_Dropdown() ;

/// @brief Method .ctor addr 0x2a6d088 size 0x104 virtual false final false
 void _ctor() ;

/// @brief Method Awake addr 0x2a6d254 size 0xfc virtual true final false
 void Awake() ;

/// @brief Method Start addr 0x2a6d350 size 0x94 virtual true final false
 void Start() ;

/// @brief Method OnDisable addr 0x2a6d3e4 size 0x94 virtual true final false
 void OnDisable() ;

/// @brief Method RefreshShownValue addr 0x2a6cb80 size 0x238 virtual false final false
 void RefreshShownValue() ;

/// @brief Method AddOptions addr 0x2a6d610 size 0x68 virtual false final false
 void AddOptions(::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__OptionData> options) ;

/// @brief Method AddOptions addr 0x2a6d678 size 0x158 virtual false final false
 void AddOptions(::System::Collections::Generic::List_1<::StringW> options) ;

/// @brief Method AddOptions addr 0x2a6d7f8 size 0x158 virtual false final false
 void AddOptions(::System::Collections::Generic::List_1<::UnityEngine::Sprite> options) ;

/// @brief Method ClearOptions addr 0x2a6d978 size 0xb0 virtual false final false
 void ClearOptions() ;

/// @brief Method SetupTemplate addr 0x2a6da28 size 0x65c virtual false final false
 void SetupTemplate() ;

/// @brief Method GetOrAddComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetOrAddComponent(::UnityEngine::GameObject go) ;

/// @brief Method OnPointerClick addr 0x2a6e084 size 0x4 virtual true final false
 void OnPointerClick(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSubmit addr 0x2a6ece0 size 0x4 virtual true final false
 void OnSubmit(::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnCancel addr 0x2a6ece4 size 0x4 virtual true final false
 void OnCancel(::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Show addr 0x2a6e088 size 0xc58 virtual false final false
 void Show() ;

/// @brief Method CreateBlocker addr 0x2a6f218 size 0x4cc virtual true final false
 ::UnityEngine::GameObject CreateBlocker(::UnityEngine::Canvas rootCanvas) ;

/// @brief Method DestroyBlocker addr 0x2a6f6e4 size 0x58 virtual true final false
 void DestroyBlocker(::UnityEngine::GameObject blocker) ;

/// @brief Method CreateDropdownList addr 0x2a6f73c size 0x6c virtual true final false
 ::UnityEngine::GameObject CreateDropdownList(::UnityEngine::GameObject template) ;

/// @brief Method DestroyDropdownList addr 0x2a6f7a8 size 0x58 virtual true final false
 void DestroyDropdownList(::UnityEngine::GameObject dropdownList) ;

/// @brief Method CreateItem addr 0x2a6f800 size 0x6c virtual true final false
 ::TMPro::____TMPro__TMP_Dropdown__DropdownItem CreateItem(::TMPro::____TMPro__TMP_Dropdown__DropdownItem itemTemplate) ;

/// @brief Method DestroyItem addr 0x2a6f86c size 0x4 virtual true final false
 void DestroyItem(::TMPro::____TMPro__TMP_Dropdown__DropdownItem item) ;

/// @brief Method AddItem addr 0x2a6ee04 size 0x2f0 virtual false final false
 ::TMPro::____TMPro__TMP_Dropdown__DropdownItem AddItem(::TMPro::____TMPro__TMP_Dropdown__OptionData data, bool selected, ::TMPro::____TMPro__TMP_Dropdown__DropdownItem itemTemplate, ::System::Collections::Generic::List_1<::TMPro::____TMPro__TMP_Dropdown__DropdownItem> items) ;

/// @brief Method AlphaFadeList addr 0x2a6f870 size 0x80 virtual false final false
 void AlphaFadeList(float_t duration, float_t alpha) ;

/// @brief Method AlphaFadeList addr 0x2a6f0f4 size 0x124 virtual false final false
 void AlphaFadeList(float_t duration, float_t start, float_t end) ;

/// @brief Method SetAlpha addr 0x2a6f8f0 size 0xb4 virtual false final false
 void SetAlpha(float_t alpha) ;

/// @brief Method Hide addr 0x2a6ece8 size 0x114 virtual false final false
 void Hide() ;

/// @brief Method DelayedDestroyDropdownList addr 0x2a6f9a4 size 0x78 virtual false final false
 ::System::Collections::IEnumerator DelayedDestroyDropdownList(float_t delay) ;

/// @brief Method ImmediateDestroyDropdownList addr 0x2a6d478 size 0x198 virtual false final false
 void ImmediateDestroyDropdownList() ;

/// @brief Method OnSelectItem addr 0x2a6fa44 size 0x134 virtual false final false
 void OnSelectItem(::UnityEngine::UI::Toggle toggle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_Dropdown);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown, "TMPro", "TMP_Dropdown");
NEED_NO_BOX(::TMPro::____TMPro__TMP_Dropdown__DropdownEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::____TMPro__TMP_Dropdown__DropdownEvent, "TMPro", "TMP_Dropdown/DropdownEvent");
NEED_NO_BOX(::TMPro::____TMPro__TMP_Dropdown__DropdownItem);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::____TMPro__TMP_Dropdown__DropdownItem, "TMPro", "TMP_Dropdown/DropdownItem");
NEED_NO_BOX(::TMPro::____TMPro__TMP_Dropdown__OptionData);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::____TMPro__TMP_Dropdown__OptionData, "TMPro", "TMP_Dropdown/OptionData");
NEED_NO_BOX(::TMPro::____TMPro__TMP_Dropdown__OptionDataList);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::____TMPro__TMP_Dropdown__OptionDataList, "TMPro", "TMP_Dropdown/OptionDataList");
NEED_NO_BOX(::TMPro::____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::____TMPro__TMP_Dropdown___DelayedDestroyDropdownList_d__81, "TMPro", "TMP_Dropdown/<DelayedDestroyDropdownList>d__81");
NEED_NO_BOX(::TMPro::____TMPro__TMP_Dropdown____c__DisplayClass69_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::____TMPro__TMP_Dropdown____c__DisplayClass69_0, "TMPro", "TMP_Dropdown/<>c__DisplayClass69_0");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__Interactable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::UI {
class Image;
}
namespace HMUI {
class TableView;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace GlobalNamespace {
class ____GlobalNamespace__AlphabetScrollInfo__Data;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace HMUI {
class AlphabetScrollbar;
}
namespace HMUI {
class ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18;
}
// Type: ::<PointerMoveInsideCoroutine>d__18
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13560))
// CS Name: HMUI.AlphabetScrollbar::<PointerMoveInsideCoroutine>d__18
class CORDL_TYPE ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18() = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18", modifiers: " const&", def_value: None }]
constexpr ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18(____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18", modifiers: "&&", def_value: None }]
constexpr ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18(____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18& operator=(____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18&& o) noexcept = default;
  constexpr ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18& operator=(____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::HMUI::AlphabetScrollbar __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::HMUI::AlphabetScrollbar value) ;

constexpr ::HMUI::AlphabetScrollbar __get___4__this() const;

 ::UnityEngine::EventSystems::PointerEventData __declspec(property(get=__get_eventData, put=__set_eventData))  eventData;

constexpr void __set_eventData(::UnityEngine::EventSystems::PointerEventData value) ;

constexpr ::UnityEngine::EventSystems::PointerEventData __get_eventData() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fa507c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fa50e0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fa50e4 size 0x134 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fa5218 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fa5220 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fa5260 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::AlphabetScrollbar
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13590))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13561))
// CS Name: HMUI.AlphabetScrollbar
class CORDL_TYPE AlphabetScrollbar : public ::HMUI::Interactable {
public:
// Declarations
using _PointerMoveInsideCoroutine_d__18 = ::HMUI::____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18;

/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerDownHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerUpHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~AlphabetScrollbar() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar", modifiers: " const&", def_value: None }]
constexpr AlphabetScrollbar(AlphabetScrollbar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbar", modifiers: "&&", def_value: None }]
constexpr AlphabetScrollbar(AlphabetScrollbar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlphabetScrollbar(void* ptr) noexcept : ::HMUI::Interactable(ptr) {
}


  constexpr AlphabetScrollbar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlphabetScrollbar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlphabetScrollbar& operator=(AlphabetScrollbar&& o) noexcept = default;
  constexpr AlphabetScrollbar& operator=(AlphabetScrollbar const& o) noexcept = default;
                


// Fields

 ::HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(::HMUI::TableView value) ;

constexpr ::HMUI::TableView __get__tableView() const;

 float_t __declspec(property(get=__get__characterHeight, put=__set__characterHeight))  _characterHeight;

constexpr void __set__characterHeight(float_t value) ;

constexpr float_t __get__characterHeight() const;

 ::UnityEngine::Color __declspec(property(get=__get__normalColor, put=__set__normalColor))  _normalColor;

constexpr void __set__normalColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__normalColor() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__textPrefab, put=__set__textPrefab))  _textPrefab;

constexpr void __set__textPrefab(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__textPrefab() const;

 ::ArrayW<::TMPro::TextMeshProUGUI> __declspec(property(get=__get__prealocatedTexts, put=__set__prealocatedTexts))  _prealocatedTexts;

constexpr void __set__prealocatedTexts(::ArrayW<::TMPro::TextMeshProUGUI> value) ;

constexpr ::ArrayW<::TMPro::TextMeshProUGUI> __get__prealocatedTexts() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__highlightImage, put=__set__highlightImage))  _highlightImage;

constexpr void __set__highlightImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__highlightImage() const;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data> __declspec(property(get=__get__characterScrollData, put=__set__characterScrollData))  _characterScrollData;

constexpr void __set__characterScrollData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data> __get__characterScrollData() const;

 ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI> __declspec(property(get=__get__texts, put=__set__texts))  _texts;

constexpr void __set__texts(::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI> value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI> __get__texts() const;

 int32_t __declspec(property(get=__get__highlightedCharacterIndex, put=__set__highlightedCharacterIndex))  _highlightedCharacterIndex;

constexpr void __set__highlightedCharacterIndex(int32_t value) ;

constexpr int32_t __get__highlightedCharacterIndex() const;

 bool __declspec(property(get=__get__pointerIsDown, put=__set__pointerIsDown))  _pointerIsDown;

constexpr void __set__pointerIsDown(bool value) ;

constexpr bool __get__pointerIsDown() const;


// Methods

/// @brief Method Awake addr 0x1fa4258 size 0x20 virtual false final false
 void Awake() ;

/// @brief Method SetData addr 0x1fa4278 size 0x26c virtual false final false
 void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data> characterScrollData) ;

/// @brief Method OnPointerDown addr 0x1fa4ab4 size 0xe4 virtual true final true
 void OnPointerDown(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerUp addr 0x1fa4e68 size 0x8 virtual true final true
 void OnPointerUp(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerEnter addr 0x1fa4e70 size 0x20 virtual true final true
 void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x1fa4f04 size 0x24 virtual true final true
 void OnPointerExit(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method PrepareTransforms addr 0x1fa4598 size 0x51c virtual false final false
 void PrepareTransforms() ;

/// @brief Method RefreshHighlight addr 0x1fa4f28 size 0x154 virtual false final false
 void RefreshHighlight() ;

/// @brief Method PointerMoveInsideCoroutine addr 0x1fa4e90 size 0x74 virtual false final false
 ::System::Collections::IEnumerator PointerMoveInsideCoroutine(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method GetPointerCharacterIndex addr 0x1fa4b98 size 0x2d0 virtual false final false
 int32_t GetPointerCharacterIndex(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method InitText addr 0x1fa44e4 size 0xb4 virtual false final false
 void InitText(::TMPro::TextMeshProUGUI text, char16_t character) ;

// Ctor Parameters []
explicit AlphabetScrollbar() ;

/// @brief Method .ctor addr 0x1fa50a4 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::AlphabetScrollbar);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AlphabetScrollbar, "HMUI", "AlphabetScrollbar");
NEED_NO_BOX(::HMUI::____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::____HMUI__AlphabetScrollbar___PointerMoveInsideCoroutine_d__18, "HMUI", "AlphabetScrollbar/<PointerMoveInsideCoroutine>d__18");

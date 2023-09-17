#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class RectTransform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace GlobalNamespace {
class PageControlElement;
}
// Forward declare root types
namespace GlobalNamespace {
class PageControl;
}
// Type: ::PageControl
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5894))
// CS Name: PageControl
class CORDL_TYPE PageControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PageControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "PageControl", modifiers: " const&", def_value: None }]
constexpr PageControl(PageControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PageControl", modifiers: "&&", def_value: None }]
constexpr PageControl(PageControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PageControl(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PageControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PageControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PageControl& operator=(PageControl&& o) noexcept = default;
  constexpr PageControl& operator=(PageControl const& o) noexcept = default;
                


// Fields

 ::UnityEngine::RectTransform __declspec(property(get=__get__content, put=__set__content))  _content;

constexpr void __set__content(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__content() const;

 float_t __declspec(property(get=__get__spacing, put=__set__spacing))  _spacing;

constexpr void __set__spacing(float_t value) ;

constexpr float_t __get__spacing() const;

 ::GlobalNamespace::PageControlElement __declspec(property(get=__get__elementPrefab, put=__set__elementPrefab))  _elementPrefab;

constexpr void __set__elementPrefab(::GlobalNamespace::PageControlElement value) ;

constexpr ::GlobalNamespace::PageControlElement __get__elementPrefab() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement> __declspec(property(get=__get__activeElements, put=__set__activeElements))  _activeElements;

constexpr void __set__activeElements(::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement> __get__activeElements() const;

 ::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement> __declspec(property(get=__get__inactiveElements, put=__set__inactiveElements))  _inactiveElements;

constexpr void __set__inactiveElements(::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement> value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement> __get__inactiveElements() const;

 int32_t __declspec(property(get=__get__selectedPage, put=__set__selectedPage))  _selectedPage;

constexpr void __set__selectedPage(int32_t value) ;

constexpr int32_t __get__selectedPage() const;

 int32_t __declspec(property(get=__get__pagesCount, put=__set__pagesCount))  _pagesCount;

constexpr void __set__pagesCount(int32_t value) ;

constexpr int32_t __get__pagesCount() const;


// Methods

/// @brief Method SetPagesCount addr 0x218e64c size 0x3d0 virtual false final false
 void SetPagesCount(int32_t pagesCount) ;

/// @brief Method SetSelectedPageIndex addr 0x218ea80 size 0xc8 virtual false final false
 void SetSelectedPageIndex(int32_t page) ;

/// @brief Method SetVisible addr 0x218eb48 size 0x30 virtual false final false
 void SetVisible(bool isVisible) ;

// Ctor Parameters []
explicit PageControl() ;

/// @brief Method .ctor addr 0x218eb78 size 0xd0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PageControl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PageControl, "", "PageControl");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
class ImageView;
}
// Forward declare root types
namespace GlobalNamespace {
class PageControlElement;
}
// Type: ::PageControlElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5895))
// CS Name: PageControlElement
class CORDL_TYPE PageControlElement : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PageControlElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "PageControlElement", modifiers: " const&", def_value: None }]
constexpr PageControlElement(PageControlElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PageControlElement", modifiers: "&&", def_value: None }]
constexpr PageControlElement(PageControlElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PageControlElement(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PageControlElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PageControlElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PageControlElement& operator=(PageControlElement&& o) noexcept = default;
  constexpr PageControlElement& operator=(PageControlElement const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get__rectTransform, put=__set__rectTransform))  _rectTransform;

constexpr void __set__rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__rectTransform() const;

 HMUI::ImageView __declspec(property(get=__get__imageView, put=__set__imageView))  _imageView;

constexpr void __set__imageView(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__imageView() const;

 UnityEngine::Color __declspec(property(get=__get__selectedColor, put=__set__selectedColor))  _selectedColor;

constexpr void __set__selectedColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__selectedColor() const;

 UnityEngine::Color __declspec(property(get=__get__unselectedColor, put=__set__unselectedColor))  _unselectedColor;

constexpr void __set__unselectedColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__unselectedColor() const;


// Properties

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;


// Methods

/// @brief Method get_rectTransform addr 0x218ec48 size 0x8 virtual false final false
 UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method SetSelected addr 0x218ea1c size 0x64 virtual false final false
 void SetSelected(bool isSelected) ;

// Ctor Parameters []
explicit PageControlElement() ;

/// @brief Method .ctor addr 0x218ec50 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PageControlElement);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PageControlElement, "", "PageControlElement");

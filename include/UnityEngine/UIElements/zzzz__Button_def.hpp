#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class Clickable;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Button;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Button__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Button__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6899))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7222))
// CS Name: UnityEngine.UIElements.Button::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__Button__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__Button__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Button__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Button__UxmlTraits(UnityEngine__UIElements__Button__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Button__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Button__UxmlTraits(UnityEngine__UIElements__Button__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Button__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__Button__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Button__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Button__UxmlTraits& operator=(UnityEngine__UIElements__Button__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Button__UxmlTraits& operator=(UnityEngine__UIElements__Button__UxmlTraits const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__Button__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cc369c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Button
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6900))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7223))
// CS Name: UnityEngine.UIElements.Button
class CORDL_TYPE Button : public UnityEngine::UIElements::TextElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__Button__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__Button__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x480};

virtual ~Button() = default;

// Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: " const&", def_value: None }]
constexpr Button(Button const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "&&", def_value: None }]
constexpr Button(Button&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Button(void* ptr) noexcept : UnityEngine::UIElements::TextElement(ptr) {
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

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

 UnityEngine::UIElements::Clickable __declspec(property(get=__get_m_Clickable, put=__set_m_Clickable))  m_Clickable;

constexpr void __set_m_Clickable(UnityEngine::UIElements::Clickable value) ;

constexpr UnityEngine::UIElements::Clickable __get_m_Clickable() const;

static ::StringW __declspec(property(get=__get_NonEmptyString, put=__set_NonEmptyString))  NonEmptyString;

static void __set_NonEmptyString(::StringW value) ;

static ::StringW __get_NonEmptyString() ;


// Properties

 UnityEngine::UIElements::Clickable __declspec(property(get=get_clickable, put=set_clickable))  clickable;


// Methods

/// @brief Method get_clickable addr 0x2cc3348 size 0x8 virtual false final false
 UnityEngine::UIElements::Clickable get_clickable() ;

/// @brief Method set_clickable addr 0x2cc3350 size 0x64 virtual false final false
 void set_clickable(UnityEngine::UIElements::Clickable value) ;

// Ctor Parameters []
explicit Button() ;

/// @brief Method .ctor addr 0x2cc33b4 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "clickEvent", ty: "System::Action", modifiers: "", def_value: None }]
explicit Button(System::Action clickEvent) ;

/// @brief Method .ctor addr 0x2cb6224 size 0x1c8 virtual false final false
 void _ctor(System::Action clickEvent) ;

/// @brief Method OnNavigationSubmit addr 0x2cc33bc size 0x38 virtual false final false
 void OnNavigationSubmit(UnityEngine::UIElements::NavigationSubmitEvent evt) ;

/// @brief Method OnKeyDown addr 0x2cc33f4 size 0x118 virtual false final false
 void OnKeyDown(UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method DoMeasure addr 0x2cc350c size 0xbc virtual true final false
 UnityEngine::Vector2 DoMeasure(float_t desiredWidth, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t desiredHeight, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode heightMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7223)), TypeDefinitionIndex(TypeDefinitionIndex(7222)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5084 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7221))
// CS Name: UnityEngine.UIElements.Button::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__Button__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Button,UnityEngine::UIElements::UnityEngine__UIElements__Button__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__Button__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Button__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Button__UxmlFactory(UnityEngine__UIElements__Button__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Button__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Button__UxmlFactory(UnityEngine__UIElements__Button__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Button__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Button,UnityEngine::UIElements::UnityEngine__UIElements__Button__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__Button__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Button__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Button__UxmlFactory& operator=(UnityEngine__UIElements__Button__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Button__UxmlFactory& operator=(UnityEngine__UIElements__Button__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__Button__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cc3654 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::Button);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Button, "UnityEngine.UIElements", "Button");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Button__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Button__UxmlFactory, "UnityEngine.UIElements", "Button/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Button__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Button__UxmlTraits, "UnityEngine.UIElements", "Button/UxmlTraits");

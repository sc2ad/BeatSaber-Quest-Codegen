#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class Clickable;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlLongAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RepeatButton;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__RepeatButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__RepeatButton__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6899))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7146))
// CS Name: UnityEngine.UIElements.RepeatButton::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__RepeatButton__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~UnityEngine__UIElements__RepeatButton__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__RepeatButton__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__RepeatButton__UxmlTraits(UnityEngine__UIElements__RepeatButton__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__RepeatButton__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__RepeatButton__UxmlTraits(UnityEngine__UIElements__RepeatButton__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__RepeatButton__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__RepeatButton__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__RepeatButton__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__RepeatButton__UxmlTraits& operator=(UnityEngine__UIElements__RepeatButton__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__RepeatButton__UxmlTraits& operator=(UnityEngine__UIElements__RepeatButton__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlLongAttributeDescription __declspec(property(get=__get_m_Delay, put=__set_m_Delay))  m_Delay;

constexpr void __set_m_Delay(UnityEngine::UIElements::UxmlLongAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlLongAttributeDescription __get_m_Delay() const;

 UnityEngine::UIElements::UxmlLongAttributeDescription __declspec(property(get=__get_m_Interval, put=__set_m_Interval))  m_Interval;

constexpr void __set_m_Interval(UnityEngine::UIElements::UxmlLongAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlLongAttributeDescription __get_m_Interval() const;


// Methods

/// @brief Method Init addr 0x2cb0998 size 0x134 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__RepeatButton__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cb0acc size 0xc4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::RepeatButton
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6900))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7147))
// CS Name: UnityEngine.UIElements.RepeatButton
class CORDL_TYPE RepeatButton : public UnityEngine::UIElements::TextElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__RepeatButton__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__RepeatButton__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x480};

virtual ~RepeatButton() = default;

// Ctor Parameters [CppParam { name: "", ty: "RepeatButton", modifiers: " const&", def_value: None }]
constexpr RepeatButton(RepeatButton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RepeatButton", modifiers: "&&", def_value: None }]
constexpr RepeatButton(RepeatButton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RepeatButton(void* ptr) noexcept : UnityEngine::UIElements::TextElement(ptr) {
}


  constexpr RepeatButton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RepeatButton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RepeatButton& operator=(RepeatButton&& o) noexcept = default;
  constexpr RepeatButton& operator=(RepeatButton const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::Clickable __declspec(property(get=__get_m_Clickable, put=__set_m_Clickable))  m_Clickable;

constexpr void __set_m_Clickable(UnityEngine::UIElements::Clickable value) ;

constexpr UnityEngine::UIElements::Clickable __get_m_Clickable() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;


// Methods

// Ctor Parameters []
explicit RepeatButton() ;

/// @brief Method .ctor addr 0x2cb0778 size 0x94 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "clickEvent", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "interval", ty: "int64_t", modifiers: "", def_value: None }]
explicit RepeatButton(System::Action clickEvent, int64_t delay, int64_t interval) ;

/// @brief Method .ctor addr 0x2cb080c size 0x40 virtual false final false
 void _ctor(System::Action clickEvent, int64_t delay, int64_t interval) ;

/// @brief Method SetAction addr 0x2cb084c size 0xa4 virtual false final false
 void SetAction(System::Action clickEvent, int64_t delay, int64_t interval) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7146)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(7147)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5100 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7145))
// CS Name: UnityEngine.UIElements.RepeatButton::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__RepeatButton__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::RepeatButton,UnityEngine::UIElements::UnityEngine__UIElements__RepeatButton__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__RepeatButton__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__RepeatButton__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__RepeatButton__UxmlFactory(UnityEngine__UIElements__RepeatButton__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__RepeatButton__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__RepeatButton__UxmlFactory(UnityEngine__UIElements__RepeatButton__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__RepeatButton__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::RepeatButton,UnityEngine::UIElements::UnityEngine__UIElements__RepeatButton__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__RepeatButton__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__RepeatButton__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__RepeatButton__UxmlFactory& operator=(UnityEngine__UIElements__RepeatButton__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__RepeatButton__UxmlFactory& operator=(UnityEngine__UIElements__RepeatButton__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__RepeatButton__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cb0950 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::RepeatButton);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::RepeatButton, "UnityEngine.UIElements", "RepeatButton");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__RepeatButton__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__RepeatButton__UxmlFactory, "UnityEngine.UIElements", "RepeatButton/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__RepeatButton__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__RepeatButton__UxmlTraits, "UnityEngine.UIElements", "RepeatButton/UxmlTraits");

#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__Label__UxmlFactory;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__Label__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6899))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7131))
// CS Name: UnityEngine.UIElements.Label::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__Label__UxmlTraits : public ::UnityEngine::UIElements::____UnityEngine__UIElements__TextElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~____UnityEngine__UIElements__Label__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__Label__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__Label__UxmlTraits(____UnityEngine__UIElements__Label__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__Label__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__Label__UxmlTraits(____UnityEngine__UIElements__Label__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__Label__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__TextElement__UxmlTraits(ptr) {
}


  constexpr ____UnityEngine__UIElements__Label__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__Label__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__Label__UxmlTraits& operator=(____UnityEngine__UIElements__Label__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__Label__UxmlTraits& operator=(____UnityEngine__UIElements__Label__UxmlTraits const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__Label__UxmlTraits() ;

/// @brief Method .ctor addr 0x2ca6e7c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Label
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6900))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7132))
// CS Name: UnityEngine.UIElements.Label
class CORDL_TYPE Label : public ::UnityEngine::UIElements::TextElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__Label__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::____UnityEngine__UIElements__Label__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x478};

virtual ~Label() = default;

// Ctor Parameters [CppParam { name: "", ty: "Label", modifiers: " const&", def_value: None }]
constexpr Label(Label const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Label", modifiers: "&&", def_value: None }]
constexpr Label(Label&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Label(void* ptr) noexcept : ::UnityEngine::UIElements::TextElement(ptr) {
}


  constexpr Label& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Label& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Label& operator=(Label&& o) noexcept = default;
  constexpr Label& operator=(Label const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;


// Methods

// Ctor Parameters []
explicit Label() ;

/// @brief Method .ctor addr 0x2ca6dcc size 0x50 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }]
explicit Label(::StringW text) ;

/// @brief Method .ctor addr 0x2c9c644 size 0xb8 virtual false final false
 void _ctor(::StringW text) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5093 }), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(7132)), TypeDefinitionIndex(TypeDefinitionIndex(7131))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7130))
// CS Name: UnityEngine.UIElements.Label::UxmlFactory
class CORDL_TYPE ____UnityEngine__UIElements__Label__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Label,::UnityEngine::UIElements::____UnityEngine__UIElements__Label__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__Label__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__Label__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__Label__UxmlFactory(____UnityEngine__UIElements__Label__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__Label__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__Label__UxmlFactory(____UnityEngine__UIElements__Label__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__Label__UxmlFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Label,::UnityEngine::UIElements::____UnityEngine__UIElements__Label__UxmlTraits>(ptr) {
}


  constexpr ____UnityEngine__UIElements__Label__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__Label__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__Label__UxmlFactory& operator=(____UnityEngine__UIElements__Label__UxmlFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__Label__UxmlFactory& operator=(____UnityEngine__UIElements__Label__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__Label__UxmlFactory() ;

/// @brief Method .ctor addr 0x2c9a3c4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::Label);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Label, "UnityEngine.UIElements", "Label");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__Label__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__Label__UxmlFactory, "UnityEngine.UIElements", "Label/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__Label__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__Label__UxmlTraits, "UnityEngine.UIElements", "Label/UxmlTraits");

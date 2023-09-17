#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__AbstractProgressBar_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class ProgressBar;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__ProgressBar__UxmlFactory;
}
// Type: UnityEngine.UIElements::ProgressBar
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7215))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7217))
// CS Name: UnityEngine.UIElements.ProgressBar
class CORDL_TYPE ProgressBar : public ::UnityEngine::UIElements::AbstractProgressBar {
public:
// Declarations
using UxmlFactory = ::UnityEngine::UIElements::____UnityEngine__UIElements__ProgressBar__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3e8};

virtual ~ProgressBar() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: " const&", def_value: None }]
constexpr ProgressBar(ProgressBar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "&&", def_value: None }]
constexpr ProgressBar(ProgressBar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProgressBar(void* ptr) noexcept : ::UnityEngine::UIElements::AbstractProgressBar(ptr) {
}


  constexpr ProgressBar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProgressBar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProgressBar& operator=(ProgressBar&& o) noexcept = default;
  constexpr ProgressBar& operator=(ProgressBar const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ProgressBar() ;

/// @brief Method .ctor addr 0x2cc227c size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7217)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(7214)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5097 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7216))
// CS Name: UnityEngine.UIElements.ProgressBar::UxmlFactory
class CORDL_TYPE ____UnityEngine__UIElements__ProgressBar__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ProgressBar,::UnityEngine::UIElements::____UnityEngine__UIElements__AbstractProgressBar__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__ProgressBar__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ProgressBar__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__ProgressBar__UxmlFactory(____UnityEngine__UIElements__ProgressBar__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ProgressBar__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__ProgressBar__UxmlFactory(____UnityEngine__UIElements__ProgressBar__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__ProgressBar__UxmlFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ProgressBar,::UnityEngine::UIElements::____UnityEngine__UIElements__AbstractProgressBar__UxmlTraits>(ptr) {
}


  constexpr ____UnityEngine__UIElements__ProgressBar__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ProgressBar__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ProgressBar__UxmlFactory& operator=(____UnityEngine__UIElements__ProgressBar__UxmlFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__ProgressBar__UxmlFactory& operator=(____UnityEngine__UIElements__ProgressBar__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__ProgressBar__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cc22d0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ProgressBar, "UnityEngine.UIElements", "ProgressBar");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__ProgressBar__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__ProgressBar__UxmlFactory, "UnityEngine.UIElements", "ProgressBar/UxmlFactory");

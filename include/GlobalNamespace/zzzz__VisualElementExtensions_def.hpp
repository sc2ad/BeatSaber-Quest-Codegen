#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
class VisualElementExtensions;
}
// Type: ::VisualElementExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15940))
// CS Name: VisualElementExtensions
class CORDL_TYPE VisualElementExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VisualElementExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: " const&", def_value: None }]
constexpr VisualElementExtensions(VisualElementExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: "&&", def_value: None }]
constexpr VisualElementExtensions(VisualElementExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VisualElementExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementExtensions& operator=(VisualElementExtensions&& o) noexcept = default;
  constexpr VisualElementExtensions& operator=(VisualElementExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method RemoveAllChildren addr 0x287b3c8 size 0x50 virtual false final false
static void RemoveAllChildren(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method GetChildren addr 0x287b418 size 0x144 virtual false final false
static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement> GetChildren(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method IsHidden addr 0x287b55c size 0xfc virtual false final false
static bool IsHidden(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method Hide addr 0x287b658 size 0xdc virtual false final false
static void Hide(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method Show addr 0x287b734 size 0xdc virtual false final false
static void Show(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method ToggleDisplay addr 0x287b810 size 0x124 virtual false final false
static void ToggleDisplay(::UnityEngine::UIElements::VisualElement ve) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::VisualElementExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VisualElementExtensions, "", "VisualElementExtensions");

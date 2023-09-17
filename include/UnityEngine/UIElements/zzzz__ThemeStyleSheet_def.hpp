#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class ThemeStyleSheet;
}
// Type: UnityEngine.UIElements::ThemeStyleSheet
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7378))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7372))
// CS Name: UnityEngine.UIElements.ThemeStyleSheet
class CORDL_TYPE ThemeStyleSheet : public ::UnityEngine::UIElements::StyleSheet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~ThemeStyleSheet() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThemeStyleSheet", modifiers: " const&", def_value: None }]
constexpr ThemeStyleSheet(ThemeStyleSheet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThemeStyleSheet", modifiers: "&&", def_value: None }]
constexpr ThemeStyleSheet(ThemeStyleSheet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThemeStyleSheet(void* ptr) noexcept : ::UnityEngine::UIElements::StyleSheet(ptr) {
}


  constexpr ThemeStyleSheet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThemeStyleSheet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThemeStyleSheet& operator=(ThemeStyleSheet&& o) noexcept = default;
  constexpr ThemeStyleSheet& operator=(ThemeStyleSheet const& o) noexcept = default;
                


// Methods

/// @brief Method OnEnable addr 0x2cf3d84 size 0x1c virtual true final false
 void OnEnable() ;

// Ctor Parameters []
explicit ThemeStyleSheet() ;

/// @brief Method .ctor addr 0x2cf3f04 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ThemeStyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ThemeStyleSheet, "UnityEngine.UIElements", "ThemeStyleSheet");

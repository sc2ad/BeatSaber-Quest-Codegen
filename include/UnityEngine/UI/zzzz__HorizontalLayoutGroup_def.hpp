#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UI {
class HorizontalLayoutGroup;
}
// Type: UnityEngine.UI::HorizontalLayoutGroup
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13022))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13021))
// CS Name: UnityEngine.UI.HorizontalLayoutGroup
class CORDL_TYPE HorizontalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HorizontalLayoutGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "HorizontalLayoutGroup", modifiers: " const&", def_value: None }]
constexpr HorizontalLayoutGroup(HorizontalLayoutGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HorizontalLayoutGroup", modifiers: "&&", def_value: None }]
constexpr HorizontalLayoutGroup(HorizontalLayoutGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HorizontalLayoutGroup(void* ptr) noexcept : ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup(ptr) {
}


  constexpr HorizontalLayoutGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HorizontalLayoutGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HorizontalLayoutGroup& operator=(HorizontalLayoutGroup&& o) noexcept = default;
  constexpr HorizontalLayoutGroup& operator=(HorizontalLayoutGroup const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HorizontalLayoutGroup() ;

/// @brief Method .ctor addr 0x2bfce00 size 0xc virtual false final false
 void _ctor() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2bfce18 size 0x20 virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2bfd0dc size 0xc virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method SetLayoutHorizontal addr 0x2bfd0e8 size 0xc virtual true final false
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x2bfd760 size 0xc virtual true final false
 void SetLayoutVertical() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::HorizontalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::HorizontalLayoutGroup, "UnityEngine.UI", "HorizontalLayoutGroup");

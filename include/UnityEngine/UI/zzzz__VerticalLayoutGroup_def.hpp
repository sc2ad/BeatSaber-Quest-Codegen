#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UI {
class VerticalLayoutGroup;
}
// Type: UnityEngine.UI::VerticalLayoutGroup
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13022))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13035))
// CS Name: UnityEngine.UI.VerticalLayoutGroup
class CORDL_TYPE VerticalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~VerticalLayoutGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "VerticalLayoutGroup", modifiers: " const&", def_value: None }]
constexpr VerticalLayoutGroup(VerticalLayoutGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VerticalLayoutGroup", modifiers: "&&", def_value: None }]
constexpr VerticalLayoutGroup(VerticalLayoutGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VerticalLayoutGroup(void* ptr) noexcept : ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup(ptr) {
}


  constexpr VerticalLayoutGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VerticalLayoutGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VerticalLayoutGroup& operator=(VerticalLayoutGroup&& o) noexcept = default;
  constexpr VerticalLayoutGroup& operator=(VerticalLayoutGroup const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit VerticalLayoutGroup() ;

/// @brief Method .ctor addr 0x2c013d8 size 0xc virtual false final false
 void _ctor() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2c013e4 size 0x20 virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2c01404 size 0xc virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method SetLayoutHorizontal addr 0x2c01410 size 0xc virtual true final false
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x2c0141c size 0xc virtual true final false
 void SetLayoutVertical() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::VerticalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::VerticalLayoutGroup, "UnityEngine.UI", "VerticalLayoutGroup");

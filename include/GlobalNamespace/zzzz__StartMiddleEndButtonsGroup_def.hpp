#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::UI {
class ILayoutController;
}
// Forward declare root types
namespace GlobalNamespace {
class StartMiddleEndButtonsGroup;
}
// Type: ::StartMiddleEndButtonsGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5538))
// CS Name: StartMiddleEndButtonsGroup
class CORDL_TYPE StartMiddleEndButtonsGroup : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UI::ILayoutController
constexpr operator  UnityEngine::UI::ILayoutController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StartMiddleEndButtonsGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonsGroup", modifiers: " const&", def_value: None }]
constexpr StartMiddleEndButtonsGroup(StartMiddleEndButtonsGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonsGroup", modifiers: "&&", def_value: None }]
constexpr StartMiddleEndButtonsGroup(StartMiddleEndButtonsGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StartMiddleEndButtonsGroup(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StartMiddleEndButtonsGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StartMiddleEndButtonsGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StartMiddleEndButtonsGroup& operator=(StartMiddleEndButtonsGroup&& o) noexcept = default;
  constexpr StartMiddleEndButtonsGroup& operator=(StartMiddleEndButtonsGroup const& o) noexcept = default;
                


// Methods

/// @brief Method SetLayoutHorizontal addr 0x21273fc size 0xe8 virtual true final true
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x21274e4 size 0x4 virtual true final true
 void SetLayoutVertical() ;

// Ctor Parameters []
explicit StartMiddleEndButtonsGroup() ;

/// @brief Method .ctor addr 0x21274e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StartMiddleEndButtonsGroup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StartMiddleEndButtonsGroup, "", "StartMiddleEndButtonsGroup");

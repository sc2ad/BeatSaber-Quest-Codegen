#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class ScrollViewItemForVisibilityController;
}
// Type: HMUI::ScrollViewItemForVisibilityController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13700))
// CS Name: HMUI.ScrollViewItemForVisibilityController
class CORDL_TYPE ScrollViewItemForVisibilityController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ScrollViewItemForVisibilityController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemForVisibilityController", modifiers: " const&", def_value: None }]
constexpr ScrollViewItemForVisibilityController(ScrollViewItemForVisibilityController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemForVisibilityController", modifiers: "&&", def_value: None }]
constexpr ScrollViewItemForVisibilityController(ScrollViewItemForVisibilityController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScrollViewItemForVisibilityController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScrollViewItemForVisibilityController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScrollViewItemForVisibilityController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScrollViewItemForVisibilityController& operator=(ScrollViewItemForVisibilityController&& o) noexcept = default;
  constexpr ScrollViewItemForVisibilityController& operator=(ScrollViewItemForVisibilityController const& o) noexcept = default;
                


// Methods

/// @brief Method GetWorldCorners addr 0x1fd15c0 size 0x68 virtual false final false
 void GetWorldCorners(::ArrayW<::UnityEngine::Vector3> fourCornersArray) ;

// Ctor Parameters []
explicit ScrollViewItemForVisibilityController() ;

/// @brief Method .ctor addr 0x1fd1628 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::ScrollViewItemForVisibilityController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScrollViewItemForVisibilityController, "HMUI", "ScrollViewItemForVisibilityController");

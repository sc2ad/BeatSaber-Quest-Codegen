#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace HMUI {
class ItemForFocussedScrolling;
}
// Type: HMUI::ItemForFocussedScrolling
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13689))
// CS Name: HMUI.ItemForFocussedScrolling
class CORDL_TYPE ItemForFocussedScrolling : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ItemForFocussedScrolling() = default;

// Ctor Parameters [CppParam { name: "", ty: "ItemForFocussedScrolling", modifiers: " const&", def_value: None }]
constexpr ItemForFocussedScrolling(ItemForFocussedScrolling const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ItemForFocussedScrolling", modifiers: "&&", def_value: None }]
constexpr ItemForFocussedScrolling(ItemForFocussedScrolling&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ItemForFocussedScrolling(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ItemForFocussedScrolling& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ItemForFocussedScrolling& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ItemForFocussedScrolling& operator=(ItemForFocussedScrolling&& o) noexcept = default;
  constexpr ItemForFocussedScrolling& operator=(ItemForFocussedScrolling const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ItemForFocussedScrolling() ;

/// @brief Method .ctor addr 0x1fcf564 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ItemForFocussedScrolling);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ItemForFocussedScrolling, "HMUI", "ItemForFocussedScrolling");

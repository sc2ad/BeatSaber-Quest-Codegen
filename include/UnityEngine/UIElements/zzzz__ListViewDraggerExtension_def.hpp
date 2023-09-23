#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewDraggerExtension;
}
// Type: UnityEngine.UIElements::ListViewDraggerExtension
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7047))
// CS Name: UnityEngine.UIElements.ListViewDraggerExtension
class CORDL_TYPE ListViewDraggerExtension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ListViewDraggerExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerExtension", modifiers: " const&", def_value: None }]
constexpr ListViewDraggerExtension(ListViewDraggerExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerExtension", modifiers: "&&", def_value: None }]
constexpr ListViewDraggerExtension(ListViewDraggerExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListViewDraggerExtension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ListViewDraggerExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListViewDraggerExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListViewDraggerExtension& operator=(ListViewDraggerExtension&& o) noexcept = default;
  constexpr ListViewDraggerExtension& operator=(ListViewDraggerExtension const& o) noexcept = default;
                


// Methods

/// @brief Method GetRecycledItemFromIndex addr 0x2c90ca0 size 0x348 virtual false final false
static UnityEngine::UIElements::ReusableCollectionItem GetRecycledItemFromIndex(UnityEngine::UIElements::BaseVerticalCollectionView listView, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ListViewDraggerExtension);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ListViewDraggerExtension, "UnityEngine.UIElements", "ListViewDraggerExtension");

#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CollectionVirtualizationController;
}
// Type: UnityEngine.UIElements::CollectionVirtualizationController
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7471))
// CS Name: UnityEngine.UIElements.CollectionVirtualizationController
class CORDL_TYPE CollectionVirtualizationController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CollectionVirtualizationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionVirtualizationController", modifiers: " const&", def_value: None }]
constexpr CollectionVirtualizationController(CollectionVirtualizationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionVirtualizationController", modifiers: "&&", def_value: None }]
constexpr CollectionVirtualizationController(CollectionVirtualizationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionVirtualizationController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionVirtualizationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionVirtualizationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionVirtualizationController& operator=(CollectionVirtualizationController&& o) noexcept = default;
  constexpr CollectionVirtualizationController& operator=(CollectionVirtualizationController const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::ScrollView __declspec(property(get=__get_m_ScrollView, put=__set_m_ScrollView))  m_ScrollView;

constexpr void __set_m_ScrollView(UnityEngine::UIElements::ScrollView value) ;

constexpr UnityEngine::UIElements::ScrollView __get_m_ScrollView() const;


// Properties

 int32_t __declspec(property(get=get_lastVisibleIndex))  lastVisibleIndex;

 int32_t __declspec(property(get=get_visibleItemCount))  visibleItemCount;

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ReusableCollectionItem> __declspec(property(get=get_activeItems))  activeItems;


// Methods

/// @brief Method get_lastVisibleIndex addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_lastVisibleIndex() ;

/// @brief Method get_visibleItemCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_visibleItemCount() ;

// Ctor Parameters [CppParam { name: "scrollView", ty: "UnityEngine::UIElements::ScrollView", modifiers: "", def_value: None }]
explicit CollectionVirtualizationController(UnityEngine::UIElements::ScrollView scrollView) ;

/// @brief Method .ctor addr 0x2d119a4 size 0x28 virtual false final false
 void _ctor(UnityEngine::UIElements::ScrollView scrollView) ;

/// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
 void Refresh(bool rebuild) ;

/// @brief Method ScrollToItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void ScrollToItem(int32_t id) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Resize(UnityEngine::Vector2 size, int32_t layoutPass) ;

/// @brief Method OnScroll addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnScroll(UnityEngine::Vector2 offset) ;

/// @brief Method GetIndexFromPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetIndexFromPosition(UnityEngine::Vector2 position) ;

/// @brief Method GetItemHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetItemHeight(int32_t index) ;

/// @brief Method OnFocus addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnFocus(UnityEngine::UIElements::VisualElement leafTarget) ;

/// @brief Method OnBlur addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnBlur(UnityEngine::UIElements::VisualElement willFocus) ;

/// @brief Method UpdateBackground addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateBackground() ;

/// @brief Method get_activeItems addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ReusableCollectionItem> get_activeItems() ;

/// @brief Method ReplaceActiveItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReplaceActiveItem(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::CollectionVirtualizationController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::CollectionVirtualizationController, "UnityEngine.UIElements", "CollectionVirtualizationController");

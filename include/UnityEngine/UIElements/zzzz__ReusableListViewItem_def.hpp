#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReusableListViewItem;
}
// Type: UnityEngine.UIElements::ReusableListViewItem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7472))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7468))
// CS Name: UnityEngine.UIElements.ReusableListViewItem
class CORDL_TYPE ReusableListViewItem : public UnityEngine::UIElements::ReusableCollectionItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ReusableListViewItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReusableListViewItem", modifiers: " const&", def_value: None }]
constexpr ReusableListViewItem(ReusableListViewItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReusableListViewItem", modifiers: "&&", def_value: None }]
constexpr ReusableListViewItem(ReusableListViewItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReusableListViewItem(void* ptr) noexcept : UnityEngine::UIElements::ReusableCollectionItem(ptr) {
}


  constexpr ReusableListViewItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReusableListViewItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReusableListViewItem& operator=(ReusableListViewItem&& o) noexcept = default;
  constexpr ReusableListViewItem& operator=(ReusableListViewItem const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Container, put=__set_m_Container))  m_Container;

constexpr void __set_m_Container(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Container() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_DragHandle, put=__set_m_DragHandle))  m_DragHandle;

constexpr void __set_m_DragHandle(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_DragHandle() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_ItemContainer, put=__set_m_ItemContainer))  m_ItemContainer;

constexpr void __set_m_ItemContainer(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_ItemContainer() const;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_rootElement))  rootElement;


// Methods

/// @brief Method get_rootElement addr 0x2d113b0 size 0x18 virtual true final false
 UnityEngine::UIElements::VisualElement get_rootElement() ;

/// @brief Method Init addr 0x2d0f750 size 0x10 virtual false final false
 void Init(UnityEngine::UIElements::VisualElement item, bool usesAnimatedDragger) ;

/// @brief Method UpdateHierarchy addr 0x2d113d0 size 0x274 virtual false final false
 void UpdateHierarchy(bool usesAnimatedDragger) ;

/// @brief Method UpdateDragHandle addr 0x2d0f84c size 0x13c virtual false final false
 void UpdateDragHandle(bool needsDragHandle) ;

/// @brief Method PreAttachElement addr 0x2d11644 size 0x8c virtual true final false
 void PreAttachElement() ;

/// @brief Method DetachElement addr 0x2d1178c size 0x8c virtual true final false
 void DetachElement() ;

static UnityEngine::UIElements::ReusableListViewItem New_ctor() ;

/// @brief Method .ctor addr 0x2d11910 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ReusableListViewItem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ReusableListViewItem, "UnityEngine.UIElements", "ReusableListViewItem");

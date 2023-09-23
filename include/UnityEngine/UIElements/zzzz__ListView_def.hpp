#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine::UIElements {
struct ListViewReorderMode;
}
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class Foldout;
}
namespace UnityEngine::UIElements {
class ListViewController;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
struct SelectionType;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
struct AlternatingRowBackground;
}
namespace UnityEngine::UIElements {
struct CollectionVirtualizationMethod;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13;
}
namespace UnityEngine::UIElements {
class ListView;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__ListView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__ListView__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6885))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7167))
// CS Name: UnityEngine.UIElements.ListView::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__ListView__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__13 = GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~UnityEngine__UIElements__ListView__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ListView__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__ListView__UxmlTraits(UnityEngine__UIElements__ListView__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ListView__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__ListView__UxmlTraits(UnityEngine__UIElements__ListView__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__ListView__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__ListView__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__ListView__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__ListView__UxmlTraits& operator=(UnityEngine__UIElements__ListView__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__ListView__UxmlTraits& operator=(UnityEngine__UIElements__ListView__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get_m_FixedItemHeight, put=__set_m_FixedItemHeight))  m_FixedItemHeight;

constexpr void __set_m_FixedItemHeight(UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlIntAttributeDescription __get_m_FixedItemHeight() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::CollectionVirtualizationMethod> __declspec(property(get=__get_m_VirtualizationMethod, put=__set_m_VirtualizationMethod))  m_VirtualizationMethod;

constexpr void __set_m_VirtualizationMethod(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::CollectionVirtualizationMethod> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::CollectionVirtualizationMethod> __get_m_VirtualizationMethod() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_ShowBorder, put=__set_m_ShowBorder))  m_ShowBorder;

constexpr void __set_m_ShowBorder(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_ShowBorder() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType> __declspec(property(get=__get_m_SelectionType, put=__set_m_SelectionType))  m_SelectionType;

constexpr void __set_m_SelectionType(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType> __get_m_SelectionType() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground> __declspec(property(get=__get_m_ShowAlternatingRowBackgrounds, put=__set_m_ShowAlternatingRowBackgrounds))  m_ShowAlternatingRowBackgrounds;

constexpr void __set_m_ShowAlternatingRowBackgrounds(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground> __get_m_ShowAlternatingRowBackgrounds() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_ShowFoldoutHeader, put=__set_m_ShowFoldoutHeader))  m_ShowFoldoutHeader;

constexpr void __set_m_ShowFoldoutHeader(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_ShowFoldoutHeader() const;

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_HeaderTitle, put=__set_m_HeaderTitle))  m_HeaderTitle;

constexpr void __set_m_HeaderTitle(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_HeaderTitle() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_ShowAddRemoveFooter, put=__set_m_ShowAddRemoveFooter))  m_ShowAddRemoveFooter;

constexpr void __set_m_ShowAddRemoveFooter(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_ShowAddRemoveFooter() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_Reorderable, put=__set_m_Reorderable))  m_Reorderable;

constexpr void __set_m_Reorderable(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_Reorderable() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ListViewReorderMode> __declspec(property(get=__get_m_ReorderMode, put=__set_m_ReorderMode))  m_ReorderMode;

constexpr void __set_m_ReorderMode(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ListViewReorderMode> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ListViewReorderMode> __get_m_ReorderMode() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_ShowBoundCollectionSize, put=__set_m_ShowBoundCollectionSize))  m_ShowBoundCollectionSize;

constexpr void __set_m_ShowBoundCollectionSize(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_ShowBoundCollectionSize() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_HorizontalScrollingEnabled, put=__set_m_HorizontalScrollingEnabled))  m_HorizontalScrollingEnabled;

constexpr void __set_m_HorizontalScrollingEnabled(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_HorizontalScrollingEnabled() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x2cb7248 size 0x64 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

/// @brief Method Init addr 0x2cb72f0 size 0x3d4 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__ListView__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cb76c4 size 0x51c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ListView
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7242))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7168))
// CS Name: UnityEngine.UIElements.ListView
class CORDL_TYPE ListView : public UnityEngine::UIElements::BaseVerticalCollectionView {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x508};

virtual ~ListView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: " const&", def_value: None }]
constexpr ListView(ListView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: "&&", def_value: None }]
constexpr ListView(ListView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListView(void* ptr) noexcept : UnityEngine::UIElements::BaseVerticalCollectionView(ptr) {
}


  constexpr ListView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListView& operator=(ListView&& o) noexcept = default;
  constexpr ListView& operator=(ListView const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_ShowBoundCollectionSize, put=__set_m_ShowBoundCollectionSize))  m_ShowBoundCollectionSize;

constexpr void __set_m_ShowBoundCollectionSize(bool value) ;

constexpr bool __get_m_ShowBoundCollectionSize() const;

 bool __declspec(property(get=__get_m_ShowFoldoutHeader, put=__set_m_ShowFoldoutHeader))  m_ShowFoldoutHeader;

constexpr void __set_m_ShowFoldoutHeader(bool value) ;

constexpr bool __get_m_ShowFoldoutHeader() const;

 ::StringW __declspec(property(get=__get_m_HeaderTitle, put=__set_m_HeaderTitle))  m_HeaderTitle;

constexpr void __set_m_HeaderTitle(::StringW value) ;

constexpr ::StringW __get_m_HeaderTitle() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get_itemsAdded, put=__set_itemsAdded))  itemsAdded;

constexpr void __set_itemsAdded(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __get_itemsAdded() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get_itemsRemoved, put=__set_itemsRemoved))  itemsRemoved;

constexpr void __set_itemsRemoved(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __get_itemsRemoved() const;

 UnityEngine::UIElements::Label __declspec(property(get=__get_m_EmptyListLabel, put=__set_m_EmptyListLabel))  m_EmptyListLabel;

constexpr void __set_m_EmptyListLabel(UnityEngine::UIElements::Label value) ;

constexpr UnityEngine::UIElements::Label __get_m_EmptyListLabel() const;

 UnityEngine::UIElements::Foldout __declspec(property(get=__get_m_Foldout, put=__set_m_Foldout))  m_Foldout;

constexpr void __set_m_Foldout(UnityEngine::UIElements::Foldout value) ;

constexpr UnityEngine::UIElements::Foldout __get_m_Foldout() const;

 UnityEngine::UIElements::TextField __declspec(property(get=__get_m_ArraySizeField, put=__set_m_ArraySizeField))  m_ArraySizeField;

constexpr void __set_m_ArraySizeField(UnityEngine::UIElements::TextField value) ;

constexpr UnityEngine::UIElements::TextField __get_m_ArraySizeField() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Footer, put=__set_m_Footer))  m_Footer;

constexpr void __set_m_Footer(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Footer() const;

 UnityEngine::UIElements::Button __declspec(property(get=__get_m_AddButton, put=__set_m_AddButton))  m_AddButton;

constexpr void __set_m_AddButton(UnityEngine::UIElements::Button value) ;

constexpr UnityEngine::UIElements::Button __get_m_AddButton() const;

 UnityEngine::UIElements::Button __declspec(property(get=__get_m_RemoveButton, put=__set_m_RemoveButton))  m_RemoveButton;

constexpr void __set_m_RemoveButton(UnityEngine::UIElements::Button value) ;

constexpr UnityEngine::UIElements::Button __get_m_RemoveButton() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get_m_ItemAddedCallback, put=__set_m_ItemAddedCallback))  m_ItemAddedCallback;

constexpr void __set_m_ItemAddedCallback(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __get_m_ItemAddedCallback() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get_m_ItemRemovedCallback, put=__set_m_ItemRemovedCallback))  m_ItemRemovedCallback;

constexpr void __set_m_ItemRemovedCallback(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __get_m_ItemRemovedCallback() const;

 System::Action __declspec(property(get=__get_m_ItemsSourceSizeChangedCallback, put=__set_m_ItemsSourceSizeChangedCallback))  m_ItemsSourceSizeChangedCallback;

constexpr void __set_m_ItemsSourceSizeChangedCallback(System::Action value) ;

constexpr System::Action __get_m_ItemsSourceSizeChangedCallback() const;

 UnityEngine::UIElements::ListViewController __declspec(property(get=__get_m_ListViewController, put=__set_m_ListViewController))  m_ListViewController;

constexpr void __set_m_ListViewController(UnityEngine::UIElements::ListViewController value) ;

constexpr UnityEngine::UIElements::ListViewController __get_m_ListViewController() const;

 UnityEngine::UIElements::ListViewReorderMode __declspec(property(get=__get_m_ReorderMode, put=__set_m_ReorderMode))  m_ReorderMode;

constexpr void __set_m_ReorderMode(UnityEngine::UIElements::ListViewReorderMode value) ;

constexpr UnityEngine::UIElements::ListViewReorderMode __get_m_ReorderMode() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_itemUssClassName, put=__set_itemUssClassName))  itemUssClassName;

static void __set_itemUssClassName(::StringW value) ;

static ::StringW __get_itemUssClassName() ;

static ::StringW __declspec(property(get=__get_emptyLabelUssClassName, put=__set_emptyLabelUssClassName))  emptyLabelUssClassName;

static void __set_emptyLabelUssClassName(::StringW value) ;

static ::StringW __get_emptyLabelUssClassName() ;

static ::StringW __declspec(property(get=__get_reorderableUssClassName, put=__set_reorderableUssClassName))  reorderableUssClassName;

static void __set_reorderableUssClassName(::StringW value) ;

static ::StringW __get_reorderableUssClassName() ;

static ::StringW __declspec(property(get=__get_reorderableItemUssClassName, put=__set_reorderableItemUssClassName))  reorderableItemUssClassName;

static void __set_reorderableItemUssClassName(::StringW value) ;

static ::StringW __get_reorderableItemUssClassName() ;

static ::StringW __declspec(property(get=__get_reorderableItemContainerUssClassName, put=__set_reorderableItemContainerUssClassName))  reorderableItemContainerUssClassName;

static void __set_reorderableItemContainerUssClassName(::StringW value) ;

static ::StringW __get_reorderableItemContainerUssClassName() ;

static ::StringW __declspec(property(get=__get_reorderableItemHandleUssClassName, put=__set_reorderableItemHandleUssClassName))  reorderableItemHandleUssClassName;

static void __set_reorderableItemHandleUssClassName(::StringW value) ;

static ::StringW __get_reorderableItemHandleUssClassName() ;

static ::StringW __declspec(property(get=__get_reorderableItemHandleBarUssClassName, put=__set_reorderableItemHandleBarUssClassName))  reorderableItemHandleBarUssClassName;

static void __set_reorderableItemHandleBarUssClassName(::StringW value) ;

static ::StringW __get_reorderableItemHandleBarUssClassName() ;

static ::StringW __declspec(property(get=__get_footerUssClassName, put=__set_footerUssClassName))  footerUssClassName;

static void __set_footerUssClassName(::StringW value) ;

static ::StringW __get_footerUssClassName() ;

static ::StringW __declspec(property(get=__get_foldoutHeaderUssClassName, put=__set_foldoutHeaderUssClassName))  foldoutHeaderUssClassName;

static void __set_foldoutHeaderUssClassName(::StringW value) ;

static ::StringW __get_foldoutHeaderUssClassName() ;

static ::StringW __declspec(property(get=__get_arraySizeFieldUssClassName, put=__set_arraySizeFieldUssClassName))  arraySizeFieldUssClassName;

static void __set_arraySizeFieldUssClassName(::StringW value) ;

static ::StringW __get_arraySizeFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_listViewWithHeaderUssClassName, put=__set_listViewWithHeaderUssClassName))  listViewWithHeaderUssClassName;

static void __set_listViewWithHeaderUssClassName(::StringW value) ;

static ::StringW __get_listViewWithHeaderUssClassName() ;

static ::StringW __declspec(property(get=__get_listViewWithFooterUssClassName, put=__set_listViewWithFooterUssClassName))  listViewWithFooterUssClassName;

static void __set_listViewWithFooterUssClassName(::StringW value) ;

static ::StringW __get_listViewWithFooterUssClassName() ;

static ::StringW __declspec(property(get=__get_scrollViewWithFooterUssClassName, put=__set_scrollViewWithFooterUssClassName))  scrollViewWithFooterUssClassName;

static void __set_scrollViewWithFooterUssClassName(::StringW value) ;

static ::StringW __get_scrollViewWithFooterUssClassName() ;

static ::StringW __declspec(property(get=__get_footerAddButtonName, put=__set_footerAddButtonName))  footerAddButtonName;

static void __set_footerAddButtonName(::StringW value) ;

static ::StringW __get_footerAddButtonName() ;

static ::StringW __declspec(property(get=__get_footerRemoveButtonName, put=__set_footerRemoveButtonName))  footerRemoveButtonName;

static void __set_footerRemoveButtonName(::StringW value) ;

static ::StringW __get_footerRemoveButtonName() ;


// Properties

 bool __declspec(property(get=get_showBoundCollectionSize, put=set_showBoundCollectionSize))  showBoundCollectionSize;

 bool __declspec(property(get=get_sourceIncludesArraySize))  sourceIncludesArraySize;

 bool __declspec(property(get=get_showFoldoutHeader, put=set_showFoldoutHeader))  showFoldoutHeader;

 ::StringW __declspec(property(put=set_headerTitle))  headerTitle;

 bool __declspec(property(get=get_showAddRemoveFooter, put=set_showAddRemoveFooter))  showAddRemoveFooter;

 UnityEngine::UIElements::ListViewController __declspec(property(get=get_viewController))  viewController;

 UnityEngine::UIElements::ListViewReorderMode __declspec(property(get=get_reorderMode, put=set_reorderMode))  reorderMode;


// Methods

/// @brief Method get_showBoundCollectionSize addr 0x2cb547c size 0x8 virtual false final false
 bool get_showBoundCollectionSize() ;

/// @brief Method set_showBoundCollectionSize addr 0x2cb5484 size 0x1c virtual false final false
 void set_showBoundCollectionSize(bool value) ;

/// @brief Method get_sourceIncludesArraySize addr 0x2cb5674 size 0x28 virtual true final false
 bool get_sourceIncludesArraySize() ;

/// @brief Method get_showFoldoutHeader addr 0x2cb569c size 0x8 virtual false final false
 bool get_showFoldoutHeader() ;

/// @brief Method set_showFoldoutHeader addr 0x2cb56a4 size 0x1a4 virtual false final false
 void set_showFoldoutHeader(bool value) ;

/// @brief Method SetupArraySizeField addr 0x2cb54a0 size 0x1d4 virtual false final false
 void SetupArraySizeField() ;

/// @brief Method set_headerTitle addr 0x2cb6204 size 0x18 virtual false final false
 void set_headerTitle(::StringW value) ;

/// @brief Method get_showAddRemoveFooter addr 0x2cb5e58 size 0x10 virtual false final false
 bool get_showAddRemoveFooter() ;

/// @brief Method set_showAddRemoveFooter addr 0x2cb621c size 0x8 virtual false final false
 void set_showAddRemoveFooter(bool value) ;

/// @brief Method EnableFooter addr 0x2cb5e68 size 0x32c virtual false final false
 void EnableFooter(bool enabled) ;

/// @brief Method AddItems addr 0x2cb63ec size 0x24 virtual false final false
 void AddItems(int32_t itemCount) ;

/// @brief Method OnArraySizeFieldChanged addr 0x2cb6410 size 0x108 virtual false final false
 void OnArraySizeFieldChanged(UnityEngine::UIElements::ChangeEvent_1<::StringW> evt) ;

/// @brief Method UpdateArraySizeField addr 0x2cb6194 size 0x70 virtual false final false
 void UpdateArraySizeField() ;

/// @brief Method UpdateEmpty addr 0x2cb5c9c size 0x1bc virtual false final false
 void UpdateEmpty() ;

/// @brief Method OnAddClicked addr 0x2cb6518 size 0x24c virtual false final false
 void OnAddClicked() ;

/// @brief Method OnRemoveClicked addr 0x2cb6764 size 0x1cc virtual false final false
 void OnRemoveClicked() ;

/// @brief Method get_viewController addr 0x2cb6930 size 0x8 virtual false final false
 UnityEngine::UIElements::ListViewController get_viewController() ;

/// @brief Method CreateVirtualizationController addr 0x2cb6938 size 0x48 virtual true final false
 void CreateVirtualizationController() ;

/// @brief Method CreateViewController addr 0x2cb6980 size 0x64 virtual true final false
 void CreateViewController() ;

/// @brief Method SetViewController addr 0x2cb69e4 size 0x1bc virtual false final false
 void SetViewController(UnityEngine::UIElements::ListViewController controller) ;

/// @brief Method OnItemAdded addr 0x2cb6ba0 size 0x1c virtual false final false
 void OnItemAdded(System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

/// @brief Method OnItemsRemoved addr 0x2cb6bbc size 0x1c virtual false final false
 void OnItemsRemoved(System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

/// @brief Method OnItemsSourceSizeChanged addr 0x2cb6bd8 size 0x8 virtual false final false
 void OnItemsSourceSizeChanged() ;

/// @brief Method get_reorderMode addr 0x2cb6be0 size 0x8 virtual false final false
 UnityEngine::UIElements::ListViewReorderMode get_reorderMode() ;

/// @brief Method set_reorderMode addr 0x2cb6be8 size 0x38 virtual false final false
 void set_reorderMode(UnityEngine::UIElements::ListViewReorderMode value) ;

/// @brief Method CreateDragger addr 0x2cb6c20 size 0xa0 virtual true final false
 UnityEngine::UIElements::ListViewDragger CreateDragger() ;

/// @brief Method CreateDragAndDropController addr 0x2cb6cc0 size 0x64 virtual true final false
 UnityEngine::UIElements::ICollectionDragAndDropController CreateDragAndDropController() ;

// Ctor Parameters []
explicit ListView() ;

/// @brief Method .ctor addr 0x2cb6d24 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method PostRefresh addr 0x2cb6dc0 size 0x24 virtual true final false
 void PostRefresh() ;

/// @brief Method <OnAddClicked>b__35_0 addr 0x2cb7130 size 0xd0 virtual false final false
 void _OnAddClicked_b__35_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7089)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5094 }), TypeDefinitionIndex(TypeDefinitionIndex(7167)), TypeDefinitionIndex(TypeDefinitionIndex(7168))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7165))
// CS Name: UnityEngine.UIElements.ListView::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__ListView__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::ListView,UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__ListView__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ListView__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__ListView__UxmlFactory(UnityEngine__UIElements__ListView__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ListView__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__ListView__UxmlFactory(UnityEngine__UIElements__ListView__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__ListView__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::ListView,UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__ListView__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__ListView__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__ListView__UxmlFactory& operator=(UnityEngine__UIElements__ListView__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__ListView__UxmlFactory& operator=(UnityEngine__UIElements__ListView__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__ListView__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cb7200 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_uxmlChildElementsDescription>d__13
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7166))
// CS Name: UnityEngine.UIElements.ListView::UxmlTraits::<get_uxmlChildElementsDescription>d__13
class CORDL_TYPE UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13(UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13(UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13& operator=(UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13&& o) noexcept = default;
  constexpr UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13& operator=(UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::UIElements::UxmlChildElementDescription value) ;

constexpr UnityEngine::UIElements::UxmlChildElementDescription __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits __get___4__this() const;


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2cb72ac size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2cb7be0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2cb7be4 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2cb7bfc size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2cb7c04 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2cb7c44 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2cb7c4c size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2cb7cec size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13, "UnityEngine.UIElements", "ListView/UxmlTraits/<get_uxmlChildElementsDescription>d__13");
NEED_NO_BOX(UnityEngine::UIElements::ListView);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ListView, "UnityEngine.UIElements", "ListView");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory, "UnityEngine.UIElements", "ListView/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits, "UnityEngine.UIElements", "ListView/UxmlTraits");

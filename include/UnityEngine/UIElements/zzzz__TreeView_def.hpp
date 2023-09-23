#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class ITreeViewItem;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct AlternatingRowBackground;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::UIElements {
class ListView;
}
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
namespace UnityEngine::UIElements {
struct SelectionType;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5;
}
namespace UnityEngine::UIElements {
class TreeView;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TreeView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TreeView__UxmlTraits;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TreeView___GetAllItems_d__64;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__TreeView__TreeViewItemWrapper;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7126))
// CS Name: UnityEngine.UIElements.TreeView::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__TreeView__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__5 = GlobalNamespace::UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__TreeView__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TreeView__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TreeView__UxmlTraits(UnityEngine__UIElements__TreeView__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TreeView__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TreeView__UxmlTraits(UnityEngine__UIElements__TreeView__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TreeView__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__TreeView__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TreeView__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TreeView__UxmlTraits& operator=(UnityEngine__UIElements__TreeView__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TreeView__UxmlTraits& operator=(UnityEngine__UIElements__TreeView__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get_m_ItemHeight, put=__set_m_ItemHeight))  m_ItemHeight;

constexpr void __set_m_ItemHeight(UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlIntAttributeDescription __get_m_ItemHeight() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_ShowBorder, put=__set_m_ShowBorder))  m_ShowBorder;

constexpr void __set_m_ShowBorder(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_ShowBorder() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType> __declspec(property(get=__get_m_SelectionType, put=__set_m_SelectionType))  m_SelectionType;

constexpr void __set_m_SelectionType(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType> __get_m_SelectionType() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground> __declspec(property(get=__get_m_ShowAlternatingRowBackgrounds, put=__set_m_ShowAlternatingRowBackgrounds))  m_ShowAlternatingRowBackgrounds;

constexpr void __set_m_ShowAlternatingRowBackgrounds(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground> __get_m_ShowAlternatingRowBackgrounds() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x2ca62c4 size 0x64 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

/// @brief Method Init addr 0x2ca636c size 0x25c virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__TreeView__UxmlTraits() ;

/// @brief Method .ctor addr 0x2ca65c8 size 0x204 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TreeView
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7129))
// CS Name: UnityEngine.UIElements.TreeView
class CORDL_TYPE TreeView : public UnityEngine::UIElements::VisualElement {
public:
// Declarations
using _GetAllItems_d__64 = UnityEngine::UIElements::UnityEngine__UIElements__TreeView___GetAllItems_d__64;

using TreeViewItemWrapper = UnityEngine::UIElements::UnityEngine__UIElements__TreeView__TreeViewItemWrapper;

using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x408};

virtual ~TreeView() = default;

// Ctor Parameters [CppParam { name: "", ty: "TreeView", modifiers: " const&", def_value: None }]
constexpr TreeView(TreeView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TreeView", modifiers: "&&", def_value: None }]
constexpr TreeView(TreeView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TreeView(void* ptr) noexcept : UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr TreeView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TreeView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TreeView& operator=(TreeView&& o) noexcept = default;
  constexpr TreeView& operator=(TreeView const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_s_ListViewName, put=__set_s_ListViewName))  s_ListViewName;

static void __set_s_ListViewName(::StringW value) ;

static ::StringW __get_s_ListViewName() ;

static ::StringW __declspec(property(get=__get_s_ItemName, put=__set_s_ItemName))  s_ItemName;

static void __set_s_ItemName(::StringW value) ;

static ::StringW __get_s_ItemName() ;

static ::StringW __declspec(property(get=__get_s_ItemToggleName, put=__set_s_ItemToggleName))  s_ItemToggleName;

static void __set_s_ItemToggleName(::StringW value) ;

static ::StringW __get_s_ItemToggleName() ;

static ::StringW __declspec(property(get=__get_s_ItemIndentsContainerName, put=__set_s_ItemIndentsContainerName))  s_ItemIndentsContainerName;

static void __set_s_ItemIndentsContainerName(::StringW value) ;

static ::StringW __get_s_ItemIndentsContainerName() ;

static ::StringW __declspec(property(get=__get_s_ItemIndentName, put=__set_s_ItemIndentName))  s_ItemIndentName;

static void __set_s_ItemIndentName(::StringW value) ;

static ::StringW __get_s_ItemIndentName() ;

static ::StringW __declspec(property(get=__get_s_ItemContentContainerName, put=__set_s_ItemContentContainerName))  s_ItemContentContainerName;

static void __set_s_ItemContentContainerName(::StringW value) ;

static ::StringW __get_s_ItemContentContainerName() ;

 System::Func_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_MakeItem, put=__set_m_MakeItem))  m_MakeItem;

constexpr void __set_m_MakeItem(System::Func_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Func_1<UnityEngine::UIElements::VisualElement> __get_m_MakeItem() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem>> __declspec(property(get=__get_onItemsChosen, put=__set_onItemsChosen))  onItemsChosen;

constexpr void __set_onItemsChosen(System::Action_1<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem>> __get_onItemsChosen() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem>> __declspec(property(get=__get_onSelectionChange, put=__set_onSelectionChange))  onSelectionChange;

constexpr void __set_onSelectionChange(System::Action_1<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem>> __get_onSelectionChange() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::ITreeViewItem> __declspec(property(get=__get_m_SelectedItems, put=__set_m_SelectedItems))  m_SelectedItems;

constexpr void __set_m_SelectedItems(System::Collections::Generic::List_1<UnityEngine::UIElements::ITreeViewItem> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::ITreeViewItem> __get_m_SelectedItems() const;

 System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::ITreeViewItem> __declspec(property(get=__get_m_BindItem, put=__set_m_BindItem))  m_BindItem;

constexpr void __set_m_BindItem(System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::ITreeViewItem> value) ;

constexpr System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::ITreeViewItem> __get_m_BindItem() const;

 System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::ITreeViewItem> __declspec(property(get=__get__unbindItem_k__BackingField, put=__set__unbindItem_k__BackingField))  _unbindItem_k__BackingField;

constexpr void __set__unbindItem_k__BackingField(System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::ITreeViewItem> value) ;

constexpr System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::ITreeViewItem> __get__unbindItem_k__BackingField() const;

 System::Collections::Generic::IList_1<UnityEngine::UIElements::ITreeViewItem> __declspec(property(get=__get_m_RootItems, put=__set_m_RootItems))  m_RootItems;

constexpr void __set_m_RootItems(System::Collections::Generic::IList_1<UnityEngine::UIElements::ITreeViewItem> value) ;

constexpr System::Collections::Generic::IList_1<UnityEngine::UIElements::ITreeViewItem> __get_m_RootItems() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_ExpandedItemIds, put=__set_m_ExpandedItemIds))  m_ExpandedItemIds;

constexpr void __set_m_ExpandedItemIds(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_m_ExpandedItemIds() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TreeView__TreeViewItemWrapper> __declspec(property(get=__get_m_ItemWrappers, put=__set_m_ItemWrappers))  m_ItemWrappers;

constexpr void __set_m_ItemWrappers(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TreeView__TreeViewItemWrapper> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TreeView__TreeViewItemWrapper> __get_m_ItemWrappers() const;

 UnityEngine::UIElements::ListView __declspec(property(get=__get_m_ListView, put=__set_m_ListView))  m_ListView;

constexpr void __set_m_ListView(UnityEngine::UIElements::ListView value) ;

constexpr UnityEngine::UIElements::ListView __get_m_ListView() const;

 UnityEngine::UIElements::ScrollView __declspec(property(get=__get_m_ScrollView, put=__set_m_ScrollView))  m_ScrollView;

constexpr void __set_m_ScrollView(UnityEngine::UIElements::ScrollView value) ;

constexpr UnityEngine::UIElements::ScrollView __get_m_ScrollView() const;


// Properties

 System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::ITreeViewItem> __declspec(property(get=get_unbindItem))  unbindItem;

 int32_t __declspec(property(put=set_itemHeight))  itemHeight;

 bool __declspec(property(put=set_showBorder))  showBorder;

 UnityEngine::UIElements::SelectionType __declspec(property(put=set_selectionType))  selectionType;

 UnityEngine::UIElements::AlternatingRowBackground __declspec(property(put=set_showAlternatingRowBackgrounds))  showAlternatingRowBackgrounds;


// Methods

/// @brief Method get_unbindItem addr 0x2ca3060 size 0x8 virtual false final false
 System::Action_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::ITreeViewItem> get_unbindItem() ;

/// @brief Method set_itemHeight addr 0x2ca3068 size 0x20 virtual false final false
 void set_itemHeight(int32_t value) ;

/// @brief Method set_showBorder addr 0x2ca3088 size 0x20 virtual false final false
 void set_showBorder(bool value) ;

/// @brief Method set_selectionType addr 0x2ca30a8 size 0x1c virtual false final false
 void set_selectionType(UnityEngine::UIElements::SelectionType value) ;

/// @brief Method set_showAlternatingRowBackgrounds addr 0x2ca30c4 size 0x1c virtual false final false
 void set_showAlternatingRowBackgrounds(UnityEngine::UIElements::AlternatingRowBackground value) ;

// Ctor Parameters []
explicit TreeView() ;

/// @brief Method .ctor addr 0x2ca30e0 size 0x554 virtual false final false
 void _ctor() ;

/// @brief Method RefreshItems addr 0x2ca3634 size 0x24 virtual false final false
 void RefreshItems() ;

/// @brief Method Rebuild addr 0x2ca36fc size 0x24 virtual false final false
 void Rebuild() ;

/// @brief Method OnViewDataReady addr 0x2ca3720 size 0x3c virtual true final false
 void OnViewDataReady() ;

/// @brief Method GetAllItems addr 0x2ca375c size 0x64 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> GetAllItems(System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> rootItems) ;

/// @brief Method OnKeyDown addr 0x2ca3804 size 0xbc virtual false final false
 void OnKeyDown(UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method ListViewRefresh addr 0x2ca36e0 size 0x1c virtual false final false
 void ListViewRefresh() ;

/// @brief Method OnItemsChosen addr 0x2ca3eb0 size 0x420 virtual false final false
 void OnItemsChosen(System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> chosenItems) ;

/// @brief Method OnSelectionChange addr 0x2ca42d0 size 0x454 virtual false final false
 void OnSelectionChange(System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> selectedListItems) ;

/// @brief Method OnTreeViewMouseUp addr 0x2ca4724 size 0x38 virtual false final false
 void OnTreeViewMouseUp(UnityEngine::UIElements::MouseUpEvent evt) ;

/// @brief Method OnItemMouseUp addr 0x2ca475c size 0x7fc virtual false final false
 void OnItemMouseUp(UnityEngine::UIElements::MouseUpEvent evt) ;

/// @brief Method MakeTreeItem addr 0x2ca4f58 size 0x4e0 virtual false final false
 UnityEngine::UIElements::VisualElement MakeTreeItem() ;

/// @brief Method UnbindTreeItem addr 0x2ca5438 size 0x11c virtual false final false
 void UnbindTreeItem(UnityEngine::UIElements::VisualElement element, int32_t index) ;

/// @brief Method BindTreeItem addr 0x2ca5554 size 0x35c virtual false final false
 void BindTreeItem(UnityEngine::UIElements::VisualElement element, int32_t index) ;

/// @brief Method GetItemId addr 0x2ca58b0 size 0x74 virtual false final false
 int32_t GetItemId(int32_t index) ;

/// @brief Method IsExpandedByIndex addr 0x2ca38c0 size 0x9c virtual false final false
 bool IsExpandedByIndex(int32_t index) ;

/// @brief Method CollapseItemByIndex addr 0x2ca3c64 size 0x24c virtual false final false
 void CollapseItemByIndex(int32_t index) ;

/// @brief Method ExpandItemByIndex addr 0x2ca395c size 0x308 virtual false final false
 void ExpandItemByIndex(int32_t index) ;

/// @brief Method ToggleExpandedState addr 0x2ca5ee4 size 0x184 virtual false final false
 void ToggleExpandedState(UnityEngine::UIElements::ChangeEvent_1<bool> evt) ;

/// @brief Method CreateWrappers addr 0x2ca59c4 size 0x520 virtual false final false
 void CreateWrappers(System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> treeViewItems, int32_t depth, ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TreeView__TreeViewItemWrapper>> wrappers) ;

/// @brief Method RegenerateWrappers addr 0x2ca3658 size 0x88 virtual false final false
 void RegenerateWrappers() ;

/// @brief Method OnCustomStyleResolved addr 0x2ca6068 size 0x150 virtual false final false
 void OnCustomStyleResolved(UnityEngine::UIElements::CustomStyleResolvedEvent e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7129)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5111 }), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(7126))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7124))
// CS Name: UnityEngine.UIElements.TreeView::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__TreeView__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::TreeView,UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__TreeView__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TreeView__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TreeView__UxmlFactory(UnityEngine__UIElements__TreeView__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TreeView__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TreeView__UxmlFactory(UnityEngine__UIElements__TreeView__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TreeView__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::TreeView,UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__TreeView__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TreeView__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TreeView__UxmlFactory& operator=(UnityEngine__UIElements__TreeView__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TreeView__UxmlFactory& operator=(UnityEngine__UIElements__TreeView__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__TreeView__UxmlFactory() ;

/// @brief Method .ctor addr 0x2c9a49c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_uxmlChildElementsDescription>d__5
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7125))
// CS Name: UnityEngine.UIElements.TreeView::UxmlTraits::<get_uxmlChildElementsDescription>d__5
class CORDL_TYPE UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5(UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5(UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5 const& o) noexcept = default;
                


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

 UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlTraits value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlTraits __get___4__this() const;


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2ca6328 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ca67cc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ca67d0 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2ca67e8 size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ca67f0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ca6830 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2ca6838 size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ca68d8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TreeViewItemWrapper
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7127))
// CS Name: UnityEngine.UIElements.TreeView::TreeViewItemWrapper
struct CORDL_TYPE UnityEngine__UIElements__TreeView__TreeViewItemWrapper : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "item", ty: "UnityEngine::UIElements::ITreeViewItem", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__TreeView__TreeViewItemWrapper(int32_t depth, UnityEngine::UIElements::ITreeViewItem item) noexcept;


                    constexpr UnityEngine__UIElements__TreeView__TreeViewItemWrapper(UnityEngine__UIElements__TreeView__TreeViewItemWrapper const&) = default;
                    constexpr UnityEngine__UIElements__TreeView__TreeViewItemWrapper(UnityEngine__UIElements__TreeView__TreeViewItemWrapper&&) = default;
                    constexpr UnityEngine__UIElements__TreeView__TreeViewItemWrapper& operator=(UnityEngine__UIElements__TreeView__TreeViewItemWrapper const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__TreeView__TreeViewItemWrapper& operator=(UnityEngine__UIElements__TreeView__TreeViewItemWrapper&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TreeView__TreeViewItemWrapper(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_depth, put=__set_depth))  depth;

constexpr void __set_depth(int32_t value) ;

constexpr int32_t __get_depth() const;

 UnityEngine::UIElements::ITreeViewItem __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(UnityEngine::UIElements::ITreeViewItem value) ;

constexpr UnityEngine::UIElements::ITreeViewItem __get_item() const;


// Properties

 int32_t __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_id addr 0x2ca5924 size 0xa0 virtual false final false
 int32_t get_id() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<GetAllItems>d__64
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7128))
// CS Name: UnityEngine.UIElements.TreeView::<GetAllItems>d__64
class CORDL_TYPE UnityEngine__UIElements__TreeView___GetAllItems_d__64 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::ITreeViewItem>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::ITreeViewItem>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~UnityEngine__UIElements__TreeView___GetAllItems_d__64() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TreeView___GetAllItems_d__64", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TreeView___GetAllItems_d__64(UnityEngine__UIElements__TreeView___GetAllItems_d__64 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TreeView___GetAllItems_d__64", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TreeView___GetAllItems_d__64(UnityEngine__UIElements__TreeView___GetAllItems_d__64&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TreeView___GetAllItems_d__64(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__TreeView___GetAllItems_d__64& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TreeView___GetAllItems_d__64& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TreeView___GetAllItems_d__64& operator=(UnityEngine__UIElements__TreeView___GetAllItems_d__64&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TreeView___GetAllItems_d__64& operator=(UnityEngine__UIElements__TreeView___GetAllItems_d__64 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::UIElements::ITreeViewItem __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::UIElements::ITreeViewItem value) ;

constexpr UnityEngine::UIElements::ITreeViewItem __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> __declspec(property(get=__get_rootItems, put=__set_rootItems))  rootItems;

constexpr void __set_rootItems(System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> value) ;

constexpr System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> __get_rootItems() const;

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> __declspec(property(get=__get___3__rootItems, put=__set___3__rootItems))  __3__rootItems;

constexpr void __set___3__rootItems(System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> value) ;

constexpr System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> __get___3__rootItems() const;

 System::Collections::Generic::Stack_1<System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::ITreeViewItem>> __declspec(property(get=__get__iteratorStack_5__1, put=__set__iteratorStack_5__1))  _iteratorStack_5__1;

constexpr void __set__iteratorStack_5__1(System::Collections::Generic::Stack_1<System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::ITreeViewItem>> value) ;

constexpr System::Collections::Generic::Stack_1<System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::ITreeViewItem>> __get__iteratorStack_5__1() const;

 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::ITreeViewItem> __declspec(property(get=__get__currentIterator_5__2, put=__set__currentIterator_5__2))  _currentIterator_5__2;

constexpr void __set__currentIterator_5__2(System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::ITreeViewItem> value) ;

constexpr System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::ITreeViewItem> __get__currentIterator_5__2() const;

 bool __declspec(property(get=__get__hasNext_5__3, put=__set__hasNext_5__3))  _hasNext_5__3;

constexpr void __set__hasNext_5__3(bool value) ;

constexpr bool __get__hasNext_5__3() const;

 UnityEngine::UIElements::ITreeViewItem __declspec(property(get=__get__currentItem_5__4, put=__set__currentItem_5__4))  _currentItem_5__4;

constexpr void __set__currentItem_5__4(UnityEngine::UIElements::ITreeViewItem value) ;

constexpr UnityEngine::UIElements::ITreeViewItem __get__currentItem_5__4() const;


// Properties

 UnityEngine::UIElements::ITreeViewItem __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_ITreeViewItem__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_ITreeViewItem__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__TreeView___GetAllItems_d__64(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2ca37c0 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ca68dc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ca68e0 size 0x3f8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.ITreeViewItem>.get_Current addr 0x2ca6cd8 size 0x8 virtual true final true
 UnityEngine::UIElements::ITreeViewItem System_Collections_Generic_IEnumerator_UnityEngine_UIElements_ITreeViewItem__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ca6ce0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ca6d20 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.ITreeViewItem>.GetEnumerator addr 0x2ca6d28 size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::ITreeViewItem> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_ITreeViewItem__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ca6dc8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__TreeView__UxmlTraits___get_uxmlChildElementsDescription_d__5, "UnityEngine.UIElements", "TreeView/UxmlTraits/<get_uxmlChildElementsDescription>d__5");
NEED_NO_BOX(UnityEngine::UIElements::TreeView);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TreeView, "UnityEngine.UIElements", "TreeView");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlFactory, "UnityEngine.UIElements", "TreeView/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TreeView__UxmlTraits, "UnityEngine.UIElements", "TreeView/UxmlTraits");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TreeView___GetAllItems_d__64);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TreeView___GetAllItems_d__64, "UnityEngine.UIElements", "TreeView/<GetAllItems>d__64");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TreeView__TreeViewItemWrapper, "UnityEngine.UIElements", "TreeView/TreeViewItemWrapper");

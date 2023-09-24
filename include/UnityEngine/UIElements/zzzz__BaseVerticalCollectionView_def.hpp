#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class CollectionViewController;
}
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
template<typename T>
struct CustomStyleProperty_1;
}
namespace UnityEngine::UIElements {
struct AlternatingRowBackground;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::UIElements {
struct SelectionType;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class CollectionVirtualizationController;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0;
}
namespace System::Collections {
class IList;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
struct CollectionVirtualizationMethod;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0;
}
// Type: ::<>c__DisplayClass164_0
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7241))
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView::<>c__DisplayClass164_0
struct CORDL_TYPE UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "__4__this", ty: "UnityEngine::UIElements::BaseVerticalCollectionView", modifiers: "", def_value: None }, CppParam { name: "shiftKey", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0(UnityEngine::UIElements::BaseVerticalCollectionView __4__this, bool shiftKey) noexcept;


                    constexpr UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0(UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0 const&) = default;
                    constexpr UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0(UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0&&) = default;
                    constexpr UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0& operator=(UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0& operator=(UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::BaseVerticalCollectionView __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::BaseVerticalCollectionView value) ;

constexpr UnityEngine::UIElements::BaseVerticalCollectionView __get___4__this() const;

 bool __declspec(property(get=__get_shiftKey, put=__set_shiftKey))  shiftKey;

constexpr void __set_shiftKey(bool value) ;

constexpr bool __get_shiftKey() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseVerticalCollectionView
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6886))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7242))
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView
class CORDL_TYPE BaseVerticalCollectionView : public UnityEngine::UIElements::BindableElement {
public:
// Declarations
using __c__DisplayClass164_0 = UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0;

/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x498};

virtual ~BaseVerticalCollectionView() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView", modifiers: " const&", def_value: None }]
constexpr BaseVerticalCollectionView(BaseVerticalCollectionView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView", modifiers: "&&", def_value: None }]
constexpr BaseVerticalCollectionView(BaseVerticalCollectionView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseVerticalCollectionView(void* ptr) noexcept : UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr BaseVerticalCollectionView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseVerticalCollectionView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseVerticalCollectionView& operator=(BaseVerticalCollectionView&& o) noexcept = default;
  constexpr BaseVerticalCollectionView& operator=(BaseVerticalCollectionView const& o) noexcept = default;
                


// Fields

 System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_onItemsChosen, put=__set_onItemsChosen))  onItemsChosen;

constexpr void __set_onItemsChosen(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> __get_onItemsChosen() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_onSelectionChange, put=__set_onSelectionChange))  onSelectionChange;

constexpr void __set_onSelectionChange(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> __get_onSelectionChange() const;

 System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get_onSelectedIndicesChange, put=__set_onSelectedIndicesChange))  onSelectedIndicesChange;

constexpr void __set_onSelectedIndicesChange(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> __get_onSelectedIndicesChange() const;

 System::Action_2<int32_t,int32_t> __declspec(property(get=__get_itemIndexChanged, put=__set_itemIndexChanged))  itemIndexChanged;

constexpr void __set_itemIndexChanged(System::Action_2<int32_t,int32_t> value) ;

constexpr System::Action_2<int32_t,int32_t> __get_itemIndexChanged() const;

 System::Action __declspec(property(get=__get_itemsSourceChanged, put=__set_itemsSourceChanged))  itemsSourceChanged;

constexpr void __set_itemsSourceChanged(System::Action value) ;

constexpr System::Action __get_itemsSourceChanged() const;

 System::Func_2<int32_t,int32_t> __declspec(property(get=__get_m_GetItemId, put=__set_m_GetItemId))  m_GetItemId;

constexpr void __set_m_GetItemId(System::Func_2<int32_t,int32_t> value) ;

constexpr System::Func_2<int32_t,int32_t> __get_m_GetItemId() const;

 System::Func_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_MakeItem, put=__set_m_MakeItem))  m_MakeItem;

constexpr void __set_m_MakeItem(System::Func_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Func_1<UnityEngine::UIElements::VisualElement> __get_m_MakeItem() const;

 System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> __declspec(property(get=__get_m_BindItem, put=__set_m_BindItem))  m_BindItem;

constexpr void __set_m_BindItem(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> value) ;

constexpr System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> __get_m_BindItem() const;

 System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> __declspec(property(get=__get__unbindItem_k__BackingField, put=__set__unbindItem_k__BackingField))  _unbindItem_k__BackingField;

constexpr void __set__unbindItem_k__BackingField(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> value) ;

constexpr System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> __get__unbindItem_k__BackingField() const;

 System::Action_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get__destroyItem_k__BackingField, put=__set__destroyItem_k__BackingField))  _destroyItem_k__BackingField;

constexpr void __set__destroyItem_k__BackingField(System::Action_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Action_1<UnityEngine::UIElements::VisualElement> __get__destroyItem_k__BackingField() const;

 UnityEngine::UIElements::SelectionType __declspec(property(get=__get_m_SelectionType, put=__set_m_SelectionType))  m_SelectionType;

constexpr void __set_m_SelectionType(UnityEngine::UIElements::SelectionType value) ;

constexpr UnityEngine::UIElements::SelectionType __get_m_SelectionType() const;

static System::Collections::Generic::List_1<UnityEngine::UIElements::ReusableCollectionItem> __declspec(property(get=__get_k_EmptyItems, put=__set_k_EmptyItems))  k_EmptyItems;

static void __set_k_EmptyItems(System::Collections::Generic::List_1<UnityEngine::UIElements::ReusableCollectionItem> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::ReusableCollectionItem> __get_k_EmptyItems() ;

 bool __declspec(property(get=__get_m_HorizontalScrollingEnabled, put=__set_m_HorizontalScrollingEnabled))  m_HorizontalScrollingEnabled;

constexpr void __set_m_HorizontalScrollingEnabled(bool value) ;

constexpr bool __get_m_HorizontalScrollingEnabled() const;

 UnityEngine::UIElements::AlternatingRowBackground __declspec(property(get=__get_m_ShowAlternatingRowBackgrounds, put=__set_m_ShowAlternatingRowBackgrounds))  m_ShowAlternatingRowBackgrounds;

constexpr void __set_m_ShowAlternatingRowBackgrounds(UnityEngine::UIElements::AlternatingRowBackground value) ;

constexpr UnityEngine::UIElements::AlternatingRowBackground __get_m_ShowAlternatingRowBackgrounds() const;

static int32_t __declspec(property(get=__get_s_DefaultItemHeight, put=__set_s_DefaultItemHeight))  s_DefaultItemHeight;

static void __set_s_DefaultItemHeight(int32_t value) ;

static int32_t __get_s_DefaultItemHeight() ;

 float_t __declspec(property(get=__get_m_FixedItemHeight, put=__set_m_FixedItemHeight))  m_FixedItemHeight;

constexpr void __set_m_FixedItemHeight(float_t value) ;

constexpr float_t __get_m_FixedItemHeight() const;

 bool __declspec(property(get=__get_m_ItemHeightIsInline, put=__set_m_ItemHeightIsInline))  m_ItemHeightIsInline;

constexpr void __set_m_ItemHeightIsInline(bool value) ;

constexpr bool __get_m_ItemHeightIsInline() const;

 UnityEngine::UIElements::CollectionVirtualizationMethod __declspec(property(get=__get_m_VirtualizationMethod, put=__set_m_VirtualizationMethod))  m_VirtualizationMethod;

constexpr void __set_m_VirtualizationMethod(UnityEngine::UIElements::CollectionVirtualizationMethod value) ;

constexpr UnityEngine::UIElements::CollectionVirtualizationMethod __get_m_VirtualizationMethod() const;

 UnityEngine::UIElements::ScrollView __declspec(property(get=__get_m_ScrollView, put=__set_m_ScrollView))  m_ScrollView;

constexpr void __set_m_ScrollView(UnityEngine::UIElements::ScrollView value) ;

constexpr UnityEngine::UIElements::ScrollView __get_m_ScrollView() const;

 UnityEngine::UIElements::CollectionViewController __declspec(property(get=__get_m_ViewController, put=__set_m_ViewController))  m_ViewController;

constexpr void __set_m_ViewController(UnityEngine::UIElements::CollectionViewController value) ;

constexpr UnityEngine::UIElements::CollectionViewController __get_m_ViewController() const;

 UnityEngine::UIElements::CollectionVirtualizationController __declspec(property(get=__get_m_VirtualizationController, put=__set_m_VirtualizationController))  m_VirtualizationController;

constexpr void __set_m_VirtualizationController(UnityEngine::UIElements::CollectionVirtualizationController value) ;

constexpr UnityEngine::UIElements::CollectionVirtualizationController __get_m_VirtualizationController() const;

 UnityEngine::UIElements::KeyboardNavigationManipulator __declspec(property(get=__get_m_NavigationManipulator, put=__set_m_NavigationManipulator))  m_NavigationManipulator;

constexpr void __set_m_NavigationManipulator(UnityEngine::UIElements::KeyboardNavigationManipulator value) ;

constexpr UnityEngine::UIElements::KeyboardNavigationManipulator __get_m_NavigationManipulator() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_ScrollOffset, put=__set_m_ScrollOffset))  m_ScrollOffset;

constexpr void __set_m_ScrollOffset(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_ScrollOffset() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_SelectedIds, put=__set_m_SelectedIds))  m_SelectedIds;

constexpr void __set_m_SelectedIds(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_m_SelectedIds() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_SelectedIndices, put=__set_m_SelectedIndices))  m_SelectedIndices;

constexpr void __set_m_SelectedIndices(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_m_SelectedIndices() const;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_SelectedItems, put=__set_m_SelectedItems))  m_SelectedItems;

constexpr void __set_m_SelectedItems(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get_m_SelectedItems() const;

 float_t __declspec(property(get=__get_m_LastHeight, put=__set_m_LastHeight))  m_LastHeight;

constexpr void __set_m_LastHeight(float_t value) ;

constexpr float_t __get_m_LastHeight() const;

 bool __declspec(property(get=__get_m_IsRangeSelectionDirectionUp, put=__set_m_IsRangeSelectionDirectionUp))  m_IsRangeSelectionDirectionUp;

constexpr void __set_m_IsRangeSelectionDirectionUp(bool value) ;

constexpr bool __get_m_IsRangeSelectionDirectionUp() const;

 UnityEngine::UIElements::ListViewDragger __declspec(property(get=__get_m_Dragger, put=__set_m_Dragger))  m_Dragger;

constexpr void __set_m_Dragger(UnityEngine::UIElements::ListViewDragger value) ;

constexpr UnityEngine::UIElements::ListViewDragger __get_m_Dragger() const;

static UnityEngine::UIElements::CustomStyleProperty_1<int32_t> __declspec(property(get=__get_s_ItemHeightProperty, put=__set_s_ItemHeightProperty))  s_ItemHeightProperty;

static void __set_s_ItemHeightProperty(UnityEngine::UIElements::CustomStyleProperty_1<int32_t> value) ;

static UnityEngine::UIElements::CustomStyleProperty_1<int32_t> __get_s_ItemHeightProperty() ;

 System::Action_2<int32_t,int32_t> __declspec(property(get=__get_m_ItemIndexChangedCallback, put=__set_m_ItemIndexChangedCallback))  m_ItemIndexChangedCallback;

constexpr void __set_m_ItemIndexChangedCallback(System::Action_2<int32_t,int32_t> value) ;

constexpr System::Action_2<int32_t,int32_t> __get_m_ItemIndexChangedCallback() const;

 System::Action __declspec(property(get=__get_m_ItemsSourceChangedCallback, put=__set_m_ItemsSourceChangedCallback))  m_ItemsSourceChangedCallback;

constexpr void __set_m_ItemsSourceChangedCallback(System::Action value) ;

constexpr System::Action __get_m_ItemsSourceChangedCallback() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_borderUssClassName, put=__set_borderUssClassName))  borderUssClassName;

static void __set_borderUssClassName(::StringW value) ;

static ::StringW __get_borderUssClassName() ;

static ::StringW __declspec(property(get=__get_itemUssClassName, put=__set_itemUssClassName))  itemUssClassName;

static void __set_itemUssClassName(::StringW value) ;

static ::StringW __get_itemUssClassName() ;

static ::StringW __declspec(property(get=__get_dragHoverBarUssClassName, put=__set_dragHoverBarUssClassName))  dragHoverBarUssClassName;

static void __set_dragHoverBarUssClassName(::StringW value) ;

static ::StringW __get_dragHoverBarUssClassName() ;

static ::StringW __declspec(property(get=__get_itemDragHoverUssClassName, put=__set_itemDragHoverUssClassName))  itemDragHoverUssClassName;

static void __set_itemDragHoverUssClassName(::StringW value) ;

static ::StringW __get_itemDragHoverUssClassName() ;

static ::StringW __declspec(property(get=__get_itemSelectedVariantUssClassName, put=__set_itemSelectedVariantUssClassName))  itemSelectedVariantUssClassName;

static void __set_itemSelectedVariantUssClassName(::StringW value) ;

static ::StringW __get_itemSelectedVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_itemAlternativeBackgroundUssClassName, put=__set_itemAlternativeBackgroundUssClassName))  itemAlternativeBackgroundUssClassName;

static void __set_itemAlternativeBackgroundUssClassName(::StringW value) ;

static ::StringW __get_itemAlternativeBackgroundUssClassName() ;

static ::StringW __declspec(property(get=__get_listScrollViewUssClassName, put=__set_listScrollViewUssClassName))  listScrollViewUssClassName;

static void __set_listScrollViewUssClassName(::StringW value) ;

static ::StringW __get_listScrollViewUssClassName() ;

static ::StringW __declspec(property(get=__get_backgroundFillUssClassName, put=__set_backgroundFillUssClassName))  backgroundFillUssClassName;

static void __set_backgroundFillUssClassName(::StringW value) ;

static ::StringW __get_backgroundFillUssClassName() ;

 UnityEngine::Vector3 __declspec(property(get=__get_m_TouchDownPosition, put=__set_m_TouchDownPosition))  m_TouchDownPosition;

constexpr void __set_m_TouchDownPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_TouchDownPosition() const;


// Properties

 System::Func_2<int32_t,int32_t> __declspec(property(get=get_getItemId, put=set_getItemId))  getItemId;

 System::Collections::IList __declspec(property(get=get_itemsSource, put=set_itemsSource))  itemsSource;

 bool __declspec(property(get=get_sourceIncludesArraySize))  sourceIncludesArraySize;

 System::Func_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=get_makeItem, put=set_makeItem))  makeItem;

 System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> __declspec(property(get=get_bindItem, put=set_bindItem))  bindItem;

 System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> __declspec(property(get=get_unbindItem, put=set_unbindItem))  unbindItem;

 System::Action_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=get_destroyItem, put=set_destroyItem))  destroyItem;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_contentContainer))  contentContainer;

 UnityEngine::UIElements::SelectionType __declspec(property(get=get_selectionType, put=set_selectionType))  selectionType;

 int32_t __declspec(property(get=get_selectedIndex, put=set_selectedIndex))  selectedIndex;

 System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=get_selectedIndices))  selectedIndices;

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ReusableCollectionItem> __declspec(property(get=get_activeItems))  activeItems;

 UnityEngine::UIElements::ScrollView __declspec(property(get=get_scrollView))  scrollView;

 UnityEngine::UIElements::ListViewDragger __declspec(property(get=get_dragger))  dragger;

 UnityEngine::UIElements::CollectionViewController __declspec(property(get=get_viewController))  viewController;

 UnityEngine::UIElements::CollectionVirtualizationController __declspec(property(get=get_virtualizationController))  virtualizationController;

 bool __declspec(property(put=set_showBorder))  showBorder;

 bool __declspec(property(get=get_reorderable, put=set_reorderable))  reorderable;

 bool __declspec(property(put=set_horizontalScrollingEnabled))  horizontalScrollingEnabled;

 UnityEngine::UIElements::AlternatingRowBackground __declspec(property(get=get_showAlternatingRowBackgrounds, put=set_showAlternatingRowBackgrounds))  showAlternatingRowBackgrounds;

 UnityEngine::UIElements::CollectionVirtualizationMethod __declspec(property(get=get_virtualizationMethod, put=set_virtualizationMethod))  virtualizationMethod;

 float_t __declspec(property(get=get_fixedItemHeight, put=set_fixedItemHeight))  fixedItemHeight;

 float_t __declspec(property(get=get_lastHeight))  lastHeight;


// Methods

/// @brief Method add_onItemsChosen addr 0x2cc8678 size 0xb4 virtual false final false
 void add_onItemsChosen(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value) ;

/// @brief Method remove_onItemsChosen addr 0x2cc872c size 0xb4 virtual false final false
 void remove_onItemsChosen(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value) ;

/// @brief Method add_onSelectionChange addr 0x2cc87e0 size 0xb4 virtual false final false
 void add_onSelectionChange(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value) ;

/// @brief Method remove_onSelectionChange addr 0x2cc8894 size 0xb4 virtual false final false
 void remove_onSelectionChange(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value) ;

/// @brief Method get_getItemId addr 0x2cc8948 size 0x8 virtual false final false
 System::Func_2<int32_t,int32_t> get_getItemId() ;

/// @brief Method set_getItemId addr 0x2cc8950 size 0x8 virtual false final false
 void set_getItemId(System::Func_2<int32_t,int32_t> value) ;

/// @brief Method get_itemsSource addr 0x2cc89c4 size 0x18 virtual false final false
 System::Collections::IList get_itemsSource() ;

/// @brief Method set_itemsSource addr 0x2cc89dc size 0x4c virtual false final false
 void set_itemsSource(System::Collections::IList value) ;

/// @brief Method get_sourceIncludesArraySize addr 0x2cc8a58 size 0x8 virtual true final false
 bool get_sourceIncludesArraySize() ;

/// @brief Method get_makeItem addr 0x2cc8a60 size 0x8 virtual false final false
 System::Func_1<UnityEngine::UIElements::VisualElement> get_makeItem() ;

/// @brief Method set_makeItem addr 0x2cc8a68 size 0x8 virtual false final false
 void set_makeItem(System::Func_1<UnityEngine::UIElements::VisualElement> value) ;

/// @brief Method get_bindItem addr 0x2cc8adc size 0x8 virtual false final false
 System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> get_bindItem() ;

/// @brief Method set_bindItem addr 0x2cc8ae4 size 0x8 virtual false final false
 void set_bindItem(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> value) ;

/// @brief Method get_unbindItem addr 0x2cc8aec size 0x8 virtual false final false
 System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> get_unbindItem() ;

/// @brief Method set_unbindItem addr 0x2cc8af4 size 0x8 virtual false final false
 void set_unbindItem(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> value) ;

/// @brief Method get_destroyItem addr 0x2cc8afc size 0x8 virtual false final false
 System::Action_1<UnityEngine::UIElements::VisualElement> get_destroyItem() ;

/// @brief Method set_destroyItem addr 0x2cc8b04 size 0x8 virtual false final false
 void set_destroyItem(System::Action_1<UnityEngine::UIElements::VisualElement> value) ;

/// @brief Method get_contentContainer addr 0x2cc8b0c size 0x8 virtual true final false
 UnityEngine::UIElements::VisualElement get_contentContainer() ;

/// @brief Method get_selectionType addr 0x2cc8b14 size 0x8 virtual false final false
 UnityEngine::UIElements::SelectionType get_selectionType() ;

/// @brief Method set_selectionType addr 0x2cc8b1c size 0xa4 virtual false final false
 void set_selectionType(UnityEngine::UIElements::SelectionType value) ;

/// @brief Method get_selectedIndex addr 0x2cc8cdc size 0x74 virtual false final false
 int32_t get_selectedIndex() ;

/// @brief Method set_selectedIndex addr 0x2cc8d50 size 0x4 virtual false final false
 void set_selectedIndex(int32_t value) ;

/// @brief Method get_selectedIndices addr 0x2cc8d54 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> get_selectedIndices() ;

/// @brief Method get_activeItems addr 0x2cc8d5c size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ReusableCollectionItem> get_activeItems() ;

/// @brief Method get_scrollView addr 0x2cc8dd4 size 0x8 virtual false final false
 UnityEngine::UIElements::ScrollView get_scrollView() ;

/// @brief Method get_dragger addr 0x2cc8ddc size 0x8 virtual false final false
 UnityEngine::UIElements::ListViewDragger get_dragger() ;

/// @brief Method get_viewController addr 0x2cc8de4 size 0x8 virtual false final false
 UnityEngine::UIElements::CollectionViewController get_viewController() ;

/// @brief Method get_virtualizationController addr 0x2cc8dec size 0x30 virtual false final false
 UnityEngine::UIElements::CollectionVirtualizationController get_virtualizationController() ;

/// @brief Method ResolveItemHeight addr 0x2cc8e4c size 0xb8 virtual false final false
 float_t ResolveItemHeight(float_t height) ;

/// @brief Method set_showBorder addr 0x2cc8f04 size 0x80 virtual false final false
 void set_showBorder(bool value) ;

/// @brief Method get_reorderable addr 0x2cc8f84 size 0xf0 virtual false final false
 bool get_reorderable() ;

/// @brief Method set_reorderable addr 0x2cc9074 size 0x148 virtual false final false
 void set_reorderable(bool value) ;

/// @brief Method set_horizontalScrollingEnabled addr 0x2cc9234 size 0x48 virtual false final false
 void set_horizontalScrollingEnabled(bool value) ;

/// @brief Method get_showAlternatingRowBackgrounds addr 0x2cc927c size 0x8 virtual false final false
 UnityEngine::UIElements::AlternatingRowBackground get_showAlternatingRowBackgrounds() ;

/// @brief Method set_showAlternatingRowBackgrounds addr 0x2cc9284 size 0x18 virtual false final false
 void set_showAlternatingRowBackgrounds(UnityEngine::UIElements::AlternatingRowBackground value) ;

/// @brief Method get_virtualizationMethod addr 0x2cc929c size 0x8 virtual false final false
 UnityEngine::UIElements::CollectionVirtualizationMethod get_virtualizationMethod() ;

/// @brief Method set_virtualizationMethod addr 0x2cc92a4 size 0x3c virtual false final false
 void set_virtualizationMethod(UnityEngine::UIElements::CollectionVirtualizationMethod value) ;

/// @brief Method get_fixedItemHeight addr 0x2cc92e0 size 0x8 virtual false final false
 float_t get_fixedItemHeight() ;

/// @brief Method set_fixedItemHeight addr 0x2cc92e8 size 0xfc virtual false final false
 void set_fixedItemHeight(float_t value) ;

/// @brief Method get_lastHeight addr 0x2cc93e4 size 0x8 virtual false final false
 float_t get_lastHeight() ;

/// @brief Method CreateVirtualizationController addr 0x2cc93ec size 0x48 virtual true final false
 void CreateVirtualizationController() ;

/// @brief Method GetOrCreateVirtualizationController addr 0x2cc8e1c size 0x30 virtual false final false
 UnityEngine::UIElements::CollectionVirtualizationController GetOrCreateVirtualizationController() ;

/// @brief Method CreateVirtualizationController addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void CreateVirtualizationController() ;

/// @brief Method GetOrCreateViewController addr 0x2cc8a28 size 0x30 virtual false final false
 UnityEngine::UIElements::CollectionViewController GetOrCreateViewController() ;

/// @brief Method CreateViewController addr 0x2cc9434 size 0x64 virtual true final false
 void CreateViewController() ;

/// @brief Method SetViewController addr 0x2cc9498 size 0x90 virtual false final false
 void SetViewController(UnityEngine::UIElements::CollectionViewController controller) ;

/// @brief Method CreateDragger addr 0x2cc9528 size 0x64 virtual true final false
 UnityEngine::UIElements::ListViewDragger CreateDragger() ;

/// @brief Method InitializeDragAndDropController addr 0x2cc91bc size 0x78 virtual false final false
 void InitializeDragAndDropController() ;

/// @brief Method CreateDragAndDropController addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::ICollectionDragAndDropController CreateDragAndDropController() ;

static UnityEngine::UIElements::BaseVerticalCollectionView New_ctor() ;

/// @brief Method .ctor addr 0x2cc958c size 0x5a0 virtual false final false
 void _ctor() ;

/// @brief Method HasValidDataAndBindings addr 0x2cc9b2c size 0x38 virtual false final false
 bool HasValidDataAndBindings() ;

/// @brief Method OnItemIndexChanged addr 0x2cc9b64 size 0x1e4 virtual false final false
 void OnItemIndexChanged(int32_t srcIndex, int32_t dstIndex) ;

/// @brief Method OnItemsSourceChanged addr 0x2cc9d48 size 0x78 virtual false final false
 void OnItemsSourceChanged() ;

/// @brief Method RefreshItems addr 0x2cc8958 size 0x6c virtual false final false
 void RefreshItems() ;

/// @brief Method Rebuild addr 0x2cc8a70 size 0x6c virtual false final false
 void Rebuild() ;

/// @brief Method RefreshSelection addr 0x2cc9dc0 size 0x298 virtual false final false
 void RefreshSelection() ;

/// @brief Method PostRefresh addr 0x2cca058 size 0x12c virtual true final false
 void PostRefresh() ;

/// @brief Method ScrollToItem addr 0x2cca224 size 0x8c virtual false final false
 void ScrollToItem(int32_t index) ;

/// @brief Method OnScroll addr 0x2cca2b0 size 0x94 virtual false final false
 void OnScroll(UnityEngine::Vector2 offset) ;

/// @brief Method Resize addr 0x2cca184 size 0xa0 virtual false final false
 void Resize(UnityEngine::Vector2 size, int32_t layoutPass) ;

/// @brief Method OnAttachToPanel addr 0x2cca344 size 0x35c virtual false final false
 void OnAttachToPanel(UnityEngine::UIElements::AttachToPanelEvent evt) ;

/// @brief Method OnDetachFromPanel addr 0x2cca6a0 size 0x2c8 virtual false final false
 void OnDetachFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt) ;

/// @brief Method Apply addr 0x2cca968 size 0x3b4 virtual false final false
 bool Apply(UnityEngine::UIElements::KeyboardNavigationOperation op, bool shiftKey) ;

/// @brief Method Apply addr 0x2ccb434 size 0xe4 virtual false final false
 void Apply(UnityEngine::UIElements::KeyboardNavigationOperation op, UnityEngine::UIElements::EventBase sourceEvent) ;

/// @brief Method OnPointerMove addr 0x2ccb530 size 0x88 virtual false final false
 void OnPointerMove(UnityEngine::UIElements::PointerMoveEvent evt) ;

/// @brief Method OnPointerDown addr 0x2ccbfa4 size 0xbc virtual false final false
 void OnPointerDown(UnityEngine::UIElements::PointerDownEvent evt) ;

/// @brief Method OnPointerCancel addr 0x2ccc060 size 0x8c virtual false final false
 void OnPointerCancel(UnityEngine::UIElements::PointerCancelEvent evt) ;

/// @brief Method OnPointerUp addr 0x2ccc0ec size 0xbc virtual false final false
 void OnPointerUp(UnityEngine::UIElements::PointerUpEvent evt) ;

/// @brief Method ProcessPointerDown addr 0x2ccbbac size 0x3f8 virtual false final false
 void ProcessPointerDown(UnityEngine::UIElements::IPointerEvent evt) ;

/// @brief Method ProcessPointerUp addr 0x2ccb5b8 size 0x5f4 virtual false final false
 void ProcessPointerUp(UnityEngine::UIElements::IPointerEvent evt) ;

/// @brief Method DoSelect addr 0x2ccc1a8 size 0x29c virtual false final false
 void DoSelect(UnityEngine::Vector2 localPosition, int32_t clickCount, bool actionKey, bool shiftKey) ;

/// @brief Method DoRangeSelection addr 0x2ccc520 size 0x19c virtual false final false
 void DoRangeSelection(int32_t rangeSelectionFinalIndex) ;

/// @brief Method ProcessSingleClick addr 0x2ccc444 size 0x4 virtual false final false
 void ProcessSingleClick(int32_t clickedIndex) ;

/// @brief Method SelectAll addr 0x2ccad1c size 0x5e4 virtual false final false
 void SelectAll() ;

/// @brief Method AddToSelection addr 0x2ccc4a8 size 0x78 virtual false final false
 void AddToSelection(int32_t index) ;

/// @brief Method AddToSelection addr 0x2ccca1c size 0x390 virtual false final false
 void AddToSelection(System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method AddToSelectionWithoutValidation addr 0x2ccce28 size 0x4e0 virtual false final false
 void AddToSelectionWithoutValidation(int32_t index) ;

/// @brief Method RemoveFromSelection addr 0x2ccc448 size 0x60 virtual false final false
 void RemoveFromSelection(int32_t index) ;

/// @brief Method RemoveFromSelectionWithoutValidation addr 0x2ccd308 size 0x40c virtual false final false
 void RemoveFromSelectionWithoutValidation(int32_t index) ;

/// @brief Method SetSelection addr 0x2cc8c54 size 0x88 virtual false final false
 void SetSelection(int32_t index) ;

/// @brief Method SetSelection addr 0x2ccd714 size 0x8 virtual false final false
 void SetSelection(System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

/// @brief Method SetSelectionWithoutNotify addr 0x2ccda58 size 0x8 virtual false final false
 void SetSelectionWithoutNotify(System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

/// @brief Method SetSelectionInternal addr 0x2ccd71c size 0x33c virtual false final false
 void SetSelectionInternal(System::Collections::Generic::IEnumerable_1<int32_t> indices, bool sendNotification) ;

/// @brief Method NotifyOfSelectionChange addr 0x2cccdac size 0x7c virtual false final false
 void NotifyOfSelectionChange() ;

/// @brief Method ClearSelection addr 0x2cc8bc0 size 0x94 virtual false final false
 void ClearSelection() ;

/// @brief Method ClearSelectionWithoutValidation addr 0x2ccc6bc size 0x360 virtual false final false
 void ClearSelectionWithoutValidation() ;

/// @brief Method OnViewDataReady addr 0x2ccda60 size 0x34 virtual true final false
 void OnViewDataReady() ;

/// @brief Method ExecuteDefaultAction addr 0x2ccda94 size 0x378 virtual true final false
 void ExecuteDefaultAction(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method OnSizeChanged addr 0x2ccde0c size 0x1b8 virtual false final false
 void OnSizeChanged(UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method OnCustomStyleResolved addr 0x2ccdfc4 size 0x164 virtual false final false
 void OnCustomStyleResolved(UnityEngine::UIElements::CustomStyleResolvedEvent e) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2cce1b0 size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2cce1b4 size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method <.ctor>b__143_0 addr 0x2cce464 size 0xc virtual false final false
 void __ctor_b__143_0(float_t v) ;

/// @brief Method <Apply>g__HandleSelectionAndScroll|164_0 addr 0x2ccb300 size 0x134 virtual false final false
 void _Apply_g__HandleSelectionAndScroll_164_0(int32_t index, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0> ) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::BaseVerticalCollectionView);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::BaseVerticalCollectionView, "UnityEngine.UIElements", "BaseVerticalCollectionView");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass164_0");

#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_def.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class DynamicHeightVirtualizationController_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class DynamicHeightVirtualizationController_1<T>;
}
// Type: UnityEngine.UIElements::DynamicHeightVirtualizationController`1
// Type: UnityEngine.UIElements::DynamicHeightVirtualizationController`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7466)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7470), inst: 5173 }), TypeDefinitionIndex(TypeDefinitionIndex(7470))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7466), inst: 2 })
// CS Name: UnityEngine.UIElements.DynamicHeightVirtualizationController`1
class CORDL_TYPE DynamicHeightVirtualizationController_1<T> : public UnityEngine::UIElements::VerticalVirtualizationController_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~DynamicHeightVirtualizationController_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeightVirtualizationController_1", modifiers: " const&", def_value: None }]
constexpr DynamicHeightVirtualizationController_1(DynamicHeightVirtualizationController_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeightVirtualizationController_1", modifiers: "&&", def_value: None }]
constexpr DynamicHeightVirtualizationController_1(DynamicHeightVirtualizationController_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicHeightVirtualizationController_1(void* ptr) noexcept : UnityEngine::UIElements::VerticalVirtualizationController_1<T>(ptr) {
}


  constexpr DynamicHeightVirtualizationController_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicHeightVirtualizationController_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicHeightVirtualizationController_1& operator=(DynamicHeightVirtualizationController_1&& o) noexcept = default;
  constexpr DynamicHeightVirtualizationController_1& operator=(DynamicHeightVirtualizationController_1 const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_InitialAverageHeight, put=__set_InitialAverageHeight))  InitialAverageHeight;

static void __set_InitialAverageHeight(int32_t value) ;

static int32_t __get_InitialAverageHeight() ;

 System::Collections::Generic::Dictionary_2<int32_t,float_t> __declspec(property(get=__get_m_ItemHeightCache, put=__set_m_ItemHeightCache))  m_ItemHeightCache;

constexpr void __set_m_ItemHeightCache(System::Collections::Generic::Dictionary_2<int32_t,float_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,float_t> __get_m_ItemHeightCache() const;

 System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_m_WaitingCache, put=__set_m_WaitingCache))  m_WaitingCache;

constexpr void __set_m_WaitingCache(System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<int32_t> __get_m_WaitingCache() const;

 int32_t __declspec(property(get=__get_m_ForcedFirstVisibleItem, put=__set_m_ForcedFirstVisibleItem))  m_ForcedFirstVisibleItem;

constexpr void __set_m_ForcedFirstVisibleItem(int32_t value) ;

constexpr int32_t __get_m_ForcedFirstVisibleItem() const;

 int32_t __declspec(property(get=__get_m_ForcedLastVisibleItem, put=__set_m_ForcedLastVisibleItem))  m_ForcedLastVisibleItem;

constexpr void __set_m_ForcedLastVisibleItem(int32_t value) ;

constexpr int32_t __get_m_ForcedLastVisibleItem() const;

 bool __declspec(property(get=__get_m_StickToBottom, put=__set_m_StickToBottom))  m_StickToBottom;

constexpr void __set_m_StickToBottom(bool value) ;

constexpr bool __get_m_StickToBottom() const;

 float_t __declspec(property(get=__get_m_AverageHeight, put=__set_m_AverageHeight))  m_AverageHeight;

constexpr void __set_m_AverageHeight(float_t value) ;

constexpr float_t __get_m_AverageHeight() const;

 float_t __declspec(property(get=__get_m_AccumulatedHeight, put=__set_m_AccumulatedHeight))  m_AccumulatedHeight;

constexpr void __set_m_AccumulatedHeight(float_t value) ;

constexpr float_t __get_m_AccumulatedHeight() const;

 float_t __declspec(property(get=__get_m_StoredPadding, put=__set_m_StoredPadding))  m_StoredPadding;

constexpr void __set_m_StoredPadding(float_t value) ;

constexpr float_t __get_m_StoredPadding() const;

 System::Action __declspec(property(get=__get_m_FillCallback, put=__set_m_FillCallback))  m_FillCallback;

constexpr void __set_m_FillCallback(System::Action value) ;

constexpr System::Action __get_m_FillCallback() const;

 System::Action_1<UnityEngine::UIElements::ReusableCollectionItem> __declspec(property(get=__get_m_GeometryChangedCallback, put=__set_m_GeometryChangedCallback))  m_GeometryChangedCallback;

constexpr void __set_m_GeometryChangedCallback(System::Action_1<UnityEngine::UIElements::ReusableCollectionItem> value) ;

constexpr System::Action_1<UnityEngine::UIElements::ReusableCollectionItem> __get_m_GeometryChangedCallback() const;

 UnityEngine::UIElements::IVisualElementScheduledItem __declspec(property(get=__get_m_ScheduledItem, put=__set_m_ScheduledItem))  m_ScheduledItem;

constexpr void __set_m_ScheduledItem(UnityEngine::UIElements::IVisualElementScheduledItem value) ;

constexpr UnityEngine::UIElements::IVisualElementScheduledItem __get_m_ScheduledItem() const;

 System::Predicate_1<int32_t> __declspec(property(get=__get_m_IndexOutOfBoundsPredicate, put=__set_m_IndexOutOfBoundsPredicate))  m_IndexOutOfBoundsPredicate;

constexpr void __set_m_IndexOutOfBoundsPredicate(System::Predicate_1<int32_t> value) ;

constexpr System::Predicate_1<int32_t> __get_m_IndexOutOfBoundsPredicate() const;


// Methods

// Ctor Parameters [CppParam { name: "collectionView", ty: "UnityEngine::UIElements::BaseVerticalCollectionView", modifiers: "", def_value: None }]
explicit DynamicHeightVirtualizationController_1(UnityEngine::UIElements::BaseVerticalCollectionView collectionView) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::BaseVerticalCollectionView collectionView) ;

/// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
 void Refresh(bool rebuild) ;

/// @brief Method ScrollToItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void ScrollToItem(int32_t index) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Resize(UnityEngine::Vector2 size, int32_t layoutPass) ;

/// @brief Method OnScroll addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnScroll(UnityEngine::Vector2 scrollOffset) ;

/// @brief Method NeedsFill addr 0x0 size 0xffffffffffffffff virtual false final false
 bool NeedsFill() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
 void Fill() ;

/// @brief Method GetIndexFromPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetIndexFromPosition(UnityEngine::Vector2 position) ;

/// @brief Method GetItemHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetItemHeight(int32_t index) ;

/// @brief Method GetFirstVisibleItem addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetFirstVisibleItem(float_t offset) ;

/// @brief Method UpdateScrollViewContainer addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateScrollViewContainer(int32_t index, float_t previousHeight, float_t newHeight) ;

/// @brief Method ApplyScrollViewUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void ApplyScrollViewUpdate() ;

/// @brief Method OnViewportGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnViewportGeometryChanged(UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method GetContentHeight addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetContentHeight() ;

/// @brief Method GetContentHeightForIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetContentHeightForIndex(int32_t lastIndex) ;

/// @brief Method RegisterItemHeight addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterItemHeight(int32_t index, float_t height) ;

/// @brief Method UnregisterItemHeight addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnregisterItemHeight(int32_t index, float_t height) ;

/// @brief Method OnRecycledItemGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnRecycledItemGeometryChanged(UnityEngine::UIElements::ReusableCollectionItem item) ;

/// @brief Method GetOrMakeItem addr 0x0 size 0xffffffffffffffff virtual true final false
 T GetOrMakeItem() ;

/// @brief Method ReplaceActiveItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReplaceActiveItem(int32_t index) ;

/// @brief Method ReleaseItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReleaseItem(int32_t activeItemsIndex) ;

/// @brief Method IsIndexOutOfBounds addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsIndexOutOfBounds(int32_t i) ;

/// @brief Method <.ctor>b__13_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __ctor_b__13_0(UnityEngine::UIElements::VisualElement element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::DynamicHeightVirtualizationController_1, "UnityEngine.UIElements", "DynamicHeightVirtualizationController`1");

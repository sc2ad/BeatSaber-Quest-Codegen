#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
class Action;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CollectionViewController;
}
// Type: UnityEngine.UIElements::CollectionViewController
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7465))
// CS Name: UnityEngine.UIElements.CollectionViewController
class CORDL_TYPE CollectionViewController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CollectionViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionViewController", modifiers: " const&", def_value: None }]
constexpr CollectionViewController(CollectionViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionViewController", modifiers: "&&", def_value: None }]
constexpr CollectionViewController(CollectionViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionViewController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionViewController& operator=(CollectionViewController&& o) noexcept = default;
  constexpr CollectionViewController& operator=(CollectionViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::BaseVerticalCollectionView __declspec(property(get=__get_m_View, put=__set_m_View))  m_View;

constexpr void __set_m_View(UnityEngine::UIElements::BaseVerticalCollectionView value) ;

constexpr UnityEngine::UIElements::BaseVerticalCollectionView __get_m_View() const;

 System::Collections::IList __declspec(property(get=__get_m_ItemsSource, put=__set_m_ItemsSource))  m_ItemsSource;

constexpr void __set_m_ItemsSource(System::Collections::IList value) ;

constexpr System::Collections::IList __get_m_ItemsSource() const;

 System::Action __declspec(property(get=__get_itemsSourceChanged, put=__set_itemsSourceChanged))  itemsSourceChanged;

constexpr void __set_itemsSourceChanged(System::Action value) ;

constexpr System::Action __get_itemsSourceChanged() const;

 System::Action_2<int32_t,int32_t> __declspec(property(get=__get_itemIndexChanged, put=__set_itemIndexChanged))  itemIndexChanged;

constexpr void __set_itemIndexChanged(System::Action_2<int32_t,int32_t> value) ;

constexpr System::Action_2<int32_t,int32_t> __get_itemIndexChanged() const;


// Properties

 System::Collections::IList __declspec(property(get=get_itemsSource, put=set_itemsSource))  itemsSource;

 UnityEngine::UIElements::BaseVerticalCollectionView __declspec(property(get=get_view))  view;


// Methods

/// @brief Method add_itemsSourceChanged addr 0x2d10aa0 size 0x9c virtual false final false
 void add_itemsSourceChanged(System::Action value) ;

/// @brief Method remove_itemsSourceChanged addr 0x2d10b3c size 0x9c virtual false final false
 void remove_itemsSourceChanged(System::Action value) ;

/// @brief Method add_itemIndexChanged addr 0x2d10bd8 size 0xb0 virtual false final false
 void add_itemIndexChanged(System::Action_2<int32_t,int32_t> value) ;

/// @brief Method remove_itemIndexChanged addr 0x2d10c88 size 0xb0 virtual false final false
 void remove_itemIndexChanged(System::Action_2<int32_t,int32_t> value) ;

/// @brief Method get_itemsSource addr 0x2d10d38 size 0x8 virtual false final false
 System::Collections::IList get_itemsSource() ;

/// @brief Method set_itemsSource addr 0x2d1019c size 0x2c virtual false final false
 void set_itemsSource(System::Collections::IList value) ;

/// @brief Method get_view addr 0x2d10d5c size 0x8 virtual false final false
 UnityEngine::UIElements::BaseVerticalCollectionView get_view() ;

/// @brief Method SetView addr 0x2d10d64 size 0x94 virtual false final false
 void SetView(UnityEngine::UIElements::BaseVerticalCollectionView view) ;

/// @brief Method GetItemCount addr 0x2d10df8 size 0xb0 virtual true final false
 int32_t GetItemCount() ;

/// @brief Method GetIdForIndex addr 0x2d10ea8 size 0x38 virtual true final false
 int32_t GetIdForIndex(int32_t index) ;

/// @brief Method GetItemForIndex addr 0x2d10ee0 size 0x13c virtual true final false
 ::bs_hook::Il2CppWrapperType GetItemForIndex(int32_t index) ;

/// @brief Method InvokeMakeItem addr 0x2d1101c size 0x38 virtual true final false
 void InvokeMakeItem(UnityEngine::UIElements::ReusableCollectionItem reusableItem) ;

/// @brief Method InvokeBindItem addr 0x2d0f988 size 0xc8 virtual true final false
 void InvokeBindItem(UnityEngine::UIElements::ReusableCollectionItem reusableItem, int32_t index) ;

/// @brief Method InvokeUnbindItem addr 0x2d11054 size 0x24 virtual true final false
 void InvokeUnbindItem(UnityEngine::UIElements::ReusableCollectionItem reusableItem, int32_t index) ;

/// @brief Method InvokeDestroyItem addr 0x2d11078 size 0x24 virtual true final false
 void InvokeDestroyItem(UnityEngine::UIElements::ReusableCollectionItem reusableItem) ;

/// @brief Method MakeItem addr 0x2d1109c size 0xdc virtual true final false
 UnityEngine::UIElements::VisualElement MakeItem() ;

/// @brief Method BindItem addr 0x2d11178 size 0x1d0 virtual true final false
 void BindItem(UnityEngine::UIElements::VisualElement element, int32_t index) ;

/// @brief Method UnbindItem addr 0x2d11348 size 0x34 virtual true final false
 void UnbindItem(UnityEngine::UIElements::VisualElement element, int32_t index) ;

/// @brief Method DestroyItem addr 0x2d1137c size 0x34 virtual true final false
 void DestroyItem(UnityEngine::UIElements::VisualElement element) ;

/// @brief Method RaiseItemsSourceChanged addr 0x2d10d40 size 0x1c virtual false final false
 void RaiseItemsSourceChanged() ;

/// @brief Method RaiseItemIndexChanged addr 0x2d10494 size 0x1c virtual false final false
 void RaiseItemIndexChanged(int32_t srcIndex, int32_t dstIndex) ;

static UnityEngine::UIElements::CollectionViewController New_ctor() ;

/// @brief Method .ctor addr 0x2d10a98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::CollectionViewController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::CollectionViewController, "UnityEngine.UIElements", "CollectionViewController");

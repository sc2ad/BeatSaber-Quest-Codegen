#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class UnityEngine__UIElements__VerticalVirtualizationController_1____c;
}
namespace UnityEngine::UIElements {
template<typename T>
class VerticalVirtualizationController_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class UnityEngine__UIElements__VerticalVirtualizationController_1____c<T>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class VerticalVirtualizationController_1<T>;
}
// Type: ::<>c
// Type: UnityEngine.UIElements::VerticalVirtualizationController`1
// Type: ::<>c
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7469))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7469), inst: 2 })
// CS Name: UnityEngine.UIElements.VerticalVirtualizationController`1::<>c
class CORDL_TYPE UnityEngine__UIElements__VerticalVirtualizationController_1____c<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__VerticalVirtualizationController_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__VerticalVirtualizationController_1____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__VerticalVirtualizationController_1____c(UnityEngine__UIElements__VerticalVirtualizationController_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__VerticalVirtualizationController_1____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__VerticalVirtualizationController_1____c(UnityEngine__UIElements__VerticalVirtualizationController_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__VerticalVirtualizationController_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__VerticalVirtualizationController_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__VerticalVirtualizationController_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__VerticalVirtualizationController_1____c& operator=(UnityEngine__UIElements__VerticalVirtualizationController_1____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__VerticalVirtualizationController_1____c& operator=(UnityEngine__UIElements__VerticalVirtualizationController_1____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__VerticalVirtualizationController_1____c<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__VerticalVirtualizationController_1____c<T> value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__VerticalVirtualizationController_1____c<T> __get___9() ;

static System::Func_1<T> __declspec(property(get=__get___9__25_0, put=__set___9__25_0))  __9__25_0;

static void __set___9__25_0(System::Func_1<T> value) ;

static System::Func_1<T> __get___9__25_0() ;

static System::Action_1<T> __declspec(property(get=__get___9__25_1, put=__set___9__25_1))  __9__25_1;

static void __set___9__25_1(System::Action_1<T> value) ;

static System::Action_1<T> __get___9__25_1() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__VerticalVirtualizationController_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__25_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T __ctor_b__25_0() ;

/// @brief Method <.ctor>b__25_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __ctor_b__25_1(T i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::VerticalVirtualizationController`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7470)), TypeDefinitionIndex(TypeDefinitionIndex(7471))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7470), inst: 2 })
// CS Name: UnityEngine.UIElements.VerticalVirtualizationController`1
class CORDL_TYPE VerticalVirtualizationController_1<T> : public UnityEngine::UIElements::CollectionVirtualizationController {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__VerticalVirtualizationController_1____c<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~VerticalVirtualizationController_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1", modifiers: " const&", def_value: None }]
constexpr VerticalVirtualizationController_1(VerticalVirtualizationController_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1", modifiers: "&&", def_value: None }]
constexpr VerticalVirtualizationController_1(VerticalVirtualizationController_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VerticalVirtualizationController_1(void* ptr) noexcept : UnityEngine::UIElements::CollectionVirtualizationController(ptr) {
}


  constexpr VerticalVirtualizationController_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VerticalVirtualizationController_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VerticalVirtualizationController_1& operator=(VerticalVirtualizationController_1&& o) noexcept = default;
  constexpr VerticalVirtualizationController_1& operator=(VerticalVirtualizationController_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::BaseVerticalCollectionView __declspec(property(get=__get_m_ListView, put=__set_m_ListView))  m_ListView;

constexpr void __set_m_ListView(UnityEngine::UIElements::BaseVerticalCollectionView value) ;

constexpr UnityEngine::UIElements::BaseVerticalCollectionView __get_m_ListView() const;

 UnityEngine::Pool::ObjectPool_1<T> __declspec(property(get=__get_m_Pool, put=__set_m_Pool))  m_Pool;

constexpr void __set_m_Pool(UnityEngine::Pool::ObjectPool_1<T> value) ;

constexpr UnityEngine::Pool::ObjectPool_1<T> __get_m_Pool() const;

 System::Collections::Generic::List_1<T> __declspec(property(get=__get_m_ActiveItems, put=__set_m_ActiveItems))  m_ActiveItems;

constexpr void __set_m_ActiveItems(System::Collections::Generic::List_1<T> value) ;

constexpr System::Collections::Generic::List_1<T> __get_m_ActiveItems() const;

 int32_t __declspec(property(get=__get_m_LastFocusedElementIndex, put=__set_m_LastFocusedElementIndex))  m_LastFocusedElementIndex;

constexpr void __set_m_LastFocusedElementIndex(int32_t value) ;

constexpr int32_t __get_m_LastFocusedElementIndex() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_LastFocusedElementTreeChildIndexes, put=__set_m_LastFocusedElementTreeChildIndexes))  m_LastFocusedElementTreeChildIndexes;

constexpr void __set_m_LastFocusedElementTreeChildIndexes(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_m_LastFocusedElementTreeChildIndexes() const;

 int32_t __declspec(property(get=__get_m_FirstVisibleIndex, put=__set_m_FirstVisibleIndex))  m_FirstVisibleIndex;

constexpr void __set_m_FirstVisibleIndex(int32_t value) ;

constexpr int32_t __get_m_FirstVisibleIndex() const;

 System::Func_2<T,bool> __declspec(property(get=__get_m_VisibleItemPredicateDelegate, put=__set_m_VisibleItemPredicateDelegate))  m_VisibleItemPredicateDelegate;

constexpr void __set_m_VisibleItemPredicateDelegate(System::Func_2<T,bool> value) ;

constexpr System::Func_2<T,bool> __get_m_VisibleItemPredicateDelegate() const;

 System::Collections::Generic::List_1<T> __declspec(property(get=__get_m_ScrollInsertionList, put=__set_m_ScrollInsertionList))  m_ScrollInsertionList;

constexpr void __set_m_ScrollInsertionList(System::Collections::Generic::List_1<T> value) ;

constexpr System::Collections::Generic::List_1<T> __get_m_ScrollInsertionList() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_k_EmptyRows, put=__set_k_EmptyRows))  k_EmptyRows;

constexpr void __set_k_EmptyRows(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_k_EmptyRows() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ReusableCollectionItem> __declspec(property(get=get_activeItems))  activeItems;

 T __declspec(property(get=get_firstVisibleItem))  firstVisibleItem;

 T __declspec(property(get=get_lastVisibleItem))  lastVisibleItem;

 int32_t __declspec(property(get=get_visibleItemCount))  visibleItemCount;

 int32_t __declspec(property(get=get_lastVisibleIndex))  lastVisibleIndex;

 float_t __declspec(property(get=get_lastHeight))  lastHeight;


// Methods

/// @brief Method get_activeItems addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ReusableCollectionItem> get_activeItems() ;

/// @brief Method VisibleItemPredicate addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VisibleItemPredicate(T i) ;

/// @brief Method get_firstVisibleItem addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_firstVisibleItem() ;

/// @brief Method get_lastVisibleItem addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_lastVisibleItem() ;

/// @brief Method get_visibleItemCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_visibleItemCount() ;

/// @brief Method get_lastVisibleIndex addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_lastVisibleIndex() ;

/// @brief Method get_lastHeight addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_lastHeight() ;

// Ctor Parameters [CppParam { name: "collectionView", ty: "UnityEngine::UIElements::BaseVerticalCollectionView", modifiers: "", def_value: None }]
explicit VerticalVirtualizationController_1(UnityEngine::UIElements::BaseVerticalCollectionView collectionView) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::BaseVerticalCollectionView collectionView) ;

/// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
 void Refresh(bool rebuild) ;

/// @brief Method Setup addr 0x0 size 0xffffffffffffffff virtual false final false
 void Setup(T recycledItem, int32_t newIndex) ;

/// @brief Method OnFocus addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnFocus(UnityEngine::UIElements::VisualElement leafTarget) ;

/// @brief Method OnBlur addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnBlur(UnityEngine::UIElements::VisualElement willFocus) ;

/// @brief Method HandleFocus addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleFocus(UnityEngine::UIElements::ReusableCollectionItem recycledItem, int32_t previousIndex) ;

/// @brief Method UpdateBackground addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateBackground() ;

/// @brief Method ReplaceActiveItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReplaceActiveItem(int32_t index) ;

/// @brief Method GetOrMakeItem addr 0x0 size 0xffffffffffffffff virtual true final false
 T GetOrMakeItem() ;

/// @brief Method ReleaseItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReleaseItem(int32_t activeItemsIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UnityEngine__UIElements__VerticalVirtualizationController_1____c, "UnityEngine.UIElements", "VerticalVirtualizationController`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::VerticalVirtualizationController_1, "UnityEngine.UIElements", "VerticalVirtualizationController`1");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct System__Collections__Generic__Dictionary_2__KeyCollection__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__List_1__Enumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__GridView__GridViewCellsEnumerator;
}
namespace GlobalNamespace {
class GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1;
}
namespace GlobalNamespace {
class GlobalNamespace__GridView__IDataSource;
}
namespace GlobalNamespace {
class GridView;
}
// Type: ::IDataSource
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5871))
// CS Name: GridView::IDataSource
class CORDL_TYPE GlobalNamespace__GridView__IDataSource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~GlobalNamespace__GridView__IDataSource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GridView__IDataSource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetNumberOfCells addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetNumberOfCells() ;

/// @brief Method GetCellWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetCellWidth() ;

/// @brief Method GetCellHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetCellHeight() ;

/// @brief Method CellForIdx addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::MonoBehaviour CellForIdx(GlobalNamespace::GridView gridView, int32_t idx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetEnumerator>d__1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5872))
// CS Name: GridView::GridViewCellsEnumerator::<GetEnumerator>d__1
class CORDL_TYPE GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1(GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1(GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1& operator=(GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1&& o) noexcept = default;
  constexpr GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1& operator=(GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::MonoBehaviour __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::MonoBehaviour value) ;

constexpr UnityEngine::MonoBehaviour __get___2__current() const;

 GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator value) ;

constexpr GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator __get___4__this() const;

 GlobalNamespace::System__Collections__Generic__Dictionary_2__KeyCollection__Enumerator<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(GlobalNamespace::System__Collections__Generic__Dictionary_2__KeyCollection__Enumerator<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> value) ;

constexpr GlobalNamespace::System__Collections__Generic__Dictionary_2__KeyCollection__Enumerator<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> __get___7__wrap1() const;

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::MonoBehaviour> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::MonoBehaviour> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::MonoBehaviour> __get___7__wrap2() const;


// Properties

 UnityEngine::MonoBehaviour __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2188d8c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2188db8 size 0xb8 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2188e70 size 0x2b0 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2189170 size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x2189120 size 0x50 virtual false final false
 void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current addr 0x21891c0 size 0x8 virtual true final true
 UnityEngine::MonoBehaviour System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21891c8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2189208 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GridViewCellsEnumerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5873))
// CS Name: GridView::GridViewCellsEnumerator
class CORDL_TYPE GlobalNamespace__GridView__GridViewCellsEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__1 = GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__GridView__GridViewCellsEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GridView__GridViewCellsEnumerator", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GridView__GridViewCellsEnumerator(GlobalNamespace__GridView__GridViewCellsEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GridView__GridViewCellsEnumerator", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GridView__GridViewCellsEnumerator(GlobalNamespace__GridView__GridViewCellsEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GridView__GridViewCellsEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GridView__GridViewCellsEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GridView__GridViewCellsEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GridView__GridViewCellsEnumerator& operator=(GlobalNamespace__GridView__GridViewCellsEnumerator&& o) noexcept = default;
  constexpr GlobalNamespace__GridView__GridViewCellsEnumerator& operator=(GlobalNamespace__GridView__GridViewCellsEnumerator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GridView __declspec(property(get=__get__gridView, put=__set__gridView))  _gridView;

constexpr void __set__gridView(GlobalNamespace::GridView value) ;

constexpr GlobalNamespace::GridView __get__gridView() const;


// Methods

/// @brief Method GetEnumerator addr 0x2188d24 size 0x68 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2188db4 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "gridView", ty: "GlobalNamespace::GridView", modifiers: "", def_value: None }]
explicit GlobalNamespace__GridView__GridViewCellsEnumerator(GlobalNamespace::GridView gridView) ;

/// @brief Method .ctor addr 0x21883e0 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::GridView gridView) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GridView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5874))
// CS Name: GridView
class CORDL_TYPE GridView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using GridViewCellsEnumerator = GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator;

using IDataSource = GlobalNamespace::GlobalNamespace__GridView__IDataSource;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GridView() = default;

// Ctor Parameters [CppParam { name: "", ty: "GridView", modifiers: " const&", def_value: None }]
constexpr GridView(GridView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GridView", modifiers: "&&", def_value: None }]
constexpr GridView(GridView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GridView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GridView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GridView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GridView& operator=(GridView&& o) noexcept = default;
  constexpr GridView& operator=(GridView const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get__contentTransform, put=__set__contentTransform))  _contentTransform;

constexpr void __set__contentTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__contentTransform() const;

 GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator __declspec(property(get=__get__cellsEnumerator_k__BackingField, put=__set__cellsEnumerator_k__BackingField))  _cellsEnumerator_k__BackingField;

constexpr void __set__cellsEnumerator_k__BackingField(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator value) ;

constexpr GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator __get__cellsEnumerator_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__GridView__IDataSource __declspec(property(get=__get__dataSource, put=__set__dataSource))  _dataSource;

constexpr void __set__dataSource(GlobalNamespace::GlobalNamespace__GridView__IDataSource value) ;

constexpr GlobalNamespace::GlobalNamespace__GridView__IDataSource __get__dataSource() const;

 int32_t __declspec(property(get=__get__columnCount, put=__set__columnCount))  _columnCount;

constexpr void __set__columnCount(int32_t value) ;

constexpr int32_t __get__columnCount() const;

 int32_t __declspec(property(get=__get__rowCount, put=__set__rowCount))  _rowCount;

constexpr void __set__rowCount(int32_t value) ;

constexpr int32_t __get__rowCount() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::Queue_1<UnityEngine::MonoBehaviour>> __declspec(property(get=__get__availableCellsPerPrefabDictionary, put=__set__availableCellsPerPrefabDictionary))  _availableCellsPerPrefabDictionary;

constexpr void __set__availableCellsPerPrefabDictionary(System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::Queue_1<UnityEngine::MonoBehaviour>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::Queue_1<UnityEngine::MonoBehaviour>> __get__availableCellsPerPrefabDictionary() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> __declspec(property(get=__get__spawnedCellsPerPrefabDictionary, put=__set__spawnedCellsPerPrefabDictionary))  _spawnedCellsPerPrefabDictionary;

constexpr void __set__spawnedCellsPerPrefabDictionary(System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> __get__spawnedCellsPerPrefabDictionary() const;


// Properties

 GlobalNamespace::GlobalNamespace__GridView__IDataSource __declspec(property(get=get_dataSource))  dataSource;

 GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator __declspec(property(get=get_cellsEnumerator, put=set_cellsEnumerator))  cellsEnumerator;

 int32_t __declspec(property(get=get_rowCount))  rowCount;

 int32_t __declspec(property(get=get_columnCount))  columnCount;


// Methods

/// @brief Method get_dataSource addr 0x2188320 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__GridView__IDataSource get_dataSource() ;

/// @brief Method get_cellsEnumerator addr 0x2188328 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator get_cellsEnumerator() ;

/// @brief Method set_cellsEnumerator addr 0x2188330 size 0x8 virtual false final false
 void set_cellsEnumerator(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator value) ;

/// @brief Method get_rowCount addr 0x2188338 size 0x8 virtual false final false
 int32_t get_rowCount() ;

/// @brief Method get_columnCount addr 0x2188340 size 0x8 virtual false final false
 int32_t get_columnCount() ;

/// @brief Method SetDataSource addr 0x2188348 size 0x98 virtual false final false
 void SetDataSource(GlobalNamespace::GlobalNamespace__GridView__IDataSource newDataSource, bool reloadData) ;

/// @brief Method ReloadData addr 0x2188408 size 0x774 virtual false final false
 void ReloadData() ;

/// @brief Method GetActiveCellsForIdentifier addr 0x2188b7c size 0xe8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> GetActiveCellsForIdentifier(UnityEngine::MonoBehaviour prefab) ;

/// @brief Method GetReusableCellView addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetReusableCellView(UnityEngine::MonoBehaviour prefab) ;

// Ctor Parameters []
explicit GridView() ;

/// @brief Method .ctor addr 0x2188c64 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator, "", "GridView/GridViewCellsEnumerator");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1, "", "GridView/GridViewCellsEnumerator/<GetEnumerator>d__1");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GridView__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GridView__IDataSource, "", "GridView/IDataSource");
NEED_NO_BOX(GlobalNamespace::GridView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GridView, "", "GridView");

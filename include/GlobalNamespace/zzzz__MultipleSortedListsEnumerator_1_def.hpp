#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
template<typename T>
class BinaryHeap_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem;
}
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem;
}
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4;
}
namespace GlobalNamespace {
template<typename T>
class MultipleSortedListsEnumerator_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class MultipleSortedListsEnumerator_1<T>;
}
// Type: ::HeapItem
// Type: ::<GetEnumerator>d__4
// Type: ::MultipleSortedListsEnumerator`1
// Type: ::HeapItem
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13758))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13758), inst: 2 })
// CS Name: MultipleSortedListsEnumerator`1::HeapItem
class CORDL_TYPE GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IComparable_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>
constexpr operator  System::IComparable_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem(GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem(GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem& operator=(GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem&& o) noexcept = default;
  constexpr GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem& operator=(GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IReadOnlyList_1<T> __declspec(property(get=__get__dataList, put=__set__dataList))  _dataList;

constexpr void __set__dataList(System::Collections::Generic::IReadOnlyList_1<T> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<T> __get__dataList() const;

 int32_t __declspec(property(get=__get__idx, put=__set__idx))  _idx;

constexpr void __set__idx(int32_t value) ;

constexpr int32_t __get__idx() const;

 T __declspec(property(get=__get__currentValue, put=__set__currentValue))  _currentValue;

constexpr void __set__currentValue(T value) ;

constexpr T __get__currentValue() const;


// Properties

 T __declspec(property(get=get_currentValue))  currentValue;


// Methods

/// @brief Method get_currentValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_currentValue() ;

static GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> New_ctor(System::Collections::Generic::IReadOnlyList_1<T> dataList) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IReadOnlyList_1<T> dataList) ;

/// @brief Method MoveToNextItem addr 0x0 size 0xffffffffffffffff virtual false final false
 bool MoveToNextItem() ;

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t CompareTo(GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> heapItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetEnumerator>d__4
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13759))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13759), inst: 2 })
// CS Name: MultipleSortedListsEnumerator`1::<GetEnumerator>d__4
class CORDL_TYPE GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4(GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4(GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4& operator=(GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4&& o) noexcept = default;
  constexpr GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4& operator=(GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 T __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(T value) ;

constexpr T __get___2__current() const;

 GlobalNamespace::MultipleSortedListsEnumerator_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultipleSortedListsEnumerator_1<T> value) ;

constexpr GlobalNamespace::MultipleSortedListsEnumerator_1<T> __get___4__this() const;

 GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> __declspec(property(get=__get__heapItem_5__2, put=__set__heapItem_5__2))  _heapItem_5__2;

constexpr void __set__heapItem_5__2(GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> value) ;

constexpr GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> __get__heapItem_5__2() const;


// Properties

 T __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T> New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultipleSortedListsEnumerator`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13760))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13760), inst: 2 })
// CS Name: MultipleSortedListsEnumerator`1
class CORDL_TYPE MultipleSortedListsEnumerator_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__4 = GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>;

using HeapItem = GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultipleSortedListsEnumerator_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultipleSortedListsEnumerator_1", modifiers: " const&", def_value: None }]
constexpr MultipleSortedListsEnumerator_1(MultipleSortedListsEnumerator_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultipleSortedListsEnumerator_1", modifiers: "&&", def_value: None }]
constexpr MultipleSortedListsEnumerator_1(MultipleSortedListsEnumerator_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultipleSortedListsEnumerator_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultipleSortedListsEnumerator_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultipleSortedListsEnumerator_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultipleSortedListsEnumerator_1& operator=(MultipleSortedListsEnumerator_1&& o) noexcept = default;
  constexpr MultipleSortedListsEnumerator_1& operator=(MultipleSortedListsEnumerator_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BinaryHeap_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>> __declspec(property(get=__get__heap, put=__set__heap))  _heap;

constexpr void __set__heap(GlobalNamespace::BinaryHeap_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>> value) ;

constexpr GlobalNamespace::BinaryHeap_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>> __get__heap() const;


// Methods

static GlobalNamespace::MultipleSortedListsEnumerator_1<T> New_ctor(::ArrayW<System::Collections::Generic::IReadOnlyList_1<T>> dataList) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<System::Collections::Generic::IReadOnlyList_1<T>> dataList) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem, "", "MultipleSortedListsEnumerator`1/HeapItem");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4, "", "MultipleSortedListsEnumerator`1/<GetEnumerator>d__4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::MultipleSortedListsEnumerator_1, "", "MultipleSortedListsEnumerator`1");

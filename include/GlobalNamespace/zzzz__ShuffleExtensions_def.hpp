#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class Random;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1;
}
namespace GlobalNamespace {
template<typename T1,typename T2>
class ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2;
}
namespace GlobalNamespace {
class ShuffleExtensions;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>;
}
namespace GlobalNamespace {
template<>
class ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>;
}
namespace GlobalNamespace {
template<>
class ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>;
}
namespace GlobalNamespace {
template<>
class ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>;
}
// Type: ::<PickRandomElementsWithTombstone>d__1`1
// Type: ::<TakeWithTombstone>d__2`1
// Type: ::<ZipSkipTombstone>d__3`2
// Type: ::ShuffleExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5468))
// CS Name: ShuffleExtensions
class CORDL_TYPE ShuffleExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T1,typename T2>
using _ZipSkipTombstone_d__3_2 = ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>;

template<typename T>
using _TakeWithTombstone_d__2_1 = ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>;

template<typename T>
using _PickRandomElementsWithTombstone_d__1_1 = ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ShuffleExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShuffleExtensions", modifiers: " const&", def_value: None }]
constexpr ShuffleExtensions(ShuffleExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShuffleExtensions", modifiers: "&&", def_value: None }]
constexpr ShuffleExtensions(ShuffleExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShuffleExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ShuffleExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShuffleExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShuffleExtensions& operator=(ShuffleExtensions&& o) noexcept = default;
  constexpr ShuffleExtensions& operator=(ShuffleExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Shuffle addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::IEnumerable_1<T> Shuffle(::System::Collections::Generic::IEnumerable_1<T> source, ::System::Random random) ;

/// @brief Method PickRandomElementsWithTombstone addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::IEnumerable_1<T> PickRandomElementsWithTombstone(::System::Collections::Generic::IEnumerable_1<T> source, int32_t limit, int32_t count, ::System::Random random, T tombstone) ;

/// @brief Method TakeWithTombstone addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::IEnumerable_1<T> TakeWithTombstone(::System::Collections::Generic::IEnumerable_1<T> source, int32_t limit, T tombstone) ;

/// @brief Method ZipSkipTombstone addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2>
static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>> ZipSkipTombstone(::System::Collections::Generic::IEnumerable_1<T1> collection1, ::System::Collections::Generic::IEnumerable_1<T2> collection2, T2 collection2Tombstone) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PickRandomElementsWithTombstone>d__1`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5465))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5465), inst: 2 })
// CS Name: ShuffleExtensions::<PickRandomElementsWithTombstone>d__1`1
class CORDL_TYPE ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1& operator=(____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1& operator=(____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 T __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(T value) ;

constexpr T __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::System::Collections::Generic::IEnumerable_1<T> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<T> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T> __get_source() const;

 ::System::Collections::Generic::IEnumerable_1<T> __declspec(property(get=__get___3__source, put=__set___3__source))  __3__source;

constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<T> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T> __get___3__source() const;

 ::System::Random __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::System::Random value) ;

constexpr ::System::Random __get_random() const;

 ::System::Random __declspec(property(get=__get___3__random, put=__set___3__random))  __3__random;

constexpr void __set___3__random(::System::Random value) ;

constexpr ::System::Random __get___3__random() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get___3__count, put=__set___3__count))  __3__count;

constexpr void __set___3__count(int32_t value) ;

constexpr int32_t __get___3__count() const;

 int32_t __declspec(property(get=__get_limit, put=__set_limit))  limit;

constexpr void __set_limit(int32_t value) ;

constexpr int32_t __get_limit() const;

 int32_t __declspec(property(get=__get___3__limit, put=__set___3__limit))  __3__limit;

constexpr void __set___3__limit(int32_t value) ;

constexpr int32_t __get___3__limit() const;

 T __declspec(property(get=__get_tombstone, put=__set_tombstone))  tombstone;

constexpr void __set_tombstone(T value) ;

constexpr T __get_tombstone() const;

 T __declspec(property(get=__get___3__tombstone, put=__set___3__tombstone))  __3__tombstone;

constexpr void __set___3__tombstone(T value) ;

constexpr T __get___3__tombstone() const;

 int32_t __declspec(property(get=__get__index_5__2, put=__set__index_5__2))  _index_5__2;

constexpr void __set__index_5__2(int32_t value) ;

constexpr int32_t __get__index_5__2() const;

 int32_t __declspec(property(get=__get__picked_5__3, put=__set__picked_5__3))  _picked_5__3;

constexpr void __set__picked_5__3(int32_t value) ;

constexpr int32_t __get__picked_5__3() const;

 ::System::Collections::Generic::IEnumerator_1<T> __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(::System::Collections::Generic::IEnumerator_1<T> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T> __get___7__wrap3() const;


// Properties

 T __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PickRandomElementsWithTombstone>d__1`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5465))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5465), inst: 92 })
// CS Name: ShuffleExtensions::<PickRandomElementsWithTombstone>d__1`1
class CORDL_TYPE ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1& operator=(____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1& operator=(____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 int32_t __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(int32_t value) ;

constexpr int32_t __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> __get_source() const;

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=__get___3__source, put=__set___3__source))  __3__source;

constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> __get___3__source() const;

 ::System::Random __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::System::Random value) ;

constexpr ::System::Random __get_random() const;

 ::System::Random __declspec(property(get=__get___3__random, put=__set___3__random))  __3__random;

constexpr void __set___3__random(::System::Random value) ;

constexpr ::System::Random __get___3__random() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get___3__count, put=__set___3__count))  __3__count;

constexpr void __set___3__count(int32_t value) ;

constexpr int32_t __get___3__count() const;

 int32_t __declspec(property(get=__get_limit, put=__set_limit))  limit;

constexpr void __set_limit(int32_t value) ;

constexpr int32_t __get_limit() const;

 int32_t __declspec(property(get=__get___3__limit, put=__set___3__limit))  __3__limit;

constexpr void __set___3__limit(int32_t value) ;

constexpr int32_t __get___3__limit() const;

 int32_t __declspec(property(get=__get_tombstone, put=__set_tombstone))  tombstone;

constexpr void __set_tombstone(int32_t value) ;

constexpr int32_t __get_tombstone() const;

 int32_t __declspec(property(get=__get___3__tombstone, put=__set___3__tombstone))  __3__tombstone;

constexpr void __set___3__tombstone(int32_t value) ;

constexpr int32_t __get___3__tombstone() const;

 int32_t __declspec(property(get=__get__index_5__2, put=__set__index_5__2))  _index_5__2;

constexpr void __set__index_5__2(int32_t value) ;

constexpr int32_t __get__index_5__2() const;

 int32_t __declspec(property(get=__get__picked_5__3, put=__set__picked_5__3))  _picked_5__3;

constexpr void __set__picked_5__3(int32_t value) ;

constexpr int32_t __get__picked_5__3() const;

 ::System::Collections::Generic::IEnumerator_1<int32_t> __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(::System::Collections::Generic::IEnumerator_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t> __get___7__wrap3() const;


// Properties

 int32_t __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<int32_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<TakeWithTombstone>d__2`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5466))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5466), inst: 2 })
// CS Name: ShuffleExtensions::<TakeWithTombstone>d__2`1
class CORDL_TYPE ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1& operator=(____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1& operator=(____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 T __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(T value) ;

constexpr T __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::System::Collections::Generic::IEnumerable_1<T> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<T> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T> __get_source() const;

 ::System::Collections::Generic::IEnumerable_1<T> __declspec(property(get=__get___3__source, put=__set___3__source))  __3__source;

constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<T> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T> __get___3__source() const;

 int32_t __declspec(property(get=__get_limit, put=__set_limit))  limit;

constexpr void __set_limit(int32_t value) ;

constexpr int32_t __get_limit() const;

 int32_t __declspec(property(get=__get___3__limit, put=__set___3__limit))  __3__limit;

constexpr void __set___3__limit(int32_t value) ;

constexpr int32_t __get___3__limit() const;

 T __declspec(property(get=__get_tombstone, put=__set_tombstone))  tombstone;

constexpr void __set_tombstone(T value) ;

constexpr T __get_tombstone() const;

 T __declspec(property(get=__get___3__tombstone, put=__set___3__tombstone))  __3__tombstone;

constexpr void __set___3__tombstone(T value) ;

constexpr T __get___3__tombstone() const;

 ::System::Collections::Generic::IEnumerator_1<T> __declspec(property(get=__get__enumerator_5__2, put=__set__enumerator_5__2))  _enumerator_5__2;

constexpr void __set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<T> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T> __get__enumerator_5__2() const;

 int32_t __declspec(property(get=__get__index_5__3, put=__set__index_5__3))  _index_5__3;

constexpr void __set__index_5__3(int32_t value) ;

constexpr int32_t __get__index_5__3() const;


// Properties

 T __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<TakeWithTombstone>d__2`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5466))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5466), inst: 92 })
// CS Name: ShuffleExtensions::<TakeWithTombstone>d__2`1
class CORDL_TYPE ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1& operator=(____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1& operator=(____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 int32_t __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(int32_t value) ;

constexpr int32_t __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> __get_source() const;

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=__get___3__source, put=__set___3__source))  __3__source;

constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> __get___3__source() const;

 int32_t __declspec(property(get=__get_limit, put=__set_limit))  limit;

constexpr void __set_limit(int32_t value) ;

constexpr int32_t __get_limit() const;

 int32_t __declspec(property(get=__get___3__limit, put=__set___3__limit))  __3__limit;

constexpr void __set___3__limit(int32_t value) ;

constexpr int32_t __get___3__limit() const;

 int32_t __declspec(property(get=__get_tombstone, put=__set_tombstone))  tombstone;

constexpr void __set_tombstone(int32_t value) ;

constexpr int32_t __get_tombstone() const;

 int32_t __declspec(property(get=__get___3__tombstone, put=__set___3__tombstone))  __3__tombstone;

constexpr void __set___3__tombstone(int32_t value) ;

constexpr int32_t __get___3__tombstone() const;

 ::System::Collections::Generic::IEnumerator_1<int32_t> __declspec(property(get=__get__enumerator_5__2, put=__set__enumerator_5__2))  _enumerator_5__2;

constexpr void __set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t> __get__enumerator_5__2() const;

 int32_t __declspec(property(get=__get__index_5__3, put=__set__index_5__3))  _index_5__3;

constexpr void __set__index_5__3(int32_t value) ;

constexpr int32_t __get__index_5__3() const;


// Properties

 int32_t __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<int32_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ZipSkipTombstone>d__3`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5467))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5467), inst: 80 })
// CS Name: ShuffleExtensions::<ZipSkipTombstone>d__3`2
class CORDL_TYPE ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2& operator=(____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2&& o) noexcept = default;
  constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2& operator=(____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::ValueTuple_2<T1,T2> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::System::ValueTuple_2<T1,T2> value) ;

constexpr ::System::ValueTuple_2<T1,T2> __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::System::Collections::Generic::IEnumerable_1<T1> __declspec(property(get=__get_collection1, put=__set_collection1))  collection1;

constexpr void __set_collection1(::System::Collections::Generic::IEnumerable_1<T1> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T1> __get_collection1() const;

 ::System::Collections::Generic::IEnumerable_1<T1> __declspec(property(get=__get___3__collection1, put=__set___3__collection1))  __3__collection1;

constexpr void __set___3__collection1(::System::Collections::Generic::IEnumerable_1<T1> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T1> __get___3__collection1() const;

 ::System::Collections::Generic::IEnumerable_1<T2> __declspec(property(get=__get_collection2, put=__set_collection2))  collection2;

constexpr void __set_collection2(::System::Collections::Generic::IEnumerable_1<T2> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T2> __get_collection2() const;

 ::System::Collections::Generic::IEnumerable_1<T2> __declspec(property(get=__get___3__collection2, put=__set___3__collection2))  __3__collection2;

constexpr void __set___3__collection2(::System::Collections::Generic::IEnumerable_1<T2> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T2> __get___3__collection2() const;

 T2 __declspec(property(get=__get_collection2Tombstone, put=__set_collection2Tombstone))  collection2Tombstone;

constexpr void __set_collection2Tombstone(T2 value) ;

constexpr T2 __get_collection2Tombstone() const;

 T2 __declspec(property(get=__get___3__collection2Tombstone, put=__set___3__collection2Tombstone))  __3__collection2Tombstone;

constexpr void __set___3__collection2Tombstone(T2 value) ;

constexpr T2 __get___3__collection2Tombstone() const;

 ::System::Collections::Generic::IEnumerator_1<T1> __declspec(property(get=__get__enum1_5__2, put=__set__enum1_5__2))  _enum1_5__2;

constexpr void __set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<T1> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T1> __get__enum1_5__2() const;

 ::System::Collections::Generic::IEnumerator_1<T2> __declspec(property(get=__get__enum2_5__3, put=__set__enum2_5__3))  _enum2_5__3;

constexpr void __set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<T2> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<T2> __get__enum2_5__3() const;


// Properties

 ::System::ValueTuple_2<T1,T2> __declspec(property(get=System_Collections_Generic_IEnumerator_(T1,T2)__get_Current))  System_Collections_Generic_IEnumerator_(T1,T2)__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::ValueTuple_2<T1,T2> System_Collections_Generic_IEnumerator_(T1,T2)__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>> System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ZipSkipTombstone>d__3`2
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5467))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5467), inst: 511 })
// CS Name: ShuffleExtensions::<ZipSkipTombstone>d__3`2
class CORDL_TYPE ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2& operator=(____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2&& o) noexcept = default;
  constexpr ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2& operator=(____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::ValueTuple_2<int32_t,int32_t> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::System::ValueTuple_2<int32_t,int32_t> value) ;

constexpr ::System::ValueTuple_2<int32_t,int32_t> __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=__get_collection1, put=__set_collection1))  collection1;

constexpr void __set_collection1(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> __get_collection1() const;

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=__get___3__collection1, put=__set___3__collection1))  __3__collection1;

constexpr void __set___3__collection1(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> __get___3__collection1() const;

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=__get_collection2, put=__set_collection2))  collection2;

constexpr void __set_collection2(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> __get_collection2() const;

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=__get___3__collection2, put=__set___3__collection2))  __3__collection2;

constexpr void __set___3__collection2(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> __get___3__collection2() const;

 int32_t __declspec(property(get=__get_collection2Tombstone, put=__set_collection2Tombstone))  collection2Tombstone;

constexpr void __set_collection2Tombstone(int32_t value) ;

constexpr int32_t __get_collection2Tombstone() const;

 int32_t __declspec(property(get=__get___3__collection2Tombstone, put=__set___3__collection2Tombstone))  __3__collection2Tombstone;

constexpr void __set___3__collection2Tombstone(int32_t value) ;

constexpr int32_t __get___3__collection2Tombstone() const;

 ::System::Collections::Generic::IEnumerator_1<int32_t> __declspec(property(get=__get__enum1_5__2, put=__set__enum1_5__2))  _enum1_5__2;

constexpr void __set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t> __get__enum1_5__2() const;

 ::System::Collections::Generic::IEnumerator_1<int32_t> __declspec(property(get=__get__enum2_5__3, put=__set__enum2_5__3))  _enum2_5__3;

constexpr void __set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<int32_t> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<int32_t> __get__enum2_5__3() const;


// Properties

 ::System::ValueTuple_2<int32_t,int32_t> __declspec(property(get=System_Collections_Generic_IEnumerator_(T1,T2)__get_Current))  System_Collections_Generic_IEnumerator_(T1,T2)__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::ValueTuple_2<int32_t,int32_t> System_Collections_Generic_IEnumerator_(T1,T2)__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>> System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1, "", "ShuffleExtensions/<PickRandomElementsWithTombstone>d__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1, "", "ShuffleExtensions/<TakeWithTombstone>d__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2, "", "ShuffleExtensions/<ZipSkipTombstone>d__3`2");
NEED_NO_BOX(::GlobalNamespace::ShuffleExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShuffleExtensions, "", "ShuffleExtensions");

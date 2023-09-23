#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace ModestTree {
template<typename T>
class ModestTree__LinqExtensions___Yield_d__0_1;
}
namespace ModestTree {
template<typename T>
class ModestTree__LinqExtensions____c__8_1;
}
namespace ModestTree {
template<typename T>
class ModestTree__LinqExtensions____c__DisplayClass10_0_1;
}
namespace ModestTree {
class LinqExtensions;
}
namespace ModestTree {
template<::cordl_internals::il2cpp_reference_type T>
class ModestTree__LinqExtensions___Yield_d__0_1<T>;
}
namespace ModestTree {
template<>
class ModestTree__LinqExtensions___Yield_d__0_1<UnityEngine::SceneManagement::Scene>;
}
namespace ModestTree {
template<::cordl_internals::il2cpp_reference_type T>
class ModestTree__LinqExtensions____c__8_1<T>;
}
namespace ModestTree {
template<::cordl_internals::il2cpp_reference_type T>
class ModestTree__LinqExtensions____c__DisplayClass10_0_1<T>;
}
// Type: ::<Yield>d__0`1
// Type: ::<>c__8`1
// Type: ::<>c__DisplayClass10_0`1
// Type: ModestTree::LinqExtensions
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10555))
// CS Name: ModestTree.LinqExtensions
class CORDL_TYPE LinqExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using __c__DisplayClass10_0_1 = ModestTree::ModestTree__LinqExtensions____c__DisplayClass10_0_1<T>;

template<typename T>
using __c__8_1 = ModestTree::ModestTree__LinqExtensions____c__8_1<T>;

template<typename T>
using _Yield_d__0_1 = ModestTree::ModestTree__LinqExtensions___Yield_d__0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LinqExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinqExtensions", modifiers: " const&", def_value: None }]
constexpr LinqExtensions(LinqExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinqExtensions", modifiers: "&&", def_value: None }]
constexpr LinqExtensions(LinqExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinqExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinqExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinqExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinqExtensions& operator=(LinqExtensions&& o) noexcept = default;
  constexpr LinqExtensions& operator=(LinqExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Yield addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IEnumerable_1<T> Yield(T item) ;

/// @brief Method OnlyOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource>
static TSource OnlyOrDefault(System::Collections::Generic::IEnumerable_1<TSource> source) ;

/// @brief Method HasAtLeast addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool HasAtLeast(System::Collections::Generic::IEnumerable_1<T> enumerable, int32_t amount) ;

/// @brief Method HasMoreThan addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool HasMoreThan(System::Collections::Generic::IEnumerable_1<T> enumerable, int32_t amount) ;

/// @brief Method HasLessThan addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool HasLessThan(System::Collections::Generic::IEnumerable_1<T> enumerable, int32_t amount) ;

/// @brief Method HasAtMost addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool HasAtMost(System::Collections::Generic::IEnumerable_1<T> enumerable, int32_t amount) ;

/// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsEmpty(System::Collections::Generic::List_1<T> list) ;

/// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsEmpty(System::Collections::Generic::IEnumerable_1<T> enumerable) ;

/// @brief Method GetDuplicates addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IEnumerable_1<T> GetDuplicates(System::Collections::Generic::IEnumerable_1<T> list) ;

/// @brief Method Except addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IEnumerable_1<T> Except(System::Collections::Generic::IEnumerable_1<T> list, T item) ;

/// @brief Method ContainsItem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ContainsItem(System::Collections::Generic::IEnumerable_1<T> list, T value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<Yield>d__0`1
namespace ModestTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10552))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10552), inst: 2 })
// CS Name: ModestTree.LinqExtensions::<Yield>d__0`1
class CORDL_TYPE ModestTree__LinqExtensions___Yield_d__0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ModestTree__LinqExtensions___Yield_d__0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__LinqExtensions___Yield_d__0_1", modifiers: " const&", def_value: None }]
constexpr ModestTree__LinqExtensions___Yield_d__0_1(ModestTree__LinqExtensions___Yield_d__0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__LinqExtensions___Yield_d__0_1", modifiers: "&&", def_value: None }]
constexpr ModestTree__LinqExtensions___Yield_d__0_1(ModestTree__LinqExtensions___Yield_d__0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__LinqExtensions___Yield_d__0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__LinqExtensions___Yield_d__0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__LinqExtensions___Yield_d__0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__LinqExtensions___Yield_d__0_1& operator=(ModestTree__LinqExtensions___Yield_d__0_1&& o) noexcept = default;
  constexpr ModestTree__LinqExtensions___Yield_d__0_1& operator=(ModestTree__LinqExtensions___Yield_d__0_1 const& o) noexcept = default;
                


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

 T __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(T value) ;

constexpr T __get_item() const;

 T __declspec(property(get=__get___3__item, put=__set___3__item))  __3__item;

constexpr void __set___3__item(T value) ;

constexpr T __get___3__item() const;


// Properties

 T __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ModestTree__LinqExtensions___Yield_d__0_1(int32_t __1__state) ;

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

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<Yield>d__0`1
namespace ModestTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10552))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10552), inst: 3012 })
// CS Name: ModestTree.LinqExtensions::<Yield>d__0`1
class CORDL_TYPE ModestTree__LinqExtensions___Yield_d__0_1<UnityEngine::SceneManagement::Scene> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ModestTree__LinqExtensions___Yield_d__0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__LinqExtensions___Yield_d__0_1", modifiers: " const&", def_value: None }]
constexpr ModestTree__LinqExtensions___Yield_d__0_1(ModestTree__LinqExtensions___Yield_d__0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__LinqExtensions___Yield_d__0_1", modifiers: "&&", def_value: None }]
constexpr ModestTree__LinqExtensions___Yield_d__0_1(ModestTree__LinqExtensions___Yield_d__0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__LinqExtensions___Yield_d__0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__LinqExtensions___Yield_d__0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__LinqExtensions___Yield_d__0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__LinqExtensions___Yield_d__0_1& operator=(ModestTree__LinqExtensions___Yield_d__0_1&& o) noexcept = default;
  constexpr ModestTree__LinqExtensions___Yield_d__0_1& operator=(ModestTree__LinqExtensions___Yield_d__0_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::SceneManagement::Scene __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::SceneManagement::Scene value) ;

constexpr UnityEngine::SceneManagement::Scene __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::SceneManagement::Scene __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(UnityEngine::SceneManagement::Scene value) ;

constexpr UnityEngine::SceneManagement::Scene __get_item() const;

 UnityEngine::SceneManagement::Scene __declspec(property(get=__get___3__item, put=__set___3__item))  __3__item;

constexpr void __set___3__item(UnityEngine::SceneManagement::Scene value) ;

constexpr UnityEngine::SceneManagement::Scene __get___3__item() const;


// Properties

 UnityEngine::SceneManagement::Scene __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ModestTree__LinqExtensions___Yield_d__0_1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::SceneManagement::Scene System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<>c__8`1
namespace ModestTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10553))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10553), inst: 2 })
// CS Name: ModestTree.LinqExtensions::<>c__8`1
class CORDL_TYPE ModestTree__LinqExtensions____c__8_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ModestTree__LinqExtensions____c__8_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__LinqExtensions____c__8_1", modifiers: " const&", def_value: None }]
constexpr ModestTree__LinqExtensions____c__8_1(ModestTree__LinqExtensions____c__8_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__LinqExtensions____c__8_1", modifiers: "&&", def_value: None }]
constexpr ModestTree__LinqExtensions____c__8_1(ModestTree__LinqExtensions____c__8_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__LinqExtensions____c__8_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__LinqExtensions____c__8_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__LinqExtensions____c__8_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__LinqExtensions____c__8_1& operator=(ModestTree__LinqExtensions____c__8_1&& o) noexcept = default;
  constexpr ModestTree__LinqExtensions____c__8_1& operator=(ModestTree__LinqExtensions____c__8_1 const& o) noexcept = default;
                


// Fields

static ModestTree::ModestTree__LinqExtensions____c__8_1<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(ModestTree::ModestTree__LinqExtensions____c__8_1<T> value) ;

static ModestTree::ModestTree__LinqExtensions____c__8_1<T> __get___9() ;

static System::Func_2<T,T> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::Func_2<T,T> value) ;

static System::Func_2<T,T> __get___9__8_0() ;

static System::Func_2<System::Linq::IGrouping_2<T,T>,bool> __declspec(property(get=__get___9__8_1, put=__set___9__8_1))  __9__8_1;

static void __set___9__8_1(System::Func_2<System::Linq::IGrouping_2<T,T>,bool> value) ;

static System::Func_2<System::Linq::IGrouping_2<T,T>,bool> __get___9__8_1() ;

static System::Func_2<System::Linq::IGrouping_2<T,T>,T> __declspec(property(get=__get___9__8_2, put=__set___9__8_2))  __9__8_2;

static void __set___9__8_2(System::Func_2<System::Linq::IGrouping_2<T,T>,T> value) ;

static System::Func_2<System::Linq::IGrouping_2<T,T>,T> __get___9__8_2() ;


// Methods

// Ctor Parameters []
explicit ModestTree__LinqExtensions____c__8_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <GetDuplicates>b__8_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T _GetDuplicates_b__8_0(T x) ;

/// @brief Method <GetDuplicates>b__8_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _GetDuplicates_b__8_1(System::Linq::IGrouping_2<T,T> x) ;

/// @brief Method <GetDuplicates>b__8_2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T _GetDuplicates_b__8_2(System::Linq::IGrouping_2<T,T> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<>c__DisplayClass10_0`1
namespace ModestTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10554))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10554), inst: 2 })
// CS Name: ModestTree.LinqExtensions::<>c__DisplayClass10_0`1
class CORDL_TYPE ModestTree__LinqExtensions____c__DisplayClass10_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ModestTree__LinqExtensions____c__DisplayClass10_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__LinqExtensions____c__DisplayClass10_0_1", modifiers: " const&", def_value: None }]
constexpr ModestTree__LinqExtensions____c__DisplayClass10_0_1(ModestTree__LinqExtensions____c__DisplayClass10_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__LinqExtensions____c__DisplayClass10_0_1", modifiers: "&&", def_value: None }]
constexpr ModestTree__LinqExtensions____c__DisplayClass10_0_1(ModestTree__LinqExtensions____c__DisplayClass10_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__LinqExtensions____c__DisplayClass10_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__LinqExtensions____c__DisplayClass10_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__LinqExtensions____c__DisplayClass10_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__LinqExtensions____c__DisplayClass10_0_1& operator=(ModestTree__LinqExtensions____c__DisplayClass10_0_1&& o) noexcept = default;
  constexpr ModestTree__LinqExtensions____c__DisplayClass10_0_1& operator=(ModestTree__LinqExtensions____c__DisplayClass10_0_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(T value) ;

constexpr T __get_value() const;


// Methods

// Ctor Parameters []
explicit ModestTree__LinqExtensions____c__DisplayClass10_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ContainsItem>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _ContainsItem_b__0(T x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::ModestTree__LinqExtensions___Yield_d__0_1, "ModestTree", "LinqExtensions/<Yield>d__0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::ModestTree__LinqExtensions____c__8_1, "ModestTree", "LinqExtensions/<>c__8`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::ModestTree__LinqExtensions____c__DisplayClass10_0_1, "ModestTree", "LinqExtensions/<>c__DisplayClass10_0`1");
NEED_NO_BOX(ModestTree::LinqExtensions);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::LinqExtensions, "ModestTree", "LinqExtensions");

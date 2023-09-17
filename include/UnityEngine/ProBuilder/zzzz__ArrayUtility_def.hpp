#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
template<typename T>
class ____UnityEngine__ProBuilder__ArrayUtility____c__23_1;
}
namespace UnityEngine::ProBuilder {
template<typename TSource,typename TKey>
class ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2;
}
namespace UnityEngine::ProBuilder {
class ArrayUtility;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type T>
class ____UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>;
}
namespace UnityEngine::ProBuilder {
template<>
class ____UnityEngine__ProBuilder__ArrayUtility____c__23_1<int32_t>;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TKey>
class ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type TSource>
class ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,::UnityEngine::ProBuilder::Edge>;
}
namespace UnityEngine::ProBuilder {
struct ____UnityEngine__ProBuilder__ArrayUtility__SearchRange;
}
// Type: ::SearchRange
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12036))
// CS Name: UnityEngine.ProBuilder.ArrayUtility::SearchRange
struct CORDL_TYPE ____UnityEngine__ProBuilder__ArrayUtility__SearchRange : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "begin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ArrayUtility__SearchRange(int32_t begin, int32_t end) noexcept;


                    constexpr ____UnityEngine__ProBuilder__ArrayUtility__SearchRange(____UnityEngine__ProBuilder__ArrayUtility__SearchRange const&) = default;
                    constexpr ____UnityEngine__ProBuilder__ArrayUtility__SearchRange(____UnityEngine__ProBuilder__ArrayUtility__SearchRange&&) = default;
                    constexpr ____UnityEngine__ProBuilder__ArrayUtility__SearchRange& operator=(____UnityEngine__ProBuilder__ArrayUtility__SearchRange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__ProBuilder__ArrayUtility__SearchRange& operator=(____UnityEngine__ProBuilder__ArrayUtility__SearchRange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__ArrayUtility__SearchRange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_begin, put=__set_begin))  begin;

constexpr void __set_begin(int32_t value) ;

constexpr int32_t __get_begin() const;

 int32_t __declspec(property(get=__get_end, put=__set_end))  end;

constexpr void __set_end(int32_t value) ;

constexpr int32_t __get_end() const;


// Methods

/// @brief Method .ctor addr 0x29a3010 size 0x8 virtual false final false
 void _ctor(int32_t begin, int32_t end) ;

/// @brief Method Valid addr 0x29a3018 size 0x14 virtual false final false
 bool Valid() ;

/// @brief Method Center addr 0x29a302c size 0x18 virtual false final false
 int32_t Center() ;

/// @brief Method ToString addr 0x29a3044 size 0x1fc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass21_0`2
// Type: ::<>c__23`1
// Type: UnityEngine.ProBuilder::ArrayUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12039))
// CS Name: UnityEngine.ProBuilder.ArrayUtility
class CORDL_TYPE ArrayUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using __c__23_1 = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>;

template<typename TSource,typename TKey>
using __c__DisplayClass21_0_2 = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource, TKey>;

using SearchRange = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility__SearchRange;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: " const&", def_value: None }]
constexpr ArrayUtility(ArrayUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: "&&", def_value: None }]
constexpr ArrayUtility(ArrayUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayUtility& operator=(ArrayUtility&& o) noexcept = default;
  constexpr ArrayUtility& operator=(ArrayUtility const& o) noexcept = default;
                


// Methods

/// @brief Method ValuesWithIndexes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> ValuesWithIndexes(::ArrayW<T> arr, ::ArrayW<int32_t> indexes) ;

/// @brief Method ValuesWithIndexes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::List_1<T> ValuesWithIndexes(::System::Collections::Generic::List_1<T> arr, ::System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method AllIndexesOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::IEnumerable_1<int32_t> AllIndexesOf(::System::Collections::Generic::IList_1<T> list, ::System::Func_2<T,bool> lambda) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> Add(::ArrayW<T> arr, T val) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> AddRange(::ArrayW<T> arr, ::ArrayW<T> val) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> Remove(::ArrayW<T> arr, T val) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> Remove(::ArrayW<T> arr, ::System::Collections::Generic::IEnumerable_1<T> val) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> RemoveAt(::ArrayW<T> arr, int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> RemoveAt(::System::Collections::Generic::IList_1<T> list, ::System::Collections::Generic::IEnumerable_1<int32_t> indexes) ;

/// @brief Method SortedRemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> SortedRemoveAt(::System::Collections::Generic::IList_1<T> list, ::System::Collections::Generic::IList_1<int32_t> sorted) ;

/// @brief Method NearestIndexPriorToValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t NearestIndexPriorToValue(::System::Collections::Generic::IList_1<T> sorted_list, T value) ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::List_1<T> Fill(::System::Func_2<int32_t,T> ctor, int32_t length) ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> Fill(T val, int32_t length) ;

/// @brief Method ContainsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ContainsMatch(::ArrayW<T> a, ::ArrayW<T> b) ;

/// @brief Method ContainsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ContainsMatch(::ArrayW<T> a, ::ArrayW<T> b, ByRef<int32_t> index_a, ByRef<int32_t> index_b) ;

/// @brief Method Concat addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> Concat(::ArrayW<T> x, ::ArrayW<T> y) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t IndexOf(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>> InList, T InValue) ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> Fill(int32_t count, ::System::Func_2<int32_t,T> ctor) ;

/// @brief Method AddOrAppend addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename K>
static void AddOrAppend(::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<K>> dictionary, T key, K value) ;

/// @brief Method AddOrAppendRange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename K>
static void AddOrAppendRange(::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<K>> dictionary, T key, ::System::Collections::Generic::List_1<K> value) ;

/// @brief Method DistinctBy addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource,typename TKey>
static ::System::Collections::Generic::IEnumerable_1<TSource> DistinctBy(::System::Collections::Generic::IEnumerable_1<TSource> source, ::System::Func_2<TSource,TKey> keySelector) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static ::StringW ToString(::System::Collections::Generic::Dictionary_2<TKey,TValue> dict) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::StringW ToString(::System::Collections::Generic::IEnumerable_1<T> arr, ::StringW separator) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass21_0`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12037))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12037), inst: 80 })
// CS Name: UnityEngine.ProBuilder.ArrayUtility::<>c__DisplayClass21_0`2
class CORDL_TYPE ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2(____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2(____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2& operator=(____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2& operator=(____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::HashSet_1<TKey> __declspec(property(get=__get_knownKeys, put=__set_knownKeys))  knownKeys;

constexpr void __set_knownKeys(::System::Collections::Generic::HashSet_1<TKey> value) ;

constexpr ::System::Collections::Generic::HashSet_1<TKey> __get_knownKeys() const;

 ::System::Func_2<TSource,TKey> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<TSource,TKey> value) ;

constexpr ::System::Func_2<TSource,TKey> __get_keySelector() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <DistinctBy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _DistinctBy_b__0(TSource x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass21_0`2
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSource>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12037))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12037), inst: 4817 })
// CS Name: UnityEngine.ProBuilder.ArrayUtility::<>c__DisplayClass21_0`2
class CORDL_TYPE ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,::UnityEngine::ProBuilder::Edge> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2(____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2(____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2& operator=(____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2& operator=(____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> __declspec(property(get=__get_knownKeys, put=__set_knownKeys))  knownKeys;

constexpr void __set_knownKeys(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge> __get_knownKeys() const;

 ::System::Func_2<TSource,::UnityEngine::ProBuilder::Edge> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<TSource,::UnityEngine::ProBuilder::Edge> value) ;

constexpr ::System::Func_2<TSource,::UnityEngine::ProBuilder::Edge> __get_keySelector() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <DistinctBy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _DistinctBy_b__0(TSource x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__23`1
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12038))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12038), inst: 2 })
// CS Name: UnityEngine.ProBuilder.ArrayUtility::<>c__23`1
class CORDL_TYPE ____UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__ProBuilder__ArrayUtility____c__23_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__ArrayUtility____c__23_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1(____UnityEngine__ProBuilder__ArrayUtility____c__23_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__ArrayUtility____c__23_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1(____UnityEngine__ProBuilder__ArrayUtility____c__23_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__ArrayUtility____c__23_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1& operator=(____UnityEngine__ProBuilder__ArrayUtility____c__23_1&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1& operator=(____UnityEngine__ProBuilder__ArrayUtility____c__23_1 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> value) ;

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> __get___9() ;

static ::System::Func_2<T,::StringW> __declspec(property(get=__get___9__23_0, put=__set___9__23_0))  __9__23_0;

static void __set___9__23_0(::System::Func_2<T,::StringW> value) ;

static ::System::Func_2<T,::StringW> __get___9__23_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__ArrayUtility____c__23_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToString>b__23_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW _ToString_b__23_0(T x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__23`1
namespace UnityEngine::ProBuilder {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12038))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12038), inst: 92 })
// CS Name: UnityEngine.ProBuilder.ArrayUtility::<>c__23`1
class CORDL_TYPE ____UnityEngine__ProBuilder__ArrayUtility____c__23_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__ProBuilder__ArrayUtility____c__23_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__ArrayUtility____c__23_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1(____UnityEngine__ProBuilder__ArrayUtility____c__23_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__ArrayUtility____c__23_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1(____UnityEngine__ProBuilder__ArrayUtility____c__23_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__ArrayUtility____c__23_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1& operator=(____UnityEngine__ProBuilder__ArrayUtility____c__23_1&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__ArrayUtility____c__23_1& operator=(____UnityEngine__ProBuilder__ArrayUtility____c__23_1 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__23_1<int32_t> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__23_1<int32_t> value) ;

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__23_1<int32_t> __get___9() ;

static ::System::Func_2<int32_t,::StringW> __declspec(property(get=__get___9__23_0, put=__set___9__23_0))  __9__23_0;

static void __set___9__23_0(::System::Func_2<int32_t,::StringW> value) ;

static ::System::Func_2<int32_t,::StringW> __get___9__23_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__ArrayUtility____c__23_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToString>b__23_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW _ToString_b__23_0(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__23_1, "UnityEngine.ProBuilder", "ArrayUtility/<>c__23`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2, "UnityEngine.ProBuilder", "ArrayUtility/<>c__DisplayClass21_0`2");
NEED_NO_BOX(::UnityEngine::ProBuilder::ArrayUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ArrayUtility, "UnityEngine.ProBuilder", "ArrayUtility");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ArrayUtility__SearchRange, "UnityEngine.ProBuilder", "ArrayUtility/SearchRange");

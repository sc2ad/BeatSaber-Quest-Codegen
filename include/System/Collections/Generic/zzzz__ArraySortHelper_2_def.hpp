#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class ArraySortHelper_2;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ArraySortHelper_2<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<uint64_t> TKey,::cordl_internals::il2cpp_reference_type TValue>
class ArraySortHelper_2<TKey,TValue>;
}
// Type: System.Collections.Generic::ArraySortHelper`2
// Type: System.Collections.Generic::ArraySortHelper`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint64_t> TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3849))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3849), inst: 1579 })
// CS Name: System.Collections.Generic.ArraySortHelper`2
class CORDL_TYPE ArraySortHelper_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArraySortHelper_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: " const&", def_value: None }]
constexpr ArraySortHelper_2(ArraySortHelper_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: "&&", def_value: None }]
constexpr ArraySortHelper_2(ArraySortHelper_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArraySortHelper_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArraySortHelper_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArraySortHelper_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArraySortHelper_2& operator=(ArraySortHelper_2&& o) noexcept = default;
  constexpr ArraySortHelper_2& operator=(ArraySortHelper_2 const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> __declspec(property(get=__get_s_defaultArraySortHelper, put=__set_s_defaultArraySortHelper))  s_defaultArraySortHelper;

static void __set_s_defaultArraySortHelper(System::Collections::Generic::ArraySortHelper_2<TKey,TValue> value) ;

static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> __get_s_defaultArraySortHelper() ;


// Properties

static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> __declspec(property(get=get_Default))  Default;


// Methods

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 void Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t index, int32_t length, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method SwapIfGreaterWithItems addr 0x0 size 0xffffffffffffffff virtual false final false
static void SwapIfGreaterWithItems(::ArrayW<TKey> keys, ::ArrayW<TValue> values, System::Collections::Generic::IComparer_1<TKey> comparer, int32_t a, int32_t b) ;

/// @brief Method Swap addr 0x0 size 0xffffffffffffffff virtual false final false
static void Swap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t j) ;

/// @brief Method IntrospectiveSort addr 0x0 size 0xffffffffffffffff virtual false final false
static void IntrospectiveSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t left, int32_t length, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method IntroSort addr 0x0 size 0xffffffffffffffff virtual false final false
static void IntroSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, int32_t depthLimit, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method PickPivotAndPartition addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t PickPivotAndPartition(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method Heapsort addr 0x0 size 0xffffffffffffffff virtual false final false
static void Heapsort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method DownHeap addr 0x0 size 0xffffffffffffffff virtual false final false
static void DownHeap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t n, int32_t lo, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method InsertionSort addr 0x0 size 0xffffffffffffffff virtual false final false
static void InsertionSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method get_Default addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> get_Default() ;

static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::ArraySortHelper`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3849))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3849), inst: 80 })
// CS Name: System.Collections.Generic.ArraySortHelper`2
class CORDL_TYPE ArraySortHelper_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArraySortHelper_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: " const&", def_value: None }]
constexpr ArraySortHelper_2(ArraySortHelper_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: "&&", def_value: None }]
constexpr ArraySortHelper_2(ArraySortHelper_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArraySortHelper_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArraySortHelper_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArraySortHelper_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArraySortHelper_2& operator=(ArraySortHelper_2&& o) noexcept = default;
  constexpr ArraySortHelper_2& operator=(ArraySortHelper_2 const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> __declspec(property(get=__get_s_defaultArraySortHelper, put=__set_s_defaultArraySortHelper))  s_defaultArraySortHelper;

static void __set_s_defaultArraySortHelper(System::Collections::Generic::ArraySortHelper_2<TKey,TValue> value) ;

static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> __get_s_defaultArraySortHelper() ;


// Properties

static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> __declspec(property(get=get_Default))  Default;


// Methods

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 void Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t index, int32_t length, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method SwapIfGreaterWithItems addr 0x0 size 0xffffffffffffffff virtual false final false
static void SwapIfGreaterWithItems(::ArrayW<TKey> keys, ::ArrayW<TValue> values, System::Collections::Generic::IComparer_1<TKey> comparer, int32_t a, int32_t b) ;

/// @brief Method Swap addr 0x0 size 0xffffffffffffffff virtual false final false
static void Swap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t j) ;

/// @brief Method IntrospectiveSort addr 0x0 size 0xffffffffffffffff virtual false final false
static void IntrospectiveSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t left, int32_t length, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method IntroSort addr 0x0 size 0xffffffffffffffff virtual false final false
static void IntroSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, int32_t depthLimit, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method PickPivotAndPartition addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t PickPivotAndPartition(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method Heapsort addr 0x0 size 0xffffffffffffffff virtual false final false
static void Heapsort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method DownHeap addr 0x0 size 0xffffffffffffffff virtual false final false
static void DownHeap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t n, int32_t lo, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method InsertionSort addr 0x0 size 0xffffffffffffffff virtual false final false
static void InsertionSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method get_Default addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> get_Default() ;

static System::Collections::Generic::ArraySortHelper_2<TKey,TValue> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::ArraySortHelper_2, "System.Collections.Generic", "ArraySortHelper`2");

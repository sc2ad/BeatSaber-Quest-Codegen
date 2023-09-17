#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1;
}
namespace UnityEngine::InputSystem::Utilities {
class ArrayHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1<TValue>;
}
// Type: ::<>c__DisplayClass33_0`1
// Type: ::<>c__DisplayClass34_0`1
// Type: ::<>c__DisplayClass34_1`1
// Type: UnityEngine.InputSystem.Utilities::ArrayHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6742))
// CS Name: UnityEngine.InputSystem.Utilities.ArrayHelpers
class CORDL_TYPE ArrayHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TValue>
using __c__DisplayClass34_1_1 = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1<TValue>;

template<typename TValue>
using __c__DisplayClass34_0_1 = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue>;

template<typename TValue>
using __c__DisplayClass33_0_1 = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayHelpers", modifiers: " const&", def_value: None }]
constexpr ArrayHelpers(ArrayHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayHelpers", modifiers: "&&", def_value: None }]
constexpr ArrayHelpers(ArrayHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayHelpers& operator=(ArrayHelpers&& o) noexcept = default;
  constexpr ArrayHelpers& operator=(ArrayHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method LengthSafe addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t LengthSafe(::ArrayW<TValue> array) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void Clear(::ArrayW<TValue> array) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void Clear(::ArrayW<TValue> array, int32_t count) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void Clear(::ArrayW<TValue> array, ByRef<int32_t> count) ;

/// @brief Method EnsureCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void EnsureCapacity(ByRef<::ArrayW<TValue>> array, int32_t count, int32_t capacity, int32_t capacityIncrement) ;

/// @brief Method DuplicateWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void DuplicateWithCapacity(ByRef<::ArrayW<TValue>> array, int32_t count, int32_t capacity, int32_t capacityIncrement) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool Contains(::ArrayW<TValue> array, TValue value) ;

/// @brief Method ContainsReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool ContainsReference(::ArrayW<TValue> array, TValue value) ;

/// @brief Method ContainsReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFirst,typename TSecond>
static bool ContainsReference(::ArrayW<TFirst> array, int32_t count, TSecond value) ;

/// @brief Method ContainsReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFirst,typename TSecond>
static bool ContainsReference(::ArrayW<TFirst> array, int32_t startIndex, int32_t count, TSecond value) ;

/// @brief Method HaveDuplicateReferences addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFirst>
static bool HaveDuplicateReferences(::ArrayW<TFirst> first, int32_t index, int32_t count) ;

/// @brief Method HaveEqualElements addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool HaveEqualElements(::ArrayW<TValue> first, ::ArrayW<TValue> second, int32_t count) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t IndexOf(::ArrayW<TValue> array, TValue value, int32_t startIndex, int32_t count) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t IndexOf(::ArrayW<TValue> array, ::System::Predicate_1<TValue> predicate) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t IndexOf(::ArrayW<TValue> array, ::System::Predicate_1<TValue> predicate, int32_t startIndex, int32_t count) ;

/// @brief Method IndexOfReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFirst,typename TSecond>
static int32_t IndexOfReference(::ArrayW<TFirst> array, TSecond value, int32_t count) ;

/// @brief Method IndexOfReference addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFirst,typename TSecond>
static int32_t IndexOfReference(::ArrayW<TFirst> array, TSecond value, int32_t startIndex, int32_t count) ;

/// @brief Method IndexOfValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t IndexOfValue(::ArrayW<TValue> array, TValue value, int32_t startIndex, int32_t count) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void Resize(ByRef<::Unity::Collections::NativeArray_1<TValue>> array, int32_t newSize, ::Unity::Collections::Allocator allocator) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t Append(ByRef<::ArrayW<TValue>> array, TValue value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t Append(ByRef<::ArrayW<TValue>> array, ::System::Collections::Generic::IEnumerable_1<TValue> values) ;

/// @brief Method AppendToImmutable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t AppendToImmutable(ByRef<::ArrayW<TValue>> array, ::ArrayW<TValue> values) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t AppendWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> count, TValue value, int32_t capacityIncrement) ;

/// @brief Method AppendListWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TValues>
static int32_t AppendListWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> length, TValues values, int32_t capacityIncrement) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t AppendWithCapacity(ByRef<::Unity::Collections::NativeArray_1<TValue>> array, ByRef<int32_t> count, TValue value, int32_t capacityIncrement, ::Unity::Collections::Allocator allocator) ;

/// @brief Method InsertAt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void InsertAt(ByRef<::ArrayW<TValue>> array, int32_t index, TValue value) ;

/// @brief Method InsertAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void InsertAtWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> count, int32_t index, TValue value, int32_t capacityIncrement) ;

/// @brief Method PutAtIfNotSet addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void PutAtIfNotSet(ByRef<::ArrayW<TValue>> array, int32_t index, ::System::Func_1<TValue> valueFn) ;

/// @brief Method GrowBy addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t GrowBy(ByRef<::ArrayW<TValue>> array, int32_t count) ;

/// @brief Method GrowBy addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t GrowBy(ByRef<::Unity::Collections::NativeArray_1<TValue>> array, int32_t count, ::Unity::Collections::Allocator allocator) ;

/// @brief Method GrowWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t GrowWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> count, int32_t growBy, int32_t capacityIncrement) ;

/// @brief Method GrowWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static int32_t GrowWithCapacity(ByRef<::Unity::Collections::NativeArray_1<TValue>> array, ByRef<int32_t> count, int32_t growBy, int32_t capacityIncrement, ::Unity::Collections::Allocator allocator) ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::ArrayW<TValue> Join(TValue value, ::ArrayW<TValue> values) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::ArrayW<TValue> Merge(::ArrayW<TValue> first, ::ArrayW<TValue> second) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::ArrayW<TValue> Merge(::ArrayW<TValue> first, ::ArrayW<TValue> second, ::System::Collections::Generic::IEqualityComparer_1<TValue> comparer) ;

/// @brief Method EraseAt addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void EraseAt(ByRef<::ArrayW<TValue>> array, int32_t index) ;

/// @brief Method EraseAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void EraseAtWithCapacity(::ArrayW<TValue> array, ByRef<int32_t> count, int32_t index) ;

/// @brief Method EraseAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void EraseAtWithCapacity(::Unity::Collections::NativeArray_1<TValue> array, ByRef<int32_t> count, int32_t index) ;

/// @brief Method Erase addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool Erase(ByRef<::ArrayW<TValue>> array, TValue value) ;

/// @brief Method EraseAtByMovingTail addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void EraseAtByMovingTail(::ArrayW<TValue> array, ByRef<int32_t> count, int32_t index) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::ArrayW<TValue> Copy(::ArrayW<TValue> array) ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::ArrayW<TValue> Clone(::ArrayW<TValue> array) ;

/// @brief Method Select addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOld,typename TNew>
static ::ArrayW<TNew> Select(::ArrayW<TOld> array, ::System::Func_2<TOld,TNew> converter) ;

/// @brief Method Swap addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void Swap(ByRef<TValue> first, ByRef<TValue> second) ;

/// @brief Method MoveSlice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void MoveSlice(::ArrayW<TValue> array, int32_t sourceIndex, int32_t destinationIndex, int32_t count) ;

/// @brief Method EraseSliceWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void EraseSliceWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> length, int32_t index, int32_t count) ;

/// @brief Method SwapElements addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void SwapElements(::ArrayW<TValue> array, int32_t index1, int32_t index2) ;

/// @brief Method SwapElements addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void SwapElements(::Unity::Collections::NativeArray_1<TValue> array, int32_t index1, int32_t index2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::<>c__DisplayClass33_0`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6739))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6739), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.ArrayHelpers::<>c__DisplayClass33_0`1
class CORDL_TYPE ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1& operator=(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1& operator=(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1 const& o) noexcept = default;
                


// Fields

 TValue __declspec(property(get=__get_secondValue, put=__set_secondValue))  secondValue;

constexpr void __set_secondValue(TValue value) ;

constexpr TValue __get_secondValue() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Merge>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _Merge_b__0(TValue x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::<>c__DisplayClass33_0`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6739))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6739), inst: 2498 })
// CS Name: UnityEngine.InputSystem.Utilities.ArrayHelpers::<>c__DisplayClass33_0`1
class CORDL_TYPE ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1& operator=(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1& operator=(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_secondValue, put=__set_secondValue))  secondValue;

constexpr void __set_secondValue(::UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString __get_secondValue() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Merge>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _Merge_b__0(::UnityEngine::InputSystem::Utilities::InternedString x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::<>c__DisplayClass34_0`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6740))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6740), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.ArrayHelpers::<>c__DisplayClass34_0`1
class CORDL_TYPE ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1& operator=(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1& operator=(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEqualityComparer_1<TValue> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<TValue> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TValue> __get_comparer() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::<>c__DisplayClass34_1`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6741))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6741), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.ArrayHelpers::<>c__DisplayClass34_1`1
class CORDL_TYPE ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1& operator=(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1& operator=(____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1 const& o) noexcept = default;
                


// Fields

 TValue __declspec(property(get=__get_secondValue, put=__set_secondValue))  secondValue;

constexpr void __set_secondValue(TValue value) ;

constexpr TValue __get_secondValue() const;

 ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue> __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue> __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Merge>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _Merge_b__0(TValue x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1, "UnityEngine.InputSystem.Utilities", "ArrayHelpers/<>c__DisplayClass33_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1, "UnityEngine.InputSystem.Utilities", "ArrayHelpers/<>c__DisplayClass34_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1, "UnityEngine.InputSystem.Utilities", "ArrayHelpers/<>c__DisplayClass34_1`1");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ArrayHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ArrayHelpers, "UnityEngine.InputSystem.Utilities", "ArrayHelpers");

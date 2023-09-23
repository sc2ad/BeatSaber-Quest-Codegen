#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct System__ArraySegment_1__Enumerator;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T>
struct ArraySegment_1<T>;
}
namespace System {
template<>
struct ArraySegment_1<uint8_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T>
struct System__ArraySegment_1__Enumerator<T>;
}
namespace System {
template<>
struct System__ArraySegment_1__Enumerator<uint8_t>;
}
// Type: ::Enumerator
// Type: System::ArraySegment`1
// Type: ::Enumerator
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2348))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2348), inst: 2 })
// CS Name: System.ArraySegment`1::Enumerator
struct CORDL_TYPE System__ArraySegment_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "_start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__ArraySegment_1__Enumerator(::ArrayW<T> _array, int32_t _start, int32_t _end, int32_t _current) noexcept;


                    constexpr System__ArraySegment_1__Enumerator(System__ArraySegment_1__Enumerator const&) = default;
                    constexpr System__ArraySegment_1__Enumerator(System__ArraySegment_1__Enumerator&&) = default;
                    constexpr System__ArraySegment_1__Enumerator& operator=(System__ArraySegment_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__ArraySegment_1__Enumerator& operator=(System__ArraySegment_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__ArraySegment_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<T> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__array() const;

 int32_t __declspec(property(get=__get__start, put=__set__start))  _start;

constexpr void __set__start(int32_t value) ;

constexpr int32_t __get__start() const;

 int32_t __declspec(property(get=__get__end, put=__set__end))  _end;

constexpr void __set__end(int32_t value) ;

constexpr int32_t __get__end() const;

 int32_t __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(int32_t value) ;

constexpr int32_t __get__current() const;


// Properties

 T __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::ArraySegment_1<T> arraySegment) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::Enumerator
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2348))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2348), inst: 717 })
// CS Name: System.ArraySegment`1::Enumerator
struct CORDL_TYPE System__ArraySegment_1__Enumerator<uint8_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<uint8_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<uint8_t>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__ArraySegment_1__Enumerator(::ArrayW<uint8_t> _array, int32_t _start, int32_t _end, int32_t _current) noexcept;


                    constexpr System__ArraySegment_1__Enumerator(System__ArraySegment_1__Enumerator const&) = default;
                    constexpr System__ArraySegment_1__Enumerator(System__ArraySegment_1__Enumerator&&) = default;
                    constexpr System__ArraySegment_1__Enumerator& operator=(System__ArraySegment_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__ArraySegment_1__Enumerator& operator=(System__ArraySegment_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__ArraySegment_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__array() const;

 int32_t __declspec(property(get=__get__start, put=__set__start))  _start;

constexpr void __set__start(int32_t value) ;

constexpr int32_t __get__start() const;

 int32_t __declspec(property(get=__get__end, put=__set__end))  _end;

constexpr void __set__end(int32_t value) ;

constexpr int32_t __get__end() const;

 int32_t __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(int32_t value) ;

constexpr int32_t __get__current() const;


// Properties

 uint8_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::ArraySegment_1<uint8_t> arraySegment) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 uint8_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ArraySegment`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2349)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2349), inst: 2 })
// CS Name: System.ArraySegment`1
struct CORDL_TYPE ArraySegment_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = System::System__ArraySegment_1__Enumerator<T>;

/// @brief Convert operator to System::Collections::Generic::IList_1<T>
constexpr operator  System::Collections::Generic::IList_1<T>() const;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr operator  System::Collections::Generic::ICollection_1<T>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<T>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<T>() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<T>() const;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArraySegment_1(::ArrayW<T> _array, int32_t _offset, int32_t _count) noexcept;


                    constexpr ArraySegment_1(ArraySegment_1 const&) = default;
                    constexpr ArraySegment_1(ArraySegment_1&&) = default;
                    constexpr ArraySegment_1& operator=(ArraySegment_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ArraySegment_1& operator=(ArraySegment_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ArraySegment_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::ArraySegment_1<T> __declspec(property(get=__get__Empty_k__BackingField, put=__set__Empty_k__BackingField))  _Empty_k__BackingField;

static void __set__Empty_k__BackingField(System::ArraySegment_1<T> value) ;

static System::ArraySegment_1<T> __get__Empty_k__BackingField() ;

 ::ArrayW<T> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__array() const;

 int32_t __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(int32_t value) ;

constexpr int32_t __get__offset() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;


// Properties

static System::ArraySegment_1<T> __declspec(property(get=get_Empty))  Empty;

 ::ArrayW<T> __declspec(property(get=get_Array))  Array;

 int32_t __declspec(property(get=get_Offset))  Offset;

 int32_t __declspec(property(get=get_Count))  Count;

 T __declspec(property(get=System_Collections_Generic_IList_T__get_Item, put=System_Collections_Generic_IList_T__set_Item))  System_Collections_Generic_IList_T__Item;

 T __declspec(property(get=System_Collections_Generic_IReadOnlyList_T__get_Item))  System_Collections_Generic_IReadOnlyList_T__Item;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;


// Methods

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ArraySegment_1<T> get_Empty() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> array, int32_t offset, int32_t count) ;

/// @brief Method get_Array addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> get_Array() ;

/// @brief Method get_Offset addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Offset() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::System__ArraySegment_1__Enumerator<T> GetEnumerator() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> destination, int32_t destinationIndex) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Equals(System::ArraySegment_1<T> obj) ;

/// @brief Method System.Collections.Generic.IList<T>.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 T System_Collections_Generic_IList_T__get_Item(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<T>.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IList_T__set_Item(int32_t index, T value) ;

/// @brief Method System.Collections.Generic.IList<T>.IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_Generic_IList_T__IndexOf(T item) ;

/// @brief Method System.Collections.Generic.IList<T>.Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IList_T__Insert(int32_t index, T item) ;

/// @brief Method System.Collections.Generic.IList<T>.RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IList_T__RemoveAt(int32_t index) ;

/// @brief Method System.Collections.Generic.IReadOnlyList<T>.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 T System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t index) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(T item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__Contains(T item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__Remove(T item) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ThrowInvalidOperationIfDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowInvalidOperationIfDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ArraySegment`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2349)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2349), inst: 717 })
// CS Name: System.ArraySegment`1
struct CORDL_TYPE ArraySegment_1<uint8_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = System::System__ArraySegment_1__Enumerator<uint8_t>;

/// @brief Convert operator to System::Collections::Generic::IList_1<uint8_t>
constexpr operator  System::Collections::Generic::IList_1<uint8_t>() const;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<uint8_t>
constexpr operator  System::Collections::Generic::ICollection_1<uint8_t>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<uint8_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<uint8_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<uint8_t>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<uint8_t>() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<uint8_t>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<uint8_t>() const;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArraySegment_1(::ArrayW<uint8_t> _array, int32_t _offset, int32_t _count) noexcept;


                    constexpr ArraySegment_1(ArraySegment_1 const&) = default;
                    constexpr ArraySegment_1(ArraySegment_1&&) = default;
                    constexpr ArraySegment_1& operator=(ArraySegment_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ArraySegment_1& operator=(ArraySegment_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ArraySegment_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::ArraySegment_1<uint8_t> __declspec(property(get=__get__Empty_k__BackingField, put=__set__Empty_k__BackingField))  _Empty_k__BackingField;

static void __set__Empty_k__BackingField(System::ArraySegment_1<uint8_t> value) ;

static System::ArraySegment_1<uint8_t> __get__Empty_k__BackingField() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__array() const;

 int32_t __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(int32_t value) ;

constexpr int32_t __get__offset() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;


// Properties

static System::ArraySegment_1<uint8_t> __declspec(property(get=get_Empty))  Empty;

 ::ArrayW<uint8_t> __declspec(property(get=get_Array))  Array;

 int32_t __declspec(property(get=get_Offset))  Offset;

 int32_t __declspec(property(get=get_Count))  Count;

 uint8_t __declspec(property(get=System_Collections_Generic_IList_T__get_Item, put=System_Collections_Generic_IList_T__set_Item))  System_Collections_Generic_IList_T__Item;

 uint8_t __declspec(property(get=System_Collections_Generic_IReadOnlyList_T__get_Item))  System_Collections_Generic_IReadOnlyList_T__Item;

 bool __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly))  System_Collections_Generic_ICollection_T__IsReadOnly;


// Methods

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static System::ArraySegment_1<uint8_t> get_Empty() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint8_t> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method get_Array addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint8_t> get_Array() ;

/// @brief Method get_Offset addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Offset() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 System::System__ArraySegment_1__Enumerator<uint8_t> GetEnumerator() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<uint8_t> destination, int32_t destinationIndex) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Equals(System::ArraySegment_1<uint8_t> obj) ;

/// @brief Method System.Collections.Generic.IList<T>.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 uint8_t System_Collections_Generic_IList_T__get_Item(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<T>.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IList_T__set_Item(int32_t index, uint8_t value) ;

/// @brief Method System.Collections.Generic.IList<T>.IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_Generic_IList_T__IndexOf(uint8_t item) ;

/// @brief Method System.Collections.Generic.IList<T>.Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IList_T__Insert(int32_t index, uint8_t item) ;

/// @brief Method System.Collections.Generic.IList<T>.RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IList_T__RemoveAt(int32_t index) ;

/// @brief Method System.Collections.Generic.IReadOnlyList<T>.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 uint8_t System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t index) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Add(uint8_t item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_T__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__Contains(uint8_t item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_T__Remove(uint8_t item) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<uint8_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ThrowInvalidOperationIfDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowInvalidOperationIfDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::ArraySegment_1, "System", "ArraySegment`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::System__ArraySegment_1__Enumerator, "System", "ArraySegment`1/Enumerator");

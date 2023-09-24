#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2__Node;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2__Tables;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2__Node;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2__Tables;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ConcurrentDictionary_2<TKey,TValue>;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue>;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>;
}
// Type: ::Tables
// Type: ::Node
// Type: ::DictionaryEnumerator
// Type: ::<GetEnumerator>d__35
// Type: System.Collections.Concurrent::ConcurrentDictionary`2
// Type: ::Tables
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3791))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3791), inst: 80 })
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2::Tables
class CORDL_TYPE System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Collections__Concurrent__ConcurrentDictionary_2__Tables() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Concurrent__ConcurrentDictionary_2__Tables", modifiers: " const&", def_value: None }]
constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Tables(System__Collections__Concurrent__ConcurrentDictionary_2__Tables const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Concurrent__ConcurrentDictionary_2__Tables", modifiers: "&&", def_value: None }]
constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Tables(System__Collections__Concurrent__ConcurrentDictionary_2__Tables&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Concurrent__ConcurrentDictionary_2__Tables(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Tables& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Tables& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Tables& operator=(System__Collections__Concurrent__ConcurrentDictionary_2__Tables&& o) noexcept = default;
  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Tables& operator=(System__Collections__Concurrent__ConcurrentDictionary_2__Tables const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> value) ;

constexpr ::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> __get__buckets() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__locks, put=__set__locks))  _locks;

constexpr void __set__locks(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__locks() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__countPerLock, put=__set__countPerLock))  _countPerLock;

constexpr void __set__countPerLock(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__countPerLock() const;


// Methods

static System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue> New_ctor(::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> buckets, ::ArrayW<::bs_hook::Il2CppWrapperType> locks, ::ArrayW<int32_t> countPerLock) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> buckets, ::ArrayW<::bs_hook::Il2CppWrapperType> locks, ::ArrayW<int32_t> countPerLock) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
// Type: ::Node
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3792))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3792), inst: 80 })
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2::Node
class CORDL_TYPE System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Collections__Concurrent__ConcurrentDictionary_2__Node() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Concurrent__ConcurrentDictionary_2__Node", modifiers: " const&", def_value: None }]
constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Node(System__Collections__Concurrent__ConcurrentDictionary_2__Node const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Concurrent__ConcurrentDictionary_2__Node", modifiers: "&&", def_value: None }]
constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Node(System__Collections__Concurrent__ConcurrentDictionary_2__Node&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Concurrent__ConcurrentDictionary_2__Node(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Node& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Node& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Node& operator=(System__Collections__Concurrent__ConcurrentDictionary_2__Node&& o) noexcept = default;
  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__Node& operator=(System__Collections__Concurrent__ConcurrentDictionary_2__Node const& o) noexcept = default;
                


// Fields

 TKey __declspec(property(get=__get__key, put=__set__key))  _key;

constexpr void __set__key(TKey value) ;

constexpr TKey __get__key() const;

 TValue __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(TValue value) ;

constexpr TValue __get__value() const;

 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> value) ;

constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> __get__next() const;

 int32_t __declspec(property(get=__get__hashcode, put=__set__hashcode))  _hashcode;

constexpr void __set__hashcode(int32_t value) ;

constexpr int32_t __get__hashcode() const;


// Methods

static System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> New_ctor(TKey key, TValue value, int32_t hashcode, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> next) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TKey key, TValue value, int32_t hashcode, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
// Type: ::DictionaryEnumerator
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3793))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3793), inst: 80 })
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2::DictionaryEnumerator
class CORDL_TYPE System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr operator  System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator(System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator(System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator& operator=(System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator&& o) noexcept = default;
  constexpr System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator& operator=(System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> __declspec(property(get=__get__enumerator, put=__set__enumerator))  _enumerator;

constexpr void __set__enumerator(System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> value) ;

constexpr System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> __get__enumerator() const;


// Properties

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

static System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue> New_ctor(System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> dictionary) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> dictionary) ;

/// @brief Method get_Entry addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
// Type: ::<GetEnumerator>d__35
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3794))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3794), inst: 80 })
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2::<GetEnumerator>d__35
class CORDL_TYPE System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35", modifiers: " const&", def_value: None }]
constexpr System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35(System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35", modifiers: "&&", def_value: None }]
constexpr System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35(System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35& operator=(System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35&& o) noexcept = default;
  constexpr System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35& operator=(System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Collections::Generic::KeyValuePair_2<TKey,TValue> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Collections::Generic::KeyValuePair_2<TKey,TValue> value) ;

constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue> __get___2__current() const;

 System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> value) ;

constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> __get___4__this() const;

 ::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> __declspec(property(get=__get__buckets_5__2, put=__set__buckets_5__2))  _buckets_5__2;

constexpr void __set__buckets_5__2(::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> value) ;

constexpr ::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> __get__buckets_5__2() const;

 int32_t __declspec(property(get=__get__i_5__3, put=__set__i_5__3))  _i_5__3;

constexpr void __set__i_5__3(int32_t value) ;

constexpr int32_t __get__i_5__3() const;

 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> __declspec(property(get=__get__current_5__4, put=__set__current_5__4))  _current_5__4;

constexpr void __set__current_5__4(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> value) ;

constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> __get__current_5__4() const;


// Properties

 System::Collections::Generic::KeyValuePair_2<TKey,TValue> __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey,TValue___get_Current))  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey,TValue___Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue> New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::KeyValuePair_2<TKey,TValue> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey,TValue___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
// Type: System.Collections.Concurrent::ConcurrentDictionary`2
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3795), inst: 80 })
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2
class CORDL_TYPE ConcurrentDictionary_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__35 = System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35<TKey, TValue>;

using DictionaryEnumerator = System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator<TKey, TValue>;

using Node = System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey, TValue>;

using Tables = System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey, TValue>;

/// @brief Convert operator to System::Collections::Generic::IDictionary_2<TKey,TValue>
constexpr operator  System::Collections::Generic::IDictionary_2<TKey,TValue>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>
constexpr operator  System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ConcurrentDictionary_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2", modifiers: " const&", def_value: None }]
constexpr ConcurrentDictionary_2(ConcurrentDictionary_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2", modifiers: "&&", def_value: None }]
constexpr ConcurrentDictionary_2(ConcurrentDictionary_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcurrentDictionary_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConcurrentDictionary_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcurrentDictionary_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcurrentDictionary_2& operator=(ConcurrentDictionary_2&& o) noexcept = default;
  constexpr ConcurrentDictionary_2& operator=(ConcurrentDictionary_2 const& o) noexcept = default;
                


// Fields

 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue> __declspec(property(get=__get__tables, put=__set__tables))  _tables;

constexpr void __set__tables(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue> value) ;

constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue> __get__tables() const;

 System::Collections::Generic::IEqualityComparer_1<TKey> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(System::Collections::Generic::IEqualityComparer_1<TKey> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<TKey> __get__comparer() const;

 bool __declspec(property(get=__get__growLockArray, put=__set__growLockArray))  _growLockArray;

constexpr void __set__growLockArray(bool value) ;

constexpr bool __get__growLockArray() const;

 int32_t __declspec(property(get=__get__budget, put=__set__budget))  _budget;

constexpr void __set__budget(int32_t value) ;

constexpr int32_t __get__budget() const;

 ::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> __declspec(property(get=__get__serializationArray, put=__set__serializationArray))  _serializationArray;

constexpr void __set__serializationArray(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> value) ;

constexpr ::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> __get__serializationArray() const;

 int32_t __declspec(property(get=__get__serializationConcurrencyLevel, put=__set__serializationConcurrencyLevel))  _serializationConcurrencyLevel;

constexpr void __set__serializationConcurrencyLevel(int32_t value) ;

constexpr int32_t __get__serializationConcurrencyLevel() const;

 int32_t __declspec(property(get=__get__serializationCapacity, put=__set__serializationCapacity))  _serializationCapacity;

constexpr void __set__serializationCapacity(int32_t value) ;

constexpr int32_t __get__serializationCapacity() const;

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{31};

/// @brief Field MaxLockNumber offset 0
static constexpr int32_t  MaxLockNumber{1024};

static bool __declspec(property(get=__get_s_isValueWriteAtomic, put=__set_s_isValueWriteAtomic))  s_isValueWriteAtomic;

static void __set_s_isValueWriteAtomic(bool value) ;

static bool __get_s_isValueWriteAtomic() ;


// Properties

 TValue __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::ICollection_1<TKey> __declspec(property(get=get_Keys))  Keys;

 System::Collections::Generic::ICollection_1<TValue> __declspec(property(get=get_Values))  Values;

 bool __declspec(property(get=System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___get_IsReadOnly))  System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___IsReadOnly;

 bool __declspec(property(get=System_Collections_IDictionary_get_IsFixedSize))  System_Collections_IDictionary_IsFixedSize;

 bool __declspec(property(get=System_Collections_IDictionary_get_IsReadOnly))  System_Collections_IDictionary_IsReadOnly;

 System::Collections::ICollection __declspec(property(get=System_Collections_IDictionary_get_Keys))  System_Collections_IDictionary_Keys;

 System::Collections::ICollection __declspec(property(get=System_Collections_IDictionary_get_Values))  System_Collections_IDictionary_Values;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IDictionary_get_Item, put=System_Collections_IDictionary_set_Item))  System_Collections_IDictionary_Item;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

static int32_t __declspec(property(get=get_DefaultConcurrencyLevel))  DefaultConcurrencyLevel;


// Methods

/// @brief Method IsValueWriteAtomic addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsValueWriteAtomic() ;

static System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> New_ctor(System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method InitializeFromCollection addr 0x0 size 0xffffffffffffffff virtual false final false
 void InitializeFromCollection(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> collection) ;

static System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> New_ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray, System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray, System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method TryAdd addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryAdd(TKey key, TValue value) ;

/// @brief Method ContainsKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool ContainsKey(TKey key) ;

/// @brief Method TryRemove addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryRemove(TKey key, ByRef<TValue> value) ;

/// @brief Method TryRemoveInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryRemoveInternal(TKey key, ByRef<TValue> value, bool matchValue, TValue oldValue) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryGetValue(TKey key, ByRef<TValue> value) ;

/// @brief Method TryGetValueInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetValueInternal(TKey key, int32_t hashcode, ByRef<TValue> value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___CopyTo(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> array, int32_t index) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> ToArray() ;

/// @brief Method CopyToPairs addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyToPairs(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> array, int32_t index) ;

/// @brief Method CopyToEntries addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyToEntries(::ArrayW<System::Collections::DictionaryEntry> array, int32_t index) ;

/// @brief Method CopyToObjects addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyToObjects(::ArrayW<::bs_hook::Il2CppWrapperType> array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> GetEnumerator() ;

/// @brief Method TryAddInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryAddInternal(TKey key, int32_t hashcode, TValue value, bool updateIfExists, bool acquireLock, ByRef<TValue> resultingValue) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Item(TKey key) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_Item(TKey key, TValue value) ;

/// @brief Method ThrowKeyNotFoundException addr 0x0 size 0xffffffffffffffff virtual false final false
static void ThrowKeyNotFoundException(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method ThrowKeyNullException addr 0x0 size 0xffffffffffffffff virtual false final false
static void ThrowKeyNullException() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method GetCountInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetCountInternal() ;

/// @brief Method GetOrAdd addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue GetOrAdd(TKey key, System::Func_2<TKey,TValue> valueFactory) ;

/// @brief Method GetOrAdd addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue GetOrAdd(TKey key, TValue value) ;

/// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_IDictionary_TKey,TValue__Add(TKey key, TValue value) ;

/// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_IDictionary_TKey,TValue__Remove(TKey key) ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::ICollection_1<TKey> get_Keys() ;

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::ICollection_1<TValue> get_Values() ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Add(System::Collections::Generic::KeyValuePair_2<TKey,TValue> keyValuePair) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Contains(System::Collections::Generic::KeyValuePair_2<TKey,TValue> keyValuePair) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Remove(System::Collections::Generic::KeyValuePair_2<TKey,TValue> keyValuePair) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IDictionary.Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IDictionary_Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IDictionary.Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IDictionary_Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.Collections.IDictionary.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IDictionaryEnumerator System_Collections_IDictionary_GetEnumerator() ;

/// @brief Method System.Collections.IDictionary.get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IDictionary_get_IsFixedSize() ;

/// @brief Method System.Collections.IDictionary.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_IDictionary_get_IsReadOnly() ;

/// @brief Method System.Collections.IDictionary.get_Keys addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::ICollection System_Collections_IDictionary_get_Keys() ;

/// @brief Method System.Collections.IDictionary.Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IDictionary_Remove(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.Collections.IDictionary.get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::ICollection System_Collections_IDictionary_get_Values() ;

/// @brief Method System.Collections.IDictionary.get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IDictionary_get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method System.Collections.IDictionary.set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IDictionary_set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method GrowTable addr 0x0 size 0xffffffffffffffff virtual false final false
 void GrowTable(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue> tables) ;

/// @brief Method GetBucket addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t GetBucket(int32_t hashcode, int32_t bucketCount) ;

/// @brief Method GetBucketAndLockNo addr 0x0 size 0xffffffffffffffff virtual false final false
static void GetBucketAndLockNo(int32_t hashcode, ByRef<int32_t> bucketNo, ByRef<int32_t> lockNo, int32_t bucketCount, int32_t lockCount) ;

/// @brief Method get_DefaultConcurrencyLevel addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t get_DefaultConcurrencyLevel() ;

/// @brief Method AcquireAllLocks addr 0x0 size 0xffffffffffffffff virtual false final false
 void AcquireAllLocks(ByRef<int32_t> locksAcquired) ;

/// @brief Method AcquireLocks addr 0x0 size 0xffffffffffffffff virtual false final false
 void AcquireLocks(int32_t fromInclusive, int32_t toExclusive, ByRef<int32_t> locksAcquired) ;

/// @brief Method ReleaseLocks addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReleaseLocks(int32_t fromInclusive, int32_t toExclusive) ;

/// @brief Method GetKeys addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<TKey> GetKeys() ;

/// @brief Method GetValues addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<TValue> GetValues() ;

/// @brief Method OnSerializing addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnSerializing(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnSerialized addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnSerialized(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialized addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDeserialized(System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::ConcurrentDictionary_2, "System.Collections.Concurrent", "ConcurrentDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator, "System.Collections.Concurrent", "ConcurrentDictionary`2/DictionaryEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node, "System.Collections.Concurrent", "ConcurrentDictionary`2/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables, "System.Collections.Concurrent", "ConcurrentDictionary`2/Tables");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35, "System.Collections.Concurrent", "ConcurrentDictionary`2/<GetEnumerator>d__35");

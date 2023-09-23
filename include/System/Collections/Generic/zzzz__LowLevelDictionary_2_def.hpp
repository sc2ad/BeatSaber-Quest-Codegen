#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class LowLevelDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue,typename T>
class System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class System__Collections__Generic__LowLevelDictionary_2__Entry;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type TValue>
class LowLevelDictionary_2<int32_t,TValue>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class LowLevelDictionary_2<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type TValue>
class System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue,::cordl_internals::il2cpp_reference_type T>
class System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type TValue>
class System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue>;
}
// Type: ::Entry
// Type: ::DefaultComparer`1
// Type: System.Collections.Generic::LowLevelDictionary`2
// Type: ::Entry
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3833), inst: 80 })
// CS Name: System.Collections.Generic.LowLevelDictionary`2::Entry
class CORDL_TYPE System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Collections__Generic__LowLevelDictionary_2__Entry() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__LowLevelDictionary_2__Entry", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__LowLevelDictionary_2__Entry(System__Collections__Generic__LowLevelDictionary_2__Entry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__LowLevelDictionary_2__Entry", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__LowLevelDictionary_2__Entry(System__Collections__Generic__LowLevelDictionary_2__Entry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LowLevelDictionary_2__Entry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__LowLevelDictionary_2__Entry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__LowLevelDictionary_2__Entry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__LowLevelDictionary_2__Entry& operator=(System__Collections__Generic__LowLevelDictionary_2__Entry&& o) noexcept = default;
  constexpr System__Collections__Generic__LowLevelDictionary_2__Entry& operator=(System__Collections__Generic__LowLevelDictionary_2__Entry const& o) noexcept = default;
                


// Fields

 TKey __declspec(property(get=__get__key, put=__set__key))  _key;

constexpr void __set__key(TKey value) ;

constexpr TKey __get__key() const;

 TValue __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(TValue value) ;

constexpr TValue __get__value() const;

 System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue> __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue> __get__next() const;


// Methods

// Ctor Parameters []
explicit System__Collections__Generic__LowLevelDictionary_2__Entry() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Entry
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3833))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3833), inst: 1532 })
// CS Name: System.Collections.Generic.LowLevelDictionary`2::Entry
class CORDL_TYPE System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Collections__Generic__LowLevelDictionary_2__Entry() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__LowLevelDictionary_2__Entry", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__LowLevelDictionary_2__Entry(System__Collections__Generic__LowLevelDictionary_2__Entry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__LowLevelDictionary_2__Entry", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__LowLevelDictionary_2__Entry(System__Collections__Generic__LowLevelDictionary_2__Entry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LowLevelDictionary_2__Entry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__LowLevelDictionary_2__Entry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__LowLevelDictionary_2__Entry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__LowLevelDictionary_2__Entry& operator=(System__Collections__Generic__LowLevelDictionary_2__Entry&& o) noexcept = default;
  constexpr System__Collections__Generic__LowLevelDictionary_2__Entry& operator=(System__Collections__Generic__LowLevelDictionary_2__Entry const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__key, put=__set__key))  _key;

constexpr void __set__key(int32_t value) ;

constexpr int32_t __get__key() const;

 TValue __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(TValue value) ;

constexpr TValue __get__value() const;

 System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue> __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue> __get__next() const;


// Methods

// Ctor Parameters []
explicit System__Collections__Generic__LowLevelDictionary_2__Entry() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::DefaultComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3834))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3834), inst: 5150 })
// CS Name: System.Collections.Generic.LowLevelDictionary`2::DefaultComparer`1
class CORDL_TYPE System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<int32_t>
constexpr operator  System::Collections::Generic::IEqualityComparer_1<int32_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1(System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1(System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1& operator=(System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1&& o) noexcept = default;
  constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1& operator=(System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(int32_t x, int32_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t GetHashCode(int32_t obj) ;

// Ctor Parameters []
explicit System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::DefaultComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue,::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3834))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3834), inst: 5155 })
// CS Name: System.Collections.Generic.LowLevelDictionary`2::DefaultComparer`1
class CORDL_TYPE System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<T>
constexpr operator  System::Collections::Generic::IEqualityComparer_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1", modifiers: " const&", def_value: None }]
constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1(System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1", modifiers: "&&", def_value: None }]
constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1(System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1& operator=(System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1&& o) noexcept = default;
  constexpr System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1& operator=(System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(T x, T y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t GetHashCode(T obj) ;

// Ctor Parameters []
explicit System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LowLevelDictionary`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3835))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3835), inst: 80 })
// CS Name: System.Collections.Generic.LowLevelDictionary`2
class CORDL_TYPE LowLevelDictionary_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using DefaultComparer_1 = System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1<TKey, TValue, TKey, TValue, T>;

using Entry = System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LowLevelDictionary_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: " const&", def_value: None }]
constexpr LowLevelDictionary_2(LowLevelDictionary_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "&&", def_value: None }]
constexpr LowLevelDictionary_2(LowLevelDictionary_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LowLevelDictionary_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LowLevelDictionary_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LowLevelDictionary_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LowLevelDictionary_2& operator=(LowLevelDictionary_2&& o) noexcept = default;
  constexpr LowLevelDictionary_2& operator=(LowLevelDictionary_2 const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue>> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue>> value) ;

constexpr ::ArrayW<System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue>> __get__buckets() const;

 int32_t __declspec(property(get=__get__numEntries, put=__set__numEntries))  _numEntries;

constexpr void __set__numEntries(int32_t value) ;

constexpr int32_t __get__numEntries() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 System::Collections::Generic::IEqualityComparer_1<TKey> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(System::Collections::Generic::IEqualityComparer_1<TKey> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<TKey> __get__comparer() const;


// Properties

 TKey __declspec(property(put=set_Item))  Item;


// Methods

// Ctor Parameters []
explicit LowLevelDictionary_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<TKey>", modifiers: "", def_value: None }]
explicit LowLevelDictionary_2(int32_t capacity, System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(TKey key, TValue value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear(int32_t capacity) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Remove(TKey key) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue> Find(TKey key) ;

/// @brief Method UncheckedAdd addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<TKey,TValue> UncheckedAdd(TKey key, TValue value) ;

/// @brief Method ExpandBuckets addr 0x0 size 0xffffffffffffffff virtual false final false
 void ExpandBuckets() ;

/// @brief Method GetBucket addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetBucket(TKey key, int32_t numBuckets) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LowLevelDictionary`2
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3835))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3835), inst: 1532 })
// CS Name: System.Collections.Generic.LowLevelDictionary`2
class CORDL_TYPE LowLevelDictionary_2<int32_t,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using DefaultComparer_1 = System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1<int32_t, TValue, TKey, TValue, T>;

using Entry = System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LowLevelDictionary_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: " const&", def_value: None }]
constexpr LowLevelDictionary_2(LowLevelDictionary_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelDictionary_2", modifiers: "&&", def_value: None }]
constexpr LowLevelDictionary_2(LowLevelDictionary_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LowLevelDictionary_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LowLevelDictionary_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LowLevelDictionary_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LowLevelDictionary_2& operator=(LowLevelDictionary_2&& o) noexcept = default;
  constexpr LowLevelDictionary_2& operator=(LowLevelDictionary_2 const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue>> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue>> value) ;

constexpr ::ArrayW<System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue>> __get__buckets() const;

 int32_t __declspec(property(get=__get__numEntries, put=__set__numEntries))  _numEntries;

constexpr void __set__numEntries(int32_t value) ;

constexpr int32_t __get__numEntries() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 System::Collections::Generic::IEqualityComparer_1<int32_t> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(System::Collections::Generic::IEqualityComparer_1<int32_t> value) ;

constexpr System::Collections::Generic::IEqualityComparer_1<int32_t> __get__comparer() const;


// Properties

 int32_t __declspec(property(put=set_Item))  Item;


// Methods

// Ctor Parameters []
explicit LowLevelDictionary_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<int32_t>", modifiers: "", def_value: None }]
explicit LowLevelDictionary_2(int32_t capacity, System::Collections::Generic::IEqualityComparer_1<int32_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, System::Collections::Generic::IEqualityComparer_1<int32_t> comparer) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t key, TValue value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear(int32_t capacity) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Remove(int32_t key) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue> Find(int32_t key) ;

/// @brief Method UncheckedAdd addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry<int32_t,TValue> UncheckedAdd(int32_t key, TValue value) ;

/// @brief Method ExpandBuckets addr 0x0 size 0xffffffffffffffff virtual false final false
 void ExpandBuckets() ;

/// @brief Method GetBucket addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetBucket(int32_t key, int32_t numBuckets) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::LowLevelDictionary_2, "System.Collections.Generic", "LowLevelDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__DefaultComparer_1, "System.Collections.Generic", "LowLevelDictionary`2/DefaultComparer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::System__Collections__Generic__LowLevelDictionary_2__Entry, "System.Collections.Generic", "LowLevelDictionary`2/Entry");

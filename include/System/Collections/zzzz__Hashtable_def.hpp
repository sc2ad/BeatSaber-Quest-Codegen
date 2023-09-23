#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Array;
}
namespace System {
class ICloneable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class System__Collections__Hashtable__HashtableDebugView;
}
namespace System::Collections {
class System__Collections__Hashtable__HashtableEnumerator;
}
namespace System::Collections {
class System__Collections__Hashtable__KeyCollection;
}
namespace System::Collections {
class System__Collections__Hashtable__SyncHashtable;
}
namespace System::Collections {
class System__Collections__Hashtable__ValueCollection;
}
namespace System::Collections {
struct System__Collections__Hashtable__bucket;
}
// Type: ::bucket
namespace System::Collections {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3777))
// CS Name: System.Collections.Hashtable::bucket
struct CORDL_TYPE System__Collections__Hashtable__bucket : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "key", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "val", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "hash_coll", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Collections__Hashtable__bucket(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType val, int32_t hash_coll) noexcept;


                    constexpr System__Collections__Hashtable__bucket(System__Collections__Hashtable__bucket const&) = default;
                    constexpr System__Collections__Hashtable__bucket(System__Collections__Hashtable__bucket&&) = default;
                    constexpr System__Collections__Hashtable__bucket& operator=(System__Collections__Hashtable__bucket const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Collections__Hashtable__bucket& operator=(System__Collections__Hashtable__bucket&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Hashtable__bucket(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_key() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_val, put=__set_val))  val;

constexpr void __set_val(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_val() const;

 int32_t __declspec(property(get=__get_hash_coll, put=__set_hash_coll))  hash_coll;

constexpr void __set_hash_coll(int32_t value) ;

constexpr int32_t __get_hash_coll() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::KeyCollection
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3778))
// CS Name: System.Collections.Hashtable::KeyCollection
class CORDL_TYPE System__Collections__Hashtable__KeyCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Collections__Hashtable__KeyCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__KeyCollection", modifiers: " const&", def_value: None }]
constexpr System__Collections__Hashtable__KeyCollection(System__Collections__Hashtable__KeyCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__KeyCollection", modifiers: "&&", def_value: None }]
constexpr System__Collections__Hashtable__KeyCollection(System__Collections__Hashtable__KeyCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Hashtable__KeyCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Hashtable__KeyCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Hashtable__KeyCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Hashtable__KeyCollection& operator=(System__Collections__Hashtable__KeyCollection&& o) noexcept = default;
  constexpr System__Collections__Hashtable__KeyCollection& operator=(System__Collections__Hashtable__KeyCollection const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get__hashtable, put=__set__hashtable))  _hashtable;

constexpr void __set__hashtable(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__hashtable() const;


// Properties

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "hashtable", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit System__Collections__Hashtable__KeyCollection(System::Collections::Hashtable hashtable) ;

/// @brief Method .ctor addr 0x241b8a4 size 0x28 virtual false final false
 void _ctor(System::Collections::Hashtable hashtable) ;

/// @brief Method CopyTo addr 0x241cac4 size 0x18c virtual true final false
 void CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method GetEnumerator addr 0x241cc50 size 0x68 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_IsSynchronized addr 0x241ccb8 size 0x24 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x241ccdc size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Count addr 0x241cd00 size 0x1c virtual true final false
 int32_t get_Count() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::ValueCollection
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3779))
// CS Name: System.Collections.Hashtable::ValueCollection
class CORDL_TYPE System__Collections__Hashtable__ValueCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Collections__Hashtable__ValueCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__ValueCollection", modifiers: " const&", def_value: None }]
constexpr System__Collections__Hashtable__ValueCollection(System__Collections__Hashtable__ValueCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__ValueCollection", modifiers: "&&", def_value: None }]
constexpr System__Collections__Hashtable__ValueCollection(System__Collections__Hashtable__ValueCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Hashtable__ValueCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Hashtable__ValueCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Hashtable__ValueCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Hashtable__ValueCollection& operator=(System__Collections__Hashtable__ValueCollection&& o) noexcept = default;
  constexpr System__Collections__Hashtable__ValueCollection& operator=(System__Collections__Hashtable__ValueCollection const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get__hashtable, put=__set__hashtable))  _hashtable;

constexpr void __set__hashtable(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__hashtable() const;


// Properties

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "hashtable", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit System__Collections__Hashtable__ValueCollection(System::Collections::Hashtable hashtable) ;

/// @brief Method .ctor addr 0x241b93c size 0x28 virtual false final false
 void _ctor(System::Collections::Hashtable hashtable) ;

/// @brief Method CopyTo addr 0x241cd1c size 0x18c virtual true final false
 void CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method GetEnumerator addr 0x241cea8 size 0x68 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_IsSynchronized addr 0x241cf10 size 0x24 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x241cf34 size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Count addr 0x241cf58 size 0x1c virtual true final false
 int32_t get_Count() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: System.Collections::Hashtable
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3783))
// CS Name: System.Collections.Hashtable
class CORDL_TYPE Hashtable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HashtableDebugView = System::Collections::System__Collections__Hashtable__HashtableDebugView;

using HashtableEnumerator = System::Collections::System__Collections__Hashtable__HashtableEnumerator;

using SyncHashtable = System::Collections::System__Collections__Hashtable__SyncHashtable;

using ValueCollection = System::Collections::System__Collections__Hashtable__ValueCollection;

using KeyCollection = System::Collections::System__Collections__Hashtable__KeyCollection;

using bucket = System::Collections::System__Collections__Hashtable__bucket;

/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Hashtable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Hashtable", modifiers: " const&", def_value: None }]
constexpr Hashtable(Hashtable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Hashtable", modifiers: "&&", def_value: None }]
constexpr Hashtable(Hashtable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Hashtable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Hashtable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Hashtable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Hashtable& operator=(Hashtable&& o) noexcept = default;
  constexpr Hashtable& operator=(Hashtable const& o) noexcept = default;
                


// Fields

/// @brief Field HashPrime offset 0
static constexpr int32_t  HashPrime{101};

/// @brief Field InitialSize offset 0
static constexpr int32_t  InitialSize{3};

/// @brief Field LoadFactorName offset 0
static constexpr ::ConstString  LoadFactorName{u"LoadFactor"};

/// @brief Field VersionName offset 0
static constexpr ::ConstString  VersionName{u"Version"};

/// @brief Field ComparerName offset 0
static constexpr ::ConstString  ComparerName{u"Comparer"};

/// @brief Field HashCodeProviderName offset 0
static constexpr ::ConstString  HashCodeProviderName{u"HashCodeProvider"};

/// @brief Field HashSizeName offset 0
static constexpr ::ConstString  HashSizeName{u"HashSize"};

/// @brief Field KeysName offset 0
static constexpr ::ConstString  KeysName{u"Keys"};

/// @brief Field ValuesName offset 0
static constexpr ::ConstString  ValuesName{u"Values"};

/// @brief Field KeyComparerName offset 0
static constexpr ::ConstString  KeyComparerName{u"KeyComparer"};

 ::ArrayW<System::Collections::System__Collections__Hashtable__bucket> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<System::Collections::System__Collections__Hashtable__bucket> value) ;

constexpr ::ArrayW<System::Collections::System__Collections__Hashtable__bucket> __get__buckets() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__occupancy, put=__set__occupancy))  _occupancy;

constexpr void __set__occupancy(int32_t value) ;

constexpr int32_t __get__occupancy() const;

 int32_t __declspec(property(get=__get__loadsize, put=__set__loadsize))  _loadsize;

constexpr void __set__loadsize(int32_t value) ;

constexpr int32_t __get__loadsize() const;

 float_t __declspec(property(get=__get__loadFactor, put=__set__loadFactor))  _loadFactor;

constexpr void __set__loadFactor(float_t value) ;

constexpr float_t __get__loadFactor() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 bool __declspec(property(get=__get__isWriterInProgress, put=__set__isWriterInProgress))  _isWriterInProgress;

constexpr void __set__isWriterInProgress(bool value) ;

constexpr bool __get__isWriterInProgress() const;

 System::Collections::ICollection __declspec(property(get=__get__keys, put=__set__keys))  _keys;

constexpr void __set__keys(System::Collections::ICollection value) ;

constexpr System::Collections::ICollection __get__keys() const;

 System::Collections::ICollection __declspec(property(get=__get__values, put=__set__values))  _values;

constexpr void __set__values(System::Collections::ICollection value) ;

constexpr System::Collections::ICollection __get__values() const;

 System::Collections::IEqualityComparer __declspec(property(get=__get__keycomparer, put=__set__keycomparer))  _keycomparer;

constexpr void __set__keycomparer(System::Collections::IEqualityComparer value) ;

constexpr System::Collections::IEqualityComparer __get__keycomparer() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> __declspec(property(get=__get_s_serializationInfoTable, put=__set_s_serializationInfoTable))  s_serializationInfoTable;

static void __set_s_serializationInfoTable(System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> value) ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> __get_s_serializationInfoTable() ;


// Properties

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> __declspec(property(get=get_SerializationInfoTable))  SerializationInfoTable;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 System::Collections::ICollection __declspec(property(get=get_Values))  Values;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method get_SerializationInfoTable addr 0x2419e38 size 0x5c virtual false final false
static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> get_SerializationInfoTable() ;

// Ctor Parameters [CppParam { name: "trash", ty: "bool", modifiers: "", def_value: None }]
explicit Hashtable(bool trash) ;

/// @brief Method .ctor addr 0x2419e94 size 0x8 virtual false final false
 void _ctor(bool trash) ;

// Ctor Parameters []
explicit Hashtable() ;

/// @brief Method .ctor addr 0x2419e9c size 0xc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit Hashtable(int32_t capacity) ;

/// @brief Method .ctor addr 0x241a154 size 0x8 virtual false final false
 void _ctor(int32_t capacity) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "loadFactor", ty: "float_t", modifiers: "", def_value: None }]
explicit Hashtable(int32_t capacity, float_t loadFactor) ;

/// @brief Method .ctor addr 0x2419ea8 size 0x2ac virtual false final false
 void _ctor(int32_t capacity, float_t loadFactor) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "loadFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
explicit Hashtable(int32_t capacity, float_t loadFactor, System::Collections::IEqualityComparer equalityComparer) ;

/// @brief Method .ctor addr 0x241a15c size 0x24 virtual false final false
 void _ctor(int32_t capacity, float_t loadFactor, System::Collections::IEqualityComparer equalityComparer) ;

// Ctor Parameters [CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
explicit Hashtable(System::Collections::IEqualityComparer equalityComparer) ;

/// @brief Method .ctor addr 0x241a180 size 0x2c virtual false final false
 void _ctor(System::Collections::IEqualityComparer equalityComparer) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
explicit Hashtable(int32_t capacity, System::Collections::IEqualityComparer equalityComparer) ;

/// @brief Method .ctor addr 0x241a1ac size 0x28 virtual false final false
 void _ctor(int32_t capacity, System::Collections::IEqualityComparer equalityComparer) ;

// Ctor Parameters [CppParam { name: "d", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit Hashtable(System::Collections::IDictionary d) ;

/// @brief Method .ctor addr 0x241a1d4 size 0xc virtual false final false
 void _ctor(System::Collections::IDictionary d) ;

// Ctor Parameters [CppParam { name: "d", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "loadFactor", ty: "float_t", modifiers: "", def_value: None }]
explicit Hashtable(System::Collections::IDictionary d, float_t loadFactor) ;

/// @brief Method .ctor addr 0x241a1e0 size 0x8 virtual false final false
 void _ctor(System::Collections::IDictionary d, float_t loadFactor) ;

// Ctor Parameters [CppParam { name: "d", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "loadFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
explicit Hashtable(System::Collections::IDictionary d, float_t loadFactor, System::Collections::IEqualityComparer equalityComparer) ;

/// @brief Method .ctor addr 0x241a1e8 size 0x324 virtual false final false
 void _ctor(System::Collections::IDictionary d, float_t loadFactor, System::Collections::IEqualityComparer equalityComparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit Hashtable(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x241a50c size 0x68 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InitHash addr 0x241a574 size 0x54 virtual false final false
 uint32_t InitHash(::bs_hook::Il2CppWrapperType key, int32_t hashsize, ByRef<uint32_t> seed, ByRef<uint32_t> incr) ;

/// @brief Method Add addr 0x241a5c8 size 0x8 virtual true final false
 void Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Clear addr 0x241a990 size 0xa0 virtual true final false
 void Clear() ;

/// @brief Method Clone addr 0x241aa5c size 0x114 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Contains addr 0x241ab70 size 0x10 virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method ContainsKey addr 0x241ab80 size 0x168 virtual true final false
 bool ContainsKey(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method CopyKeys addr 0x241ace8 size 0xa4 virtual false final false
 void CopyKeys(System::Array array, int32_t arrayIndex) ;

/// @brief Method CopyEntries addr 0x241ad8c size 0xf4 virtual false final false
 void CopyEntries(System::Array array, int32_t arrayIndex) ;

/// @brief Method CopyTo addr 0x241ae80 size 0x1b0 virtual true final false
 void CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method CopyValues addr 0x241b030 size 0xb0 virtual false final false
 void CopyValues(System::Array array, int32_t arrayIndex) ;

/// @brief Method get_Item addr 0x241b0e0 size 0x1e8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x241b2c8 size 0x8 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method expand addr 0x241b2d0 size 0x6c virtual false final false
 void expand() ;

/// @brief Method rehash addr 0x241b460 size 0x1c virtual false final false
 void rehash() ;

/// @brief Method UpdateVersion addr 0x241aa30 size 0x2c virtual false final false
 void UpdateVersion() ;

/// @brief Method rehash addr 0x241b33c size 0x124 virtual false final false
 void rehash(int32_t newsize) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x241b52c size 0x64 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x241b5e8 size 0x64 virtual true final false
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method GetHash addr 0x241b64c size 0xc8 virtual true final false
 int32_t GetHash(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method get_IsReadOnly addr 0x241b714 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x241b71c size 0x8 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x241b724 size 0x8 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method KeyEquals addr 0x241b72c size 0x108 virtual true final false
 bool KeyEquals(::bs_hook::Il2CppWrapperType item, ::bs_hook::Il2CppWrapperType key) ;

/// @brief Method get_Keys addr 0x241b834 size 0x70 virtual true final false
 System::Collections::ICollection get_Keys() ;

/// @brief Method get_Values addr 0x241b8cc size 0x70 virtual true final false
 System::Collections::ICollection get_Values() ;

/// @brief Method Insert addr 0x241a5d0 size 0x3c0 virtual false final false
 void Insert(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType nvalue, bool add) ;

/// @brief Method putEntry addr 0x241b47c size 0xb0 virtual false final false
 void putEntry(::ArrayW<System::Collections::System__Collections__Hashtable__bucket> newBuckets, ::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType nvalue, int32_t hashcode) ;

/// @brief Method Remove addr 0x241b964 size 0x1e8 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method get_SyncRoot addr 0x241bb4c size 0x78 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Count addr 0x241bbc4 size 0x8 virtual true final false
 int32_t get_Count() ;

/// @brief Method Synchronized addr 0x241bbcc size 0xb4 virtual false final false
static System::Collections::Hashtable Synchronized(System::Collections::Hashtable table) ;

/// @brief Method GetObjectData addr 0x241bca8 size 0x53c virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x241c1e4 size 0x864 virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::SyncHashtable
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3783))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3780))
// CS Name: System.Collections.Hashtable::SyncHashtable
class CORDL_TYPE System__Collections__Hashtable__SyncHashtable : public System::Collections::Hashtable {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~System__Collections__Hashtable__SyncHashtable() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__SyncHashtable", modifiers: " const&", def_value: None }]
constexpr System__Collections__Hashtable__SyncHashtable(System__Collections__Hashtable__SyncHashtable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__SyncHashtable", modifiers: "&&", def_value: None }]
constexpr System__Collections__Hashtable__SyncHashtable(System__Collections__Hashtable__SyncHashtable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Hashtable__SyncHashtable(void* ptr) noexcept : System::Collections::Hashtable(ptr) {
}


  constexpr System__Collections__Hashtable__SyncHashtable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Hashtable__SyncHashtable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Hashtable__SyncHashtable& operator=(System__Collections__Hashtable__SyncHashtable&& o) noexcept = default;
  constexpr System__Collections__Hashtable__SyncHashtable& operator=(System__Collections__Hashtable__SyncHashtable const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get__table, put=__set__table))  _table;

constexpr void __set__table(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__table() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 System::Collections::ICollection __declspec(property(get=get_Values))  Values;


// Methods

// Ctor Parameters [CppParam { name: "table", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit System__Collections__Hashtable__SyncHashtable(System::Collections::Hashtable table) ;

/// @brief Method .ctor addr 0x241bc80 size 0x28 virtual false final false
 void _ctor(System::Collections::Hashtable table) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit System__Collections__Hashtable__SyncHashtable(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x241cf74 size 0x44 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x241cfb8 size 0x40 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Count addr 0x241cff8 size 0x24 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x241d01c size 0x24 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x241d040 size 0x24 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x241d064 size 0x8 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_Item addr 0x241d06c size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x241d090 size 0x100 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_SyncRoot addr 0x241d190 size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method Add addr 0x241d1b4 size 0x100 virtual true final false
 void Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Clear addr 0x241d2b4 size 0xf0 virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x241d3a4 size 0x24 virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method ContainsKey addr 0x241d3c8 size 0x90 virtual true final false
 bool ContainsKey(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method CopyTo addr 0x241d458 size 0x100 virtual true final false
 void CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method Clone addr 0x241d558 size 0x164 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x241d6bc size 0x24 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x241d6e0 size 0x24 virtual true final false
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method get_Keys addr 0x241d704 size 0x100 virtual true final false
 System::Collections::ICollection get_Keys() ;

/// @brief Method get_Values addr 0x241d804 size 0x100 virtual true final false
 System::Collections::ICollection get_Values() ;

/// @brief Method Remove addr 0x241d904 size 0xf8 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method OnDeserialization addr 0x241d9fc size 0x4 virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::HashtableEnumerator
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3781))
// CS Name: System.Collections.Hashtable::HashtableEnumerator
class CORDL_TYPE System__Collections__Hashtable__HashtableEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr operator  System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Collections__Hashtable__HashtableEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__HashtableEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Collections__Hashtable__HashtableEnumerator(System__Collections__Hashtable__HashtableEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__HashtableEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Collections__Hashtable__HashtableEnumerator(System__Collections__Hashtable__HashtableEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Hashtable__HashtableEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Hashtable__HashtableEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Hashtable__HashtableEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Hashtable__HashtableEnumerator& operator=(System__Collections__Hashtable__HashtableEnumerator&& o) noexcept = default;
  constexpr System__Collections__Hashtable__HashtableEnumerator& operator=(System__Collections__Hashtable__HashtableEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get__hashtable, put=__set__hashtable))  _hashtable;

constexpr void __set__hashtable(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__hashtable() const;

 int32_t __declspec(property(get=__get__bucket, put=__set__bucket))  _bucket;

constexpr void __set__bucket(int32_t value) ;

constexpr int32_t __get__bucket() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 bool __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(bool value) ;

constexpr bool __get__current() const;

 int32_t __declspec(property(get=__get__getObjectRetType, put=__set__getObjectRetType))  _getObjectRetType;

constexpr void __set__getObjectRetType(int32_t value) ;

constexpr int32_t __get__getObjectRetType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__currentKey, put=__set__currentKey))  _currentKey;

constexpr void __set__currentKey(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__currentKey() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__currentValue, put=__set__currentValue))  _currentValue;

constexpr void __set__currentValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__currentValue() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "hashtable", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "getObjRetType", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__Collections__Hashtable__HashtableEnumerator(System::Collections::Hashtable hashtable, int32_t getObjRetType) ;

/// @brief Method .ctor addr 0x241b590 size 0x58 virtual false final false
 void _ctor(System::Collections::Hashtable hashtable, int32_t getObjRetType) ;

/// @brief Method Clone addr 0x241da00 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_Key addr 0x241da08 size 0x64 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method MoveNext addr 0x241da6c size 0x134 virtual true final false
 bool MoveNext() ;

/// @brief Method get_Entry addr 0x241dba0 size 0x68 virtual true final false
 System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Current addr 0x241dc08 size 0xd4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method get_Value addr 0x241dcdc size 0x64 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method Reset addr 0x241dd40 size 0xa4 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::HashtableDebugView
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3782))
// CS Name: System.Collections.Hashtable::HashtableDebugView
class CORDL_TYPE System__Collections__Hashtable__HashtableDebugView : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Collections__Hashtable__HashtableDebugView() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__HashtableDebugView", modifiers: " const&", def_value: None }]
constexpr System__Collections__Hashtable__HashtableDebugView(System__Collections__Hashtable__HashtableDebugView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Hashtable__HashtableDebugView", modifiers: "&&", def_value: None }]
constexpr System__Collections__Hashtable__HashtableDebugView(System__Collections__Hashtable__HashtableDebugView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Hashtable__HashtableDebugView(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Hashtable__HashtableDebugView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Hashtable__HashtableDebugView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Hashtable__HashtableDebugView& operator=(System__Collections__Hashtable__HashtableDebugView&& o) noexcept = default;
  constexpr System__Collections__Hashtable__HashtableDebugView& operator=(System__Collections__Hashtable__HashtableDebugView const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::Hashtable);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Hashtable, "System.Collections", "Hashtable");
NEED_NO_BOX(System::Collections::System__Collections__Hashtable__HashtableDebugView);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__Hashtable__HashtableDebugView, "System.Collections", "Hashtable/HashtableDebugView");
NEED_NO_BOX(System::Collections::System__Collections__Hashtable__HashtableEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__Hashtable__HashtableEnumerator, "System.Collections", "Hashtable/HashtableEnumerator");
NEED_NO_BOX(System::Collections::System__Collections__Hashtable__KeyCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__Hashtable__KeyCollection, "System.Collections", "Hashtable/KeyCollection");
NEED_NO_BOX(System::Collections::System__Collections__Hashtable__SyncHashtable);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__Hashtable__SyncHashtable, "System.Collections", "Hashtable/SyncHashtable");
NEED_NO_BOX(System::Collections::System__Collections__Hashtable__ValueCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__Hashtable__ValueCollection, "System.Collections", "Hashtable/ValueCollection");
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__Hashtable__bucket, "System.Collections", "Hashtable/bucket");

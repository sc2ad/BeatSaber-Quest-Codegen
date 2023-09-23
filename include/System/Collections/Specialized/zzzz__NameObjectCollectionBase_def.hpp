#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Array;
}
namespace System {
class StringComparer;
}
namespace System {
class DBNull;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEqualityComparer;
}
// Forward declare root types
namespace System::Collections::Specialized {
class NameObjectCollectionBase;
}
namespace System::Collections::Specialized {
class System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry;
}
namespace System::Collections::Specialized {
class System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator;
}
// Type: ::NameObjectEntry
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8371))
// CS Name: System.Collections.Specialized.NameObjectCollectionBase::NameObjectEntry
class CORDL_TYPE System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry", modifiers: " const&", def_value: None }]
constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry(System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry", modifiers: "&&", def_value: None }]
constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry(System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry& operator=(System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry&& o) noexcept = default;
  constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry& operator=(System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Key, put=__set_Key))  Key;

constexpr void __set_Key(::StringW value) ;

constexpr ::StringW __get_Key() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Value() const;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry(::StringW name, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method .ctor addr 0x27ae670 size 0x2c virtual false final false
 void _ctor(::StringW name, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
// Type: ::NameObjectKeysEnumerator
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8372))
// CS Name: System.Collections.Specialized.NameObjectCollectionBase::NameObjectKeysEnumerator
class CORDL_TYPE System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator(System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator(System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator& operator=(System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator&& o) noexcept = default;
  constexpr System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator& operator=(System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__pos, put=__set__pos))  _pos;

constexpr void __set__pos(int32_t value) ;

constexpr int32_t __get__pos() const;

 System::Collections::Specialized::NameObjectCollectionBase __declspec(property(get=__get__coll, put=__set__coll))  _coll;

constexpr void __set__coll(System::Collections::Specialized::NameObjectCollectionBase value) ;

constexpr System::Collections::Specialized::NameObjectCollectionBase __get__coll() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "coll", ty: "System::Collections::Specialized::NameObjectCollectionBase", modifiers: "", def_value: None }]
explicit System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator(System::Collections::Specialized::NameObjectCollectionBase coll) ;

/// @brief Method .ctor addr 0x27ae6fc size 0x40 virtual false final false
 void _ctor(System::Collections::Specialized::NameObjectCollectionBase coll) ;

/// @brief Method MoveNext addr 0x27aeba8 size 0xe0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x27aec88 size 0x90 virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x27aed18 size 0xa8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
// Type: System.Collections.Specialized::NameObjectCollectionBase
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8373))
// CS Name: System.Collections.Specialized.NameObjectCollectionBase
class CORDL_TYPE NameObjectCollectionBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NameObjectKeysEnumerator = System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator;

using NameObjectEntry = System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~NameObjectCollectionBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase", modifiers: " const&", def_value: None }]
constexpr NameObjectCollectionBase(NameObjectCollectionBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase", modifiers: "&&", def_value: None }]
constexpr NameObjectCollectionBase(NameObjectCollectionBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameObjectCollectionBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NameObjectCollectionBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameObjectCollectionBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameObjectCollectionBase& operator=(NameObjectCollectionBase&& o) noexcept = default;
  constexpr NameObjectCollectionBase& operator=(NameObjectCollectionBase const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__readOnly, put=__set__readOnly))  _readOnly;

constexpr void __set__readOnly(bool value) ;

constexpr bool __get__readOnly() const;

 System::Collections::ArrayList __declspec(property(get=__get__entriesArray, put=__set__entriesArray))  _entriesArray;

constexpr void __set__entriesArray(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__entriesArray() const;

 System::Collections::IEqualityComparer __declspec(property(get=__get__keyComparer, put=__set__keyComparer))  _keyComparer;

constexpr void __set__keyComparer(System::Collections::IEqualityComparer value) ;

constexpr System::Collections::IEqualityComparer __get__keyComparer() const;

 System::Collections::Hashtable __declspec(property(get=__get__entriesTable, put=__set__entriesTable))  _entriesTable;

constexpr void __set__entriesTable(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__entriesTable() const;

 System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry __declspec(property(get=__get__nullKeyEntry, put=__set__nullKeyEntry))  _nullKeyEntry;

constexpr void __set__nullKeyEntry(System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry value) ;

constexpr System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry __get__nullKeyEntry() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__serializationInfo, put=__set__serializationInfo))  _serializationInfo;

constexpr void __set__serializationInfo(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get__serializationInfo() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;

static System::StringComparer __declspec(property(get=__get_defaultComparer, put=__set_defaultComparer))  defaultComparer;

static void __set_defaultComparer(System::StringComparer value) ;

static System::StringComparer __get_defaultComparer() ;


// Properties

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 int32_t __declspec(property(get=get_Count))  Count;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;


// Methods

// Ctor Parameters []
explicit NameObjectCollectionBase() ;

/// @brief Method .ctor addr 0x27aa1d0 size 0x60 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
explicit NameObjectCollectionBase(System::Collections::IEqualityComparer equalityComparer) ;

/// @brief Method .ctor addr 0x27ad468 size 0x80 virtual false final false
 void _ctor(System::Collections::IEqualityComparer equalityComparer) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
explicit NameObjectCollectionBase(int32_t capacity, System::Collections::IEqualityComparer equalityComparer) ;

/// @brief Method .ctor addr 0x27aa3b8 size 0x2c virtual false final false
 void _ctor(int32_t capacity, System::Collections::IEqualityComparer equalityComparer) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit NameObjectCollectionBase(int32_t capacity) ;

/// @brief Method .ctor addr 0x27aa294 size 0xb0 virtual false final false
 void _ctor(int32_t capacity) ;

// Ctor Parameters [CppParam { name: "dummy", ty: "System::DBNull", modifiers: "", def_value: None }]
explicit NameObjectCollectionBase(System::DBNull dummy) ;

/// @brief Method .ctor addr 0x27ab12c size 0x8 virtual false final false
 void _ctor(System::DBNull dummy) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit NameObjectCollectionBase(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27aa450 size 0x28 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x27ad664 size 0x580 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialization addr 0x27adda0 size 0x768 virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Reset addr 0x27ad4e8 size 0xb8 virtual false final false
 void Reset() ;

/// @brief Method Reset addr 0x27ad5a0 size 0xc4 virtual false final false
 void Reset(int32_t capacity) ;

/// @brief Method FindEntry addr 0x27ae5b0 size 0xb8 virtual false final false
 System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry FindEntry(::StringW key) ;

/// @brief Method get_IsReadOnly addr 0x27ae668 size 0x8 virtual false final false
 bool get_IsReadOnly() ;

/// @brief Method BaseAdd addr 0x27aa844 size 0x164 virtual false final false
 void BaseAdd(::StringW name, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method BaseRemove addr 0x27aac64 size 0x20c virtual false final false
 void BaseRemove(::StringW name) ;

/// @brief Method BaseGet addr 0x27aa82c size 0x18 virtual false final false
 ::bs_hook::Il2CppWrapperType BaseGet(::StringW name) ;

/// @brief Method BaseSet addr 0x27aabac size 0xb0 virtual false final false
 void BaseSet(::StringW name, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method BaseGet addr 0x27aaf14 size 0x9c virtual false final false
 ::bs_hook::Il2CppWrapperType BaseGet(int32_t index) ;

/// @brief Method BaseGetKey addr 0x27ab038 size 0x9c virtual false final false
 ::StringW BaseGetKey(int32_t index) ;

/// @brief Method GetEnumerator addr 0x27ae69c size 0x60 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_Count addr 0x27ae73c size 0x24 virtual true final false
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x27ae760 size 0x31c virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x27aea7c size 0x7c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x27aeaf8 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
NEED_NO_BOX(System::Collections::Specialized::NameObjectCollectionBase);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::NameObjectCollectionBase, "System.Collections.Specialized", "NameObjectCollectionBase");
NEED_NO_BOX(System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectEntry, "System.Collections.Specialized", "NameObjectCollectionBase/NameObjectEntry");
NEED_NO_BOX(System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::System__Collections__Specialized__NameObjectCollectionBase__NameObjectKeysEnumerator, "System.Collections.Specialized", "NameObjectCollectionBase/NameObjectKeysEnumerator");

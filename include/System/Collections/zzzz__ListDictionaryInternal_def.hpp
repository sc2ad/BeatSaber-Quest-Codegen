#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class System__Collections__ListDictionaryInternal__DictionaryNode;
}
namespace System::Collections {
class System__Collections__ListDictionaryInternal__NodeEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
namespace System::Collections {
class System__Collections__ListDictionaryInternal__NodeKeyValueCollection;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace GlobalNamespace {
class System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
class System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator;
}
namespace System::Collections {
class ListDictionaryInternal;
}
namespace System::Collections {
class System__Collections__ListDictionaryInternal__DictionaryNode;
}
namespace System::Collections {
class System__Collections__ListDictionaryInternal__NodeEnumerator;
}
namespace System::Collections {
class System__Collections__ListDictionaryInternal__NodeKeyValueCollection;
}
// Type: ::NodeEnumerator
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3750))
// CS Name: System.Collections.ListDictionaryInternal::NodeEnumerator
class CORDL_TYPE System__Collections__ListDictionaryInternal__NodeEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr operator  System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Collections__ListDictionaryInternal__NodeEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ListDictionaryInternal__NodeEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Collections__ListDictionaryInternal__NodeEnumerator(System__Collections__ListDictionaryInternal__NodeEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ListDictionaryInternal__NodeEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Collections__ListDictionaryInternal__NodeEnumerator(System__Collections__ListDictionaryInternal__NodeEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__ListDictionaryInternal__NodeEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__ListDictionaryInternal__NodeEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__ListDictionaryInternal__NodeEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__ListDictionaryInternal__NodeEnumerator& operator=(System__Collections__ListDictionaryInternal__NodeEnumerator&& o) noexcept = default;
  constexpr System__Collections__ListDictionaryInternal__NodeEnumerator& operator=(System__Collections__ListDictionaryInternal__NodeEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::ListDictionaryInternal __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::ListDictionaryInternal value) ;

constexpr System::Collections::ListDictionaryInternal __get_list() const;

 System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode value) ;

constexpr System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode __get_current() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 bool __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(bool value) ;

constexpr bool __get_start() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

static System::Collections::System__Collections__ListDictionaryInternal__NodeEnumerator New_ctor(System::Collections::ListDictionaryInternal list) ;

/// @brief Method .ctor addr 0x240f49c size 0x44 virtual false final false
 void _ctor(System::Collections::ListDictionaryInternal list) ;

/// @brief Method get_Current addr 0x240f640 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method get_Entry addr 0x240f6a4 size 0x64 virtual true final true
 System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key addr 0x240f708 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Value addr 0x240f76c size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method MoveNext addr 0x240f7d0 size 0xa0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x240f870 size 0x80 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::NodeKeyValueEnumerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3751))
// CS Name: System.Collections.ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator
class CORDL_TYPE System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator(System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator(System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator& operator=(System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator&& o) noexcept = default;
  constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator& operator=(System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::ListDictionaryInternal __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::ListDictionaryInternal value) ;

constexpr System::Collections::ListDictionaryInternal __get_list() const;

 System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode value) ;

constexpr System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode __get_current() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 bool __declspec(property(get=__get_isKeys, put=__set_isKeys))  isKeys;

constexpr void __set_isKeys(bool value) ;

constexpr bool __get_isKeys() const;

 bool __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(bool value) ;

constexpr bool __get_start() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

static GlobalNamespace::System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator New_ctor(System::Collections::ListDictionaryInternal list, bool isKeys) ;

/// @brief Method .ctor addr 0x240fb8c size 0x4c virtual false final false
 void _ctor(System::Collections::ListDictionaryInternal list, bool isKeys) ;

/// @brief Method get_Current addr 0x240fbd8 size 0x78 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x240fc50 size 0xa0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x240fcf0 size 0x80 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NodeKeyValueCollection
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3752))
// CS Name: System.Collections.ListDictionaryInternal::NodeKeyValueCollection
class CORDL_TYPE System__Collections__ListDictionaryInternal__NodeKeyValueCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NodeKeyValueEnumerator = GlobalNamespace::System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Collections__ListDictionaryInternal__NodeKeyValueCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ListDictionaryInternal__NodeKeyValueCollection", modifiers: " const&", def_value: None }]
constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection(System__Collections__ListDictionaryInternal__NodeKeyValueCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ListDictionaryInternal__NodeKeyValueCollection", modifiers: "&&", def_value: None }]
constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection(System__Collections__ListDictionaryInternal__NodeKeyValueCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__ListDictionaryInternal__NodeKeyValueCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection& operator=(System__Collections__ListDictionaryInternal__NodeKeyValueCollection&& o) noexcept = default;
  constexpr System__Collections__ListDictionaryInternal__NodeKeyValueCollection& operator=(System__Collections__ListDictionaryInternal__NodeKeyValueCollection const& o) noexcept = default;
                


// Fields

 System::Collections::ListDictionaryInternal __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::ListDictionaryInternal value) ;

constexpr System::Collections::ListDictionaryInternal __get_list() const;

 bool __declspec(property(get=__get_isKeys, put=__set_isKeys))  isKeys;

constexpr void __set_isKeys(bool value) ;

constexpr bool __get_isKeys() const;


// Properties

 int32_t __declspec(property(get=System_Collections_ICollection_get_Count))  System_Collections_ICollection_Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

static System::Collections::System__Collections__ListDictionaryInternal__NodeKeyValueCollection New_ctor(System::Collections::ListDictionaryInternal list, bool isKeys) ;

/// @brief Method .ctor addr 0x240eebc size 0x30 virtual false final false
 void _ctor(System::Collections::ListDictionaryInternal list, bool isKeys) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x240f8f0 size 0x1cc virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x240fabc size 0x38 virtual true final true
 int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x240faf4 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x240fafc size 0x18 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x240fb14 size 0x78 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::DictionaryNode
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3753))
// CS Name: System.Collections.ListDictionaryInternal::DictionaryNode
class CORDL_TYPE System__Collections__ListDictionaryInternal__DictionaryNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Collections__ListDictionaryInternal__DictionaryNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ListDictionaryInternal__DictionaryNode", modifiers: " const&", def_value: None }]
constexpr System__Collections__ListDictionaryInternal__DictionaryNode(System__Collections__ListDictionaryInternal__DictionaryNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ListDictionaryInternal__DictionaryNode", modifiers: "&&", def_value: None }]
constexpr System__Collections__ListDictionaryInternal__DictionaryNode(System__Collections__ListDictionaryInternal__DictionaryNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__ListDictionaryInternal__DictionaryNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__ListDictionaryInternal__DictionaryNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__ListDictionaryInternal__DictionaryNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__ListDictionaryInternal__DictionaryNode& operator=(System__Collections__ListDictionaryInternal__DictionaryNode&& o) noexcept = default;
  constexpr System__Collections__ListDictionaryInternal__DictionaryNode& operator=(System__Collections__ListDictionaryInternal__DictionaryNode const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_key() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_value() const;

 System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode value) ;

constexpr System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode __get_next() const;


// Methods

static System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode New_ctor() ;

/// @brief Method .ctor addr 0x240ee40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: System.Collections::ListDictionaryInternal
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3754))
// CS Name: System.Collections.ListDictionaryInternal
class CORDL_TYPE ListDictionaryInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DictionaryNode = System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode;

using NodeKeyValueCollection = System::Collections::System__Collections__ListDictionaryInternal__NodeKeyValueCollection;

using NodeEnumerator = System::Collections::System__Collections__ListDictionaryInternal__NodeEnumerator;

/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ListDictionaryInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal", modifiers: " const&", def_value: None }]
constexpr ListDictionaryInternal(ListDictionaryInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal", modifiers: "&&", def_value: None }]
constexpr ListDictionaryInternal(ListDictionaryInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListDictionaryInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ListDictionaryInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListDictionaryInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListDictionaryInternal& operator=(ListDictionaryInternal&& o) noexcept = default;
  constexpr ListDictionaryInternal& operator=(ListDictionaryInternal const& o) noexcept = default;
                


// Fields

 System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode value) ;

constexpr System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode __get_head() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 System::Collections::ICollection __declspec(property(get=get_Values))  Values;


// Methods

static System::Collections::ListDictionaryInternal New_ctor() ;

/// @brief Method .ctor addr 0x240ec38 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Item addr 0x240ec40 size 0xb8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x240ecf8 size 0x148 virtual true final true
 void set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Count addr 0x240ee48 size 0x8 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Keys addr 0x240ee50 size 0x6c virtual true final true
 System::Collections::ICollection get_Keys() ;

/// @brief Method get_IsReadOnly addr 0x240eeec size 0x8 virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method get_IsFixedSize addr 0x240eef4 size 0x8 virtual true final true
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x240eefc size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x240ef04 size 0x78 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Values addr 0x240ef7c size 0x68 virtual true final true
 System::Collections::ICollection get_Values() ;

/// @brief Method Add addr 0x240efe4 size 0x1a4 virtual true final true
 void Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Clear addr 0x240f188 size 0x14 virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x240f19c size 0xb8 virtual true final true
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method CopyTo addr 0x240f254 size 0x1e8 virtual true final true
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x240f43c size 0x60 virtual true final true
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x240f4e0 size 0x60 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Remove addr 0x240f540 size 0x100 virtual true final true
 void Remove(::bs_hook::Il2CppWrapperType key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(GlobalNamespace::System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Collections__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator, "System.Collections", "ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator");
NEED_NO_BOX(System::Collections::ListDictionaryInternal);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ListDictionaryInternal, "System.Collections", "ListDictionaryInternal");
NEED_NO_BOX(System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__ListDictionaryInternal__DictionaryNode, "System.Collections", "ListDictionaryInternal/DictionaryNode");
NEED_NO_BOX(System::Collections::System__Collections__ListDictionaryInternal__NodeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__ListDictionaryInternal__NodeEnumerator, "System.Collections", "ListDictionaryInternal/NodeEnumerator");
NEED_NO_BOX(System::Collections::System__Collections__ListDictionaryInternal__NodeKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__ListDictionaryInternal__NodeKeyValueCollection, "System.Collections", "ListDictionaryInternal/NodeKeyValueCollection");

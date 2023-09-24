#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class System__Collections__ArrayList__ArrayListDebugView;
}
namespace System {
class Type;
}
namespace System {
class Array;
}
namespace System::Collections {
class System__Collections__ArrayList__ReadOnlyArrayList;
}
namespace System::Collections {
class System__Collections__ArrayList__IListWrapper;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class ICloneable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class System__Collections__ArrayList__ArrayListEnumeratorSimple;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class System__Collections__ArrayList__ArrayListDebugView;
}
namespace System::Collections {
class System__Collections__ArrayList__ArrayListEnumeratorSimple;
}
// Type: ::ArrayListEnumeratorSimple
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3774))
// CS Name: System.Collections.ArrayList::ArrayListEnumeratorSimple
class CORDL_TYPE System__Collections__ArrayList__ArrayListEnumeratorSimple : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Collections__ArrayList__ArrayListEnumeratorSimple() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ArrayList__ArrayListEnumeratorSimple", modifiers: " const&", def_value: None }]
constexpr System__Collections__ArrayList__ArrayListEnumeratorSimple(System__Collections__ArrayList__ArrayListEnumeratorSimple const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ArrayList__ArrayListEnumeratorSimple", modifiers: "&&", def_value: None }]
constexpr System__Collections__ArrayList__ArrayListEnumeratorSimple(System__Collections__ArrayList__ArrayListEnumeratorSimple&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__ArrayList__ArrayListEnumeratorSimple(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__ArrayList__ArrayListEnumeratorSimple& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__ArrayList__ArrayListEnumeratorSimple& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__ArrayList__ArrayListEnumeratorSimple& operator=(System__Collections__ArrayList__ArrayListEnumeratorSimple&& o) noexcept = default;
  constexpr System__Collections__ArrayList__ArrayListEnumeratorSimple& operator=(System__Collections__ArrayList__ArrayListEnumeratorSimple const& o) noexcept = default;
                


// Fields

 System::Collections::ArrayList __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__list() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__currentElement, put=__set__currentElement))  _currentElement;

constexpr void __set__currentElement(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__currentElement() const;

 bool __declspec(property(get=__get__isArrayList, put=__set__isArrayList))  _isArrayList;

constexpr void __set__isArrayList(bool value) ;

constexpr bool __get__isArrayList() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_dummyObject, put=__set_s_dummyObject))  s_dummyObject;

static void __set_s_dummyObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_dummyObject() ;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

static System::Collections::System__Collections__ArrayList__ArrayListEnumeratorSimple New_ctor(System::Collections::ArrayList list) ;

/// @brief Method .ctor addr 0x241684c size 0x108 virtual false final false
 void _ctor(System::Collections::ArrayList list) ;

/// @brief Method Clone addr 0x2419a44 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method MoveNext addr 0x2419a4c size 0x1d0 virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x2419c1c size 0xd4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method Reset addr 0x2419cf0 size 0xd0 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: ::ArrayListDebugView
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3775))
// CS Name: System.Collections.ArrayList::ArrayListDebugView
class CORDL_TYPE System__Collections__ArrayList__ArrayListDebugView : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Collections__ArrayList__ArrayListDebugView() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ArrayList__ArrayListDebugView", modifiers: " const&", def_value: None }]
constexpr System__Collections__ArrayList__ArrayListDebugView(System__Collections__ArrayList__ArrayListDebugView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Collections__ArrayList__ArrayListDebugView", modifiers: "&&", def_value: None }]
constexpr System__Collections__ArrayList__ArrayListDebugView(System__Collections__ArrayList__ArrayListDebugView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Collections__ArrayList__ArrayListDebugView(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Collections__ArrayList__ArrayListDebugView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Collections__ArrayList__ArrayListDebugView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Collections__ArrayList__ArrayListDebugView& operator=(System__Collections__ArrayList__ArrayListDebugView&& o) noexcept = default;
  constexpr System__Collections__ArrayList__ArrayListDebugView& operator=(System__Collections__ArrayList__ArrayListDebugView const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
// Type: System.Collections::ArrayList
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3776))
// CS Name: System.Collections.ArrayList
class CORDL_TYPE ArrayList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ArrayListDebugView = System::Collections::System__Collections__ArrayList__ArrayListDebugView;

using ArrayListEnumeratorSimple = System::Collections::System__Collections__ArrayList__ArrayListEnumeratorSimple;

using ReadOnlyArrayList = System::Collections::System__Collections__ArrayList__ReadOnlyArrayList;

using IListWrapper = System::Collections::System__Collections__ArrayList__IListWrapper;

/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ArrayList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayList", modifiers: " const&", def_value: None }]
constexpr ArrayList(ArrayList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayList", modifiers: "&&", def_value: None }]
constexpr ArrayList(ArrayList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayList& operator=(ArrayList&& o) noexcept = default;
  constexpr ArrayList& operator=(ArrayList const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__items() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncRoot, put=__set__syncRoot))  _syncRoot;

constexpr void __set__syncRoot(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncRoot() const;


// Properties

 int32_t __declspec(property(put=set_Capacity))  Capacity;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

static System::Collections::ArrayList New_ctor() ;

/// @brief Method .ctor addr 0x24104c8 size 0x90 virtual false final false
 void _ctor() ;

static System::Collections::ArrayList New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x2415c68 size 0x144 virtual false final false
 void _ctor(int32_t capacity) ;

static System::Collections::ArrayList New_ctor(System::Collections::ICollection c) ;

/// @brief Method .ctor addr 0x2415dac size 0x1b0 virtual false final false
 void _ctor(System::Collections::ICollection c) ;

/// @brief Method set_Capacity addr 0x2415f5c size 0x118 virtual true final false
 void set_Capacity(int32_t value) ;

/// @brief Method get_Count addr 0x2416074 size 0x8 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsFixedSize addr 0x241607c size 0x8 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x2416084 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized addr 0x241608c size 0x8 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x2416094 size 0x78 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Item addr 0x241610c size 0xa8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x24161b4 size 0xec virtual true final false
 void set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Adapter addr 0x24162a0 size 0xb4 virtual false final false
static System::Collections::ArrayList Adapter(System::Collections::IList list) ;

/// @brief Method Add addr 0x241637c size 0xa8 virtual true final false
 int32_t Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method AddRange addr 0x2416480 size 0x1c virtual true final false
 void AddRange(System::Collections::ICollection c) ;

/// @brief Method Clear addr 0x241649c size 0x3c virtual true final false
 void Clear() ;

/// @brief Method Clone addr 0x24164d8 size 0x88 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Contains addr 0x2416560 size 0xc0 virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType item) ;

/// @brief Method CopyTo addr 0x2416620 size 0x14 virtual true final false
 void CopyTo(System::Array array) ;

/// @brief Method CopyTo addr 0x2416634 size 0xb0 virtual true final false
 void CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method CopyTo addr 0x24166e4 size 0x108 virtual true final false
 void CopyTo(int32_t index, System::Array array, int32_t arrayIndex, int32_t count) ;

/// @brief Method EnsureCapacity addr 0x2416424 size 0x5c virtual false final false
 void EnsureCapacity(int32_t min) ;

/// @brief Method GetEnumerator addr 0x24167ec size 0x60 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method IndexOf addr 0x2416954 size 0x18 virtual true final false
 int32_t IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Insert addr 0x241696c size 0x134 virtual true final false
 void Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method InsertRange addr 0x2416aa0 size 0x264 virtual true final false
 void InsertRange(int32_t index, System::Collections::ICollection c) ;

/// @brief Method ReadOnly addr 0x2416d04 size 0xb0 virtual false final false
static System::Collections::ArrayList ReadOnly(System::Collections::ArrayList list) ;

/// @brief Method Remove addr 0x2416dd8 size 0x40 virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method RemoveAt addr 0x2416e18 size 0xe4 virtual true final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveRange addr 0x2416efc size 0x168 virtual true final false
 void RemoveRange(int32_t index, int32_t count) ;

/// @brief Method Reverse addr 0x2417064 size 0x38 virtual true final false
 void Reverse() ;

/// @brief Method Reverse addr 0x241709c size 0x144 virtual true final false
 void Reverse(int32_t index, int32_t count) ;

/// @brief Method Sort addr 0x24171e0 size 0x4c virtual true final false
 void Sort(System::Collections::IComparer comparer) ;

/// @brief Method Sort addr 0x241722c size 0x104 virtual true final false
 void Sort(int32_t index, int32_t count, System::Collections::IComparer comparer) ;

/// @brief Method ToArray addr 0x2417330 size 0xd0 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> ToArray() ;

/// @brief Method ToArray addr 0x2417400 size 0xf4 virtual true final false
 System::Array ToArray(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::ArrayList);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ArrayList, "System.Collections", "ArrayList");
NEED_NO_BOX(System::Collections::System__Collections__ArrayList__ArrayListDebugView);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__ArrayList__ArrayListDebugView, "System.Collections", "ArrayList/ArrayListDebugView");
NEED_NO_BOX(System::Collections::System__Collections__ArrayList__ArrayListEnumeratorSimple);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::System__Collections__ArrayList__ArrayListEnumeratorSimple, "System.Collections", "ArrayList/ArrayListEnumeratorSimple");

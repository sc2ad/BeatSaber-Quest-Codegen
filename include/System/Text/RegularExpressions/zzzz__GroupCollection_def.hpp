#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Text::RegularExpressions {
class Group;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class GroupCollection;
}
namespace System::Text::RegularExpressions {
class System__Text__RegularExpressions__GroupCollection__Enumerator;
}
// Type: ::Enumerator
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7755))
// CS Name: System.Text.RegularExpressions.GroupCollection::Enumerator
class CORDL_TYPE System__Text__RegularExpressions__GroupCollection__Enumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Text::RegularExpressions::Group>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Text::RegularExpressions::Group>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Text__RegularExpressions__GroupCollection__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__RegularExpressions__GroupCollection__Enumerator", modifiers: " const&", def_value: None }]
constexpr System__Text__RegularExpressions__GroupCollection__Enumerator(System__Text__RegularExpressions__GroupCollection__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__RegularExpressions__GroupCollection__Enumerator", modifiers: "&&", def_value: None }]
constexpr System__Text__RegularExpressions__GroupCollection__Enumerator(System__Text__RegularExpressions__GroupCollection__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__RegularExpressions__GroupCollection__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Text__RegularExpressions__GroupCollection__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__RegularExpressions__GroupCollection__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__RegularExpressions__GroupCollection__Enumerator& operator=(System__Text__RegularExpressions__GroupCollection__Enumerator&& o) noexcept = default;
  constexpr System__Text__RegularExpressions__GroupCollection__Enumerator& operator=(System__Text__RegularExpressions__GroupCollection__Enumerator const& o) noexcept = default;
                


// Fields

 System::Text::RegularExpressions::GroupCollection __declspec(property(get=__get__collection, put=__set__collection))  _collection;

constexpr void __set__collection(System::Text::RegularExpressions::GroupCollection value) ;

constexpr System::Text::RegularExpressions::GroupCollection __get__collection() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 System::Text::RegularExpressions::Group __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "collection", ty: "System::Text::RegularExpressions::GroupCollection", modifiers: "", def_value: None }]
explicit System__Text__RegularExpressions__GroupCollection__Enumerator(System::Text::RegularExpressions::GroupCollection collection) ;

/// @brief Method .ctor addr 0x27bd054 size 0x30 virtual false final false
 void _ctor(System::Text::RegularExpressions::GroupCollection collection) ;

/// @brief Method MoveNext addr 0x27bddc8 size 0x44 virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x27bde0c size 0x90 virtual true final true
 System::Text::RegularExpressions::Group get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27bde9c size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x27bdea0 size 0xc virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.IDisposable.Dispose addr 0x27bdeac size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
// Type: System.Text.RegularExpressions::GroupCollection
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7756))
// CS Name: System.Text.RegularExpressions.GroupCollection
class CORDL_TYPE GroupCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = System::Text::RegularExpressions::System__Text__RegularExpressions__GroupCollection__Enumerator;

/// @brief Convert operator to System::Collections::Generic::IList_1<System::Text::RegularExpressions::Group>
constexpr operator  System::Collections::Generic::IList_1<System::Text::RegularExpressions::Group>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Text::RegularExpressions::Group>
constexpr operator  System::Collections::Generic::ICollection_1<System::Text::RegularExpressions::Group>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Text::RegularExpressions::Group>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Text::RegularExpressions::Group>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<System::Text::RegularExpressions::Group>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<System::Text::RegularExpressions::Group>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::Text::RegularExpressions::Group>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<System::Text::RegularExpressions::Group>() const noexcept;

/// @brief Convert operator to System::Collections::IList
constexpr operator  System::Collections::IList() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GroupCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupCollection", modifiers: " const&", def_value: None }]
constexpr GroupCollection(GroupCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupCollection", modifiers: "&&", def_value: None }]
constexpr GroupCollection(GroupCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GroupCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupCollection& operator=(GroupCollection&& o) noexcept = default;
  constexpr GroupCollection& operator=(GroupCollection const& o) noexcept = default;
                


// Fields

 System::Text::RegularExpressions::Match __declspec(property(get=__get__match, put=__set__match))  _match;

constexpr void __set__match(System::Text::RegularExpressions::Match value) ;

constexpr System::Text::RegularExpressions::Match __get__match() const;

 System::Collections::Hashtable __declspec(property(get=__get__captureMap, put=__set__captureMap))  _captureMap;

constexpr void __set__captureMap(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__captureMap() const;

 ::ArrayW<System::Text::RegularExpressions::Group> __declspec(property(get=__get__groups, put=__set__groups))  _groups;

constexpr void __set__groups(::ArrayW<System::Text::RegularExpressions::Group> value) ;

constexpr ::ArrayW<System::Text::RegularExpressions::Group> __get__groups() const;


// Properties

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Text::RegularExpressions::Group __declspec(property(get=get_Item))  Item;

 System::Text::RegularExpressions::Group __declspec(property(get=get_Item))  Item;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 System::Text::RegularExpressions::Group __declspec(property(get=System_Collections_Generic_IList_System_Text_RegularExpressions_Group__get_Item, put=System_Collections_Generic_IList_System_Text_RegularExpressions_Group__set_Item))  System_Collections_Generic_IList_System_Text_RegularExpressions_Group__Item;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;


// Methods

// Ctor Parameters [CppParam { name: "match", ty: "System::Text::RegularExpressions::Match", modifiers: "", def_value: None }, CppParam { name: "caps", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit GroupCollection(System::Text::RegularExpressions::Match match, System::Collections::Hashtable caps) ;

/// @brief Method .ctor addr 0x27bccac size 0x2c virtual false final false
 void _ctor(System::Text::RegularExpressions::Match match, System::Collections::Hashtable caps) ;

/// @brief Method get_IsReadOnly addr 0x27bccd8 size 0x8 virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method get_Count addr 0x27bcce0 size 0x24 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x27bcd04 size 0x4 virtual true final true
 System::Text::RegularExpressions::Group get_Item(int32_t groupnum) ;

/// @brief Method get_Item addr 0x27bce0c size 0x90 virtual false final false
 System::Text::RegularExpressions::Group get_Item(::StringW groupname) ;

/// @brief Method GetEnumerator addr 0x27bcfe8 size 0x6c virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Group>.GetEnumerator addr 0x27bd084 size 0x6c virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Text::RegularExpressions::Group> System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Group__GetEnumerator() ;

/// @brief Method GetGroup addr 0x27bcd08 size 0x104 virtual false final false
 System::Text::RegularExpressions::Group GetGroup(int32_t groupnum) ;

/// @brief Method GetGroupImpl addr 0x27bd0f0 size 0x1e0 virtual false final false
 System::Text::RegularExpressions::Group GetGroupImpl(int32_t groupnum) ;

/// @brief Method get_IsSynchronized addr 0x27bd418 size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x27bd420 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method CopyTo addr 0x27bd428 size 0xc0 virtual true final true
 void CopyTo(System::Array array, int32_t arrayIndex) ;

/// @brief Method CopyTo addr 0x27bd4e8 size 0x184 virtual true final true
 void CopyTo(::ArrayW<System::Text::RegularExpressions::Group> array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.IndexOf addr 0x27bd66c size 0xb8 virtual true final true
 int32_t System_Collections_Generic_IList_System_Text_RegularExpressions_Group__IndexOf(System::Text::RegularExpressions::Group item) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.Insert addr 0x27bd724 size 0x50 virtual true final true
 void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__Insert(int32_t index, System::Text::RegularExpressions::Group item) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.RemoveAt addr 0x27bd774 size 0x50 virtual true final true
 void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__RemoveAt(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.get_Item addr 0x27bd7c4 size 0x4 virtual true final true
 System::Text::RegularExpressions::Group System_Collections_Generic_IList_System_Text_RegularExpressions_Group__get_Item(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.set_Item addr 0x27bd7c8 size 0x50 virtual true final true
 void System_Collections_Generic_IList_System_Text_RegularExpressions_Group__set_Item(int32_t index, System::Text::RegularExpressions::Group value) ;

/// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Add addr 0x27bd818 size 0x50 virtual true final true
 void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Add(System::Text::RegularExpressions::Group item) ;

/// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Clear addr 0x27bd868 size 0x50 virtual true final true
 void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Contains addr 0x27bd8b8 size 0xb4 virtual true final true
 bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Contains(System::Text::RegularExpressions::Group item) ;

/// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Remove addr 0x27bd96c size 0x50 virtual true final true
 bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Group__Remove(System::Text::RegularExpressions::Group item) ;

/// @brief Method System.Collections.IList.Add addr 0x27bd9bc size 0x50 virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Clear addr 0x27bda0c size 0x50 virtual true final true
 void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.Contains addr 0x27bda5c size 0xf4 virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x27bdb50 size 0xf4 virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Insert addr 0x27bdc44 size 0x50 virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x27bdc94 size 0x8 virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.Remove addr 0x27bdc9c size 0x50 virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.RemoveAt addr 0x27bdcec size 0x50 virtual true final true
 void System_Collections_IList_RemoveAt(int32_t index) ;

/// @brief Method System.Collections.IList.get_Item addr 0x27bdd3c size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x27bdd40 size 0x50 virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

// Ctor Parameters []
explicit GroupCollection() ;

/// @brief Method .ctor addr 0x27bdd90 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::GroupCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::GroupCollection, "System.Text.RegularExpressions", "GroupCollection");
NEED_NO_BOX(System::Text::RegularExpressions::System__Text__RegularExpressions__GroupCollection__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::System__Text__RegularExpressions__GroupCollection__Enumerator, "System.Text.RegularExpressions", "GroupCollection/Enumerator");

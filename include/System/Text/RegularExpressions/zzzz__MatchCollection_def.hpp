#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text::RegularExpressions {
class Match;
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
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class MatchCollection;
}
namespace System::Text::RegularExpressions {
class ____System__Text__RegularExpressions__MatchCollection__Enumerator;
}
// Type: ::Enumerator
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7759))
// CS Name: System.Text.RegularExpressions.MatchCollection::Enumerator
class CORDL_TYPE ____System__Text__RegularExpressions__MatchCollection__Enumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____System__Text__RegularExpressions__MatchCollection__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__RegularExpressions__MatchCollection__Enumerator", modifiers: " const&", def_value: None }]
constexpr ____System__Text__RegularExpressions__MatchCollection__Enumerator(____System__Text__RegularExpressions__MatchCollection__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__RegularExpressions__MatchCollection__Enumerator", modifiers: "&&", def_value: None }]
constexpr ____System__Text__RegularExpressions__MatchCollection__Enumerator(____System__Text__RegularExpressions__MatchCollection__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Text__RegularExpressions__MatchCollection__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Text__RegularExpressions__MatchCollection__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Text__RegularExpressions__MatchCollection__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Text__RegularExpressions__MatchCollection__Enumerator& operator=(____System__Text__RegularExpressions__MatchCollection__Enumerator&& o) noexcept = default;
  constexpr ____System__Text__RegularExpressions__MatchCollection__Enumerator& operator=(____System__Text__RegularExpressions__MatchCollection__Enumerator const& o) noexcept = default;
                


// Fields

 ::System::Text::RegularExpressions::MatchCollection __declspec(property(get=__get__collection, put=__set__collection))  _collection;

constexpr void __set__collection(::System::Text::RegularExpressions::MatchCollection value) ;

constexpr ::System::Text::RegularExpressions::MatchCollection __get__collection() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 ::System::Text::RegularExpressions::Match __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Text::RegularExpressions::MatchCollection", modifiers: "", def_value: None }]
explicit ____System__Text__RegularExpressions__MatchCollection__Enumerator(::System::Text::RegularExpressions::MatchCollection collection) ;

/// @brief Method .ctor addr 0x27bf1e4 size 0x30 virtual false final false
 void _ctor(::System::Text::RegularExpressions::MatchCollection collection) ;

/// @brief Method MoveNext addr 0x27bfab4 size 0x50 virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x27bfb04 size 0x6c virtual true final true
 ::System::Text::RegularExpressions::Match get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27bfb70 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x27bfb74 size 0xc virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.IDisposable.Dispose addr 0x27bfb80 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
// Type: System.Text.RegularExpressions::MatchCollection
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7760))
// CS Name: System.Text.RegularExpressions.MatchCollection
class CORDL_TYPE MatchCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Text::RegularExpressions::____System__Text__RegularExpressions__MatchCollection__Enumerator;

/// @brief Convert operator to ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Match>
constexpr operator  ::System::Collections::Generic::IList_1<::System::Text::RegularExpressions::Match>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Match>
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Text::RegularExpressions::Match>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Match>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Text::RegularExpressions::Match>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Match>
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::System::Text::RegularExpressions::Match>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Match>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::Text::RegularExpressions::Match>() const noexcept;

/// @brief Convert operator to ::System::Collections::IList
constexpr operator  ::System::Collections::IList() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MatchCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchCollection", modifiers: " const&", def_value: None }]
constexpr MatchCollection(MatchCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchCollection", modifiers: "&&", def_value: None }]
constexpr MatchCollection(MatchCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MatchCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchCollection& operator=(MatchCollection&& o) noexcept = default;
  constexpr MatchCollection& operator=(MatchCollection const& o) noexcept = default;
                


// Fields

 ::System::Text::RegularExpressions::Regex __declspec(property(get=__get__regex, put=__set__regex))  _regex;

constexpr void __set__regex(::System::Text::RegularExpressions::Regex value) ;

constexpr ::System::Text::RegularExpressions::Regex __get__regex() const;

 ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Match> __declspec(property(get=__get__matches, put=__set__matches))  _matches;

constexpr void __set__matches(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Match> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Match> __get__matches() const;

 bool __declspec(property(get=__get__done, put=__set__done))  _done;

constexpr void __set__done(bool value) ;

constexpr bool __get__done() const;

 ::StringW __declspec(property(get=__get__input, put=__set__input))  _input;

constexpr void __set__input(::StringW value) ;

constexpr ::StringW __get__input() const;

 int32_t __declspec(property(get=__get__beginning, put=__set__beginning))  _beginning;

constexpr void __set__beginning(int32_t value) ;

constexpr int32_t __get__beginning() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;

 int32_t __declspec(property(get=__get__startat, put=__set__startat))  _startat;

constexpr void __set__startat(int32_t value) ;

constexpr int32_t __get__startat() const;

 int32_t __declspec(property(get=__get__prevlen, put=__set__prevlen))  _prevlen;

constexpr void __set__prevlen(int32_t value) ;

constexpr int32_t __get__prevlen() const;


// Properties

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 int32_t __declspec(property(get=get_Count))  Count;

 ::System::Text::RegularExpressions::Match __declspec(property(get=get_Item))  Item;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 ::System::Text::RegularExpressions::Match __declspec(property(get=System_Collections_Generic_IList_System_Text_RegularExpressions_Match__get_Item, put=System_Collections_Generic_IList_System_Text_RegularExpressions_Match__set_Item))  System_Collections_Generic_IList_System_Text_RegularExpressions_Match__Item;

 bool __declspec(property(get=System_Collections_IList_get_IsFixedSize))  System_Collections_IList_IsFixedSize;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item))  System_Collections_IList_Item;


// Methods

// Ctor Parameters [CppParam { name: "regex", ty: "::System::Text::RegularExpressions::Regex", modifiers: "", def_value: None }, CppParam { name: "input", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beginning", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startat", ty: "int32_t", modifiers: "", def_value: None }]
explicit MatchCollection(::System::Text::RegularExpressions::Regex regex, ::StringW input, int32_t beginning, int32_t length, int32_t startat) ;

/// @brief Method .ctor addr 0x27bee00 size 0x130 virtual false final false
 void _ctor(::System::Text::RegularExpressions::Regex regex, ::StringW input, int32_t beginning, int32_t length, int32_t startat) ;

/// @brief Method get_IsReadOnly addr 0x27bef30 size 0x8 virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method get_Count addr 0x27bef38 size 0x5c virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x27befa8 size 0x64 virtual true final false
 ::System::Text::RegularExpressions::Match get_Item(int32_t i) ;

/// @brief Method GetEnumerator addr 0x27bf178 size 0x6c virtual true final true
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Match>.GetEnumerator addr 0x27bf214 size 0x6c virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match> System_Collections_Generic_IEnumerable_System_Text_RegularExpressions_Match__GetEnumerator() ;

/// @brief Method GetMatch addr 0x27bf00c size 0x16c virtual false final false
 ::System::Text::RegularExpressions::Match GetMatch(int32_t i) ;

/// @brief Method EnsureInitialized addr 0x27bef94 size 0x14 virtual false final false
 void EnsureInitialized() ;

/// @brief Method get_IsSynchronized addr 0x27bf280 size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x27bf288 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method CopyTo addr 0x27bf28c size 0xcc virtual true final true
 void CopyTo(::System::Array array, int32_t arrayIndex) ;

/// @brief Method CopyTo addr 0x27bf358 size 0x7c virtual true final true
 void CopyTo(::ArrayW<::System::Text::RegularExpressions::Match> array, int32_t arrayIndex) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.IndexOf addr 0x27bf3d4 size 0x6c virtual true final true
 int32_t System_Collections_Generic_IList_System_Text_RegularExpressions_Match__IndexOf(::System::Text::RegularExpressions::Match item) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.Insert addr 0x27bf440 size 0x50 virtual true final true
 void System_Collections_Generic_IList_System_Text_RegularExpressions_Match__Insert(int32_t index, ::System::Text::RegularExpressions::Match item) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.RemoveAt addr 0x27bf490 size 0x50 virtual true final true
 void System_Collections_Generic_IList_System_Text_RegularExpressions_Match__RemoveAt(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.get_Item addr 0x27bf4e0 size 0x10 virtual true final true
 ::System::Text::RegularExpressions::Match System_Collections_Generic_IList_System_Text_RegularExpressions_Match__get_Item(int32_t index) ;

/// @brief Method System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.set_Item addr 0x27bf4f0 size 0x50 virtual true final true
 void System_Collections_Generic_IList_System_Text_RegularExpressions_Match__set_Item(int32_t index, ::System::Text::RegularExpressions::Match value) ;

/// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Add addr 0x27bf540 size 0x50 virtual true final true
 void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Match__Add(::System::Text::RegularExpressions::Match item) ;

/// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Clear addr 0x27bf590 size 0x50 virtual true final true
 void System_Collections_Generic_ICollection_System_Text_RegularExpressions_Match__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Contains addr 0x27bf5e0 size 0x6c virtual true final true
 bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Match__Contains(::System::Text::RegularExpressions::Match item) ;

/// @brief Method System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Remove addr 0x27bf64c size 0x50 virtual true final true
 bool System_Collections_Generic_ICollection_System_Text_RegularExpressions_Match__Remove(::System::Text::RegularExpressions::Match item) ;

/// @brief Method System.Collections.IList.Add addr 0x27bf69c size 0x50 virtual true final true
 int32_t System_Collections_IList_Add(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Clear addr 0x27bf6ec size 0x50 virtual true final true
 void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.Contains addr 0x27bf73c size 0xf4 virtual true final true
 bool System_Collections_IList_Contains(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.IndexOf addr 0x27bf830 size 0xf4 virtual true final true
 int32_t System_Collections_IList_IndexOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.Insert addr 0x27bf924 size 0x50 virtual true final true
 void System_Collections_IList_Insert(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.get_IsFixedSize addr 0x27bf974 size 0x8 virtual true final true
 bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.Remove addr 0x27bf97c size 0x50 virtual true final true
 void System_Collections_IList_Remove(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method System.Collections.IList.RemoveAt addr 0x27bf9cc size 0x50 virtual true final true
 void System_Collections_IList_RemoveAt(int32_t index) ;

/// @brief Method System.Collections.IList.get_Item addr 0x27bfa1c size 0x10 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IList_get_Item(int32_t index) ;

/// @brief Method System.Collections.IList.set_Item addr 0x27bfa2c size 0x50 virtual true final true
 void System_Collections_IList_set_Item(int32_t index, ::bs_hook::Il2CppWrapperType value) ;

// Ctor Parameters []
explicit MatchCollection() ;

/// @brief Method .ctor addr 0x27bfa7c size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
} // end anonymous namespace
NEED_NO_BOX(::System::Text::RegularExpressions::MatchCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::MatchCollection, "System.Text.RegularExpressions", "MatchCollection");
NEED_NO_BOX(::System::Text::RegularExpressions::____System__Text__RegularExpressions__MatchCollection__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::____System__Text__RegularExpressions__MatchCollection__Enumerator, "System.Text.RegularExpressions", "MatchCollection/Enumerator");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
class GlobalNamespace__ProfanityFilter__TrieNode;
}
namespace GlobalNamespace {
class GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ProfanityFilter__TrieNode;
}
namespace GlobalNamespace {
class GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4;
}
namespace GlobalNamespace {
class ProfanityFilter;
}
// Type: ::TrieNode
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12870))
// CS Name: ProfanityFilter::TrieNode
class CORDL_TYPE GlobalNamespace__ProfanityFilter__TrieNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__ProfanityFilter__TrieNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ProfanityFilter__TrieNode", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ProfanityFilter__TrieNode(GlobalNamespace__ProfanityFilter__TrieNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ProfanityFilter__TrieNode", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ProfanityFilter__TrieNode(GlobalNamespace__ProfanityFilter__TrieNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ProfanityFilter__TrieNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ProfanityFilter__TrieNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ProfanityFilter__TrieNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ProfanityFilter__TrieNode& operator=(GlobalNamespace__ProfanityFilter__TrieNode&& o) noexcept = default;
  constexpr GlobalNamespace__ProfanityFilter__TrieNode& operator=(GlobalNamespace__ProfanityFilter__TrieNode const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<char16_t,GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode> __declspec(property(get=__get__children, put=__set__children))  _children;

constexpr void __set__children(System::Collections::Generic::Dictionary_2<char16_t,GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode> value) ;

constexpr System::Collections::Generic::Dictionary_2<char16_t,GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode> __get__children() const;

 int32_t __declspec(property(get=__get__shortestWord, put=__set__shortestWord))  _shortestWord;

constexpr void __set__shortestWord(int32_t value) ;

constexpr int32_t __get__shortestWord() const;


// Methods

/// @brief Method AddWord addr 0xdc689c size 0x4c4 virtual false final false
 void AddWord(::StringW word, int32_t index) ;

/// @brief Method IsMatch addr 0xdc6dc8 size 0x178 virtual false final false
 bool IsMatch(::StringW word, int32_t index) ;

static GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode New_ctor() ;

/// @brief Method .ctor addr 0xdc688c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetLookalikeLetters>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12871))
// CS Name: ProfanityFilter::<GetLookalikeLetters>d__4
class CORDL_TYPE GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<char16_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<char16_t>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<char16_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<char16_t>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4(GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4(GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4& operator=(GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4&& o) noexcept = default;
  constexpr GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4& operator=(GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 char16_t __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(char16_t value) ;

constexpr char16_t __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 char16_t __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(char16_t value) ;

constexpr char16_t __get_c() const;

 char16_t __declspec(property(get=__get___3__c, put=__set___3__c))  __3__c;

constexpr void __set___3__c(char16_t value) ;

constexpr char16_t __get___3__c() const;


// Properties

 char16_t __declspec(property(get=System_Collections_Generic_IEnumerator_System_Char__get_Current))  System_Collections_Generic_IEnumerator_System_Char__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0xdc6fb8 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0xdc7058 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0xdc705c size 0xa4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Char>.get_Current addr 0xdc7100 size 0x8 virtual true final true
 char16_t System_Collections_Generic_IEnumerator_System_Char__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0xdc7108 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0xdc7148 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator addr 0xdc71a4 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<char16_t> System_Collections_Generic_IEnumerable_System_Char__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0xdc7248 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ProfanityFilter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12872))
// CS Name: ProfanityFilter
class CORDL_TYPE ProfanityFilter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetLookalikeLetters_d__4 = GlobalNamespace::GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4;

using TrieNode = GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ProfanityFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter", modifiers: " const&", def_value: None }]
constexpr ProfanityFilter(ProfanityFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter", modifiers: "&&", def_value: None }]
constexpr ProfanityFilter(ProfanityFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProfanityFilter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProfanityFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProfanityFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProfanityFilter& operator=(ProfanityFilter&& o) noexcept = default;
  constexpr ProfanityFilter& operator=(ProfanityFilter const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode __declspec(property(get=__get__trie, put=__set__trie))  _trie;

constexpr void __set__trie(GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode value) ;

constexpr GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode __get__trie() const;


// Methods

static GlobalNamespace::ProfanityFilter New_ctor(System::Collections::Generic::IEnumerable_1<::StringW> wordList) ;

/// @brief Method .ctor addr 0xdc654c size 0x340 virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<::StringW> wordList) ;

/// @brief Method IsProfane addr 0xdc6d60 size 0x68 virtual false final false
 bool IsProfane(::StringW word) ;

/// @brief Method GetLookalikeLetters addr 0xdc6f40 size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<char16_t> GetLookalikeLetters(char16_t c) ;

/// @brief Method GetLeetEquivalent addr 0xdc6fec size 0x6c virtual false final false
static char16_t GetLeetEquivalent(char16_t c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ProfanityFilter__TrieNode, "", "ProfanityFilter/TrieNode");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ProfanityFilter___GetLookalikeLetters_d__4, "", "ProfanityFilter/<GetLookalikeLetters>d__4");
NEED_NO_BOX(GlobalNamespace::ProfanityFilter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ProfanityFilter, "", "ProfanityFilter");

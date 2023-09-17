#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace System {
struct StringComparison;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class StringHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
class ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9;
}
namespace UnityEngine::InputSystem::Utilities {
class ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8;
}
// Type: ::<Tokenize>d__8
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6789))
// CS Name: UnityEngine.InputSystem.Utilities.StringHelpers::<Tokenize>d__8
class CORDL_TYPE ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8(____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8(____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8& operator=(____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8& operator=(____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::InputSystem::Utilities::Substring __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::InputSystem::Utilities::Substring value) ;

constexpr ::UnityEngine::InputSystem::Utilities::Substring __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;

 ::StringW __declspec(property(get=__get___3__str, put=__set___3__str))  __3__str;

constexpr void __set___3__str(::StringW value) ;

constexpr ::StringW __get___3__str() const;

 int32_t __declspec(property(get=__get__length_5__2, put=__set__length_5__2))  _length_5__2;

constexpr void __set__length_5__2(int32_t value) ;

constexpr int32_t __get__length_5__2() const;

 int32_t __declspec(property(get=__get__endPos_5__3, put=__set__endPos_5__3))  _endPos_5__3;

constexpr void __set__endPos_5__3(int32_t value) ;

constexpr int32_t __get__endPos_5__3() const;


// Properties

 ::UnityEngine::InputSystem::Utilities::Substring __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8(int32_t __1__state) ;

/// @brief Method .ctor addr 0x29858f0 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x29863f0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x29863f4 size 0x290 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.Substring>.get_Current addr 0x2986684 size 0xc virtual true final true
 ::UnityEngine::InputSystem::Utilities::Substring System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2986690 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x29866d0 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.Substring>.GetEnumerator addr 0x298672c size 0xa4 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring> System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_Substring__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x29867d0 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::<Split>d__9
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6790))
// CS Name: UnityEngine.InputSystem.Utilities.StringHelpers::<Split>d__9
class CORDL_TYPE ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::StringW>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::StringW>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9(____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9(____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9& operator=(____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9& operator=(____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::StringW __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::StringW value) ;

constexpr ::StringW __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;

 ::StringW __declspec(property(get=__get___3__str, put=__set___3__str))  __3__str;

constexpr void __set___3__str(::StringW value) ;

constexpr ::StringW __get___3__str() const;

 ::System::Func_2<char16_t,bool> __declspec(property(get=__get_predicate, put=__set_predicate))  predicate;

constexpr void __set_predicate(::System::Func_2<char16_t,bool> value) ;

constexpr ::System::Func_2<char16_t,bool> __get_predicate() const;

 ::System::Func_2<char16_t,bool> __declspec(property(get=__get___3__predicate, put=__set___3__predicate))  __3__predicate;

constexpr void __set___3__predicate(::System::Func_2<char16_t,bool> value) ;

constexpr ::System::Func_2<char16_t,bool> __get___3__predicate() const;

 int32_t __declspec(property(get=__get__length_5__2, put=__set__length_5__2))  _length_5__2;

constexpr void __set__length_5__2(int32_t value) ;

constexpr int32_t __get__length_5__2() const;

 int32_t __declspec(property(get=__get__position_5__3, put=__set__position_5__3))  _position_5__3;

constexpr void __set__position_5__3(int32_t value) ;

constexpr int32_t __get__position_5__3() const;


// Properties

 ::StringW __declspec(property(get=System_Collections_Generic_IEnumerator_System_String__get_Current))  System_Collections_Generic_IEnumerator_System_String__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9(int32_t __1__state) ;

/// @brief Method .ctor addr 0x29859ac size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x29867d4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x29867d8 size 0x128 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current addr 0x2986900 size 0x8 virtual true final true
 ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2986908 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2986948 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator addr 0x2986950 size 0xac virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::StringW> System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x29869fc size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::StringHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6791))
// CS Name: UnityEngine.InputSystem.Utilities.StringHelpers
class CORDL_TYPE StringHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Split_d__9 = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9;

using _Tokenize_d__8 = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StringHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringHelpers", modifiers: " const&", def_value: None }]
constexpr StringHelpers(StringHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringHelpers", modifiers: "&&", def_value: None }]
constexpr StringHelpers(StringHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringHelpers& operator=(StringHelpers&& o) noexcept = default;
  constexpr StringHelpers& operator=(StringHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method Escape addr 0x2985114 size 0x16c virtual false final false
static ::StringW Escape(::StringW str, ::StringW chars, ::StringW replacements) ;

/// @brief Method Unescape addr 0x2985280 size 0x15c virtual false final false
static ::StringW Unescape(::StringW str, ::StringW chars, ::StringW replacements) ;

/// @brief Method Contains addr 0x29853dc size 0x20 virtual false final false
static bool Contains(::StringW str, char16_t ch) ;

/// @brief Method Contains addr 0x29853fc size 0x20 virtual false final false
static bool Contains(::StringW str, ::StringW text, ::System::StringComparison comparison) ;

/// @brief Method GetPlural addr 0x298541c size 0x1a8 virtual false final false
static ::StringW GetPlural(::StringW str) ;

/// @brief Method NicifyMemorySize addr 0x29855c4 size 0x130 virtual false final false
static ::StringW NicifyMemorySize(int64_t numBytes) ;

/// @brief Method FromNicifiedMemorySize addr 0x29856f4 size 0x184 virtual false final false
static bool FromNicifiedMemorySize(::StringW text, ByRef<int64_t> result, int64_t defaultMultiplier) ;

/// @brief Method CountOccurrences addr 0x29824f4 size 0x70 virtual false final false
static int32_t CountOccurrences(::StringW str, char16_t ch) ;

/// @brief Method Tokenize addr 0x2985878 size 0x78 virtual false final false
static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring> Tokenize(::StringW str) ;

/// @brief Method Split addr 0x2985924 size 0x88 virtual false final false
static ::System::Collections::Generic::IEnumerable_1<::StringW> Split(::StringW str, ::System::Func_2<char16_t,bool> predicate) ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::StringW Join(::StringW separator, ::ArrayW<TValue> values) ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static ::StringW Join(::System::Collections::Generic::IEnumerable_1<TValue> values, ::StringW separator) ;

/// @brief Method MakeUniqueName addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TExisting>
static ::StringW MakeUniqueName(::StringW baseName, ::System::Collections::Generic::IEnumerable_1<TExisting> existingSet, ::System::Func_2<TExisting,::StringW> getNameFunc) ;

/// @brief Method CharacterSeparatedListsHaveAtLeastOneCommonElement addr 0x29859e0 size 0x29c virtual false final false
static bool CharacterSeparatedListsHaveAtLeastOneCommonElement(::StringW firstList, ::StringW secondList, char16_t separator) ;

/// @brief Method ParseInt addr 0x2985c7c size 0x84 virtual false final false
static int32_t ParseInt(::StringW str, int32_t pos) ;

/// @brief Method WriteStringToBuffer addr 0x2985d00 size 0x1c virtual false final false
static bool WriteStringToBuffer(::StringW text, ::cordl_internals::intptr_t buffer, int32_t bufferSizeInCharacters) ;

/// @brief Method WriteStringToBuffer addr 0x2985d1c size 0x1f0 virtual false final false
static bool WriteStringToBuffer(::StringW text, ::cordl_internals::intptr_t buffer, int32_t bufferSizeInCharacters, ByRef<uint32_t> offset) ;

/// @brief Method ReadStringFromBuffer addr 0x2985f0c size 0x18 virtual false final false
static ::StringW ReadStringFromBuffer(::cordl_internals::intptr_t buffer, int32_t bufferSize) ;

/// @brief Method ReadStringFromBuffer addr 0x2985f24 size 0x13c virtual false final false
static ::StringW ReadStringFromBuffer(::cordl_internals::intptr_t buffer, int32_t bufferSize, ByRef<uint32_t> offset) ;

/// @brief Method IsPrintable addr 0x2986060 size 0x8c virtual false final false
static bool IsPrintable(char16_t ch) ;

/// @brief Method WithAllWhitespaceStripped addr 0x29860ec size 0xf0 virtual false final false
static ::StringW WithAllWhitespaceStripped(::StringW str) ;

/// @brief Method InvariantEqualsIgnoreCase addr 0x29861dc size 0x4c virtual false final false
static bool InvariantEqualsIgnoreCase(::StringW left, ::StringW right) ;

/// @brief Method ExpandTemplateString addr 0x2986228 size 0x1c8 virtual false final false
static ::StringW ExpandTemplateString(::StringW template, ::System::Func_2<::StringW,::StringW> mapFunc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::StringHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::StringHelpers, "UnityEngine.InputSystem.Utilities", "StringHelpers");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__StringHelpers___Split_d__9, "UnityEngine.InputSystem.Utilities", "StringHelpers/<Split>d__9");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__StringHelpers___Tokenize_d__8, "UnityEngine.InputSystem.Utilities", "StringHelpers/<Tokenize>d__8");

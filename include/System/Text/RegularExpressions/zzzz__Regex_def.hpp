#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
struct TimeSpan;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Text::RegularExpressions {
class RegexRunnerFactory;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System {
template<typename T>
class WeakReference_1;
}
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class MatchCollection;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text::RegularExpressions {
class ExclusiveReference;
}
namespace System::Text::RegularExpressions {
class RegexCode;
}
namespace System::Text::RegularExpressions {
class RegexReplacement;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Text::RegularExpressions {
class System__Text__RegularExpressions__Regex__CachedCodeEntry;
}
namespace System::Text::RegularExpressions {
struct System__Text__RegularExpressions__Regex__CachedCodeEntryKey;
}
// Type: ::CachedCodeEntryKey
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7762))
// CS Name: System.Text.RegularExpressions.Regex::CachedCodeEntryKey
struct CORDL_TYPE System__Text__RegularExpressions__Regex__CachedCodeEntryKey : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey>
constexpr operator  System::IEquatable_1<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey>() const;

// Ctor Parameters [CppParam { name: "_options", ty: "System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }, CppParam { name: "_cultureKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_pattern", ty: "::StringW", modifiers: "", def_value: None }]
constexpr System__Text__RegularExpressions__Regex__CachedCodeEntryKey(System::Text::RegularExpressions::RegexOptions _options, ::StringW _cultureKey, ::StringW _pattern) noexcept;


                    constexpr System__Text__RegularExpressions__Regex__CachedCodeEntryKey(System__Text__RegularExpressions__Regex__CachedCodeEntryKey const&) = default;
                    constexpr System__Text__RegularExpressions__Regex__CachedCodeEntryKey(System__Text__RegularExpressions__Regex__CachedCodeEntryKey&&) = default;
                    constexpr System__Text__RegularExpressions__Regex__CachedCodeEntryKey& operator=(System__Text__RegularExpressions__Regex__CachedCodeEntryKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Text__RegularExpressions__Regex__CachedCodeEntryKey& operator=(System__Text__RegularExpressions__Regex__CachedCodeEntryKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Text__RegularExpressions__Regex__CachedCodeEntryKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Text::RegularExpressions::RegexOptions __declspec(property(get=__get__options, put=__set__options))  _options;

constexpr void __set__options(System::Text::RegularExpressions::RegexOptions value) ;

constexpr System::Text::RegularExpressions::RegexOptions __get__options() const;

 ::StringW __declspec(property(get=__get__cultureKey, put=__set__cultureKey))  _cultureKey;

constexpr void __set__cultureKey(::StringW value) ;

constexpr ::StringW __get__cultureKey() const;

 ::StringW __declspec(property(get=__get__pattern, put=__set__pattern))  _pattern;

constexpr void __set__pattern(::StringW value) ;

constexpr ::StringW __get__pattern() const;


// Methods

/// @brief Method .ctor addr 0x27c1920 size 0xc virtual false final false
 void _ctor(System::Text::RegularExpressions::RegexOptions options, ::StringW cultureKey, ::StringW pattern) ;

/// @brief Method Equals addr 0x27c1a58 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x27c1ae8 size 0x68 virtual true final true
 bool Equals(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey other) ;

/// @brief Method op_Equality addr 0x27bfd98 size 0x30 virtual false final false
static bool op_Equality(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey left, System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey right) ;

/// @brief Method GetHashCode addr 0x27c1b50 size 0x58 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
// Type: ::CachedCodeEntry
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7763))
// CS Name: System.Text.RegularExpressions.Regex::CachedCodeEntry
class CORDL_TYPE System__Text__RegularExpressions__Regex__CachedCodeEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~System__Text__RegularExpressions__Regex__CachedCodeEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__RegularExpressions__Regex__CachedCodeEntry", modifiers: " const&", def_value: None }]
constexpr System__Text__RegularExpressions__Regex__CachedCodeEntry(System__Text__RegularExpressions__Regex__CachedCodeEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__RegularExpressions__Regex__CachedCodeEntry", modifiers: "&&", def_value: None }]
constexpr System__Text__RegularExpressions__Regex__CachedCodeEntry(System__Text__RegularExpressions__Regex__CachedCodeEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__RegularExpressions__Regex__CachedCodeEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Text__RegularExpressions__Regex__CachedCodeEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__RegularExpressions__Regex__CachedCodeEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__RegularExpressions__Regex__CachedCodeEntry& operator=(System__Text__RegularExpressions__Regex__CachedCodeEntry&& o) noexcept = default;
  constexpr System__Text__RegularExpressions__Regex__CachedCodeEntry& operator=(System__Text__RegularExpressions__Regex__CachedCodeEntry const& o) noexcept = default;
                


// Fields

 System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry value) ;

constexpr System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry __get_Next() const;

 System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry __declspec(property(get=__get_Previous, put=__set_Previous))  Previous;

constexpr void __set_Previous(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry value) ;

constexpr System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry __get_Previous() const;

 System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey __declspec(property(get=__get_Key, put=__set_Key))  Key;

constexpr void __set_Key(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey value) ;

constexpr System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey __get_Key() const;

 System::Text::RegularExpressions::RegexCode __declspec(property(get=__get_Code, put=__set_Code))  Code;

constexpr void __set_Code(System::Text::RegularExpressions::RegexCode value) ;

constexpr System::Text::RegularExpressions::RegexCode __get_Code() const;

 System::Collections::Hashtable __declspec(property(get=__get_Caps, put=__set_Caps))  Caps;

constexpr void __set_Caps(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_Caps() const;

 System::Collections::Hashtable __declspec(property(get=__get_Capnames, put=__set_Capnames))  Capnames;

constexpr void __set_Capnames(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_Capnames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_Capslist, put=__set_Capslist))  Capslist;

constexpr void __set_Capslist(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_Capslist() const;

 int32_t __declspec(property(get=__get_Capsize, put=__set_Capsize))  Capsize;

constexpr void __set_Capsize(int32_t value) ;

constexpr int32_t __get_Capsize() const;

 System::Text::RegularExpressions::ExclusiveReference __declspec(property(get=__get_Runnerref, put=__set_Runnerref))  Runnerref;

constexpr void __set_Runnerref(System::Text::RegularExpressions::ExclusiveReference value) ;

constexpr System::Text::RegularExpressions::ExclusiveReference __get_Runnerref() const;

 System::WeakReference_1<System::Text::RegularExpressions::RegexReplacement> __declspec(property(get=__get_ReplRef, put=__set_ReplRef))  ReplRef;

constexpr void __set_ReplRef(System::WeakReference_1<System::Text::RegularExpressions::RegexReplacement> value) ;

constexpr System::WeakReference_1<System::Text::RegularExpressions::RegexReplacement> __get_ReplRef() const;


// Methods

// Ctor Parameters [CppParam { name: "key", ty: "System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey", modifiers: "", def_value: None }, CppParam { name: "capnames", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "capslist", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "code", ty: "System::Text::RegularExpressions::RegexCode", modifiers: "", def_value: None }, CppParam { name: "caps", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "capsize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "runner", ty: "System::Text::RegularExpressions::ExclusiveReference", modifiers: "", def_value: None }, CppParam { name: "replref", ty: "System::WeakReference_1<System::Text::RegularExpressions::RegexReplacement>", modifiers: "", def_value: None }]
explicit System__Text__RegularExpressions__Regex__CachedCodeEntry(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey key, System::Collections::Hashtable capnames, ::ArrayW<::StringW> capslist, System::Text::RegularExpressions::RegexCode code, System::Collections::Hashtable caps, int32_t capsize, System::Text::RegularExpressions::ExclusiveReference runner, System::WeakReference_1<System::Text::RegularExpressions::RegexReplacement> replref) ;

/// @brief Method .ctor addr 0x27c051c size 0x78 virtual false final false
 void _ctor(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey key, System::Collections::Hashtable capnames, ::ArrayW<::StringW> capslist, System::Text::RegularExpressions::RegexCode code, System::Collections::Hashtable caps, int32_t capsize, System::Text::RegularExpressions::ExclusiveReference runner, System::WeakReference_1<System::Text::RegularExpressions::RegexReplacement> replref) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
// Type: System.Text.RegularExpressions::Regex
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7764))
// CS Name: System.Text.RegularExpressions.Regex
class CORDL_TYPE Regex : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CachedCodeEntry = System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry;

using CachedCodeEntryKey = System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~Regex() = default;

// Ctor Parameters [CppParam { name: "", ty: "Regex", modifiers: " const&", def_value: None }]
constexpr Regex(Regex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Regex", modifiers: "&&", def_value: None }]
constexpr Regex(Regex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Regex(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Regex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Regex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Regex& operator=(Regex&& o) noexcept = default;
  constexpr Regex& operator=(Regex const& o) noexcept = default;
                


// Fields

/// @brief Field CacheDictionarySwitchLimit offset 0
static constexpr int32_t  CacheDictionarySwitchLimit{10};

static int32_t __declspec(property(get=__get_s_cacheSize, put=__set_s_cacheSize))  s_cacheSize;

static void __set_s_cacheSize(int32_t value) ;

static int32_t __get_s_cacheSize() ;

static System::Collections::Generic::Dictionary_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry> __declspec(property(get=__get_s_cache, put=__set_s_cache))  s_cache;

static void __set_s_cache(System::Collections::Generic::Dictionary_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry> value) ;

static System::Collections::Generic::Dictionary_2<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey,System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry> __get_s_cache() ;

static int32_t __declspec(property(get=__get_s_cacheCount, put=__set_s_cacheCount))  s_cacheCount;

static void __set_s_cacheCount(int32_t value) ;

static int32_t __get_s_cacheCount() ;

static System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry __declspec(property(get=__get_s_cacheFirst, put=__set_s_cacheFirst))  s_cacheFirst;

static void __set_s_cacheFirst(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry value) ;

static System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry __get_s_cacheFirst() ;

static System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry __declspec(property(get=__get_s_cacheLast, put=__set_s_cacheLast))  s_cacheLast;

static void __set_s_cacheLast(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry value) ;

static System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry __get_s_cacheLast() ;

static System::TimeSpan __declspec(property(get=__get_s_maximumMatchTimeout, put=__set_s_maximumMatchTimeout))  s_maximumMatchTimeout;

static void __set_s_maximumMatchTimeout(System::TimeSpan value) ;

static System::TimeSpan __get_s_maximumMatchTimeout() ;

/// @brief Field DefaultMatchTimeout_ConfigKeyName offset 0
static constexpr ::ConstString  DefaultMatchTimeout_ConfigKeyName{u"REGEX_DEFAULT_MATCH_TIMEOUT"};

static System::TimeSpan __declspec(property(get=__get_s_defaultMatchTimeout, put=__set_s_defaultMatchTimeout))  s_defaultMatchTimeout;

static void __set_s_defaultMatchTimeout(System::TimeSpan value) ;

static System::TimeSpan __get_s_defaultMatchTimeout() ;

static System::TimeSpan __declspec(property(get=__get_InfiniteMatchTimeout, put=__set_InfiniteMatchTimeout))  InfiniteMatchTimeout;

static void __set_InfiniteMatchTimeout(System::TimeSpan value) ;

static System::TimeSpan __get_InfiniteMatchTimeout() ;

 System::TimeSpan __declspec(property(get=__get_internalMatchTimeout, put=__set_internalMatchTimeout))  internalMatchTimeout;

constexpr void __set_internalMatchTimeout(System::TimeSpan value) ;

constexpr System::TimeSpan __get_internalMatchTimeout() const;

/// @brief Field MaxOptionShift offset 0
static constexpr int32_t  MaxOptionShift{10};

 ::StringW __declspec(property(get=__get_pattern, put=__set_pattern))  pattern;

constexpr void __set_pattern(::StringW value) ;

constexpr ::StringW __get_pattern() const;

 System::Text::RegularExpressions::RegexOptions __declspec(property(get=__get_roptions, put=__set_roptions))  roptions;

constexpr void __set_roptions(System::Text::RegularExpressions::RegexOptions value) ;

constexpr System::Text::RegularExpressions::RegexOptions __get_roptions() const;

 System::Text::RegularExpressions::RegexRunnerFactory __declspec(property(get=__get_factory, put=__set_factory))  factory;

constexpr void __set_factory(System::Text::RegularExpressions::RegexRunnerFactory value) ;

constexpr System::Text::RegularExpressions::RegexRunnerFactory __get_factory() const;

 System::Collections::Hashtable __declspec(property(get=__get_caps, put=__set_caps))  caps;

constexpr void __set_caps(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_caps() const;

 System::Collections::Hashtable __declspec(property(get=__get_capnames, put=__set_capnames))  capnames;

constexpr void __set_capnames(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_capnames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_capslist, put=__set_capslist))  capslist;

constexpr void __set_capslist(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_capslist() const;

 int32_t __declspec(property(get=__get_capsize, put=__set_capsize))  capsize;

constexpr void __set_capsize(int32_t value) ;

constexpr int32_t __get_capsize() const;

 System::Text::RegularExpressions::ExclusiveReference __declspec(property(get=__get__runnerref, put=__set__runnerref))  _runnerref;

constexpr void __set__runnerref(System::Text::RegularExpressions::ExclusiveReference value) ;

constexpr System::Text::RegularExpressions::ExclusiveReference __get__runnerref() const;

 System::WeakReference_1<System::Text::RegularExpressions::RegexReplacement> __declspec(property(get=__get__replref, put=__set__replref))  _replref;

constexpr void __set__replref(System::WeakReference_1<System::Text::RegularExpressions::RegexReplacement> value) ;

constexpr System::WeakReference_1<System::Text::RegularExpressions::RegexReplacement> __get__replref() const;

 System::Text::RegularExpressions::RegexCode __declspec(property(get=__get__code, put=__set__code))  _code;

constexpr void __set__code(System::Text::RegularExpressions::RegexCode value) ;

constexpr System::Text::RegularExpressions::RegexCode __get__code() const;

 bool __declspec(property(get=__get__refsInitialized, put=__set__refsInitialized))  _refsInitialized;

constexpr void __set__refsInitialized(bool value) ;

constexpr bool __get__refsInitialized() const;


// Properties

 System::Text::RegularExpressions::RegexOptions __declspec(property(get=get_Options))  Options;

 bool __declspec(property(get=get_RightToLeft))  RightToLeft;


// Methods

/// @brief Method GetCachedCode addr 0x27bfca0 size 0xf8 virtual false final false
 System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry GetCachedCode(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey key, bool isToAdd) ;

/// @brief Method GetCachedCodeEntryInternal addr 0x27bfdc8 size 0x4b8 virtual false final false
 System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry GetCachedCodeEntryInternal(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey key, bool isToAdd) ;

/// @brief Method FillCacheDictionary addr 0x27c0594 size 0x104 virtual false final false
 void FillCacheDictionary() ;

/// @brief Method TryGetCacheValue addr 0x27c0698 size 0x11c virtual false final false
static bool TryGetCacheValue(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey key, ByRef<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry> entry) ;

/// @brief Method TryGetCacheValueSmall addr 0x27c07b4 size 0xd4 virtual false final false
static bool TryGetCacheValueSmall(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey key, ByRef<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry> entry) ;

/// @brief Method LookupCachedAndPromote addr 0x27c0280 size 0x29c virtual false final false
static System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry LookupCachedAndPromote(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey key) ;

/// @brief Method IsMatch addr 0x27c0888 size 0x74 virtual false final false
static bool IsMatch(::StringW input, ::StringW pattern) ;

/// @brief Method IsMatch addr 0x27c08fc size 0x8c virtual false final false
static bool IsMatch(::StringW input, ::StringW pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout) ;

/// @brief Method IsMatch addr 0x27c0d00 size 0x70 virtual false final false
 bool IsMatch(::StringW input) ;

/// @brief Method IsMatch addr 0x27c0d7c size 0x80 virtual false final false
 bool IsMatch(::StringW input, int32_t startat) ;

/// @brief Method Match addr 0x27c0dfc size 0x74 virtual false final false
static System::Text::RegularExpressions::Match Match(::StringW input, ::StringW pattern) ;

/// @brief Method Match addr 0x27c0e70 size 0x8c virtual false final false
static System::Text::RegularExpressions::Match Match(::StringW input, ::StringW pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout) ;

/// @brief Method Match addr 0x27c0efc size 0x70 virtual false final false
 System::Text::RegularExpressions::Match Match(::StringW input) ;

/// @brief Method Match addr 0x27c0f6c size 0x74 virtual false final false
 System::Text::RegularExpressions::Match Match(::StringW input, int32_t startat) ;

/// @brief Method Matches addr 0x27c0fe0 size 0xd4 virtual false final false
 System::Text::RegularExpressions::MatchCollection Matches(::StringW input, int32_t startat) ;

/// @brief Method Replace addr 0x27c10b4 size 0x7c virtual false final false
static ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement) ;

/// @brief Method Replace addr 0x27c1130 size 0x94 virtual false final false
static ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout) ;

/// @brief Method Replace addr 0x27c11c4 size 0x74 virtual false final false
 ::StringW Replace(::StringW input, ::StringW replacement) ;

/// @brief Method Replace addr 0x27c1238 size 0xe0 virtual false final false
 ::StringW Replace(::StringW input, ::StringW replacement, int32_t count, int32_t startat) ;

/// @brief Method ValidateMatchTimeout addr 0x27c1690 size 0x15c virtual false final false
static void ValidateMatchTimeout(System::TimeSpan matchTimeout) ;

/// @brief Method InitDefaultMatchTimeout addr 0x27c1450 size 0x240 virtual false final false
static System::TimeSpan InitDefaultMatchTimeout() ;

// Ctor Parameters [CppParam { name: "pattern", ty: "::StringW", modifiers: "", def_value: None }]
explicit Regex(::StringW pattern) ;

/// @brief Method .ctor addr 0x27c17ec size 0x78 virtual false final false
 void _ctor(::StringW pattern) ;

// Ctor Parameters [CppParam { name: "pattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }]
explicit Regex(::StringW pattern, System::Text::RegularExpressions::RegexOptions options) ;

/// @brief Method .ctor addr 0x27c1864 size 0x7c virtual false final false
 void _ctor(::StringW pattern, System::Text::RegularExpressions::RegexOptions options) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x27c18e0 size 0x40 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo si, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "pattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }, CppParam { name: "matchTimeout", ty: "System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "addToCache", ty: "bool", modifiers: "", def_value: None }]
explicit Regex(::StringW pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout, bool addToCache) ;

/// @brief Method .ctor addr 0x27c0988 size 0x378 virtual false final false
 void _ctor(::StringW pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout, bool addToCache) ;

/// @brief Method get_Options addr 0x27c1a30 size 0x8 virtual false final false
 System::Text::RegularExpressions::RegexOptions get_Options() ;

/// @brief Method get_RightToLeft addr 0x27c1a38 size 0xc virtual false final false
 bool get_RightToLeft() ;

/// @brief Method ToString addr 0x27c1a44 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method GroupNameFromNumber addr 0x27bd2d0 size 0x148 virtual false final false
 ::StringW GroupNameFromNumber(int32_t i) ;

/// @brief Method GroupNumberFromName addr 0x27bce9c size 0x14c virtual false final false
 int32_t GroupNumberFromName(::StringW name) ;

/// @brief Method InitializeReferences addr 0x27c192c size 0x104 virtual false final false
 void InitializeReferences() ;

/// @brief Method Run addr 0x27be17c size 0x290 virtual false final false
 System::Text::RegularExpressions::Match Run(bool quick, int32_t prevlen, ::StringW input, int32_t beginning, int32_t length, int32_t startat) ;

/// @brief Method UseOptionR addr 0x27c0d70 size 0xc virtual false final false
 bool UseOptionR() ;

/// @brief Method UseOptionInvariant addr 0x27c1a4c size 0xc virtual false final false
 bool UseOptionInvariant() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::Regex);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Regex, "System.Text.RegularExpressions", "Regex");
NEED_NO_BOX(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntry, "System.Text.RegularExpressions", "Regex/CachedCodeEntry");
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey, "System.Text.RegularExpressions", "Regex/CachedCodeEntryKey");

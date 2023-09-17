#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections {
class ICollection;
}
namespace System::Net {
class Cookie;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Net {
struct ____System__Net__CookieCollection__Stamp;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class ____System__Net__CookieCollection__CookieCollectionEnumerator;
}
// Type: ::Stamp
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7977))
// CS Name: System.Net.CookieCollection::Stamp
struct CORDL_TYPE ____System__Net__CookieCollection__Stamp : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Net__CookieCollection__Stamp(int32_t value__) noexcept;


                    constexpr ____System__Net__CookieCollection__Stamp(____System__Net__CookieCollection__Stamp const&) = default;
                    constexpr ____System__Net__CookieCollection__Stamp(____System__Net__CookieCollection__Stamp&&) = default;
                    constexpr ____System__Net__CookieCollection__Stamp& operator=(____System__Net__CookieCollection__Stamp const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__CookieCollection__Stamp& operator=(____System__Net__CookieCollection__Stamp&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__CookieCollection__Stamp(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Net__CookieCollection__Stamp_Unwrapped : int32_t {
__Check = 0,
__Set = 1,
__SetToUnused = 2,
__SetToMaxUsed = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Net__CookieCollection__Stamp_Unwrapped () const noexcept {
return std::bit_cast<______System__Net__CookieCollection__Stamp_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Check offset 0
static ::System::Net::____System__Net__CookieCollection__Stamp const Check;

/// @brief Field Set offset 0
static ::System::Net::____System__Net__CookieCollection__Stamp const Set;

/// @brief Field SetToUnused offset 0
static ::System::Net::____System__Net__CookieCollection__Stamp const SetToUnused;

/// @brief Field SetToMaxUsed offset 0
static ::System::Net::____System__Net__CookieCollection__Stamp const SetToMaxUsed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::CookieCollectionEnumerator
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7978))
// CS Name: System.Net.CookieCollection::CookieCollectionEnumerator
class CORDL_TYPE ____System__Net__CookieCollection__CookieCollectionEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____System__Net__CookieCollection__CookieCollectionEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__CookieCollection__CookieCollectionEnumerator", modifiers: " const&", def_value: None }]
constexpr ____System__Net__CookieCollection__CookieCollectionEnumerator(____System__Net__CookieCollection__CookieCollectionEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__CookieCollection__CookieCollectionEnumerator", modifiers: "&&", def_value: None }]
constexpr ____System__Net__CookieCollection__CookieCollectionEnumerator(____System__Net__CookieCollection__CookieCollectionEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__CookieCollection__CookieCollectionEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__CookieCollection__CookieCollectionEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__CookieCollection__CookieCollectionEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__CookieCollection__CookieCollectionEnumerator& operator=(____System__Net__CookieCollection__CookieCollectionEnumerator&& o) noexcept = default;
  constexpr ____System__Net__CookieCollection__CookieCollectionEnumerator& operator=(____System__Net__CookieCollection__CookieCollectionEnumerator const& o) noexcept = default;
                


// Fields

 ::System::Net::CookieCollection __declspec(property(get=__get_m_cookies, put=__set_m_cookies))  m_cookies;

constexpr void __set_m_cookies(::System::Net::CookieCollection value) ;

constexpr ::System::Net::CookieCollection __get_m_cookies() const;

 int32_t __declspec(property(get=__get_m_count, put=__set_m_count))  m_count;

constexpr void __set_m_count(int32_t value) ;

constexpr int32_t __get_m_count() const;

 int32_t __declspec(property(get=__get_m_index, put=__set_m_index))  m_index;

constexpr void __set_m_index(int32_t value) ;

constexpr int32_t __get_m_index() const;

 int32_t __declspec(property(get=__get_m_version, put=__set_m_version))  m_version;

constexpr void __set_m_version(int32_t value) ;

constexpr int32_t __get_m_version() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "cookies", ty: "::System::Net::CookieCollection", modifiers: "", def_value: None }]
explicit ____System__Net__CookieCollection__CookieCollectionEnumerator(::System::Net::CookieCollection cookies) ;

/// @brief Method .ctor addr 0x281d5a0 size 0x5c virtual false final false
 void _ctor(::System::Net::CookieCollection cookies) ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x281d5fc size 0xac virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x281d6a8 size 0xa4 virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x281d74c size 0xc virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::CookieCollection
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7979))
// CS Name: System.Net.CookieCollection
class CORDL_TYPE CookieCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CookieCollectionEnumerator = ::System::Net::____System__Net__CookieCollection__CookieCollectionEnumerator;

using Stamp = ::System::Net::____System__Net__CookieCollection__Stamp;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CookieCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieCollection", modifiers: " const&", def_value: None }]
constexpr CookieCollection(CookieCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieCollection", modifiers: "&&", def_value: None }]
constexpr CookieCollection(CookieCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CookieCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CookieCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CookieCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CookieCollection& operator=(CookieCollection&& o) noexcept = default;
  constexpr CookieCollection& operator=(CookieCollection const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_version, put=__set_m_version))  m_version;

constexpr void __set_m_version(int32_t value) ;

constexpr int32_t __get_m_version() const;

 ::System::Collections::ArrayList __declspec(property(get=__get_m_list, put=__set_m_list))  m_list;

constexpr void __set_m_list(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get_m_list() const;

 ::System::DateTime __declspec(property(get=__get_m_TimeStamp, put=__set_m_TimeStamp))  m_TimeStamp;

constexpr void __set_m_TimeStamp(::System::DateTime value) ;

constexpr ::System::DateTime __get_m_TimeStamp() const;

 bool __declspec(property(get=__get_m_has_other_versions, put=__set_m_has_other_versions))  m_has_other_versions;

constexpr void __set_m_has_other_versions(bool value) ;

constexpr bool __get_m_has_other_versions() const;

 bool __declspec(property(get=__get_m_IsReadOnly, put=__set_m_IsReadOnly))  m_IsReadOnly;

constexpr void __set_m_IsReadOnly(bool value) ;

constexpr bool __get_m_IsReadOnly() const;


// Properties

 ::System::Net::Cookie __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 bool __declspec(property(get=get_IsOtherVersionSeen))  IsOtherVersionSeen;


// Methods

// Ctor Parameters []
explicit CookieCollection() ;

/// @brief Method .ctor addr 0x281c62c size 0xa8 virtual false final false
 void _ctor() ;

/// @brief Method get_Item addr 0x281c6d4 size 0xec virtual false final false
 ::System::Net::Cookie get_Item(int32_t index) ;

/// @brief Method Add addr 0x281c7c0 size 0xc4 virtual false final false
 void Add(::System::Net::Cookie cookie) ;

/// @brief Method Add addr 0x281cc48 size 0x300 virtual false final false
 void Add(::System::Net::CookieCollection cookies) ;

/// @brief Method get_Count addr 0x281cfa8 size 0x24 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsSynchronized addr 0x281cfcc size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x281cfd4 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method CopyTo addr 0x281cfd8 size 0x24 virtual true final true
 void CopyTo(::System::Array array, int32_t index) ;

/// @brief Method TimeStamp addr 0x281cffc size 0xc0 virtual false final false
 ::System::DateTime TimeStamp(::System::Net::____System__Net__CookieCollection__Stamp how) ;

/// @brief Method get_IsOtherVersionSeen addr 0x281d0bc size 0x8 virtual false final false
 bool get_IsOtherVersionSeen() ;

/// @brief Method InternalAdd addr 0x281d0c4 size 0x4b8 virtual false final false
 int32_t InternalAdd(::System::Net::Cookie cookie, bool isStrict) ;

/// @brief Method IndexOf addr 0x281c884 size 0x3c4 virtual false final false
 int32_t IndexOf(::System::Net::Cookie cookie) ;

/// @brief Method RemoveAt addr 0x281d57c size 0x24 virtual false final false
 void RemoveAt(int32_t idx) ;

/// @brief Method GetEnumerator addr 0x281cf48 size 0x60 virtual true final true
 ::System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__CookieCollection__Stamp, "System.Net", "CookieCollection/Stamp");
NEED_NO_BOX(::System::Net::CookieCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieCollection, "System.Net", "CookieCollection");
NEED_NO_BOX(::System::Net::____System__Net__CookieCollection__CookieCollectionEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__CookieCollection__CookieCollectionEnumerator, "System.Net", "CookieCollection/CookieCollectionEnumerator");

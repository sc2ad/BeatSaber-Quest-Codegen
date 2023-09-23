#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__PropertyNameTable__Entry;
}
namespace Newtonsoft::Json::Utilities {
class PropertyNameTable;
}
// Type: ::Entry
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11791))
// CS Name: Newtonsoft.Json.Utilities.PropertyNameTable::Entry
class CORDL_TYPE Newtonsoft__Json__Utilities__PropertyNameTable__Entry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Newtonsoft__Json__Utilities__PropertyNameTable__Entry() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__PropertyNameTable__Entry", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__PropertyNameTable__Entry(Newtonsoft__Json__Utilities__PropertyNameTable__Entry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__PropertyNameTable__Entry", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__PropertyNameTable__Entry(Newtonsoft__Json__Utilities__PropertyNameTable__Entry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__PropertyNameTable__Entry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Utilities__PropertyNameTable__Entry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__PropertyNameTable__Entry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__PropertyNameTable__Entry& operator=(Newtonsoft__Json__Utilities__PropertyNameTable__Entry&& o) noexcept = default;
  constexpr Newtonsoft__Json__Utilities__PropertyNameTable__Entry& operator=(Newtonsoft__Json__Utilities__PropertyNameTable__Entry const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(::StringW value) ;

constexpr ::StringW __get_Value() const;

 int32_t __declspec(property(get=__get_HashCode, put=__set_HashCode))  HashCode;

constexpr void __set_HashCode(int32_t value) ;

constexpr int32_t __get_HashCode() const;

 Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry value) ;

constexpr Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry __get_Next() const;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry", modifiers: "", def_value: None }]
explicit Newtonsoft__Json__Utilities__PropertyNameTable__Entry(::StringW value, int32_t hashCode, Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry next) ;

/// @brief Method .ctor addr 0x24e2340 size 0x40 virtual false final false
 void _ctor(::StringW value, int32_t hashCode, Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::PropertyNameTable
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11792))
// CS Name: Newtonsoft.Json.Utilities.PropertyNameTable
class CORDL_TYPE PropertyNameTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Entry = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PropertyNameTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyNameTable", modifiers: " const&", def_value: None }]
constexpr PropertyNameTable(PropertyNameTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyNameTable", modifiers: "&&", def_value: None }]
constexpr PropertyNameTable(PropertyNameTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyNameTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PropertyNameTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyNameTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyNameTable& operator=(PropertyNameTable&& o) noexcept = default;
  constexpr PropertyNameTable& operator=(PropertyNameTable const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_HashCodeRandomizer, put=__set_HashCodeRandomizer))  HashCodeRandomizer;

static void __set_HashCodeRandomizer(int32_t value) ;

static int32_t __get_HashCodeRandomizer() ;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 ::ArrayW<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry> value) ;

constexpr ::ArrayW<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry> __get__entries() const;

 int32_t __declspec(property(get=__get__mask, put=__set__mask))  _mask;

constexpr void __set__mask(int32_t value) ;

constexpr int32_t __get__mask() const;


// Methods

// Ctor Parameters []
explicit PropertyNameTable() ;

/// @brief Method .ctor addr 0x24e1de0 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method Get addr 0x24e1e48 size 0x188 virtual false final false
 ::StringW Get(::ArrayW<char16_t> key, int32_t start, int32_t length) ;

/// @brief Method Add addr 0x24e2080 size 0x1b4 virtual false final false
 ::StringW Add(::StringW key) ;

/// @brief Method AddEntry addr 0x24e2234 size 0x10c virtual false final false
 ::StringW AddEntry(::StringW str, int32_t hashCode) ;

/// @brief Method Grow addr 0x24e2380 size 0x124 virtual false final false
 void Grow() ;

/// @brief Method TextEquals addr 0x24e1fd0 size 0xb0 virtual false final false
static bool TextEquals(::StringW str1, ::ArrayW<char16_t> str2, int32_t str2Start, int32_t str2Length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__PropertyNameTable__Entry, "Newtonsoft.Json.Utilities", "PropertyNameTable/Entry");
NEED_NO_BOX(Newtonsoft::Json::Utilities::PropertyNameTable);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::PropertyNameTable, "Newtonsoft.Json.Utilities", "PropertyNameTable");

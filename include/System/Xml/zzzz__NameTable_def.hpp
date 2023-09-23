#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class NameTable;
}
namespace System::Xml {
class System__Xml__NameTable__Entry;
}
// Type: ::Entry
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11475))
// CS Name: System.Xml.NameTable::Entry
class CORDL_TYPE System__Xml__NameTable__Entry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Xml__NameTable__Entry() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__NameTable__Entry", modifiers: " const&", def_value: None }]
constexpr System__Xml__NameTable__Entry(System__Xml__NameTable__Entry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__NameTable__Entry", modifiers: "&&", def_value: None }]
constexpr System__Xml__NameTable__Entry(System__Xml__NameTable__Entry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__NameTable__Entry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__NameTable__Entry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__NameTable__Entry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__NameTable__Entry& operator=(System__Xml__NameTable__Entry&& o) noexcept = default;
  constexpr System__Xml__NameTable__Entry& operator=(System__Xml__NameTable__Entry const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;

 int32_t __declspec(property(get=__get_hashCode, put=__set_hashCode))  hashCode;

constexpr void __set_hashCode(int32_t value) ;

constexpr int32_t __get_hashCode() const;

 System::Xml::System__Xml__NameTable__Entry __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Xml::System__Xml__NameTable__Entry value) ;

constexpr System::Xml::System__Xml__NameTable__Entry __get_next() const;


// Methods

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Xml::System__Xml__NameTable__Entry", modifiers: "", def_value: None }]
explicit System__Xml__NameTable__Entry(::StringW str, int32_t hashCode, System::Xml::System__Xml__NameTable__Entry next) ;

/// @brief Method .ctor addr 0x26ff080 size 0x40 virtual false final false
 void _ctor(::StringW str, int32_t hashCode, System::Xml::System__Xml__NameTable__Entry next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::NameTable
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11510))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11476))
// CS Name: System.Xml.NameTable
class CORDL_TYPE NameTable : public System::Xml::XmlNameTable {
public:
// Declarations
using Entry = System::Xml::System__Xml__NameTable__Entry;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NameTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameTable", modifiers: " const&", def_value: None }]
constexpr NameTable(NameTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameTable", modifiers: "&&", def_value: None }]
constexpr NameTable(NameTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameTable(void* ptr) noexcept : System::Xml::XmlNameTable(ptr) {
}


  constexpr NameTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameTable& operator=(NameTable&& o) noexcept = default;
  constexpr NameTable& operator=(NameTable const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Xml::System__Xml__NameTable__Entry> __declspec(property(get=__get_entries, put=__set_entries))  entries;

constexpr void __set_entries(::ArrayW<System::Xml::System__Xml__NameTable__Entry> value) ;

constexpr ::ArrayW<System::Xml::System__Xml__NameTable__Entry> __get_entries() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_mask, put=__set_mask))  mask;

constexpr void __set_mask(int32_t value) ;

constexpr int32_t __get_mask() const;

 int32_t __declspec(property(get=__get_hashCodeRandomizer, put=__set_hashCodeRandomizer))  hashCodeRandomizer;

constexpr void __set_hashCodeRandomizer(int32_t value) ;

constexpr int32_t __get_hashCodeRandomizer() const;


// Methods

// Ctor Parameters []
explicit NameTable() ;

/// @brief Method .ctor addr 0x26f6930 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x26fea6c size 0x17c virtual true final false
 ::StringW Add(::StringW key) ;

/// @brief Method Add addr 0x26fecf0 size 0x178 virtual true final false
 ::StringW Add(::ArrayW<char16_t> key, int32_t start, int32_t len) ;

/// @brief Method Get addr 0x26fef18 size 0x168 virtual true final false
 ::StringW Get(::StringW value) ;

/// @brief Method AddEntry addr 0x26febe8 size 0x108 virtual false final false
 ::StringW AddEntry(::StringW str, int32_t hashCode) ;

/// @brief Method Grow addr 0x26ff0c0 size 0x124 virtual false final false
 void Grow() ;

/// @brief Method TextEquals addr 0x26fee68 size 0xb0 virtual false final false
static bool TextEquals(::StringW str1, ::ArrayW<char16_t> str2, int32_t str2Start, int32_t str2Length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::NameTable);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::NameTable, "System.Xml", "NameTable");
NEED_NO_BOX(System::Xml::System__Xml__NameTable__Entry);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__NameTable__Entry, "System.Xml", "NameTable/Entry");

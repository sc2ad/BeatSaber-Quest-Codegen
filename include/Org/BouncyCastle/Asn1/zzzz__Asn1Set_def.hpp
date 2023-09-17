#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl;
}
namespace Org::BouncyCastle::Asn1 {
class ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer;
}
// Type: ::Asn1SetParserImpl
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(463))
// CS Name: Org.BouncyCastle.Asn1.Asn1Set::Asn1SetParserImpl
class CORDL_TYPE ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::Asn1SetParser
constexpr operator  ::Org::BouncyCastle::Asn1::Asn1SetParser() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl(____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl(____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl& operator=(____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl& operator=(____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_outer, put=__set_outer))  outer;

constexpr void __set_outer(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_outer() const;

 int32_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(int32_t value) ;

constexpr int32_t __get_max() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl(::Org::BouncyCastle::Asn1::Asn1Set outer) ;

/// @brief Method .ctor addr 0x112e6d8 size 0x44 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Set outer) ;

/// @brief Method ReadObject addr 0x112eaa0 size 0xf8 virtual true final true
 ::Org::BouncyCastle::Asn1::IAsn1Convertible ReadObject() ;

/// @brief Method ToAsn1Object addr 0x112eb98 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
// Type: ::DerComparer
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(464))
// CS Name: Org.BouncyCastle.Asn1.Asn1Set::DerComparer
class CORDL_TYPE ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IComparer
constexpr operator  ::System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Org__BouncyCastle__Asn1__Asn1Set__DerComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Asn1__Asn1Set__DerComparer", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer(____Org__BouncyCastle__Asn1__Asn1Set__DerComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Asn1__Asn1Set__DerComparer", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer(____Org__BouncyCastle__Asn1__Asn1Set__DerComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer& operator=(____Org__BouncyCastle__Asn1__Asn1Set__DerComparer&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer& operator=(____Org__BouncyCastle__Asn1__Asn1Set__DerComparer const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x112eba0 size 0x180 virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

// Ctor Parameters []
explicit ____Org__BouncyCastle__Asn1__Asn1Set__DerComparer() ;

/// @brief Method .ctor addr 0x112ea8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
// Type: Org.BouncyCastle.Asn1::Asn1Set
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(465))
// CS Name: Org.BouncyCastle.Asn1.Asn1Set
class CORDL_TYPE Asn1Set : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
using DerComparer = ::Org::BouncyCastle::Asn1::____Org__BouncyCastle__Asn1__Asn1Set__DerComparer;

using Asn1SetParserImpl = ::Org::BouncyCastle::Asn1::____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Asn1Set() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Set", modifiers: " const&", def_value: None }]
constexpr Asn1Set(Asn1Set const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Set", modifiers: "&&", def_value: None }]
constexpr Asn1Set(Asn1Set&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1Set(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr Asn1Set& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1Set& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1Set& operator=(Asn1Set&& o) noexcept = default;
  constexpr Asn1Set& operator=(Asn1Set const& o) noexcept = default;
                


// Fields

 ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> __get_elements() const;


// Properties

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 ::Org::BouncyCastle::Asn1::Asn1SetParser __declspec(property(get=get_Parser))  Parser;


// Methods

/// @brief Method GetInstance addr 0x112da24 size 0x398 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Set GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x112ddbc size 0x558 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Set GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

// Ctor Parameters []
explicit Asn1Set() ;

/// @brief Method .ctor addr 0x112e34c size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "element", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit Asn1Set(::Org::BouncyCastle::Asn1::Asn1Encodable element) ;

/// @brief Method .ctor addr 0x112e3b8 size 0xec virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable element) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable>", modifiers: "", def_value: None }]
explicit Asn1Set(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

/// @brief Method .ctor addr 0x112e4a4 size 0xf4 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

// Ctor Parameters [CppParam { name: "elementVector", ty: "::Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit Asn1Set(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method .ctor addr 0x112e598 size 0x80 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method GetEnumerator addr 0x112e618 size 0x1c virtual true final false
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_Item addr 0x112e634 size 0x30 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_Item(int32_t index) ;

/// @brief Method get_Count addr 0x112e664 size 0x1c virtual true final false
 int32_t get_Count() ;

/// @brief Method ToArray addr 0x112e680 size 0x58 virtual true final false
 ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable> ToArray() ;

/// @brief Method get_Parser addr 0x112d9bc size 0x60 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1SetParser get_Parser() ;

/// @brief Method Asn1GetHashCode addr 0x112e71c size 0x94 virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0x112e7b0 size 0x16c virtual true final false
 bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Sort addr 0x112e91c size 0x170 virtual false final false
 void Sort() ;

/// @brief Method ToString addr 0x112ea94 size 0xc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Set);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Set, "Org.BouncyCastle.Asn1", "Asn1Set");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::____Org__BouncyCastle__Asn1__Asn1Set__Asn1SetParserImpl, "Org.BouncyCastle.Asn1", "Asn1Set/Asn1SetParserImpl");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::____Org__BouncyCastle__Asn1__Asn1Set__DerComparer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::____Org__BouncyCastle__Asn1__Asn1Set__DerComparer, "Org.BouncyCastle.Asn1", "Asn1Set/DerComparer");

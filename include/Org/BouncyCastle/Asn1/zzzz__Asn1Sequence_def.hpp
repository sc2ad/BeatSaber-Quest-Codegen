#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl;
}
// Type: ::Asn1SequenceParserImpl
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(460))
// CS Name: Org.BouncyCastle.Asn1.Asn1Sequence::Asn1SequenceParserImpl
class CORDL_TYPE Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::Asn1SequenceParser
constexpr operator  Org::BouncyCastle::Asn1::Asn1SequenceParser() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl(Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl(Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl& operator=(Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl& operator=(Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_outer, put=__set_outer))  outer;

constexpr void __set_outer(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_outer() const;

 int32_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(int32_t value) ;

constexpr int32_t __get_max() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl(Org::BouncyCastle::Asn1::Asn1Sequence outer) ;

/// @brief Method .ctor addr 0x112d5c4 size 0x48 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence outer) ;

/// @brief Method ReadObject addr 0x112d8c4 size 0xf8 virtual true final true
 Org::BouncyCastle::Asn1::IAsn1Convertible ReadObject() ;

/// @brief Method ToAsn1Object addr 0x112da1c size 0x8 virtual true final true
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
// Type: Org.BouncyCastle.Asn1::Asn1Sequence
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(461))
// CS Name: Org.BouncyCastle.Asn1.Asn1Sequence
class CORDL_TYPE Asn1Sequence : public Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
using Asn1SequenceParserImpl = Org::BouncyCastle::Asn1::Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Asn1Sequence() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence", modifiers: " const&", def_value: None }]
constexpr Asn1Sequence(Asn1Sequence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence", modifiers: "&&", def_value: None }]
constexpr Asn1Sequence(Asn1Sequence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1Sequence(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr Asn1Sequence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1Sequence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1Sequence& operator=(Asn1Sequence&& o) noexcept = default;
  constexpr Asn1Sequence& operator=(Asn1Sequence const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> __get_elements() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1SequenceParser __declspec(property(get=get_Parser))  Parser;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method GetInstance addr 0x1125bf8 size 0x398 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Sequence GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x112cfb0 size 0x264 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Sequence GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

// Ctor Parameters []
explicit Asn1Sequence() ;

/// @brief Method .ctor addr 0x112d27c size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "element", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit Asn1Sequence(Org::BouncyCastle::Asn1::Asn1Encodable element) ;

/// @brief Method .ctor addr 0x112d2e8 size 0xec virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Encodable element) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable>", modifiers: "", def_value: None }]
explicit Asn1Sequence(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

/// @brief Method .ctor addr 0x112d3d4 size 0xf4 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

// Ctor Parameters [CppParam { name: "elementVector", ty: "Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit Asn1Sequence(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method .ctor addr 0x112d4c8 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method GetEnumerator addr 0x112d548 size 0x1c virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_Parser addr 0x112d564 size 0x60 virtual true final false
 Org::BouncyCastle::Asn1::Asn1SequenceParser get_Parser() ;

/// @brief Method get_Item addr 0x112d60c size 0x30 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Item(int32_t index) ;

/// @brief Method get_Count addr 0x112d63c size 0x1c virtual true final false
 int32_t get_Count() ;

/// @brief Method ToArray addr 0x112d658 size 0x58 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> ToArray() ;

/// @brief Method Asn1GetHashCode addr 0x112d6b0 size 0x94 virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0x112d744 size 0x174 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method ToString addr 0x112d8b8 size 0xc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1Sequence);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Sequence, "Org.BouncyCastle.Asn1", "Asn1Sequence");
NEED_NO_BOX(Org::BouncyCastle::Asn1::Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Org__BouncyCastle__Asn1__Asn1Sequence__Asn1SequenceParserImpl, "Org.BouncyCastle.Asn1", "Asn1Sequence/Asn1SequenceParserImpl");

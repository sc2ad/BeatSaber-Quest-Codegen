#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerTaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerExternal;
}
// Type: Org.BouncyCastle.Asn1::DerExternal
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(504))
// CS Name: Org.BouncyCastle.Asn1.DerExternal
class CORDL_TYPE DerExternal : public Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DerExternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerExternal", modifiers: " const&", def_value: None }]
constexpr DerExternal(DerExternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerExternal", modifiers: "&&", def_value: None }]
constexpr DerExternal(DerExternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerExternal(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr DerExternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerExternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerExternal& operator=(DerExternal&& o) noexcept = default;
  constexpr DerExternal& operator=(DerExternal const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_directReference, put=__set_directReference))  directReference;

constexpr void __set_directReference(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_directReference() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_indirectReference, put=__set_indirectReference))  indirectReference;

constexpr void __set_indirectReference(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_indirectReference() const;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_dataValueDescriptor, put=__set_dataValueDescriptor))  dataValueDescriptor;

constexpr void __set_dataValueDescriptor(Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Object __get_dataValueDescriptor() const;

 int32_t __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(int32_t value) ;

constexpr int32_t __get_encoding() const;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_externalContent, put=__set_externalContent))  externalContent;

constexpr void __set_externalContent(Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Object __get_externalContent() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_DataValueDescriptor, put=set_DataValueDescriptor))  DataValueDescriptor;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_DirectReference, put=set_DirectReference))  DirectReference;

 int32_t __declspec(property(get=get_Encoding, put=set_Encoding))  Encoding;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_ExternalContent, put=set_ExternalContent))  ExternalContent;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_IndirectReference, put=set_IndirectReference))  IndirectReference;


// Methods

// Ctor Parameters [CppParam { name: "vector", ty: "Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit DerExternal(Org::BouncyCastle::Asn1::Asn1EncodableVector vector) ;

/// @brief Method .ctor addr 0x1129cf8 size 0x2f4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector vector) ;

// Ctor Parameters [CppParam { name: "directReference", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "indirectReference", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "dataValueDescriptor", ty: "Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }, CppParam { name: "externalData", ty: "Org::BouncyCastle::Asn1::DerTaggedObject", modifiers: "", def_value: None }]
explicit DerExternal(Org::BouncyCastle::Asn1::DerObjectIdentifier directReference, Org::BouncyCastle::Asn1::DerInteger indirectReference, Org::BouncyCastle::Asn1::Asn1Object dataValueDescriptor, Org::BouncyCastle::Asn1::DerTaggedObject externalData) ;

/// @brief Method .ctor addr 0x1136100 size 0x60 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier directReference, Org::BouncyCastle::Asn1::DerInteger indirectReference, Org::BouncyCastle::Asn1::Asn1Object dataValueDescriptor, Org::BouncyCastle::Asn1::DerTaggedObject externalData) ;

// Ctor Parameters [CppParam { name: "directReference", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "indirectReference", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "dataValueDescriptor", ty: "Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "externalData", ty: "Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }]
explicit DerExternal(Org::BouncyCastle::Asn1::DerObjectIdentifier directReference, Org::BouncyCastle::Asn1::DerInteger indirectReference, Org::BouncyCastle::Asn1::Asn1Object dataValueDescriptor, int32_t encoding, Org::BouncyCastle::Asn1::Asn1Object externalData) ;

/// @brief Method .ctor addr 0x1136160 size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier directReference, Org::BouncyCastle::Asn1::DerInteger indirectReference, Org::BouncyCastle::Asn1::Asn1Object dataValueDescriptor, int32_t encoding, Org::BouncyCastle::Asn1::Asn1Object externalData) ;

/// @brief Method Encode addr 0x11361d4 size 0x108 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1GetHashCode addr 0x113632c size 0x74 virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0x11363a0 size 0xec virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method get_DataValueDescriptor addr 0x113648c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object get_DataValueDescriptor() ;

/// @brief Method set_DataValueDescriptor addr 0x1136494 size 0x8 virtual false final false
 void set_DataValueDescriptor(Org::BouncyCastle::Asn1::Asn1Object value) ;

/// @brief Method get_DirectReference addr 0x113649c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_DirectReference() ;

/// @brief Method set_DirectReference addr 0x11364a4 size 0x8 virtual false final false
 void set_DirectReference(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

/// @brief Method get_Encoding addr 0x11364ac size 0x8 virtual false final false
 int32_t get_Encoding() ;

/// @brief Method set_Encoding addr 0x1136064 size 0x9c virtual false final false
 void set_Encoding(int32_t value) ;

/// @brief Method get_ExternalContent addr 0x11364b4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object get_ExternalContent() ;

/// @brief Method set_ExternalContent addr 0x11364bc size 0x8 virtual false final false
 void set_ExternalContent(Org::BouncyCastle::Asn1::Asn1Object value) ;

/// @brief Method get_IndirectReference addr 0x11364c4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_IndirectReference() ;

/// @brief Method set_IndirectReference addr 0x11364cc size 0x8 virtual false final false
 void set_IndirectReference(Org::BouncyCastle::Asn1::DerInteger value) ;

/// @brief Method GetObjFromVector addr 0x1135fcc size 0x98 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Object GetObjFromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector v, int32_t index) ;

/// @brief Method WriteEncodable addr 0x11362dc size 0x50 virtual false final false
static void WriteEncodable(System::IO::MemoryStream ms, Org::BouncyCastle::Asn1::Asn1Encodable e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerExternal);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerExternal, "Org.BouncyCastle.Asn1", "DerExternal");

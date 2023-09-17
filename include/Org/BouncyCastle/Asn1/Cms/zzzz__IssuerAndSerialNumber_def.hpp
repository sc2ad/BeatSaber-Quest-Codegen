#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
// Type: Org.BouncyCastle.Asn1.Cms::IssuerAndSerialNumber
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(74))
// CS Name: Org.BouncyCastle.Asn1.Cms.IssuerAndSerialNumber
class CORDL_TYPE IssuerAndSerialNumber : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IssuerAndSerialNumber() = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuerAndSerialNumber", modifiers: " const&", def_value: None }]
constexpr IssuerAndSerialNumber(IssuerAndSerialNumber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuerAndSerialNumber", modifiers: "&&", def_value: None }]
constexpr IssuerAndSerialNumber(IssuerAndSerialNumber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IssuerAndSerialNumber(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr IssuerAndSerialNumber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IssuerAndSerialNumber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IssuerAndSerialNumber& operator=(IssuerAndSerialNumber&& o) noexcept = default;
  constexpr IssuerAndSerialNumber& operator=(IssuerAndSerialNumber const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Name __get_name() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_serialNumber() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Name))  Name;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_SerialNumber))  SerialNumber;


// Methods

/// @brief Method GetInstance addr 0xdeb2fc size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit IssuerAndSerialNumber(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdeb3a0 size 0x118 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "serialNumber", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit IssuerAndSerialNumber(::Org::BouncyCastle::Asn1::X509::X509Name name, ::Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method .ctor addr 0xdeb4b8 size 0x84 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name name, ::Org::BouncyCastle::Math::BigInteger serialNumber) ;

// Ctor Parameters [CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "serialNumber", ty: "::Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }]
explicit IssuerAndSerialNumber(::Org::BouncyCastle::Asn1::X509::X509Name name, ::Org::BouncyCastle::Asn1::DerInteger serialNumber) ;

/// @brief Method .ctor addr 0xdeb53c size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name name, ::Org::BouncyCastle::Asn1::DerInteger serialNumber) ;

/// @brief Method get_Name addr 0xdeb568 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Name get_Name() ;

/// @brief Method get_SerialNumber addr 0xdeb570 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_SerialNumber() ;

/// @brief Method ToAsn1Object addr 0xdeb578 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber, "Org.BouncyCastle.Asn1.Cms", "IssuerAndSerialNumber");

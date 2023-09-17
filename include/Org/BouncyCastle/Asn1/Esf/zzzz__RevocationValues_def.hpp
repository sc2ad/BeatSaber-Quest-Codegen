#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Ocsp {
class BasicOcspResponse;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevVals;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class RevocationValues;
}
// Type: Org.BouncyCastle.Asn1.Esf::RevocationValues
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(154))
// CS Name: Org.BouncyCastle.Asn1.Esf.RevocationValues
class CORDL_TYPE RevocationValues : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RevocationValues() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationValues", modifiers: " const&", def_value: None }]
constexpr RevocationValues(RevocationValues const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationValues", modifiers: "&&", def_value: None }]
constexpr RevocationValues(RevocationValues&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevocationValues(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RevocationValues& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevocationValues& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevocationValues& operator=(RevocationValues&& o) noexcept = default;
  constexpr RevocationValues& operator=(RevocationValues const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_crlVals, put=__set_crlVals))  crlVals;

constexpr void __set_crlVals(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_crlVals() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_ocspVals, put=__set_ocspVals))  ocspVals;

constexpr void __set_ocspVals(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_ocspVals() const;

 ::Org::BouncyCastle::Asn1::Esf::OtherRevVals __declspec(property(get=__get_otherRevVals, put=__set_otherRevVals))  otherRevVals;

constexpr void __set_otherRevVals(::Org::BouncyCastle::Asn1::Esf::OtherRevVals value) ;

constexpr ::Org::BouncyCastle::Asn1::Esf::OtherRevVals __get_otherRevVals() const;


// Properties

 ::Org::BouncyCastle::Asn1::Esf::OtherRevVals __declspec(property(get=get_OtherRevVals))  OtherRevVals;


// Methods

/// @brief Method GetInstance addr 0xe08608 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::RevocationValues GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RevocationValues(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe086ac size 0xa7c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "crlVals", ty: "::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList>", modifiers: "", def_value: None }, CppParam { name: "ocspVals", ty: "::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse>", modifiers: "", def_value: None }, CppParam { name: "otherRevVals", ty: "::Org::BouncyCastle::Asn1::Esf::OtherRevVals", modifiers: "", def_value: None }]
explicit RevocationValues(::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList> crlVals, ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse> ocspVals, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals otherRevVals) ;

/// @brief Method .ctor addr 0xe09128 size 0xb8 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList> crlVals, ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse> ocspVals, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals otherRevVals) ;

// Ctor Parameters [CppParam { name: "crlVals", ty: "::System::Collections::IEnumerable", modifiers: "", def_value: None }, CppParam { name: "ocspVals", ty: "::System::Collections::IEnumerable", modifiers: "", def_value: None }, CppParam { name: "otherRevVals", ty: "::Org::BouncyCastle::Asn1::Esf::OtherRevVals", modifiers: "", def_value: None }]
explicit RevocationValues(::System::Collections::IEnumerable crlVals, ::System::Collections::IEnumerable ocspVals, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals otherRevVals) ;

/// @brief Method .ctor addr 0xe091e0 size 0x254 virtual false final false
 void _ctor(::System::Collections::IEnumerable crlVals, ::System::Collections::IEnumerable ocspVals, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals otherRevVals) ;

/// @brief Method GetCrlVals addr 0xe09434 size 0x124 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList> GetCrlVals() ;

/// @brief Method GetOcspVals addr 0xe09558 size 0x124 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse> GetOcspVals() ;

/// @brief Method get_OtherRevVals addr 0xe0967c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Esf::OtherRevVals get_OtherRevVals() ;

/// @brief Method ToAsn1Object addr 0xe09684 size 0x124 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::RevocationValues);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::RevocationValues, "Org.BouncyCastle.Asn1.Esf", "RevocationValues");

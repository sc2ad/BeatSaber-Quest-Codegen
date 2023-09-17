#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampAndCrl;
}
// Type: Org.BouncyCastle.Asn1.Cms::TimeStampAndCrl
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(98))
// CS Name: Org.BouncyCastle.Asn1.Cms.TimeStampAndCrl
class CORDL_TYPE TimeStampAndCrl : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TimeStampAndCrl() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampAndCrl", modifiers: " const&", def_value: None }]
constexpr TimeStampAndCrl(TimeStampAndCrl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampAndCrl", modifiers: "&&", def_value: None }]
constexpr TimeStampAndCrl(TimeStampAndCrl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampAndCrl(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TimeStampAndCrl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampAndCrl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampAndCrl& operator=(TimeStampAndCrl&& o) noexcept = default;
  constexpr TimeStampAndCrl& operator=(TimeStampAndCrl const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_timeStamp, put=__set_timeStamp))  timeStamp;

constexpr void __set_timeStamp(::Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo __get_timeStamp() const;

 ::Org::BouncyCastle::Asn1::X509::CertificateList __declspec(property(get=__get_crl, put=__set_crl))  crl;

constexpr void __set_crl(::Org::BouncyCastle::Asn1::X509::CertificateList value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList __get_crl() const;


// Properties

 ::Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_TimeStampToken))  TimeStampToken;

 ::Org::BouncyCastle::Asn1::X509::CertificateList __declspec(property(get=get_Crl))  Crl;


// Methods

// Ctor Parameters [CppParam { name: "timeStamp", ty: "::Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }]
explicit TimeStampAndCrl(::Org::BouncyCastle::Asn1::Cms::ContentInfo timeStamp) ;

/// @brief Method .ctor addr 0xdf3f10 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo timeStamp) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit TimeStampAndCrl(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf3f38 size 0x88 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf3fc0 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_TimeStampToken addr 0xdf4064 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cms::ContentInfo get_TimeStampToken() ;

/// @brief Method get_Crl addr 0xdf406c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::CertificateList get_Crl() ;

/// @brief Method ToAsn1Object addr 0xdf4074 size 0x148 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl, "Org.BouncyCastle.Asn1.Cms", "TimeStampAndCrl");

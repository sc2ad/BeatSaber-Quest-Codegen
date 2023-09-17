#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::X509 {
class PemParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CertificateParser;
}
// Type: Org.BouncyCastle.X509::X509CertificateParser
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1862))
// CS Name: Org.BouncyCastle.X509.X509CertificateParser
class CORDL_TYPE X509CertificateParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X509CertificateParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateParser", modifiers: " const&", def_value: None }]
constexpr X509CertificateParser(X509CertificateParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateParser", modifiers: "&&", def_value: None }]
constexpr X509CertificateParser(X509CertificateParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertificateParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CertificateParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertificateParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertificateParser& operator=(X509CertificateParser&& o) noexcept = default;
  constexpr X509CertificateParser& operator=(X509CertificateParser const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::X509::PemParser __declspec(property(get=__get_PemCertParser, put=__set_PemCertParser))  PemCertParser;

static void __set_PemCertParser(::Org::BouncyCastle::X509::PemParser value) ;

static ::Org::BouncyCastle::X509::PemParser __get_PemCertParser() ;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_sData, put=__set_sData))  sData;

constexpr void __set_sData(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_sData() const;

 int32_t __declspec(property(get=__get_sDataObjectCount, put=__set_sDataObjectCount))  sDataObjectCount;

constexpr void __set_sDataObjectCount(int32_t value) ;

constexpr int32_t __get_sDataObjectCount() const;

 ::System::IO::Stream __declspec(property(get=__get_currentStream, put=__set_currentStream))  currentStream;

constexpr void __set_currentStream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_currentStream() const;


// Methods

/// @brief Method ReadDerCertificate addr 0x10effbc size 0x218 virtual false final false
 ::Org::BouncyCastle::X509::X509Certificate ReadDerCertificate(::Org::BouncyCastle::Asn1::Asn1InputStream dIn) ;

/// @brief Method GetCertificate addr 0x10f01d4 size 0xe4 virtual false final false
 ::Org::BouncyCastle::X509::X509Certificate GetCertificate() ;

/// @brief Method ReadPemCertificate addr 0x10f02b8 size 0xa8 virtual false final false
 ::Org::BouncyCastle::X509::X509Certificate ReadPemCertificate(::System::IO::Stream inStream) ;

/// @brief Method CreateX509Certificate addr 0x10f0360 size 0x60 virtual true final false
 ::Org::BouncyCastle::X509::X509Certificate CreateX509Certificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure c) ;

/// @brief Method ReadCertificate addr 0x10f03c0 size 0x78 virtual false final false
 ::Org::BouncyCastle::X509::X509Certificate ReadCertificate(::ArrayW<uint8_t> input) ;

/// @brief Method ReadCertificates addr 0x10f071c size 0x78 virtual false final false
 ::System::Collections::ICollection ReadCertificates(::ArrayW<uint8_t> input) ;

/// @brief Method ReadCertificate addr 0x10f0438 size 0x2e4 virtual false final false
 ::Org::BouncyCastle::X509::X509Certificate ReadCertificate(::System::IO::Stream inStream) ;

/// @brief Method ReadCertificates addr 0x10f0794 size 0x110 virtual false final false
 ::System::Collections::ICollection ReadCertificates(::System::IO::Stream inStream) ;

// Ctor Parameters []
explicit X509CertificateParser() ;

/// @brief Method .ctor addr 0x10f0934 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CertificateParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CertificateParser, "Org.BouncyCastle.X509", "X509CertificateParser");

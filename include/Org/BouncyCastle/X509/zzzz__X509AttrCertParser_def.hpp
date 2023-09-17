#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::X509 {
class PemParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509AttrCertParser;
}
// Type: Org.BouncyCastle.X509::X509AttrCertParser
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1858))
// CS Name: Org.BouncyCastle.X509.X509AttrCertParser
class CORDL_TYPE X509AttrCertParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X509AttrCertParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509AttrCertParser", modifiers: " const&", def_value: None }]
constexpr X509AttrCertParser(X509AttrCertParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509AttrCertParser", modifiers: "&&", def_value: None }]
constexpr X509AttrCertParser(X509AttrCertParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509AttrCertParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509AttrCertParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509AttrCertParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509AttrCertParser& operator=(X509AttrCertParser&& o) noexcept = default;
  constexpr X509AttrCertParser& operator=(X509AttrCertParser const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::X509::PemParser __declspec(property(get=__get_PemAttrCertParser, put=__set_PemAttrCertParser))  PemAttrCertParser;

static void __set_PemAttrCertParser(::Org::BouncyCastle::X509::PemParser value) ;

static ::Org::BouncyCastle::X509::PemParser __get_PemAttrCertParser() ;

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

/// @brief Method ReadDerCertificate addr 0x10ebfb8 size 0x240 virtual false final false
 ::Org::BouncyCastle::X509::IX509AttributeCertificate ReadDerCertificate(::Org::BouncyCastle::Asn1::Asn1InputStream dIn) ;

/// @brief Method GetCertificate addr 0x10ec1f8 size 0x128 virtual false final false
 ::Org::BouncyCastle::X509::IX509AttributeCertificate GetCertificate() ;

/// @brief Method ReadPemCertificate addr 0x10ec490 size 0xbc virtual false final false
 ::Org::BouncyCastle::X509::IX509AttributeCertificate ReadPemCertificate(::System::IO::Stream inStream) ;

/// @brief Method ReadAttrCert addr 0x10ec54c size 0x78 virtual false final false
 ::Org::BouncyCastle::X509::IX509AttributeCertificate ReadAttrCert(::ArrayW<uint8_t> input) ;

/// @brief Method ReadAttrCerts addr 0x10ec8b0 size 0x78 virtual false final false
 ::System::Collections::ICollection ReadAttrCerts(::ArrayW<uint8_t> input) ;

/// @brief Method ReadAttrCert addr 0x10ec5c4 size 0x2ec virtual false final false
 ::Org::BouncyCastle::X509::IX509AttributeCertificate ReadAttrCert(::System::IO::Stream inStream) ;

/// @brief Method ReadAttrCerts addr 0x10ec928 size 0x110 virtual false final false
 ::System::Collections::ICollection ReadAttrCerts(::System::IO::Stream inStream) ;

// Ctor Parameters []
explicit X509AttrCertParser() ;

/// @brief Method .ctor addr 0x10ecac8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::X509AttrCertParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509AttrCertParser, "Org.BouncyCastle.X509", "X509AttrCertParser");

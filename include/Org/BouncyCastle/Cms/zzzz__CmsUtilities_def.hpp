#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsUtilities;
}
// Type: Org.BouncyCastle.Cms::CmsUtilities
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(664))
// CS Name: Org.BouncyCastle.Cms.CmsUtilities
class CORDL_TYPE CmsUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CmsUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsUtilities", modifiers: " const&", def_value: None }]
constexpr CmsUtilities(CmsUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsUtilities", modifiers: "&&", def_value: None }]
constexpr CmsUtilities(CmsUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsUtilities& operator=(CmsUtilities&& o) noexcept = default;
  constexpr CmsUtilities& operator=(CmsUtilities const& o) noexcept = default;
                


// Properties

static int32_t __declspec(property(get=get_MaximumMemory))  MaximumMemory;


// Methods

/// @brief Method get_MaximumMemory addr 0x1174e68 size 0x8 virtual false final false
static int32_t get_MaximumMemory() ;

/// @brief Method ReadContentInfo addr 0x115a694 size 0x64 virtual false final false
static Org::BouncyCastle::Asn1::Cms::ContentInfo ReadContentInfo(::ArrayW<uint8_t> input) ;

/// @brief Method ReadContentInfo addr 0x115a3cc size 0x68 virtual false final false
static Org::BouncyCastle::Asn1::Cms::ContentInfo ReadContentInfo(System::IO::Stream input) ;

/// @brief Method ReadContentInfo addr 0x1174e70 size 0x158 virtual false final false
static Org::BouncyCastle::Asn1::Cms::ContentInfo ReadContentInfo(Org::BouncyCastle::Asn1::Asn1InputStream aIn) ;

/// @brief Method StreamToByteArray addr 0x1174fc8 size 0x8 virtual false final false
static ::ArrayW<uint8_t> StreamToByteArray(System::IO::Stream inStream) ;

/// @brief Method StreamToByteArray addr 0x1174fd0 size 0x8 virtual false final false
static ::ArrayW<uint8_t> StreamToByteArray(System::IO::Stream inStream, int32_t limit) ;

/// @brief Method GetCertificatesFromStore addr 0x115c710 size 0x5a4 virtual false final false
static System::Collections::IList GetCertificatesFromStore(Org::BouncyCastle::X509::Store::IX509Store certStore) ;

/// @brief Method GetCrlsFromStore addr 0x115d044 size 0x5a4 virtual false final false
static System::Collections::IList GetCrlsFromStore(Org::BouncyCastle::X509::Store::IX509Store crlStore) ;

/// @brief Method CreateBerSetFromList addr 0x115ccb4 size 0x390 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Set CreateBerSetFromList(System::Collections::IList berObjects) ;

/// @brief Method CreateDerSetFromList addr 0x1161a50 size 0x390 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Set CreateDerSetFromList(System::Collections::IList derObjects) ;

/// @brief Method CreateBerOctetOutputStream addr 0x1166b78 size 0x90 virtual false final false
static System::IO::Stream CreateBerOctetOutputStream(System::IO::Stream s, int32_t tagNo, bool isExplicit, int32_t bufferSize) ;

/// @brief Method GetTbsCertificateStructure addr 0x1174fd8 size 0x30 virtual false final false
static Org::BouncyCastle::Asn1::X509::TbsCertificateStructure GetTbsCertificateStructure(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method GetIssuerAndSerialNumber addr 0x115e510 size 0x94 virtual false final false
static Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber GetIssuerAndSerialNumber(Org::BouncyCastle::X509::X509Certificate cert) ;

static Org::BouncyCastle::Cms::CmsUtilities New_ctor() ;

/// @brief Method .ctor addr 0x1175008 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsUtilities, "Org.BouncyCastle.Cms", "CmsUtilities");

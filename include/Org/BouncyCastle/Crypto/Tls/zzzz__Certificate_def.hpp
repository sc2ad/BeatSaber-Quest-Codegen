#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
// Type: Org.BouncyCastle.Crypto.Tls::Certificate
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1186))
// CS Name: Org.BouncyCastle.Crypto.Tls.Certificate
class CORDL_TYPE Certificate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Certificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "Certificate", modifiers: " const&", def_value: None }]
constexpr Certificate(Certificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Certificate", modifiers: "&&", def_value: None }]
constexpr Certificate(Certificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Certificate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Certificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Certificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Certificate& operator=(Certificate&& o) noexcept = default;
  constexpr Certificate& operator=(Certificate const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=__get_EmptyChain, put=__set_EmptyChain))  EmptyChain;

static void __set_EmptyChain(Org::BouncyCastle::Crypto::Tls::Certificate value) ;

static Org::BouncyCastle::Crypto::Tls::Certificate __get_EmptyChain() ;

 ::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> __declspec(property(get=__get_mCertificateList, put=__set_mCertificateList))  mCertificateList;

constexpr void __set_mCertificateList(::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> __get_mCertificateList() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

// Ctor Parameters [CppParam { name: "certificateList", ty: "::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure>", modifiers: "", def_value: None }]
explicit Certificate(::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> certificateList) ;

/// @brief Method .ctor addr 0xecf310 size 0x78 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> certificateList) ;

/// @brief Method GetCertificateList addr 0xecf388 size 0xc virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> GetCertificateList() ;

/// @brief Method GetCertificateAt addr 0xecf394 size 0x30 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509CertificateStructure GetCertificateAt(int32_t index) ;

/// @brief Method get_Length addr 0xecf3c4 size 0x1c virtual true final false
 int32_t get_Length() ;

/// @brief Method get_IsEmpty addr 0xecf3e0 size 0x24 virtual true final false
 bool get_IsEmpty() ;

/// @brief Method Encode addr 0xecf404 size 0x4c4 virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xecf8c8 size 0x45c virtual false final false
static Org::BouncyCastle::Crypto::Tls::Certificate Parse(System::IO::Stream input) ;

/// @brief Method CloneCertificateList addr 0xecfd24 size 0x78 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> CloneCertificateList() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Certificate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Certificate, "Org.BouncyCastle.Crypto.Tls", "Certificate");

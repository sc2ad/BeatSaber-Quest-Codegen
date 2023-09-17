#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
// Type: Org.BouncyCastle.Crypto.Tls::CertificateRequest
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1187))
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateRequest
class CORDL_TYPE CertificateRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CertificateRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequest", modifiers: " const&", def_value: None }]
constexpr CertificateRequest(CertificateRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequest", modifiers: "&&", def_value: None }]
constexpr CertificateRequest(CertificateRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateRequest& operator=(CertificateRequest&& o) noexcept = default;
  constexpr CertificateRequest& operator=(CertificateRequest const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_mCertificateTypes, put=__set_mCertificateTypes))  mCertificateTypes;

constexpr void __set_mCertificateTypes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mCertificateTypes() const;

 ::System::Collections::IList __declspec(property(get=__get_mSupportedSignatureAlgorithms, put=__set_mSupportedSignatureAlgorithms))  mSupportedSignatureAlgorithms;

constexpr void __set_mSupportedSignatureAlgorithms(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_mSupportedSignatureAlgorithms() const;

 ::System::Collections::IList __declspec(property(get=__get_mCertificateAuthorities, put=__set_mCertificateAuthorities))  mCertificateAuthorities;

constexpr void __set_mCertificateAuthorities(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_mCertificateAuthorities() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_CertificateTypes))  CertificateTypes;

 ::System::Collections::IList __declspec(property(get=get_SupportedSignatureAlgorithms))  SupportedSignatureAlgorithms;

 ::System::Collections::IList __declspec(property(get=get_CertificateAuthorities))  CertificateAuthorities;


// Methods

// Ctor Parameters [CppParam { name: "certificateTypes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "certificateAuthorities", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit CertificateRequest(::ArrayW<uint8_t> certificateTypes, ::System::Collections::IList supportedSignatureAlgorithms, ::System::Collections::IList certificateAuthorities) ;

/// @brief Method .ctor addr 0xecfe28 size 0x3c virtual false final false
 void _ctor(::ArrayW<uint8_t> certificateTypes, ::System::Collections::IList supportedSignatureAlgorithms, ::System::Collections::IList certificateAuthorities) ;

/// @brief Method get_CertificateTypes addr 0xecfe64 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_CertificateTypes() ;

/// @brief Method get_SupportedSignatureAlgorithms addr 0xecfe6c size 0x8 virtual true final false
 ::System::Collections::IList get_SupportedSignatureAlgorithms() ;

/// @brief Method get_CertificateAuthorities addr 0xecfe74 size 0x8 virtual true final false
 ::System::Collections::IList get_CertificateAuthorities() ;

/// @brief Method Encode addr 0xecfe7c size 0x920 virtual true final false
 void Encode(::System::IO::Stream output) ;

/// @brief Method Parse addr 0xed079c size 0x304 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::CertificateRequest Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateRequest, "Org.BouncyCastle.Crypto.Tls", "CertificateRequest");

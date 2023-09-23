#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
// Type: ::Builder
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1272))
// CS Name: Org.BouncyCastle.Crypto.Tls.SessionParameters::Builder
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder(Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder(Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder& operator=(Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder& operator=(Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_mCipherSuite, put=__set_mCipherSuite))  mCipherSuite;

constexpr void __set_mCipherSuite(int32_t value) ;

constexpr int32_t __get_mCipherSuite() const;

 int16_t __declspec(property(get=__get_mCompressionAlgorithm, put=__set_mCompressionAlgorithm))  mCompressionAlgorithm;

constexpr void __set_mCompressionAlgorithm(int16_t value) ;

constexpr int16_t __get_mCompressionAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mMasterSecret, put=__set_mMasterSecret))  mMasterSecret;

constexpr void __set_mMasterSecret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mMasterSecret() const;

 Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=__get_mPeerCertificate, put=__set_mPeerCertificate))  mPeerCertificate;

constexpr void __set_mPeerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Certificate __get_mPeerCertificate() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPskIdentity, put=__set_mPskIdentity))  mPskIdentity;

constexpr void __set_mPskIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPskIdentity() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSrpIdentity, put=__set_mSrpIdentity))  mSrpIdentity;

constexpr void __set_mSrpIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSrpIdentity() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mEncodedServerExtensions, put=__set_mEncodedServerExtensions))  mEncodedServerExtensions;

constexpr void __set_mEncodedServerExtensions(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mEncodedServerExtensions() const;

 bool __declspec(property(get=__get_mExtendedMasterSecret, put=__set_mExtendedMasterSecret))  mExtendedMasterSecret;

constexpr void __set_mExtendedMasterSecret(bool value) ;

constexpr bool __get_mExtendedMasterSecret() const;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder() ;

/// @brief Method .ctor addr 0xf0911c size 0x28 virtual false final false
 void _ctor() ;

/// @brief Method Build addr 0xf09144 size 0x13c virtual false final false
 Org::BouncyCastle::Crypto::Tls::SessionParameters Build() ;

/// @brief Method SetCipherSuite addr 0xf09308 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder SetCipherSuite(int32_t cipherSuite) ;

/// @brief Method SetCompressionAlgorithm addr 0xf09310 size 0xc virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder SetCompressionAlgorithm(uint8_t compressionAlgorithm) ;

/// @brief Method SetExtendedMasterSecret addr 0xf0931c size 0xc virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder SetExtendedMasterSecret(bool extendedMasterSecret) ;

/// @brief Method SetMasterSecret addr 0xf09328 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder SetMasterSecret(::ArrayW<uint8_t> masterSecret) ;

/// @brief Method SetPeerCertificate addr 0xf09330 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder SetPeerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate peerCertificate) ;

/// @brief Method SetPskIdentity addr 0xf09338 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder SetPskIdentity(::ArrayW<uint8_t> pskIdentity) ;

/// @brief Method SetSrpIdentity addr 0xf09340 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder SetSrpIdentity(::ArrayW<uint8_t> srpIdentity) ;

/// @brief Method SetServerExtensions addr 0xf09348 size 0x94 virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder SetServerExtensions(System::Collections::IDictionary serverExtensions) ;

/// @brief Method Validate addr 0xf09280 size 0x88 virtual false final false
 void Validate(bool condition, ::StringW parameter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::SessionParameters
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1273))
// CS Name: Org.BouncyCastle.Crypto.Tls.SessionParameters
class CORDL_TYPE SessionParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Builder = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SessionParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "SessionParameters", modifiers: " const&", def_value: None }]
constexpr SessionParameters(SessionParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SessionParameters", modifiers: "&&", def_value: None }]
constexpr SessionParameters(SessionParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SessionParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SessionParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SessionParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SessionParameters& operator=(SessionParameters&& o) noexcept = default;
  constexpr SessionParameters& operator=(SessionParameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_mCipherSuite, put=__set_mCipherSuite))  mCipherSuite;

constexpr void __set_mCipherSuite(int32_t value) ;

constexpr int32_t __get_mCipherSuite() const;

 uint8_t __declspec(property(get=__get_mCompressionAlgorithm, put=__set_mCompressionAlgorithm))  mCompressionAlgorithm;

constexpr void __set_mCompressionAlgorithm(uint8_t value) ;

constexpr uint8_t __get_mCompressionAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mMasterSecret, put=__set_mMasterSecret))  mMasterSecret;

constexpr void __set_mMasterSecret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mMasterSecret() const;

 Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=__get_mPeerCertificate, put=__set_mPeerCertificate))  mPeerCertificate;

constexpr void __set_mPeerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Certificate __get_mPeerCertificate() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPskIdentity, put=__set_mPskIdentity))  mPskIdentity;

constexpr void __set_mPskIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPskIdentity() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSrpIdentity, put=__set_mSrpIdentity))  mSrpIdentity;

constexpr void __set_mSrpIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSrpIdentity() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mEncodedServerExtensions, put=__set_mEncodedServerExtensions))  mEncodedServerExtensions;

constexpr void __set_mEncodedServerExtensions(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mEncodedServerExtensions() const;

 bool __declspec(property(get=__get_mExtendedMasterSecret, put=__set_mExtendedMasterSecret))  mExtendedMasterSecret;

constexpr void __set_mExtendedMasterSecret(bool value) ;

constexpr bool __get_mExtendedMasterSecret() const;


// Properties

 int32_t __declspec(property(get=get_CipherSuite))  CipherSuite;

 uint8_t __declspec(property(get=get_CompressionAlgorithm))  CompressionAlgorithm;

 bool __declspec(property(get=get_IsExtendedMasterSecret))  IsExtendedMasterSecret;

 ::ArrayW<uint8_t> __declspec(property(get=get_MasterSecret))  MasterSecret;

 Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=get_PeerCertificate))  PeerCertificate;

 ::ArrayW<uint8_t> __declspec(property(get=get_PskIdentity))  PskIdentity;

 ::ArrayW<uint8_t> __declspec(property(get=get_SrpIdentity))  SrpIdentity;


// Methods

// Ctor Parameters [CppParam { name: "cipherSuite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "compressionAlgorithm", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "masterSecret", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "peerCertificate", ty: "Org::BouncyCastle::Crypto::Tls::Certificate", modifiers: "", def_value: None }, CppParam { name: "pskIdentity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "srpIdentity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "encodedServerExtensions", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "extendedMasterSecret", ty: "bool", modifiers: "", def_value: None }]
explicit SessionParameters(int32_t cipherSuite, uint8_t compressionAlgorithm, ::ArrayW<uint8_t> masterSecret, Org::BouncyCastle::Crypto::Tls::Certificate peerCertificate, ::ArrayW<uint8_t> pskIdentity, ::ArrayW<uint8_t> srpIdentity, ::ArrayW<uint8_t> encodedServerExtensions, bool extendedMasterSecret) ;

/// @brief Method .ctor addr 0xf08b4c size 0xdc virtual false final false
 void _ctor(int32_t cipherSuite, uint8_t compressionAlgorithm, ::ArrayW<uint8_t> masterSecret, Org::BouncyCastle::Crypto::Tls::Certificate peerCertificate, ::ArrayW<uint8_t> pskIdentity, ::ArrayW<uint8_t> srpIdentity, ::ArrayW<uint8_t> encodedServerExtensions, bool extendedMasterSecret) ;

/// @brief Method Clear addr 0xf08c28 size 0x70 virtual false final false
 void Clear() ;

/// @brief Method Copy addr 0xf08c98 size 0xc4 virtual false final false
 Org::BouncyCastle::Crypto::Tls::SessionParameters Copy() ;

/// @brief Method get_CipherSuite addr 0xf08d5c size 0x8 virtual false final false
 int32_t get_CipherSuite() ;

/// @brief Method get_CompressionAlgorithm addr 0xf08d64 size 0x8 virtual false final false
 uint8_t get_CompressionAlgorithm() ;

/// @brief Method get_IsExtendedMasterSecret addr 0xf08d6c size 0x8 virtual false final false
 bool get_IsExtendedMasterSecret() ;

/// @brief Method get_MasterSecret addr 0xf08d74 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_MasterSecret() ;

/// @brief Method get_PeerCertificate addr 0xf08d7c size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Tls::Certificate get_PeerCertificate() ;

/// @brief Method get_PskIdentity addr 0xf08d84 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_PskIdentity() ;

/// @brief Method get_SrpIdentity addr 0xf08d8c size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_SrpIdentity() ;

/// @brief Method ReadServerExtensions addr 0xf08d94 size 0x80 virtual false final false
 System::Collections::IDictionary ReadServerExtensions() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder, "Org.BouncyCastle.Crypto.Tls", "SessionParameters/Builder");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::SessionParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::SessionParameters, "Org.BouncyCastle.Crypto.Tls", "SessionParameters");

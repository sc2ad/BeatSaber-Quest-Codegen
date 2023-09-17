#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
// Type: Org.BouncyCastle.Crypto.Tls::SecurityParameters
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1266))
// CS Name: Org.BouncyCastle.Crypto.Tls.SecurityParameters
class CORDL_TYPE SecurityParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~SecurityParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityParameters", modifiers: " const&", def_value: None }]
constexpr SecurityParameters(SecurityParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityParameters", modifiers: "&&", def_value: None }]
constexpr SecurityParameters(SecurityParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecurityParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityParameters& operator=(SecurityParameters&& o) noexcept = default;
  constexpr SecurityParameters& operator=(SecurityParameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_entity, put=__set_entity))  entity;

constexpr void __set_entity(int32_t value) ;

constexpr int32_t __get_entity() const;

 int32_t __declspec(property(get=__get_cipherSuite, put=__set_cipherSuite))  cipherSuite;

constexpr void __set_cipherSuite(int32_t value) ;

constexpr int32_t __get_cipherSuite() const;

 uint8_t __declspec(property(get=__get_compressionAlgorithm, put=__set_compressionAlgorithm))  compressionAlgorithm;

constexpr void __set_compressionAlgorithm(uint8_t value) ;

constexpr uint8_t __get_compressionAlgorithm() const;

 int32_t __declspec(property(get=__get_prfAlgorithm, put=__set_prfAlgorithm))  prfAlgorithm;

constexpr void __set_prfAlgorithm(int32_t value) ;

constexpr int32_t __get_prfAlgorithm() const;

 int32_t __declspec(property(get=__get_verifyDataLength, put=__set_verifyDataLength))  verifyDataLength;

constexpr void __set_verifyDataLength(int32_t value) ;

constexpr int32_t __get_verifyDataLength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_masterSecret, put=__set_masterSecret))  masterSecret;

constexpr void __set_masterSecret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_masterSecret() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientRandom, put=__set_clientRandom))  clientRandom;

constexpr void __set_clientRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serverRandom, put=__set_serverRandom))  serverRandom;

constexpr void __set_serverRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serverRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_sessionHash, put=__set_sessionHash))  sessionHash;

constexpr void __set_sessionHash(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sessionHash() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_pskIdentity, put=__set_pskIdentity))  pskIdentity;

constexpr void __set_pskIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_pskIdentity() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_srpIdentity, put=__set_srpIdentity))  srpIdentity;

constexpr void __set_srpIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_srpIdentity() const;

 int16_t __declspec(property(get=__get_maxFragmentLength, put=__set_maxFragmentLength))  maxFragmentLength;

constexpr void __set_maxFragmentLength(int16_t value) ;

constexpr int16_t __get_maxFragmentLength() const;

 bool __declspec(property(get=__get_truncatedHMac, put=__set_truncatedHMac))  truncatedHMac;

constexpr void __set_truncatedHMac(bool value) ;

constexpr bool __get_truncatedHMac() const;

 bool __declspec(property(get=__get_encryptThenMac, put=__set_encryptThenMac))  encryptThenMac;

constexpr void __set_encryptThenMac(bool value) ;

constexpr bool __get_encryptThenMac() const;

 bool __declspec(property(get=__get_extendedMasterSecret, put=__set_extendedMasterSecret))  extendedMasterSecret;

constexpr void __set_extendedMasterSecret(bool value) ;

constexpr bool __get_extendedMasterSecret() const;


// Properties

 int32_t __declspec(property(get=get_Entity))  Entity;

 int32_t __declspec(property(get=get_CipherSuite))  CipherSuite;

 uint8_t __declspec(property(get=get_CompressionAlgorithm))  CompressionAlgorithm;

 int32_t __declspec(property(get=get_PrfAlgorithm))  PrfAlgorithm;

 int32_t __declspec(property(get=get_VerifyDataLength))  VerifyDataLength;

 ::ArrayW<uint8_t> __declspec(property(get=get_MasterSecret))  MasterSecret;

 ::ArrayW<uint8_t> __declspec(property(get=get_ClientRandom))  ClientRandom;

 ::ArrayW<uint8_t> __declspec(property(get=get_ServerRandom))  ServerRandom;

 ::ArrayW<uint8_t> __declspec(property(get=get_SessionHash))  SessionHash;

 ::ArrayW<uint8_t> __declspec(property(get=get_PskIdentity))  PskIdentity;

 ::ArrayW<uint8_t> __declspec(property(get=get_SrpIdentity))  SrpIdentity;

 bool __declspec(property(get=get_IsExtendedMasterSecret))  IsExtendedMasterSecret;


// Methods

/// @brief Method Clear addr 0xf07b0c size 0x6c virtual true final false
 void Clear() ;

/// @brief Method get_Entity addr 0xf07b78 size 0x8 virtual true final false
 int32_t get_Entity() ;

/// @brief Method get_CipherSuite addr 0xf07b80 size 0x8 virtual true final false
 int32_t get_CipherSuite() ;

/// @brief Method get_CompressionAlgorithm addr 0xf07b88 size 0x8 virtual true final false
 uint8_t get_CompressionAlgorithm() ;

/// @brief Method get_PrfAlgorithm addr 0xf07b90 size 0x8 virtual true final false
 int32_t get_PrfAlgorithm() ;

/// @brief Method get_VerifyDataLength addr 0xf07b98 size 0x8 virtual true final false
 int32_t get_VerifyDataLength() ;

/// @brief Method get_MasterSecret addr 0xf07ba0 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_MasterSecret() ;

/// @brief Method get_ClientRandom addr 0xf07ba8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_ClientRandom() ;

/// @brief Method get_ServerRandom addr 0xf07bb0 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_ServerRandom() ;

/// @brief Method get_SessionHash addr 0xf07bb8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_SessionHash() ;

/// @brief Method get_PskIdentity addr 0xf07bc0 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_PskIdentity() ;

/// @brief Method get_SrpIdentity addr 0xf07bc8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_SrpIdentity() ;

/// @brief Method get_IsExtendedMasterSecret addr 0xf07bd0 size 0x8 virtual true final false
 bool get_IsExtendedMasterSecret() ;

// Ctor Parameters []
explicit SecurityParameters() ;

/// @brief Method .ctor addr 0xf07bd8 size 0x34 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SecurityParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, "Org.BouncyCastle.Crypto.Tls", "SecurityParameters");

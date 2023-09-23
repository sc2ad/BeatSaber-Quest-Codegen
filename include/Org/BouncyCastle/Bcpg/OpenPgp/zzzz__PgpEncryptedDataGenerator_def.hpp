#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
namespace Org::BouncyCastle::Crypto::IO {
class DigestStream;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataGenerator;
}
// Type: ::EncMethod
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1639))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator::EncMethod
class CORDL_TYPE Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod : public Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod(void* ptr) noexcept : Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod&& o) noexcept = default;
  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_sessionInfo, put=__set_sessionInfo))  sessionInfo;

constexpr void __set_sessionInfo(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sessionInfo() const;

 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=__get_encAlgorithm, put=__set_encAlgorithm))  encAlgorithm;

constexpr void __set_encAlgorithm(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __get_encAlgorithm() const;

 Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_key() const;


// Methods

/// @brief Method AddSessionInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddSessionInfo(::ArrayW<uint8_t> si, Org::BouncyCastle::Security::SecureRandom random) ;

// Ctor Parameters []
explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod() ;

/// @brief Method .ctor addr 0x101f468 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
// Type: ::PbeMethod
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1640))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator::PbeMethod
class CORDL_TYPE Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod : public Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod(ptr) {
}


  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod&& o) noexcept = default;
  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::S2k __declspec(property(get=__get_s2k, put=__set_s2k))  s2k;

constexpr void __set_s2k(Org::BouncyCastle::Bcpg::S2k value) ;

constexpr Org::BouncyCastle::Bcpg::S2k __get_s2k() const;


// Methods

// Ctor Parameters [CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "s2k", ty: "Org::BouncyCastle::Bcpg::S2k", modifiers: "", def_value: None }, CppParam { name: "key", ty: "Org::BouncyCastle::Crypto::Parameters::KeyParameter", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::S2k s2k, Org::BouncyCastle::Crypto::Parameters::KeyParameter key) ;

/// @brief Method .ctor addr 0x101def4 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::S2k s2k, Org::BouncyCastle::Crypto::Parameters::KeyParameter key) ;

/// @brief Method GetKey addr 0x101f470 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter GetKey() ;

/// @brief Method AddSessionInfo addr 0x101f478 size 0x2a0 virtual true final false
 void AddSessionInfo(::ArrayW<uint8_t> si, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Encode addr 0x101f718 size 0x98 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream pOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
// Type: ::PubMethod
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1641))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator::PubMethod
class CORDL_TYPE Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod : public Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod(ptr) {
}


  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod&& o) noexcept = default;
  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey __declspec(property(get=__get_pubKey, put=__set_pubKey))  pubKey;

constexpr void __set_pubKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey value) ;

constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey __get_pubKey() const;

 bool __declspec(property(get=__get_sessionKeyObfuscation, put=__set_sessionKeyObfuscation))  sessionKeyObfuscation;

constexpr void __set_sessionKeyObfuscation(bool value) ;

constexpr bool __get_sessionKeyObfuscation() const;

 ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<::ArrayW<uint8_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint8_t>> __get_data() const;


// Methods

// Ctor Parameters [CppParam { name: "pubKey", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey", modifiers: "", def_value: None }, CppParam { name: "sessionKeyObfuscation", ty: "bool", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey, bool sessionKeyObfuscation) ;

/// @brief Method .ctor addr 0x101e0d8 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey, bool sessionKeyObfuscation) ;

/// @brief Method AddSessionInfo addr 0x101f7b0 size 0x24 virtual true final false
 void AddSessionInfo(::ArrayW<uint8_t> sessionInfo, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method EncryptSessionInfo addr 0x101f7d4 size 0x94c virtual false final false
 ::ArrayW<uint8_t> EncryptSessionInfo(::ArrayW<uint8_t> sessionInfo, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method ProcessSessionInfo addr 0x1020120 size 0x294 virtual false final false
 ::ArrayW<::ArrayW<uint8_t>> ProcessSessionInfo(::ArrayW<uint8_t> encryptedSessionInfo) ;

/// @brief Method ConvertToEncodedMpi addr 0x1020a68 size 0x1a0 virtual false final false
 ::ArrayW<uint8_t> ConvertToEncodedMpi(::ArrayW<uint8_t> encryptedSessionInfo) ;

/// @brief Method Encode addr 0x1020c08 size 0xb0 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream pOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedDataGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1642))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator
class CORDL_TYPE PgpEncryptedDataGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PubMethod = Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod;

using PbeMethod = Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod;

using EncMethod = Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod;

/// @brief Convert operator to Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator
constexpr operator  Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PgpEncryptedDataGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator", modifiers: " const&", def_value: None }]
constexpr PgpEncryptedDataGenerator(PgpEncryptedDataGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator", modifiers: "&&", def_value: None }]
constexpr PgpEncryptedDataGenerator(PgpEncryptedDataGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpEncryptedDataGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpEncryptedDataGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpEncryptedDataGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpEncryptedDataGenerator& operator=(PgpEncryptedDataGenerator&& o) noexcept = default;
  constexpr PgpEncryptedDataGenerator& operator=(PgpEncryptedDataGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::BcpgOutputStream __declspec(property(get=__get_pOut, put=__set_pOut))  pOut;

constexpr void __set_pOut(Org::BouncyCastle::Bcpg::BcpgOutputStream value) ;

constexpr Org::BouncyCastle::Bcpg::BcpgOutputStream __get_pOut() const;

 Org::BouncyCastle::Crypto::IO::CipherStream __declspec(property(get=__get_cOut, put=__set_cOut))  cOut;

constexpr void __set_cOut(Org::BouncyCastle::Crypto::IO::CipherStream value) ;

constexpr Org::BouncyCastle::Crypto::IO::CipherStream __get_cOut() const;

 Org::BouncyCastle::Crypto::IBufferedCipher __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(Org::BouncyCastle::Crypto::IBufferedCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBufferedCipher __get_c() const;

 bool __declspec(property(get=__get_withIntegrityPacket, put=__set_withIntegrityPacket))  withIntegrityPacket;

constexpr void __set_withIntegrityPacket(bool value) ;

constexpr bool __get_withIntegrityPacket() const;

 bool __declspec(property(get=__get_oldFormat, put=__set_oldFormat))  oldFormat;

constexpr void __set_oldFormat(bool value) ;

constexpr bool __get_oldFormat() const;

 Org::BouncyCastle::Crypto::IO::DigestStream __declspec(property(get=__get_digestOut, put=__set_digestOut))  digestOut;

constexpr void __set_digestOut(Org::BouncyCastle::Crypto::IO::DigestStream value) ;

constexpr Org::BouncyCastle::Crypto::IO::DigestStream __get_digestOut() const;

 System::Collections::IList __declspec(property(get=__get_methods, put=__set_methods))  methods;

constexpr void __set_methods(System::Collections::IList value) ;

constexpr System::Collections::IList __get_methods() const;

 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=__get_defAlgorithm, put=__set_defAlgorithm))  defAlgorithm;

constexpr void __set_defAlgorithm(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __get_defAlgorithm() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_rand, put=__set_rand))  rand;

constexpr void __set_rand(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_rand() const;


// Methods

// Ctor Parameters [CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }]
explicit PgpEncryptedDataGenerator(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm) ;

/// @brief Method .ctor addr 0x101da08 size 0xac virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm) ;

// Ctor Parameters [CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "withIntegrityPacket", ty: "bool", modifiers: "", def_value: None }]
explicit PgpEncryptedDataGenerator(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket) ;

/// @brief Method .ctor addr 0x101dab4 size 0xb4 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket) ;

// Ctor Parameters [CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpEncryptedDataGenerator(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x101db68 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "withIntegrityPacket", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpEncryptedDataGenerator(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x101dbe8 size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "oldFormat", ty: "bool", modifiers: "", def_value: None }]
explicit PgpEncryptedDataGenerator(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Security::SecureRandom rand, bool oldFormat) ;

/// @brief Method .ctor addr 0x101dc78 size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Security::SecureRandom rand, bool oldFormat) ;

/// @brief Method AddMethod addr 0x101dd08 size 0x30 virtual false final false
 void AddMethod(::ArrayW<char16_t> passPhrase) ;

/// @brief Method AddMethod addr 0x101dd38 size 0x3c virtual false final false
 void AddMethod(::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest) ;

/// @brief Method AddMethodUtf8 addr 0x101dea8 size 0x40 virtual false final false
 void AddMethodUtf8(::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest) ;

/// @brief Method AddMethodRaw addr 0x101dee8 size 0xc virtual false final false
 void AddMethodRaw(::ArrayW<uint8_t> rawPassPhrase, Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest) ;

/// @brief Method DoAddMethod addr 0x101dd74 size 0x134 virtual false final false
 void DoAddMethod(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest) ;

/// @brief Method AddMethod addr 0x101df30 size 0x8 virtual false final false
 void AddMethod(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key) ;

/// @brief Method AddMethod addr 0x101df38 size 0x14c virtual false final false
 void AddMethod(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, bool sessionKeyObfuscation) ;

/// @brief Method AddCheckSum addr 0x101e108 size 0x90 virtual false final false
 void AddCheckSum(::ArrayW<uint8_t> sessionInfo) ;

/// @brief Method CreateSessionInfo addr 0x101e198 size 0xa8 virtual false final false
 ::ArrayW<uint8_t> CreateSessionInfo(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::Parameters::KeyParameter key) ;

/// @brief Method Open addr 0x101e240 size 0xf50 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, int64_t length, ::ArrayW<uint8_t> buffer) ;

/// @brief Method Open addr 0x101f190 size 0x8 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, int64_t length) ;

/// @brief Method Open addr 0x101f198 size 0xc virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, ::ArrayW<uint8_t> buffer) ;

/// @brief Method Close addr 0x101f1a4 size 0x2c4 virtual true final true
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__EncMethod, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator/EncMethod");
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PbeMethod, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator/PbeMethod");
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedDataGenerator__PubMethod, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator/PubMethod");
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator");

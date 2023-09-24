#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyEncSessionPacket;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyEncryptedData;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKeyEncryptedData
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1660))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPublicKeyEncryptedData
class CORDL_TYPE PgpPublicKeyEncryptedData : public Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PgpPublicKeyEncryptedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyEncryptedData", modifiers: " const&", def_value: None }]
constexpr PgpPublicKeyEncryptedData(PgpPublicKeyEncryptedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyEncryptedData", modifiers: "&&", def_value: None }]
constexpr PgpPublicKeyEncryptedData(PgpPublicKeyEncryptedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpPublicKeyEncryptedData(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData(ptr) {
}


  constexpr PgpPublicKeyEncryptedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpPublicKeyEncryptedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpPublicKeyEncryptedData& operator=(PgpPublicKeyEncryptedData&& o) noexcept = default;
  constexpr PgpPublicKeyEncryptedData& operator=(PgpPublicKeyEncryptedData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket __declspec(property(get=__get_keyData, put=__set_keyData))  keyData;

constexpr void __set_keyData(Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket value) ;

constexpr Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket __get_keyData() const;


// Properties

 int64_t __declspec(property(get=get_KeyId))  KeyId;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData New_ctor(Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket keyData, Org::BouncyCastle::Bcpg::InputStreamPacket encData) ;

/// @brief Method .ctor addr 0x102c410 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket keyData, Org::BouncyCastle::Bcpg::InputStreamPacket encData) ;

/// @brief Method GetKeyCipher addr 0x102c43c size 0x248 virtual false final false
static Org::BouncyCastle::Crypto::IBufferedCipher GetKeyCipher(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm) ;

/// @brief Method ConfirmCheckSum addr 0x102c684 size 0x98 virtual false final false
 bool ConfirmCheckSum(::ArrayW<uint8_t> sessionInfo) ;

/// @brief Method get_KeyId addr 0x102c71c size 0x1c virtual false final false
 int64_t get_KeyId() ;

/// @brief Method GetSymmetricAlgorithm addr 0x102c738 size 0x28 virtual false final false
 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag GetSymmetricAlgorithm(Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey) ;

/// @brief Method GetDataStream addr 0x102cf28 size 0x78c virtual false final false
 System::IO::Stream GetDataStream(Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey) ;

/// @brief Method RecoverSessionData addr 0x102c760 size 0x7c8 virtual false final false
 ::ArrayW<uint8_t> RecoverSessionData(Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey) ;

/// @brief Method ProcessEncodedMpi addr 0x102dbb0 size 0x190 virtual false final false
static void ProcessEncodedMpi(Org::BouncyCastle::Crypto::IBufferedCipher cipher, int32_t size, ::ArrayW<uint8_t> mpiEnc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKeyEncryptedData");

#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class SymmetricKeyEncSessionPacket;
}
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPbeEncryptedData;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPbeEncryptedData
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1657))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPbeEncryptedData
class CORDL_TYPE PgpPbeEncryptedData : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PgpPbeEncryptedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPbeEncryptedData", modifiers: " const&", def_value: None }]
constexpr PgpPbeEncryptedData(PgpPbeEncryptedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPbeEncryptedData", modifiers: "&&", def_value: None }]
constexpr PgpPbeEncryptedData(PgpPbeEncryptedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpPbeEncryptedData(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData(ptr) {
}


  constexpr PgpPbeEncryptedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpPbeEncryptedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpPbeEncryptedData& operator=(PgpPbeEncryptedData&& o) noexcept = default;
  constexpr PgpPbeEncryptedData& operator=(PgpPbeEncryptedData const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket __declspec(property(get=__get_keyData, put=__set_keyData))  keyData;

constexpr void __set_keyData(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket value) ;

constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket __get_keyData() const;


// Methods

// Ctor Parameters [CppParam { name: "keyData", ty: "::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket", modifiers: "", def_value: None }, CppParam { name: "encData", ty: "::Org::BouncyCastle::Bcpg::InputStreamPacket", modifiers: "", def_value: None }]
explicit PgpPbeEncryptedData(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket encData) ;

/// @brief Method .ctor addr 0x1021214 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket encData) ;

/// @brief Method GetInputStream addr 0x10261f4 size 0x1c virtual true final false
 ::System::IO::Stream GetInputStream() ;

/// @brief Method GetDataStream addr 0x1026210 size 0x2c virtual false final false
 ::System::IO::Stream GetDataStream(::ArrayW<char16_t> passPhrase) ;

/// @brief Method GetDataStreamUtf8 addr 0x1026b0c size 0x30 virtual false final false
 ::System::IO::Stream GetDataStreamUtf8(::ArrayW<char16_t> passPhrase) ;

/// @brief Method GetDataStreamRaw addr 0x1026b3c size 0x8 virtual false final false
 ::System::IO::Stream GetDataStreamRaw(::ArrayW<uint8_t> rawPassPhrase) ;

/// @brief Method DoGetDataStream addr 0x102623c size 0x8d0 virtual false final false
 ::System::IO::Stream DoGetDataStream(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase) ;

/// @brief Method CreateStreamCipher addr 0x1026b44 size 0x134 virtual false final false
 ::Org::BouncyCastle::Crypto::IBufferedCipher CreateStreamCipher(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag keyAlgorithm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPbeEncryptedData");

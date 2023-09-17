#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeUtilities;
}
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeUtilities
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(720))
// CS Name: Org.BouncyCastle.Crypto.Agreement.JPake.JPakeUtilities
class CORDL_TYPE JPakeUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JPakeUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeUtilities", modifiers: " const&", def_value: None }]
constexpr JPakeUtilities(JPakeUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakeUtilities", modifiers: "&&", def_value: None }]
constexpr JPakeUtilities(JPakeUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPakeUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JPakeUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPakeUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPakeUtilities& operator=(JPakeUtilities&& o) noexcept = default;
  constexpr JPakeUtilities& operator=(JPakeUtilities const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Zero, put=__set_Zero))  Zero;

static void __set_Zero(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_Zero() ;

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_One, put=__set_One))  One;

static void __set_One(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_One() ;


// Methods

/// @brief Method GenerateX1 addr 0x1188554 size 0x8c virtual false final false
static ::Org::BouncyCastle::Math::BigInteger GenerateX1(::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method GenerateX2 addr 0x11885e0 size 0x90 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger GenerateX2(::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CalculateS addr 0x1189200 size 0x8c virtual false final false
static ::Org::BouncyCastle::Math::BigInteger CalculateS(::ArrayW<char16_t> password) ;

/// @brief Method CalculateGx addr 0x1188670 size 0x24 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger CalculateGx(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method CalculateGA addr 0x11891b0 size 0x50 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger CalculateGA(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger gx1, ::Org::BouncyCastle::Math::BigInteger gx3, ::Org::BouncyCastle::Math::BigInteger gx4) ;

/// @brief Method CalculateX2s addr 0x118928c size 0x34 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger CalculateX2s(::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger x2, ::Org::BouncyCastle::Math::BigInteger s) ;

/// @brief Method CalculateA addr 0x11892c0 size 0x24 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger CalculateA(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger gA, ::Org::BouncyCastle::Math::BigInteger x2s) ;

/// @brief Method CalculateZeroKnowledgeProof addr 0x1188694 size 0x1c4 virtual false final false
static ::ArrayW<::Org::BouncyCastle::Math::BigInteger> CalculateZeroKnowledgeProof(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger gx, ::Org::BouncyCastle::Math::BigInteger x, ::StringW participantId, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CalculateHashForZeroKnowledgeProof addr 0x118aa74 size 0x184 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger CalculateHashForZeroKnowledgeProof(::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger gr, ::Org::BouncyCastle::Math::BigInteger gx, ::StringW participantId, ::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method ValidateGx4 addr 0x1188cd0 size 0xc4 virtual false final false
static void ValidateGx4(::Org::BouncyCastle::Math::BigInteger gx4) ;

/// @brief Method ValidateGa addr 0x11897cc size 0xc4 virtual false final false
static void ValidateGa(::Org::BouncyCastle::Math::BigInteger ga) ;

/// @brief Method ValidateZeroKnowledgeProof addr 0x1188d94 size 0x1f8 virtual false final false
static void ValidateZeroKnowledgeProof(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger gx, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> zeroKnowledgeProof, ::StringW participantId, ::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method CalculateKeyingMaterial addr 0x1189a2c size 0x9c virtual false final false
static ::Org::BouncyCastle::Math::BigInteger CalculateKeyingMaterial(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger gx4, ::Org::BouncyCastle::Math::BigInteger x2, ::Org::BouncyCastle::Math::BigInteger s, ::Org::BouncyCastle::Math::BigInteger B) ;

/// @brief Method ValidateParticipantIdsDiffer addr 0x1188c30 size 0xa0 virtual false final false
static void ValidateParticipantIdsDiffer(::StringW participantId1, ::StringW participantId2) ;

/// @brief Method ValidateParticipantIdsEqual addr 0x1189634 size 0x198 virtual false final false
static void ValidateParticipantIdsEqual(::StringW expectedParticipantId, ::StringW actualParticipantId) ;

/// @brief Method ValidateNotNull addr 0x11882d0 size 0x54 virtual false final false
static void ValidateNotNull(::bs_hook::Il2CppWrapperType obj, ::StringW description) ;

/// @brief Method CalculateMacTag addr 0x1189cb4 size 0x224 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger CalculateMacTag(::StringW participantId, ::StringW partnerParticipantId, ::Org::BouncyCastle::Math::BigInteger gx1, ::Org::BouncyCastle::Math::BigInteger gx2, ::Org::BouncyCastle::Math::BigInteger gx3, ::Org::BouncyCastle::Math::BigInteger gx4, ::Org::BouncyCastle::Math::BigInteger keyingMaterial, ::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method CalculateMacKey addr 0x118acf8 size 0x12c virtual false final false
static ::ArrayW<uint8_t> CalculateMacKey(::Org::BouncyCastle::Math::BigInteger keyingMaterial, ::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method ValidateMacTag addr 0x118a11c size 0x120 virtual false final false
static void ValidateMacTag(::StringW participantId, ::StringW partnerParticipantId, ::Org::BouncyCastle::Math::BigInteger gx1, ::Org::BouncyCastle::Math::BigInteger gx2, ::Org::BouncyCastle::Math::BigInteger gx3, ::Org::BouncyCastle::Math::BigInteger gx4, ::Org::BouncyCastle::Math::BigInteger keyingMaterial, ::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::BigInteger partnerMacTag) ;

/// @brief Method UpdateDigest addr 0x118af24 size 0x78 virtual false final false
static void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::BigInteger bigInteger) ;

/// @brief Method UpdateDigest addr 0x118af9c size 0x88 virtual false final false
static void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest digest, ::StringW str) ;

/// @brief Method UpdateDigest addr 0x118b024 size 0xf4 virtual false final false
static void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> bytes) ;

/// @brief Method UpdateDigestIncludingSize addr 0x118abf8 size 0x78 virtual false final false
static void UpdateDigestIncludingSize(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::BigInteger bigInteger) ;

/// @brief Method UpdateDigestIncludingSize addr 0x118ac70 size 0x88 virtual false final false
static void UpdateDigestIncludingSize(::Org::BouncyCastle::Crypto::IDigest digest, ::StringW str) ;

/// @brief Method UpdateDigestIncludingSize addr 0x118b118 size 0x190 virtual false final false
static void UpdateDigestIncludingSize(::Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> bytes) ;

/// @brief Method UpdateMac addr 0x118aeac size 0x78 virtual false final false
static void UpdateMac(::Org::BouncyCastle::Crypto::IMac mac, ::Org::BouncyCastle::Math::BigInteger bigInteger) ;

/// @brief Method UpdateMac addr 0x118ae24 size 0x88 virtual false final false
static void UpdateMac(::Org::BouncyCastle::Crypto::IMac mac, ::StringW str) ;

/// @brief Method UpdateMac addr 0x118b2b0 size 0xf4 virtual false final false
static void UpdateMac(::Org::BouncyCastle::Crypto::IMac mac, ::ArrayW<uint8_t> bytes) ;

/// @brief Method IntToByteArray addr 0x118b2a8 size 0x8 virtual false final false
static ::ArrayW<uint8_t> IntToByteArray(int32_t value) ;

// Ctor Parameters []
explicit JPakeUtilities() ;

/// @brief Method .ctor addr 0x118b434 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::JPake
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeUtilities, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeUtilities");

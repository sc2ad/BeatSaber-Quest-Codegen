#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg::Sig {
class NotationData;
}
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Bcpg::Sig {
class Features;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSignatureSubpacketVector
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1670))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSignatureSubpacketVector
class CORDL_TYPE PgpSignatureSubpacketVector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpSignatureSubpacketVector() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketVector", modifiers: " const&", def_value: None }]
constexpr PgpSignatureSubpacketVector(PgpSignatureSubpacketVector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketVector", modifiers: "&&", def_value: None }]
constexpr PgpSignatureSubpacketVector(PgpSignatureSubpacketVector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpSignatureSubpacketVector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpSignatureSubpacketVector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpSignatureSubpacketVector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpSignatureSubpacketVector& operator=(PgpSignatureSubpacketVector&& o) noexcept = default;
  constexpr PgpSignatureSubpacketVector& operator=(PgpSignatureSubpacketVector const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> __declspec(property(get=__get_packets, put=__set_packets))  packets;

constexpr void __set_packets(::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> __get_packets() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector New_ctor(::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> packets) ;

/// @brief Method .ctor addr 0x103d700 size 0x28 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> packets) ;

/// @brief Method GetSubpacket addr 0x10407e0 size 0x58 virtual false final false
 Org::BouncyCastle::Bcpg::SignatureSubpacket GetSubpacket(Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) ;

/// @brief Method HasSubpacket addr 0x1040838 size 0x18 virtual false final false
 bool HasSubpacket(Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) ;

/// @brief Method GetSubpackets addr 0x1040850 size 0x140 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> GetSubpackets(Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) ;

/// @brief Method GetNotationDataOccurrences addr 0x1040990 size 0x164 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::Sig::NotationData> GetNotationDataOccurrences() ;

/// @brief Method GetNotationDataOccurences addr 0x1040af4 size 0x4 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::Sig::NotationData> GetNotationDataOccurences() ;

/// @brief Method GetIssuerKeyId addr 0x1040af8 size 0x90 virtual false final false
 int64_t GetIssuerKeyId() ;

/// @brief Method HasSignatureCreationTime addr 0x1040b88 size 0x1c virtual false final false
 bool HasSignatureCreationTime() ;

/// @brief Method GetSignatureCreationTime addr 0x1040ba4 size 0xd0 virtual false final false
 System::DateTime GetSignatureCreationTime() ;

/// @brief Method GetSignatureExpirationTime addr 0x1040c74 size 0x90 virtual false final false
 int64_t GetSignatureExpirationTime() ;

/// @brief Method GetKeyExpirationTime addr 0x1040d04 size 0x90 virtual false final false
 int64_t GetKeyExpirationTime() ;

/// @brief Method GetPreferredHashAlgorithms addr 0x1040d94 size 0x90 virtual false final false
 ::ArrayW<int32_t> GetPreferredHashAlgorithms() ;

/// @brief Method GetPreferredSymmetricAlgorithms addr 0x1040e24 size 0x90 virtual false final false
 ::ArrayW<int32_t> GetPreferredSymmetricAlgorithms() ;

/// @brief Method GetPreferredCompressionAlgorithms addr 0x1040eb4 size 0x90 virtual false final false
 ::ArrayW<int32_t> GetPreferredCompressionAlgorithms() ;

/// @brief Method GetKeyFlags addr 0x1040f44 size 0x90 virtual false final false
 int32_t GetKeyFlags() ;

/// @brief Method GetSignerUserId addr 0x1040fd4 size 0x90 virtual false final false
 ::StringW GetSignerUserId() ;

/// @brief Method IsPrimaryUserId addr 0x1041064 size 0x90 virtual false final false
 bool IsPrimaryUserId() ;

/// @brief Method GetCriticalTags addr 0x10410f4 size 0xf8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacketTag> GetCriticalTags() ;

/// @brief Method GetFeatures addr 0x10411ec size 0xac virtual false final false
 Org::BouncyCastle::Bcpg::Sig::Features GetFeatures() ;

/// @brief Method get_Size addr 0x1041298 size 0x1c virtual false final false
 int32_t get_Size() ;

/// @brief Method get_Count addr 0x10412b4 size 0x1c virtual false final false
 int32_t get_Count() ;

/// @brief Method ToSubpacketArray addr 0x10412d0 size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> ToSubpacketArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignatureSubpacketVector");

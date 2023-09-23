#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::EncryptedPrivateKeyInfo
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(234))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo
class CORDL_TYPE EncryptedPrivateKeyInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EncryptedPrivateKeyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedPrivateKeyInfo", modifiers: " const&", def_value: None }]
constexpr EncryptedPrivateKeyInfo(EncryptedPrivateKeyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedPrivateKeyInfo", modifiers: "&&", def_value: None }]
constexpr EncryptedPrivateKeyInfo(EncryptedPrivateKeyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptedPrivateKeyInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EncryptedPrivateKeyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptedPrivateKeyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptedPrivateKeyInfo& operator=(EncryptedPrivateKeyInfo&& o) noexcept = default;
  constexpr EncryptedPrivateKeyInfo& operator=(EncryptedPrivateKeyInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algId, put=__set_algId))  algId;

constexpr void __set_algId(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algId() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_data() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_EncryptionAlgorithm))  EncryptionAlgorithm;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit EncryptedPrivateKeyInfo(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef9d04 size 0xe4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "algId", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit EncryptedPrivateKeyInfo(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId, ::ArrayW<uint8_t> encoding) ;

/// @brief Method .ctor addr 0xef9de8 size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId, ::ArrayW<uint8_t> encoding) ;

/// @brief Method GetInstance addr 0xef9e6c size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_EncryptionAlgorithm addr 0xef9ff4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_EncryptionAlgorithm() ;

/// @brief Method GetEncryptedData addr 0xef9ffc size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetEncryptedData() ;

/// @brief Method ToAsn1Object addr 0xefa01c size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo, "Org.BouncyCastle.Asn1.Pkcs", "EncryptedPrivateKeyInfo");

#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
class CertHash;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt.Ocsp::CertHash
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(179))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.Ocsp.CertHash
class CORDL_TYPE CertHash : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertHash() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertHash", modifiers: " const&", def_value: None }]
constexpr CertHash(CertHash const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertHash", modifiers: "&&", def_value: None }]
constexpr CertHash(CertHash&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertHash(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertHash& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertHash& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertHash& operator=(CertHash&& o) noexcept = default;
  constexpr CertHash& operator=(CertHash const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_hashAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_certificateHash, put=__set_certificateHash))  certificateHash;

constexpr void __set_certificateHash(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_certificateHash() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 ::ArrayW<uint8_t> __declspec(property(get=get_CertificateHash))  CertificateHash;


// Methods

/// @brief Method GetInstance addr 0xee7a40 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xee7bc8 size 0x11c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::ArrayW<uint8_t> certificateHash) ;

/// @brief Method .ctor addr 0xee7ce4 size 0x130 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::ArrayW<uint8_t> certificateHash) ;

/// @brief Method get_HashAlgorithm addr 0xee7e14 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method get_CertificateHash addr 0xee7e1c size 0x78 virtual false final false
 ::ArrayW<uint8_t> get_CertificateHash() ;

/// @brief Method ToAsn1Object addr 0xee7e94 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash, "Org.BouncyCastle.Asn1.IsisMtt.Ocsp", "CertHash");

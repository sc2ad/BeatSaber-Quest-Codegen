#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
// Type: Org.BouncyCastle.Asn1.Cms::OriginatorPublicKey
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(83))
// CS Name: Org.BouncyCastle.Asn1.Cms.OriginatorPublicKey
class CORDL_TYPE OriginatorPublicKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OriginatorPublicKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorPublicKey", modifiers: " const&", def_value: None }]
constexpr OriginatorPublicKey(OriginatorPublicKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorPublicKey", modifiers: "&&", def_value: None }]
constexpr OriginatorPublicKey(OriginatorPublicKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OriginatorPublicKey(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OriginatorPublicKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OriginatorPublicKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OriginatorPublicKey& operator=(OriginatorPublicKey&& o) noexcept = default;
  constexpr OriginatorPublicKey& operator=(OriginatorPublicKey const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_mAlgorithm, put=__set_mAlgorithm))  mAlgorithm;

constexpr void __set_mAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_mAlgorithm() const;

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_mPublicKey, put=__set_mPublicKey))  mPublicKey;

constexpr void __set_mPublicKey(::Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString __get_mPublicKey() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Algorithm))  Algorithm;

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_PublicKey))  PublicKey;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit OriginatorPublicKey(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, ::ArrayW<uint8_t> publicKey) ;

/// @brief Method .ctor addr 0xdee3f8 size 0x84 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, ::ArrayW<uint8_t> publicKey) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OriginatorPublicKey(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdee47c size 0xb0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdee024 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xde261c size 0x158 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Algorithm addr 0xdee52c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Algorithm() ;

/// @brief Method get_PublicKey addr 0xdee534 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerBitString get_PublicKey() ;

/// @brief Method ToAsn1Object addr 0xdee53c size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey, "Org.BouncyCastle.Asn1.Cms", "OriginatorPublicKey");

#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
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
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::RsassaPssParameters
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(250))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters
class CORDL_TYPE RsassaPssParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RsassaPssParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsassaPssParameters", modifiers: " const&", def_value: None }]
constexpr RsassaPssParameters(RsassaPssParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsassaPssParameters", modifiers: "&&", def_value: None }]
constexpr RsassaPssParameters(RsassaPssParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsassaPssParameters(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RsassaPssParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsassaPssParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsassaPssParameters& operator=(RsassaPssParameters&& o) noexcept = default;
  constexpr RsassaPssParameters& operator=(RsassaPssParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_hashAlgorithm() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_maskGenAlgorithm, put=__set_maskGenAlgorithm))  maskGenAlgorithm;

constexpr void __set_maskGenAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_maskGenAlgorithm() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_saltLength, put=__set_saltLength))  saltLength;

constexpr void __set_saltLength(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_saltLength() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_trailerField, put=__set_trailerField))  trailerField;

constexpr void __set_trailerField(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_trailerField() const;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_DefaultHashAlgorithm, put=__set_DefaultHashAlgorithm))  DefaultHashAlgorithm;

static void __set_DefaultHashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_DefaultHashAlgorithm() ;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_DefaultMaskGenFunction, put=__set_DefaultMaskGenFunction))  DefaultMaskGenFunction;

static void __set_DefaultMaskGenFunction(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_DefaultMaskGenFunction() ;

static Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_DefaultSaltLength, put=__set_DefaultSaltLength))  DefaultSaltLength;

static void __set_DefaultSaltLength(Org::BouncyCastle::Asn1::DerInteger value) ;

static Org::BouncyCastle::Asn1::DerInteger __get_DefaultSaltLength() ;

static Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_DefaultTrailerField, put=__set_DefaultTrailerField))  DefaultTrailerField;

static void __set_DefaultTrailerField(Org::BouncyCastle::Asn1::DerInteger value) ;

static Org::BouncyCastle::Asn1::DerInteger __get_DefaultTrailerField() ;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_MaskGenAlgorithm))  MaskGenAlgorithm;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_SaltLength))  SaltLength;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_TrailerField))  TrailerField;


// Methods

/// @brief Method GetInstance addr 0xf009d0 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit RsassaPssParameters() ;

/// @brief Method .ctor addr 0xf00d3c size 0x74 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "maskGenAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "saltLength", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "trailerField", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }]
explicit RsassaPssParameters(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier maskGenAlgorithm, Org::BouncyCastle::Asn1::DerInteger saltLength, Org::BouncyCastle::Asn1::DerInteger trailerField) ;

/// @brief Method .ctor addr 0xf00db0 size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier maskGenAlgorithm, Org::BouncyCastle::Asn1::DerInteger saltLength, Org::BouncyCastle::Asn1::DerInteger trailerField) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RsassaPssParameters(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xf00b58 size 0x1e4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_HashAlgorithm addr 0xf00df0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method get_MaskGenAlgorithm addr 0xf00df8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_MaskGenAlgorithm() ;

/// @brief Method get_SaltLength addr 0xf00e00 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_SaltLength() ;

/// @brief Method get_TrailerField addr 0xf00e08 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_TrailerField() ;

/// @brief Method ToAsn1Object addr 0xf00e10 size 0x278 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters, "Org.BouncyCastle.Asn1.Pkcs", "RsassaPssParameters");

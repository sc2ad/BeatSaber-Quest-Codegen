#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsaesOaepParameters;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::RsaesOaepParameters
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(248))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.RsaesOaepParameters
class CORDL_TYPE RsaesOaepParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RsaesOaepParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaesOaepParameters", modifiers: " const&", def_value: None }]
constexpr RsaesOaepParameters(RsaesOaepParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaesOaepParameters", modifiers: "&&", def_value: None }]
constexpr RsaesOaepParameters(RsaesOaepParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaesOaepParameters(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RsaesOaepParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaesOaepParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaesOaepParameters& operator=(RsaesOaepParameters&& o) noexcept = default;
  constexpr RsaesOaepParameters& operator=(RsaesOaepParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_hashAlgorithm() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_maskGenAlgorithm, put=__set_maskGenAlgorithm))  maskGenAlgorithm;

constexpr void __set_maskGenAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_maskGenAlgorithm() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_pSourceAlgorithm, put=__set_pSourceAlgorithm))  pSourceAlgorithm;

constexpr void __set_pSourceAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_pSourceAlgorithm() const;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_DefaultHashAlgorithm, put=__set_DefaultHashAlgorithm))  DefaultHashAlgorithm;

static void __set_DefaultHashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_DefaultHashAlgorithm() ;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_DefaultMaskGenFunction, put=__set_DefaultMaskGenFunction))  DefaultMaskGenFunction;

static void __set_DefaultMaskGenFunction(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_DefaultMaskGenFunction() ;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_DefaultPSourceAlgorithm, put=__set_DefaultPSourceAlgorithm))  DefaultPSourceAlgorithm;

static void __set_DefaultPSourceAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_DefaultPSourceAlgorithm() ;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_MaskGenAlgorithm))  MaskGenAlgorithm;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_PSourceAlgorithm))  PSourceAlgorithm;


// Methods

/// @brief Method GetInstance addr 0xeff9d8 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit RsaesOaepParameters() ;

/// @brief Method .ctor addr 0xeffd14 size 0x74 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "maskGenAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "pSourceAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit RsaesOaepParameters(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier maskGenAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier pSourceAlgorithm) ;

/// @brief Method .ctor addr 0xeffd88 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier maskGenAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier pSourceAlgorithm) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RsaesOaepParameters(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xeffb60 size 0x1b4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_HashAlgorithm addr 0xeffdc4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method get_MaskGenAlgorithm addr 0xeffdcc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_MaskGenAlgorithm() ;

/// @brief Method get_PSourceAlgorithm addr 0xeffdd4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_PSourceAlgorithm() ;

/// @brief Method ToAsn1Object addr 0xeffddc size 0x20c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::RsaesOaepParameters, "Org.BouncyCastle.Asn1.Pkcs", "RsaesOaepParameters");

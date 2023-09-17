#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Mozilla {
class PublicKeyAndChallenge;
}
// Type: Org.BouncyCastle.Asn1.Mozilla::PublicKeyAndChallenge
namespace Org::BouncyCastle::Asn1::Mozilla {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(202))
// CS Name: Org.BouncyCastle.Asn1.Mozilla.PublicKeyAndChallenge
class CORDL_TYPE PublicKeyAndChallenge : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PublicKeyAndChallenge() = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKeyAndChallenge", modifiers: " const&", def_value: None }]
constexpr PublicKeyAndChallenge(PublicKeyAndChallenge const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKeyAndChallenge", modifiers: "&&", def_value: None }]
constexpr PublicKeyAndChallenge(PublicKeyAndChallenge&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PublicKeyAndChallenge(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PublicKeyAndChallenge& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PublicKeyAndChallenge& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PublicKeyAndChallenge& operator=(PublicKeyAndChallenge&& o) noexcept = default;
  constexpr PublicKeyAndChallenge& operator=(PublicKeyAndChallenge const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_pkacSeq, put=__set_pkacSeq))  pkacSeq;

constexpr void __set_pkacSeq(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_pkacSeq() const;

 ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=__get_spki, put=__set_spki))  spki;

constexpr void __set_spki(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __get_spki() const;

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=__get_challenge, put=__set_challenge))  challenge;

constexpr void __set_challenge(::Org::BouncyCastle::Asn1::DerIA5String value) ;

constexpr ::Org::BouncyCastle::Asn1::DerIA5String __get_challenge() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=get_SubjectPublicKeyInfo))  SubjectPublicKeyInfo;

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=get_Challenge))  Challenge;


// Methods

/// @brief Method GetInstance addr 0xeef3b4 size 0x190 virtual false final false
static ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PublicKeyAndChallenge(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xeef544 size 0x6c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method ToAsn1Object addr 0xeef5b0 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method get_SubjectPublicKeyInfo addr 0xeef5b8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo get_SubjectPublicKeyInfo() ;

/// @brief Method get_Challenge addr 0xeef5c0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerIA5String get_Challenge() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Mozilla
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge, "Org.BouncyCastle.Asn1.Mozilla", "PublicKeyAndChallenge");

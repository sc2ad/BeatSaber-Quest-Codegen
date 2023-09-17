#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptionScheme;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::EncryptionScheme
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(235))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(236))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme
class CORDL_TYPE EncryptionScheme : public ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EncryptionScheme() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionScheme", modifiers: " const&", def_value: None }]
constexpr EncryptionScheme(EncryptionScheme const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionScheme", modifiers: "&&", def_value: None }]
constexpr EncryptionScheme(EncryptionScheme&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptionScheme(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier(ptr) {
}


  constexpr EncryptionScheme& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptionScheme& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptionScheme& operator=(EncryptionScheme&& o) noexcept = default;
  constexpr EncryptionScheme& operator=(EncryptionScheme const& o) noexcept = default;
                


// Properties

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_Asn1Object))  Asn1Object;


// Methods

// Ctor Parameters [CppParam { name: "objectID", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit EncryptionScheme(::Org::BouncyCastle::Asn1::DerObjectIdentifier objectID) ;

/// @brief Method .ctor addr 0xefa4f4 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier objectID) ;

// Ctor Parameters [CppParam { name: "objectID", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit EncryptionScheme(::Org::BouncyCastle::Asn1::DerObjectIdentifier objectID, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method .ctor addr 0xefa51c size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier objectID, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit EncryptionScheme(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefa548 size 0xc4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xefa60c size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Asn1Object addr 0xefa794 size 0x28 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object get_Asn1Object() ;

/// @brief Method ToAsn1Object addr 0xefa7bc size 0x110 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme, "Org.BouncyCastle.Asn1.Pkcs", "EncryptionScheme");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class IRawAgreement;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class AgreementUtilities;
}
// Type: Org.BouncyCastle.Security::AgreementUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1739))
// CS Name: Org.BouncyCastle.Security.AgreementUtilities
class CORDL_TYPE AgreementUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AgreementUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "AgreementUtilities", modifiers: " const&", def_value: None }]
constexpr AgreementUtilities(AgreementUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AgreementUtilities", modifiers: "&&", def_value: None }]
constexpr AgreementUtilities(AgreementUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AgreementUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AgreementUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AgreementUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AgreementUtilities& operator=(AgreementUtilities&& o) noexcept = default;
  constexpr AgreementUtilities& operator=(AgreementUtilities const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;


// Methods

static Org::BouncyCastle::Security::AgreementUtilities New_ctor() ;

/// @brief Method .ctor addr 0x1091878 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetBasicAgreement addr 0x1091c80 size 0x60 virtual false final false
static Org::BouncyCastle::Crypto::IBasicAgreement GetBasicAgreement(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetBasicAgreement addr 0x1091ce0 size 0x280 virtual false final false
static Org::BouncyCastle::Crypto::IBasicAgreement GetBasicAgreement(::StringW algorithm) ;

/// @brief Method GetBasicAgreementWithKdf addr 0x10920a0 size 0x68 virtual false final false
static Org::BouncyCastle::Crypto::IBasicAgreement GetBasicAgreementWithKdf(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::StringW wrapAlgorithm) ;

/// @brief Method GetBasicAgreementWithKdf addr 0x1092108 size 0x254 virtual false final false
static Org::BouncyCastle::Crypto::IBasicAgreement GetBasicAgreementWithKdf(::StringW agreeAlgorithm, ::StringW wrapAlgorithm) ;

/// @brief Method GetRawAgreement addr 0x109235c size 0x60 virtual false final false
static Org::BouncyCastle::Crypto::IRawAgreement GetRawAgreement(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetRawAgreement addr 0x10923bc size 0x180 virtual false final false
static Org::BouncyCastle::Crypto::IRawAgreement GetRawAgreement(::StringW algorithm) ;

/// @brief Method GetAlgorithmName addr 0x109253c size 0x108 virtual false final false
static ::StringW GetAlgorithmName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetMechanism addr 0x1091f60 size 0x140 virtual false final false
static ::StringW GetMechanism(::StringW algorithm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::AgreementUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::AgreementUtilities, "Org.BouncyCastle.Security", "AgreementUtilities");

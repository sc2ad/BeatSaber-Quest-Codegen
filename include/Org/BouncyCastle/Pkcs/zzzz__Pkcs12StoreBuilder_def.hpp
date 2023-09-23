#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Store;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12StoreBuilder;
}
// Type: Org.BouncyCastle.Pkcs::Pkcs12StoreBuilder
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1701))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs12StoreBuilder
class CORDL_TYPE Pkcs12StoreBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Pkcs12StoreBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12StoreBuilder", modifiers: " const&", def_value: None }]
constexpr Pkcs12StoreBuilder(Pkcs12StoreBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12StoreBuilder", modifiers: "&&", def_value: None }]
constexpr Pkcs12StoreBuilder(Pkcs12StoreBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs12StoreBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pkcs12StoreBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs12StoreBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs12StoreBuilder& operator=(Pkcs12StoreBuilder&& o) noexcept = default;
  constexpr Pkcs12StoreBuilder& operator=(Pkcs12StoreBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_keyAlgorithm, put=__set_keyAlgorithm))  keyAlgorithm;

constexpr void __set_keyAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_keyAlgorithm() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_certAlgorithm, put=__set_certAlgorithm))  certAlgorithm;

constexpr void __set_certAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_certAlgorithm() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_keyPrfAlgorithm, put=__set_keyPrfAlgorithm))  keyPrfAlgorithm;

constexpr void __set_keyPrfAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_keyPrfAlgorithm() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_certPrfAlgorithm, put=__set_certPrfAlgorithm))  certPrfAlgorithm;

constexpr void __set_certPrfAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_certPrfAlgorithm() const;

 bool __declspec(property(get=__get_useDerEncoding, put=__set_useDerEncoding))  useDerEncoding;

constexpr void __set_useDerEncoding(bool value) ;

constexpr bool __get_useDerEncoding() const;


// Methods

// Ctor Parameters []
explicit Pkcs12StoreBuilder() ;

/// @brief Method .ctor addr 0x1059fe8 size 0x78 virtual false final false
 void _ctor() ;

/// @brief Method Build addr 0x105a060 size 0x94 virtual false final false
 Org::BouncyCastle::Pkcs::Pkcs12Store Build() ;

/// @brief Method SetCertAlgorithm addr 0x105a0f4 size 0x8 virtual false final false
 Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder SetCertAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier certAlgorithm) ;

/// @brief Method SetKeyAlgorithm addr 0x105a0fc size 0x8 virtual false final false
 Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder SetKeyAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier keyAlgorithm) ;

/// @brief Method SetKeyAlgorithm addr 0x105a104 size 0xc virtual false final false
 Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder SetKeyAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier keyAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier keyPrfAlgorithm) ;

/// @brief Method SetUseDerEncoding addr 0x105a110 size 0xc virtual false final false
 Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder SetUseDerEncoding(bool useDerEncoding) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder, "Org.BouncyCastle.Pkcs", "Pkcs12StoreBuilder");

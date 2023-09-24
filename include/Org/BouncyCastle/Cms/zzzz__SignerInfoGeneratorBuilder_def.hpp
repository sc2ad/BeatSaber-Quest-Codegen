#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Cms {
class SignerInfoGenerator;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInfoGeneratorBuilder;
}
// Type: Org.BouncyCastle.Cms::SignerInfoGeneratorBuilder
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(690))
// CS Name: Org.BouncyCastle.Cms.SignerInfoGeneratorBuilder
class CORDL_TYPE SignerInfoGeneratorBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SignerInfoGeneratorBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInfoGeneratorBuilder", modifiers: " const&", def_value: None }]
constexpr SignerInfoGeneratorBuilder(SignerInfoGeneratorBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInfoGeneratorBuilder", modifiers: "&&", def_value: None }]
constexpr SignerInfoGeneratorBuilder(SignerInfoGeneratorBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerInfoGeneratorBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignerInfoGeneratorBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerInfoGeneratorBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerInfoGeneratorBuilder& operator=(SignerInfoGeneratorBuilder&& o) noexcept = default;
  constexpr SignerInfoGeneratorBuilder& operator=(SignerInfoGeneratorBuilder const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_directSignature, put=__set_directSignature))  directSignature;

constexpr void __set_directSignature(bool value) ;

constexpr bool __get_directSignature() const;

 Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=__get_signedGen, put=__set_signedGen))  signedGen;

constexpr void __set_signedGen(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator __get_signedGen() const;

 Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=__get_unsignedGen, put=__set_unsignedGen))  unsignedGen;

constexpr void __set_unsignedGen(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator __get_unsignedGen() const;


// Methods

static Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder New_ctor() ;

/// @brief Method .ctor addr 0x117db24 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method SetDirectSignature addr 0x117db2c size 0xc virtual false final false
 Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder SetDirectSignature(bool hasNoSignedAttributes) ;

/// @brief Method WithSignedAttributeGenerator addr 0x117db38 size 0x8 virtual false final false
 Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder WithSignedAttributeGenerator(Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedGen) ;

/// @brief Method WithUnsignedAttributeGenerator addr 0x117db40 size 0x8 virtual false final false
 Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder WithUnsignedAttributeGenerator(Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedGen) ;

/// @brief Method Build addr 0x117db48 size 0x12c virtual false final false
 Org::BouncyCastle::Cms::SignerInfoGenerator Build(Org::BouncyCastle::Crypto::ISignatureFactory contentSigner, Org::BouncyCastle::X509::X509Certificate certificate) ;

/// @brief Method Build addr 0x117dd84 size 0xac virtual false final false
 Org::BouncyCastle::Cms::SignerInfoGenerator Build(Org::BouncyCastle::Crypto::ISignatureFactory signerFactory, ::ArrayW<uint8_t> subjectKeyIdentifier) ;

/// @brief Method CreateGenerator addr 0x117dc74 size 0x110 virtual false final false
 Org::BouncyCastle::Cms::SignerInfoGenerator CreateGenerator(Org::BouncyCastle::Crypto::ISignatureFactory contentSigner, Org::BouncyCastle::Asn1::Cms::SignerIdentifier sigId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder, "Org.BouncyCastle.Cms", "SignerInfoGeneratorBuilder");

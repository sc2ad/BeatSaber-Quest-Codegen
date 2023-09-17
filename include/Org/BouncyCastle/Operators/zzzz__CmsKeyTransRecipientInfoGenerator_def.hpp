#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KeyTransRecipientInfoGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Operators {
class CmsKeyTransRecipientInfoGenerator;
}
// Type: Org.BouncyCastle.Operators::CmsKeyTransRecipientInfoGenerator
namespace Org::BouncyCastle::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(998))
// CS Name: Org.BouncyCastle.Operators.CmsKeyTransRecipientInfoGenerator
class CORDL_TYPE CmsKeyTransRecipientInfoGenerator : public ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CmsKeyTransRecipientInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsKeyTransRecipientInfoGenerator", modifiers: " const&", def_value: None }]
constexpr CmsKeyTransRecipientInfoGenerator(CmsKeyTransRecipientInfoGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsKeyTransRecipientInfoGenerator", modifiers: "&&", def_value: None }]
constexpr CmsKeyTransRecipientInfoGenerator(CmsKeyTransRecipientInfoGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsKeyTransRecipientInfoGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator(ptr) {
}


  constexpr CmsKeyTransRecipientInfoGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsKeyTransRecipientInfoGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsKeyTransRecipientInfoGenerator& operator=(CmsKeyTransRecipientInfoGenerator&& o) noexcept = default;
  constexpr CmsKeyTransRecipientInfoGenerator& operator=(CmsKeyTransRecipientInfoGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IKeyWrapper __declspec(property(get=__get_keyWrapper, put=__set_keyWrapper))  keyWrapper;

constexpr void __set_keyWrapper(::Org::BouncyCastle::Crypto::IKeyWrapper value) ;

constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper __get_keyWrapper() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

// Ctor Parameters [CppParam { name: "recipCert", ty: "::Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }, CppParam { name: "keyWrapper", ty: "::Org::BouncyCastle::Crypto::IKeyWrapper", modifiers: "", def_value: None }]
explicit CmsKeyTransRecipientInfoGenerator(::Org::BouncyCastle::X509::X509Certificate recipCert, ::Org::BouncyCastle::Crypto::IKeyWrapper keyWrapper) ;

/// @brief Method .ctor addr 0xea07e4 size 0x14c virtual false final false
 void _ctor(::Org::BouncyCastle::X509::X509Certificate recipCert, ::Org::BouncyCastle::Crypto::IKeyWrapper keyWrapper) ;

// Ctor Parameters [CppParam { name: "subjectKeyID", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "keyWrapper", ty: "::Org::BouncyCastle::Crypto::IKeyWrapper", modifiers: "", def_value: None }]
explicit CmsKeyTransRecipientInfoGenerator(::ArrayW<uint8_t> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper keyWrapper) ;

/// @brief Method .ctor addr 0xea0930 size 0x74 virtual false final false
 void _ctor(::ArrayW<uint8_t> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper keyWrapper) ;

/// @brief Method get_AlgorithmDetails addr 0xea09a4 size 0xec virtual true final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_AlgorithmDetails() ;

/// @brief Method GenerateWrappedKey addr 0xea0a90 size 0x130 virtual true final false
 ::ArrayW<uint8_t> GenerateWrappedKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter contentKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Operators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator, "Org.BouncyCastle.Operators", "CmsKeyTransRecipientInfoGenerator");

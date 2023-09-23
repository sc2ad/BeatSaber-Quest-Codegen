#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class EnvelopedDataHelper;
}
// Type: Org.BouncyCastle.Cms::EnvelopedDataHelper
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(668))
// CS Name: Org.BouncyCastle.Cms.EnvelopedDataHelper
class CORDL_TYPE EnvelopedDataHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnvelopedDataHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataHelper", modifiers: " const&", def_value: None }]
constexpr EnvelopedDataHelper(EnvelopedDataHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataHelper", modifiers: "&&", def_value: None }]
constexpr EnvelopedDataHelper(EnvelopedDataHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvelopedDataHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvelopedDataHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvelopedDataHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvelopedDataHelper& operator=(EnvelopedDataHelper&& o) noexcept = default;
  constexpr EnvelopedDataHelper& operator=(EnvelopedDataHelper const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_BaseCipherNames, put=__set_BaseCipherNames))  BaseCipherNames;

static void __set_BaseCipherNames(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_BaseCipherNames() ;

static System::Collections::IDictionary __declspec(property(get=__get_MacAlgNames, put=__set_MacAlgNames))  MacAlgNames;

static void __set_MacAlgNames(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_MacAlgNames() ;


// Methods

/// @brief Method CreateContentCipher addr 0x1176598 size 0x70 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateContentCipher(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters encKey, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier encryptionAlgID) ;

/// @brief Method GenerateEncryptionAlgID addr 0x1176608 size 0x90 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GenerateEncryptionAlgID(Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, Org::BouncyCastle::Crypto::Parameters::KeyParameter encKey, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CreateKeyGenerator addr 0x1176698 size 0x10 virtual false final false
 Org::BouncyCastle::Crypto::CipherKeyGenerator CreateKeyGenerator(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, Org::BouncyCastle::Security::SecureRandom random) ;

// Ctor Parameters []
explicit EnvelopedDataHelper() ;

/// @brief Method .ctor addr 0x11766a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::EnvelopedDataHelper);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::EnvelopedDataHelper, "Org.BouncyCastle.Cms", "EnvelopedDataHelper");

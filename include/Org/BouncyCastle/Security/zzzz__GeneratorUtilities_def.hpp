#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class GeneratorUtilities;
}
// Type: Org.BouncyCastle.Security::GeneratorUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1747))
// CS Name: Org.BouncyCastle.Security.GeneratorUtilities
class CORDL_TYPE GeneratorUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GeneratorUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneratorUtilities", modifiers: " const&", def_value: None }]
constexpr GeneratorUtilities(GeneratorUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneratorUtilities", modifiers: "&&", def_value: None }]
constexpr GeneratorUtilities(GeneratorUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GeneratorUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GeneratorUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GeneratorUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GeneratorUtilities& operator=(GeneratorUtilities&& o) noexcept = default;
  constexpr GeneratorUtilities& operator=(GeneratorUtilities const& o) noexcept = default;
                


// Fields

static ::System::Collections::IDictionary __declspec(property(get=__get_kgAlgorithms, put=__set_kgAlgorithms))  kgAlgorithms;

static void __set_kgAlgorithms(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_kgAlgorithms() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_kpgAlgorithms, put=__set_kpgAlgorithms))  kpgAlgorithms;

static void __set_kpgAlgorithms(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_kpgAlgorithms() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_defaultKeySizes, put=__set_defaultKeySizes))  defaultKeySizes;

static void __set_defaultKeySizes(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_defaultKeySizes() ;


// Methods

// Ctor Parameters []
explicit GeneratorUtilities() ;

/// @brief Method .ctor addr 0x109e004 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method AddDefaultKeySizeEntries addr 0x10a1b18 size 0x164 virtual false final false
static void AddDefaultKeySizeEntries(int32_t size, ::ArrayW<::StringW> algorithms) ;

/// @brief Method AddKgAlgorithm addr 0x10a1360 size 0x228 virtual false final false
static void AddKgAlgorithm(::StringW canonicalName, ::ArrayW<::bs_hook::Il2CppWrapperType> aliases) ;

/// @brief Method AddKpgAlgorithm addr 0x10a18f0 size 0x228 virtual false final false
static void AddKpgAlgorithm(::StringW canonicalName, ::ArrayW<::bs_hook::Il2CppWrapperType> aliases) ;

/// @brief Method AddHMacKeyGenerator addr 0x10a1588 size 0x368 virtual false final false
static void AddHMacKeyGenerator(::StringW algorithm, ::ArrayW<::bs_hook::Il2CppWrapperType> aliases) ;

/// @brief Method GetCanonicalKeyGeneratorAlgorithm addr 0x10a1c7c size 0x138 virtual false final false
static ::StringW GetCanonicalKeyGeneratorAlgorithm(::StringW algorithm) ;

/// @brief Method GetCanonicalKeyPairGeneratorAlgorithm addr 0x10a1db4 size 0x138 virtual false final false
static ::StringW GetCanonicalKeyPairGeneratorAlgorithm(::StringW algorithm) ;

/// @brief Method GetKeyGenerator addr 0x10a1eec size 0x60 virtual false final false
static ::Org::BouncyCastle::Crypto::CipherKeyGenerator GetKeyGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetKeyGenerator addr 0x10a1f4c size 0x338 virtual false final false
static ::Org::BouncyCastle::Crypto::CipherKeyGenerator GetKeyGenerator(::StringW algorithm) ;

/// @brief Method GetKeyPairGenerator addr 0x10a2428 size 0x60 virtual false final false
static ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator GetKeyPairGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetKeyPairGenerator addr 0x10a2488 size 0x5bc virtual false final false
static ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator GetKeyPairGenerator(::StringW algorithm) ;

/// @brief Method GetDefaultKeySize addr 0x10a2a44 size 0x60 virtual false final false
static int32_t GetDefaultKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetDefaultKeySize addr 0x10a2aa4 size 0x21c virtual false final false
static int32_t GetDefaultKeySize(::StringW algorithm) ;

/// @brief Method FindDefaultKeySize addr 0x10a2284 size 0x1a4 virtual false final false
static int32_t FindDefaultKeySize(::StringW canonicalName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Security::GeneratorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::GeneratorUtilities, "Org.BouncyCastle.Security", "GeneratorUtilities");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsPbeKey_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class Pkcs5Scheme2PbeKey;
}
// Type: Org.BouncyCastle.Cms::Pkcs5Scheme2PbeKey
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(642))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(684))
// CS Name: Org.BouncyCastle.Cms.Pkcs5Scheme2PbeKey
class CORDL_TYPE Pkcs5Scheme2PbeKey : public ::Org::BouncyCastle::Cms::CmsPbeKey {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Pkcs5Scheme2PbeKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs5Scheme2PbeKey", modifiers: " const&", def_value: None }]
constexpr Pkcs5Scheme2PbeKey(Pkcs5Scheme2PbeKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs5Scheme2PbeKey", modifiers: "&&", def_value: None }]
constexpr Pkcs5Scheme2PbeKey(Pkcs5Scheme2PbeKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs5Scheme2PbeKey(void* ptr) noexcept : ::Org::BouncyCastle::Cms::CmsPbeKey(ptr) {
}


  constexpr Pkcs5Scheme2PbeKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs5Scheme2PbeKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs5Scheme2PbeKey& operator=(Pkcs5Scheme2PbeKey&& o) noexcept = default;
  constexpr Pkcs5Scheme2PbeKey& operator=(Pkcs5Scheme2PbeKey const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit Pkcs5Scheme2PbeKey(::StringW password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method .ctor addr 0x117cebc size 0x44 virtual false final false
 void _ctor(::StringW password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

// Ctor Parameters [CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyDerivationAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit Pkcs5Scheme2PbeKey(::StringW password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

/// @brief Method .ctor addr 0x117cf04 size 0x3c virtual false final false
 void _ctor(::StringW password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

// Ctor Parameters [CppParam { name: "password", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit Pkcs5Scheme2PbeKey(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method .ctor addr 0x117cf00 size 0x4 virtual false final false
 void _ctor(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

// Ctor Parameters [CppParam { name: "password", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "keyDerivationAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit Pkcs5Scheme2PbeKey(::ArrayW<char16_t> password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

/// @brief Method .ctor addr 0x117cf40 size 0x4 virtual false final false
 void _ctor(::ArrayW<char16_t> password, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

/// @brief Method GetEncoded addr 0x117cf44 size 0x12c virtual true final false
 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter GetEncoded(::StringW algorithmOid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::Pkcs5Scheme2PbeKey, "Org.BouncyCastle.Cms", "Pkcs5Scheme2PbeKey");

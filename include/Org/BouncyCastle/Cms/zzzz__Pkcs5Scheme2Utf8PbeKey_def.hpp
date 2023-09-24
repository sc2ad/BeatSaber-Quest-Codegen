#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsPbeKey_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class Pkcs5Scheme2Utf8PbeKey;
}
// Type: Org.BouncyCastle.Cms::Pkcs5Scheme2Utf8PbeKey
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(642))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(685))
// CS Name: Org.BouncyCastle.Cms.Pkcs5Scheme2Utf8PbeKey
class CORDL_TYPE Pkcs5Scheme2Utf8PbeKey : public Org::BouncyCastle::Cms::CmsPbeKey {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Pkcs5Scheme2Utf8PbeKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs5Scheme2Utf8PbeKey", modifiers: " const&", def_value: None }]
constexpr Pkcs5Scheme2Utf8PbeKey(Pkcs5Scheme2Utf8PbeKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs5Scheme2Utf8PbeKey", modifiers: "&&", def_value: None }]
constexpr Pkcs5Scheme2Utf8PbeKey(Pkcs5Scheme2Utf8PbeKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs5Scheme2Utf8PbeKey(void* ptr) noexcept : Org::BouncyCastle::Cms::CmsPbeKey(ptr) {
}


  constexpr Pkcs5Scheme2Utf8PbeKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs5Scheme2Utf8PbeKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs5Scheme2Utf8PbeKey& operator=(Pkcs5Scheme2Utf8PbeKey&& o) noexcept = default;
  constexpr Pkcs5Scheme2Utf8PbeKey& operator=(Pkcs5Scheme2Utf8PbeKey const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey New_ctor(::StringW password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method .ctor addr 0x117d070 size 0x44 virtual false final false
 void _ctor(::StringW password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

static Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey New_ctor(::StringW password, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

/// @brief Method .ctor addr 0x117d0b8 size 0x3c virtual false final false
 void _ctor(::StringW password, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

static Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey New_ctor(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method .ctor addr 0x117d0b4 size 0x4 virtual false final false
 void _ctor(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

static Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey New_ctor(::ArrayW<char16_t> password, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

/// @brief Method .ctor addr 0x117d0f4 size 0x4 virtual false final false
 void _ctor(::ArrayW<char16_t> password, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

/// @brief Method GetEncoded addr 0x117d0f8 size 0x12c virtual true final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter GetEncoded(::StringW algorithmOid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::Pkcs5Scheme2Utf8PbeKey, "Org.BouncyCastle.Cms", "Pkcs5Scheme2Utf8PbeKey");

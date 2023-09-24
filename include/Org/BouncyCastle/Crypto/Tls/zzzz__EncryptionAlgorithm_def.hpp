#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class EncryptionAlgorithm;
}
// Type: Org.BouncyCastle.Crypto.Tls::EncryptionAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1241))
// CS Name: Org.BouncyCastle.Crypto.Tls.EncryptionAlgorithm
class CORDL_TYPE EncryptionAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EncryptionAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionAlgorithm", modifiers: " const&", def_value: None }]
constexpr EncryptionAlgorithm(EncryptionAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionAlgorithm", modifiers: "&&", def_value: None }]
constexpr EncryptionAlgorithm(EncryptionAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptionAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncryptionAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptionAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptionAlgorithm& operator=(EncryptionAlgorithm&& o) noexcept = default;
  constexpr EncryptionAlgorithm& operator=(EncryptionAlgorithm const& o) noexcept = default;
                


// Fields

/// @brief Field NULL offset 0
static constexpr int32_t  NULL{0};

/// @brief Field RC4_40 offset 0
static constexpr int32_t  RC4_40{1};

/// @brief Field RC4_128 offset 0
static constexpr int32_t  RC4_128{2};

/// @brief Field RC2_CBC_40 offset 0
static constexpr int32_t  RC2_CBC_40{3};

/// @brief Field IDEA_CBC offset 0
static constexpr int32_t  IDEA_CBC{4};

/// @brief Field DES40_CBC offset 0
static constexpr int32_t  DES40_CBC{5};

/// @brief Field DES_CBC offset 0
static constexpr int32_t  DES_CBC{6};

/// @brief Field cls_3DES_EDE_CBC offset 0
static constexpr int32_t  cls_3DES_EDE_CBC{7};

/// @brief Field AES_128_CBC offset 0
static constexpr int32_t  AES_128_CBC{8};

/// @brief Field AES_256_CBC offset 0
static constexpr int32_t  AES_256_CBC{9};

/// @brief Field AES_128_GCM offset 0
static constexpr int32_t  AES_128_GCM{10};

/// @brief Field AES_256_GCM offset 0
static constexpr int32_t  AES_256_GCM{11};

/// @brief Field CAMELLIA_128_CBC offset 0
static constexpr int32_t  CAMELLIA_128_CBC{12};

/// @brief Field CAMELLIA_256_CBC offset 0
static constexpr int32_t  CAMELLIA_256_CBC{13};

/// @brief Field SEED_CBC offset 0
static constexpr int32_t  SEED_CBC{14};

/// @brief Field AES_128_CCM offset 0
static constexpr int32_t  AES_128_CCM{15};

/// @brief Field AES_128_CCM_8 offset 0
static constexpr int32_t  AES_128_CCM_8{16};

/// @brief Field AES_256_CCM offset 0
static constexpr int32_t  AES_256_CCM{17};

/// @brief Field AES_256_CCM_8 offset 0
static constexpr int32_t  AES_256_CCM_8{18};

/// @brief Field CAMELLIA_128_GCM offset 0
static constexpr int32_t  CAMELLIA_128_GCM{19};

/// @brief Field CAMELLIA_256_GCM offset 0
static constexpr int32_t  CAMELLIA_256_GCM{20};

/// @brief Field CHACHA20_POLY1305 offset 0
static constexpr int32_t  CHACHA20_POLY1305{21};

/// @brief Field AES_128_OCB_TAGLEN96 offset 0
static constexpr int32_t  AES_128_OCB_TAGLEN96{103};

/// @brief Field AES_256_OCB_TAGLEN96 offset 0
static constexpr int32_t  AES_256_OCB_TAGLEN96{104};


// Methods

static Org::BouncyCastle::Crypto::Tls::EncryptionAlgorithm New_ctor() ;

/// @brief Method .ctor addr 0xf04214 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::EncryptionAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::EncryptionAlgorithm, "Org.BouncyCastle.Crypto.Tls", "EncryptionAlgorithm");

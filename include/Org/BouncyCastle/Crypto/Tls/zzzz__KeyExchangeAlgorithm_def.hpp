#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class KeyExchangeAlgorithm;
}
// Type: Org.BouncyCastle.Crypto.Tls::KeyExchangeAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1252))
// CS Name: Org.BouncyCastle.Crypto.Tls.KeyExchangeAlgorithm
class CORDL_TYPE KeyExchangeAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~KeyExchangeAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyExchangeAlgorithm", modifiers: " const&", def_value: None }]
constexpr KeyExchangeAlgorithm(KeyExchangeAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyExchangeAlgorithm", modifiers: "&&", def_value: None }]
constexpr KeyExchangeAlgorithm(KeyExchangeAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyExchangeAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyExchangeAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyExchangeAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyExchangeAlgorithm& operator=(KeyExchangeAlgorithm&& o) noexcept = default;
  constexpr KeyExchangeAlgorithm& operator=(KeyExchangeAlgorithm const& o) noexcept = default;
                


// Fields

/// @brief Field NULL offset 0
static constexpr int32_t  NULL{0};

/// @brief Field RSA offset 0
static constexpr int32_t  RSA{1};

/// @brief Field RSA_EXPORT offset 0
static constexpr int32_t  RSA_EXPORT{2};

/// @brief Field DHE_DSS offset 0
static constexpr int32_t  DHE_DSS{3};

/// @brief Field DHE_DSS_EXPORT offset 0
static constexpr int32_t  DHE_DSS_EXPORT{4};

/// @brief Field DHE_RSA offset 0
static constexpr int32_t  DHE_RSA{5};

/// @brief Field DHE_RSA_EXPORT offset 0
static constexpr int32_t  DHE_RSA_EXPORT{6};

/// @brief Field DH_DSS offset 0
static constexpr int32_t  DH_DSS{7};

/// @brief Field DH_DSS_EXPORT offset 0
static constexpr int32_t  DH_DSS_EXPORT{8};

/// @brief Field DH_RSA offset 0
static constexpr int32_t  DH_RSA{9};

/// @brief Field DH_RSA_EXPORT offset 0
static constexpr int32_t  DH_RSA_EXPORT{10};

/// @brief Field DH_anon offset 0
static constexpr int32_t  DH_anon{11};

/// @brief Field DH_anon_EXPORT offset 0
static constexpr int32_t  DH_anon_EXPORT{12};

/// @brief Field PSK offset 0
static constexpr int32_t  PSK{13};

/// @brief Field DHE_PSK offset 0
static constexpr int32_t  DHE_PSK{14};

/// @brief Field RSA_PSK offset 0
static constexpr int32_t  RSA_PSK{15};

/// @brief Field ECDH_ECDSA offset 0
static constexpr int32_t  ECDH_ECDSA{16};

/// @brief Field ECDHE_ECDSA offset 0
static constexpr int32_t  ECDHE_ECDSA{17};

/// @brief Field ECDH_RSA offset 0
static constexpr int32_t  ECDH_RSA{18};

/// @brief Field ECDHE_RSA offset 0
static constexpr int32_t  ECDHE_RSA{19};

/// @brief Field ECDH_anon offset 0
static constexpr int32_t  ECDH_anon{20};

/// @brief Field SRP offset 0
static constexpr int32_t  SRP{21};

/// @brief Field SRP_DSS offset 0
static constexpr int32_t  SRP_DSS{22};

/// @brief Field SRP_RSA offset 0
static constexpr int32_t  SRP_RSA{23};

/// @brief Field ECDHE_PSK offset 0
static constexpr int32_t  ECDHE_PSK{24};


// Methods

// Ctor Parameters []
explicit KeyExchangeAlgorithm() ;

/// @brief Method .ctor addr 0xf04d28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::KeyExchangeAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::KeyExchangeAlgorithm, "Org.BouncyCastle.Crypto.Tls", "KeyExchangeAlgorithm");

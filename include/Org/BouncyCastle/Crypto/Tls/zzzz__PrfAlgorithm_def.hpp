#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class PrfAlgorithm;
}
// Type: Org.BouncyCastle.Crypto.Tls::PrfAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1259))
// CS Name: Org.BouncyCastle.Crypto.Tls.PrfAlgorithm
class CORDL_TYPE PrfAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PrfAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrfAlgorithm", modifiers: " const&", def_value: None }]
constexpr PrfAlgorithm(PrfAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrfAlgorithm", modifiers: "&&", def_value: None }]
constexpr PrfAlgorithm(PrfAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrfAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrfAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrfAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrfAlgorithm& operator=(PrfAlgorithm&& o) noexcept = default;
  constexpr PrfAlgorithm& operator=(PrfAlgorithm const& o) noexcept = default;
                


// Fields

/// @brief Field tls_prf_legacy offset 0
static constexpr int32_t  tls_prf_legacy{0};

/// @brief Field tls_prf_sha256 offset 0
static constexpr int32_t  tls_prf_sha256{1};

/// @brief Field tls_prf_sha384 offset 0
static constexpr int32_t  tls_prf_sha384{2};


// Methods

// Ctor Parameters []
explicit PrfAlgorithm() ;

/// @brief Method .ctor addr 0xf055b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::PrfAlgorithm, "Org.BouncyCastle.Crypto.Tls", "PrfAlgorithm");

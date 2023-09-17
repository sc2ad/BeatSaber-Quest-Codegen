#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class MacAlgorithm;
}
// Type: Org.BouncyCastle.Crypto.Tls::MacAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1253))
// CS Name: Org.BouncyCastle.Crypto.Tls.MacAlgorithm
class CORDL_TYPE MacAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MacAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacAlgorithm", modifiers: " const&", def_value: None }]
constexpr MacAlgorithm(MacAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacAlgorithm", modifiers: "&&", def_value: None }]
constexpr MacAlgorithm(MacAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MacAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacAlgorithm& operator=(MacAlgorithm&& o) noexcept = default;
  constexpr MacAlgorithm& operator=(MacAlgorithm const& o) noexcept = default;
                


// Fields

/// @brief Field cls_null offset 0
static constexpr int32_t  cls_null{0};

/// @brief Field md5 offset 0
static constexpr int32_t  md5{1};

/// @brief Field sha offset 0
static constexpr int32_t  sha{2};

/// @brief Field hmac_md5 offset 0
static constexpr int32_t  hmac_md5{1};

/// @brief Field hmac_sha1 offset 0
static constexpr int32_t  hmac_sha1{2};

/// @brief Field hmac_sha256 offset 0
static constexpr int32_t  hmac_sha256{3};

/// @brief Field hmac_sha384 offset 0
static constexpr int32_t  hmac_sha384{4};

/// @brief Field hmac_sha512 offset 0
static constexpr int32_t  hmac_sha512{5};


// Methods

// Ctor Parameters []
explicit MacAlgorithm() ;

/// @brief Method .ctor addr 0xf04d30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::MacAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::MacAlgorithm, "Org.BouncyCastle.Crypto.Tls", "MacAlgorithm");

#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class BulkCipherAlgorithm;
}
// Type: Org.BouncyCastle.Crypto.Tls::BulkCipherAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1182))
// CS Name: Org.BouncyCastle.Crypto.Tls.BulkCipherAlgorithm
class CORDL_TYPE BulkCipherAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BulkCipherAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "BulkCipherAlgorithm", modifiers: " const&", def_value: None }]
constexpr BulkCipherAlgorithm(BulkCipherAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BulkCipherAlgorithm", modifiers: "&&", def_value: None }]
constexpr BulkCipherAlgorithm(BulkCipherAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BulkCipherAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BulkCipherAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BulkCipherAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BulkCipherAlgorithm& operator=(BulkCipherAlgorithm&& o) noexcept = default;
  constexpr BulkCipherAlgorithm& operator=(BulkCipherAlgorithm const& o) noexcept = default;
                


// Fields

/// @brief Field cls_null offset 0
static constexpr int32_t  cls_null{0};

/// @brief Field rc4 offset 0
static constexpr int32_t  rc4{1};

/// @brief Field rc2 offset 0
static constexpr int32_t  rc2{2};

/// @brief Field des offset 0
static constexpr int32_t  des{3};

/// @brief Field cls_3des offset 0
static constexpr int32_t  cls_3des{4};

/// @brief Field des40 offset 0
static constexpr int32_t  des40{5};

/// @brief Field aes offset 0
static constexpr int32_t  aes{6};

/// @brief Field idea offset 0
static constexpr int32_t  idea{7};


// Methods

// Ctor Parameters []
explicit BulkCipherAlgorithm() ;

/// @brief Method .ctor addr 0xece1f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::BulkCipherAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::BulkCipherAlgorithm, "Org.BouncyCastle.Crypto.Tls", "BulkCipherAlgorithm");

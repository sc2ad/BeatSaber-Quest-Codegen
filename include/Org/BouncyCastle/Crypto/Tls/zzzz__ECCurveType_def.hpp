#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ECCurveType;
}
// Type: Org.BouncyCastle.Crypto.Tls::ECCurveType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1239))
// CS Name: Org.BouncyCastle.Crypto.Tls.ECCurveType
class CORDL_TYPE ECCurveType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ECCurveType() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECCurveType", modifiers: " const&", def_value: None }]
constexpr ECCurveType(ECCurveType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECCurveType", modifiers: "&&", def_value: None }]
constexpr ECCurveType(ECCurveType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECCurveType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECCurveType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECCurveType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECCurveType& operator=(ECCurveType&& o) noexcept = default;
  constexpr ECCurveType& operator=(ECCurveType const& o) noexcept = default;
                


// Fields

/// @brief Field explicit_prime offset 0
static constexpr uint8_t  explicit_prime{1u};

/// @brief Field explicit_char2 offset 0
static constexpr uint8_t  explicit_char2{2u};

/// @brief Field named_curve offset 0
static constexpr uint8_t  named_curve{3u};


// Methods

// Ctor Parameters []
explicit ECCurveType() ;

/// @brief Method .ctor addr 0xf04204 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ECCurveType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ECCurveType, "Org.BouncyCastle.Crypto.Tls", "ECCurveType");

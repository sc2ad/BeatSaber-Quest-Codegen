#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ECBasisType;
}
// Type: Org.BouncyCastle.Crypto.Tls::ECBasisType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1238))
// CS Name: Org.BouncyCastle.Crypto.Tls.ECBasisType
class CORDL_TYPE ECBasisType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ECBasisType() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECBasisType", modifiers: " const&", def_value: None }]
constexpr ECBasisType(ECBasisType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECBasisType", modifiers: "&&", def_value: None }]
constexpr ECBasisType(ECBasisType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECBasisType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECBasisType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECBasisType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECBasisType& operator=(ECBasisType&& o) noexcept = default;
  constexpr ECBasisType& operator=(ECBasisType const& o) noexcept = default;
                


// Fields

/// @brief Field ec_basis_trinomial offset 0
static constexpr uint8_t  ec_basis_trinomial{1u};

/// @brief Field ec_basis_pentanomial offset 0
static constexpr uint8_t  ec_basis_pentanomial{2u};


// Methods

/// @brief Method IsValid addr 0xf041e8 size 0x14 virtual false final false
static bool IsValid(uint8_t ecBasisType) ;

// Ctor Parameters []
explicit ECBasisType() ;

/// @brief Method .ctor addr 0xf041fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::ECBasisType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::ECBasisType, "Org.BouncyCastle.Crypto.Tls", "ECBasisType");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
struct RevocationReasonTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class RevocationReason;
}
// Type: Org.BouncyCastle.Bcpg::RevocationReason
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(544))
// CS Name: Org.BouncyCastle.Bcpg.RevocationReason
class CORDL_TYPE RevocationReason : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RevocationReason() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationReason", modifiers: " const&", def_value: None }]
constexpr RevocationReason(RevocationReason const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationReason", modifiers: "&&", def_value: None }]
constexpr RevocationReason(RevocationReason&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevocationReason(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr RevocationReason& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevocationReason& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevocationReason& operator=(RevocationReason&& o) noexcept = default;
  constexpr RevocationReason& operator=(RevocationReason const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Bcpg::RevocationReason New_ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113e854 size 0x48 virtual false final false
 void _ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data) ;

static Org::BouncyCastle::Bcpg::RevocationReason New_ctor(bool isCritical, Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description) ;

/// @brief Method .ctor addr 0x113e89c size 0x50 virtual false final false
 void _ctor(bool isCritical, Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description) ;

/// @brief Method CreateData addr 0x113e8ec size 0xa4 virtual false final false
static ::ArrayW<uint8_t> CreateData(Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description) ;

/// @brief Method GetRevocationReason addr 0x113e990 size 0x28 virtual true final false
 Org::BouncyCastle::Bcpg::RevocationReasonTag GetRevocationReason() ;

/// @brief Method GetRevocationDescription addr 0x113e9b8 size 0xc0 virtual true final false
 ::StringW GetRevocationDescription() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::RevocationReason);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::RevocationReason, "Org.BouncyCastle.Bcpg", "RevocationReason");

#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPad;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPad
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1656))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPad
class CORDL_TYPE PgpPad : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PgpPad() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPad", modifiers: " const&", def_value: None }]
constexpr PgpPad(PgpPad const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPad", modifiers: "&&", def_value: None }]
constexpr PgpPad(PgpPad&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpPad(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpPad& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpPad& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpPad& operator=(PgpPad&& o) noexcept = default;
  constexpr PgpPad& operator=(PgpPad const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PgpPad() ;

/// @brief Method .ctor addr 0x10260ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method PadSessionData addr 0x10260b4 size 0x8 virtual false final false
static ::ArrayW<uint8_t> PadSessionData(::ArrayW<uint8_t> sessionInfo) ;

/// @brief Method PadSessionData addr 0x1020960 size 0x108 virtual false final false
static ::ArrayW<uint8_t> PadSessionData(::ArrayW<uint8_t> sessionInfo, bool obfuscate) ;

/// @brief Method UnpadSessionData addr 0x10260bc size 0x138 virtual false final false
static ::ArrayW<uint8_t> UnpadSessionData(::ArrayW<uint8_t> encoded) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPad");

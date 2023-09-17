#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyFlags;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyFlags
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1645))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyFlags
class CORDL_TYPE PgpKeyFlags : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PgpKeyFlags() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyFlags", modifiers: " const&", def_value: None }]
constexpr PgpKeyFlags(PgpKeyFlags const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyFlags", modifiers: "&&", def_value: None }]
constexpr PgpKeyFlags(PgpKeyFlags&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpKeyFlags(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpKeyFlags& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpKeyFlags& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpKeyFlags& operator=(PgpKeyFlags&& o) noexcept = default;
  constexpr PgpKeyFlags& operator=(PgpKeyFlags const& o) noexcept = default;
                


// Fields

/// @brief Field CanCertify offset 0
static constexpr int32_t  CanCertify{1};

/// @brief Field CanSign offset 0
static constexpr int32_t  CanSign{2};

/// @brief Field CanEncryptCommunications offset 0
static constexpr int32_t  CanEncryptCommunications{4};

/// @brief Field CanEncryptStorage offset 0
static constexpr int32_t  CanEncryptStorage{8};

/// @brief Field MaybeSplit offset 0
static constexpr int32_t  MaybeSplit{16};

/// @brief Field MaybeShared offset 0
static constexpr int32_t  MaybeShared{128};


// Methods

// Ctor Parameters []
explicit PgpKeyFlags() ;

/// @brief Method .ctor addr 0x102165c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyFlags);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyFlags, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyFlags");

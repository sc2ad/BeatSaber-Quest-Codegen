#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyRing;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyRing
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1647))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyRing
class CORDL_TYPE PgpKeyRing : public Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PgpKeyRing() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyRing", modifiers: " const&", def_value: None }]
constexpr PgpKeyRing(PgpKeyRing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyRing", modifiers: "&&", def_value: None }]
constexpr PgpKeyRing(PgpKeyRing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpKeyRing(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(ptr) {
}


  constexpr PgpKeyRing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpKeyRing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpKeyRing& operator=(PgpKeyRing&& o) noexcept = default;
  constexpr PgpKeyRing& operator=(PgpKeyRing const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing New_ctor() ;

/// @brief Method .ctor addr 0x1021d4c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ReadOptionalTrustPacket addr 0x1021d54 size 0xa0 virtual false final false
static Org::BouncyCastle::Bcpg::TrustPacket ReadOptionalTrustPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method ReadSignaturesAndTrust addr 0x1021df4 size 0x2c8 virtual false final false
static System::Collections::IList ReadSignaturesAndTrust(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method ReadUserIDs addr 0x10220bc size 0x340 virtual false final false
static void ReadUserIDs(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput, ByRef<System::Collections::IList> ids, ByRef<System::Collections::IList> idTrusts, ByRef<System::Collections::IList> idSigs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyRing");

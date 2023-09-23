#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class MarkerPacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpMarker;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpMarker
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1652))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpMarker
class CORDL_TYPE PgpMarker : public Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpMarker() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpMarker", modifiers: " const&", def_value: None }]
constexpr PgpMarker(PgpMarker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpMarker", modifiers: "&&", def_value: None }]
constexpr PgpMarker(PgpMarker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpMarker(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(ptr) {
}


  constexpr PgpMarker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpMarker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpMarker& operator=(PgpMarker&& o) noexcept = default;
  constexpr PgpMarker& operator=(PgpMarker const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::MarkerPacket __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(Org::BouncyCastle::Bcpg::MarkerPacket value) ;

constexpr Org::BouncyCastle::Bcpg::MarkerPacket __get_data() const;


// Methods

// Ctor Parameters [CppParam { name: "bcpgInput", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit PgpMarker(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method .ctor addr 0x1024560 size 0x120 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpMarker");

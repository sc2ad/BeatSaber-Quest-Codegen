#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
namespace Org::BouncyCastle::Bcpg {
class ExperimentalPacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpExperimental;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpExperimental
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1644))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpExperimental
class CORDL_TYPE PgpExperimental : public Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpExperimental() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpExperimental", modifiers: " const&", def_value: None }]
constexpr PgpExperimental(PgpExperimental const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpExperimental", modifiers: "&&", def_value: None }]
constexpr PgpExperimental(PgpExperimental&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpExperimental(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(ptr) {
}


  constexpr PgpExperimental& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpExperimental& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpExperimental& operator=(PgpExperimental&& o) noexcept = default;
  constexpr PgpExperimental& operator=(PgpExperimental const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::ExperimentalPacket __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Bcpg::ExperimentalPacket value) ;

constexpr Org::BouncyCastle::Bcpg::ExperimentalPacket __get_p() const;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x102159c size 0xc0 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpExperimental");

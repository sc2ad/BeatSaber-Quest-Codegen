#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SymmetricEncDataPacket;
}
// Type: Org.BouncyCastle.Bcpg::SymmetricEncDataPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(592))
// CS Name: Org.BouncyCastle.Bcpg.SymmetricEncDataPacket
class CORDL_TYPE SymmetricEncDataPacket : public Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SymmetricEncDataPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricEncDataPacket", modifiers: " const&", def_value: None }]
constexpr SymmetricEncDataPacket(SymmetricEncDataPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricEncDataPacket", modifiers: "&&", def_value: None }]
constexpr SymmetricEncDataPacket(SymmetricEncDataPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SymmetricEncDataPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::InputStreamPacket(ptr) {
}


  constexpr SymmetricEncDataPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SymmetricEncDataPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SymmetricEncDataPacket& operator=(SymmetricEncDataPacket&& o) noexcept = default;
  constexpr SymmetricEncDataPacket& operator=(SymmetricEncDataPacket const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit SymmetricEncDataPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1144924 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::SymmetricEncDataPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::SymmetricEncDataPacket, "Org.BouncyCastle.Bcpg", "SymmetricEncDataPacket");

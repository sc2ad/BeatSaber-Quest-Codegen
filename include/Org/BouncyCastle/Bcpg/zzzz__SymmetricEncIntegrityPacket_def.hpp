#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SymmetricEncIntegrityPacket;
}
// Type: Org.BouncyCastle.Bcpg::SymmetricEncIntegrityPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(593))
// CS Name: Org.BouncyCastle.Bcpg.SymmetricEncIntegrityPacket
class CORDL_TYPE SymmetricEncIntegrityPacket : public Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SymmetricEncIntegrityPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricEncIntegrityPacket", modifiers: " const&", def_value: None }]
constexpr SymmetricEncIntegrityPacket(SymmetricEncIntegrityPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricEncIntegrityPacket", modifiers: "&&", def_value: None }]
constexpr SymmetricEncIntegrityPacket(SymmetricEncIntegrityPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SymmetricEncIntegrityPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::InputStreamPacket(ptr) {
}


  constexpr SymmetricEncIntegrityPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SymmetricEncIntegrityPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SymmetricEncIntegrityPacket& operator=(SymmetricEncIntegrityPacket&& o) noexcept = default;
  constexpr SymmetricEncIntegrityPacket& operator=(SymmetricEncIntegrityPacket const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit SymmetricEncIntegrityPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1144fe4 size 0x48 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket, "Org.BouncyCastle.Bcpg", "SymmetricEncIntegrityPacket");

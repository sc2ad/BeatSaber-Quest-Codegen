#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ContainedPacket;
}
// Type: Org.BouncyCastle.Bcpg::ContainedPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(560))
// CS Name: Org.BouncyCastle.Bcpg.ContainedPacket
class CORDL_TYPE ContainedPacket : public Org::BouncyCastle::Bcpg::Packet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ContainedPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContainedPacket", modifiers: " const&", def_value: None }]
constexpr ContainedPacket(ContainedPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContainedPacket", modifiers: "&&", def_value: None }]
constexpr ContainedPacket(ContainedPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContainedPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::Packet(ptr) {
}


  constexpr ContainedPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContainedPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContainedPacket& operator=(ContainedPacket&& o) noexcept = default;
  constexpr ContainedPacket& operator=(ContainedPacket const& o) noexcept = default;
                


// Methods

/// @brief Method GetEncoded addr 0x1146268 size 0xb0 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x0 size 0xffffffffffffffff virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static Org::BouncyCastle::Bcpg::ContainedPacket New_ctor() ;

/// @brief Method .ctor addr 0x1146318 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::ContainedPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::ContainedPacket, "Org.BouncyCastle.Bcpg", "ContainedPacket");

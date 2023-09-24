#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
// Type: Org.BouncyCastle.Bcpg::InputStreamPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(557))
// CS Name: Org.BouncyCastle.Bcpg.InputStreamPacket
class CORDL_TYPE InputStreamPacket : public Org::BouncyCastle::Bcpg::Packet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InputStreamPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputStreamPacket", modifiers: " const&", def_value: None }]
constexpr InputStreamPacket(InputStreamPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputStreamPacket", modifiers: "&&", def_value: None }]
constexpr InputStreamPacket(InputStreamPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputStreamPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::Packet(ptr) {
}


  constexpr InputStreamPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputStreamPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputStreamPacket& operator=(InputStreamPacket&& o) noexcept = default;
  constexpr InputStreamPacket& operator=(InputStreamPacket const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::BcpgInputStream __declspec(property(get=__get_bcpgIn, put=__set_bcpgIn))  bcpgIn;

constexpr void __set_bcpgIn(Org::BouncyCastle::Bcpg::BcpgInputStream value) ;

constexpr Org::BouncyCastle::Bcpg::BcpgInputStream __get_bcpgIn() const;


// Methods

static Org::BouncyCastle::Bcpg::InputStreamPacket New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x114310c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method GetInputStream addr 0x1146258 size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::BcpgInputStream GetInputStream() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::InputStreamPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::InputStreamPacket, "Org.BouncyCastle.Bcpg", "InputStreamPacket");

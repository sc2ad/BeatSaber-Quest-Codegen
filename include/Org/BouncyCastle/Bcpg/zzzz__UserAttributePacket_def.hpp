#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserAttributePacket;
}
// Type: Org.BouncyCastle.Bcpg::UserAttributePacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(597))
// CS Name: Org.BouncyCastle.Bcpg.UserAttributePacket
class CORDL_TYPE UserAttributePacket : public Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UserAttributePacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributePacket", modifiers: " const&", def_value: None }]
constexpr UserAttributePacket(UserAttributePacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributePacket", modifiers: "&&", def_value: None }]
constexpr UserAttributePacket(UserAttributePacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserAttributePacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr UserAttributePacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserAttributePacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserAttributePacket& operator=(UserAttributePacket&& o) noexcept = default;
  constexpr UserAttributePacket& operator=(UserAttributePacket const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> __declspec(property(get=__get_subpackets, put=__set_subpackets))  subpackets;

constexpr void __set_subpackets(::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> __get_subpackets() const;


// Methods

static Org::BouncyCastle::Bcpg::UserAttributePacket New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1144cbc size 0x324 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static Org::BouncyCastle::Bcpg::UserAttributePacket New_ctor(::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> subpackets) ;

/// @brief Method .ctor addr 0x114ad58 size 0x28 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> subpackets) ;

/// @brief Method GetSubpackets addr 0x114ad80 size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> GetSubpackets() ;

/// @brief Method Encode addr 0x114ad88 size 0xd8 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::UserAttributePacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::UserAttributePacket, "Org.BouncyCastle.Bcpg", "UserAttributePacket");

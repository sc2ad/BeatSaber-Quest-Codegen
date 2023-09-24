#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
// Type: Org.BouncyCastle.Bcpg::TrustPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(596))
// CS Name: Org.BouncyCastle.Bcpg.TrustPacket
class CORDL_TYPE TrustPacket : public Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TrustPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrustPacket", modifiers: " const&", def_value: None }]
constexpr TrustPacket(TrustPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrustPacket", modifiers: "&&", def_value: None }]
constexpr TrustPacket(TrustPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrustPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr TrustPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrustPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrustPacket& operator=(TrustPacket&& o) noexcept = default;
  constexpr TrustPacket& operator=(TrustPacket const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_levelAndTrustAmount, put=__set_levelAndTrustAmount))  levelAndTrustAmount;

constexpr void __set_levelAndTrustAmount(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_levelAndTrustAmount() const;


// Methods

static Org::BouncyCastle::Bcpg::TrustPacket New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1144ba4 size 0xdc virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static Org::BouncyCastle::Bcpg::TrustPacket New_ctor(int32_t trustCode) ;

/// @brief Method .ctor addr 0x114ac10 size 0x80 virtual false final false
 void _ctor(int32_t trustCode) ;

/// @brief Method GetLevelAndTrustAmount addr 0x114ac90 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetLevelAndTrustAmount() ;

/// @brief Method Encode addr 0x114ad08 size 0x28 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::TrustPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::TrustPacket, "Org.BouncyCastle.Bcpg", "TrustPacket");

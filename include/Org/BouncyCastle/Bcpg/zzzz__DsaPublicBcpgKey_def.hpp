#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class DsaPublicBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::DsaPublicBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(563))
// CS Name: Org.BouncyCastle.Bcpg.DsaPublicBcpgKey
class CORDL_TYPE DsaPublicBcpgKey : public Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Bcpg::IBcpgKey
constexpr operator  Org::BouncyCastle::Bcpg::IBcpgKey() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DsaPublicBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaPublicBcpgKey", modifiers: " const&", def_value: None }]
constexpr DsaPublicBcpgKey(DsaPublicBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaPublicBcpgKey", modifiers: "&&", def_value: None }]
constexpr DsaPublicBcpgKey(DsaPublicBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaPublicBcpgKey(void* ptr) noexcept : Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr DsaPublicBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaPublicBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaPublicBcpgKey& operator=(DsaPublicBcpgKey&& o) noexcept = default;
  constexpr DsaPublicBcpgKey& operator=(DsaPublicBcpgKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_p() const;

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_q() const;

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_g() const;

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_y() const;


// Properties

 ::StringW __declspec(property(get=get_Format))  Format;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Y))  Y;


// Methods

static Org::BouncyCastle::Bcpg::DsaPublicBcpgKey New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1146330 size 0xcc virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static Org::BouncyCastle::Bcpg::DsaPublicBcpgKey New_ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Math::BigInteger y) ;

/// @brief Method .ctor addr 0x114653c size 0xe0 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Math::BigInteger y) ;

/// @brief Method get_Format addr 0x11466e8 size 0x40 virtual true final true
 ::StringW get_Format() ;

/// @brief Method GetEncoded addr 0x1146728 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x11467ac size 0x12c virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

/// @brief Method get_G addr 0x11468d8 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method get_P addr 0x11468f4 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_Q addr 0x1146910 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_Y addr 0x114692c size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Y() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::DsaPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::DsaPublicBcpgKey, "Org.BouncyCastle.Bcpg", "DsaPublicBcpgKey");

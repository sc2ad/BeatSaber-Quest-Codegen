#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ElGamalPublicBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::ElGamalPublicBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(569))
// CS Name: Org.BouncyCastle.Bcpg.ElGamalPublicBcpgKey
class CORDL_TYPE ElGamalPublicBcpgKey : public Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Bcpg::IBcpgKey
constexpr operator  Org::BouncyCastle::Bcpg::IBcpgKey() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ElGamalPublicBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicBcpgKey", modifiers: " const&", def_value: None }]
constexpr ElGamalPublicBcpgKey(ElGamalPublicBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicBcpgKey", modifiers: "&&", def_value: None }]
constexpr ElGamalPublicBcpgKey(ElGamalPublicBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalPublicBcpgKey(void* ptr) noexcept : Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr ElGamalPublicBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalPublicBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalPublicBcpgKey& operator=(ElGamalPublicBcpgKey&& o) noexcept = default;
  constexpr ElGamalPublicBcpgKey& operator=(ElGamalPublicBcpgKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_p() const;

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_g() const;

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_y() const;


// Properties

 ::StringW __declspec(property(get=get_Format))  Format;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Y))  Y;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit ElGamalPublicBcpgKey(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x11474b4 size 0xb0 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "p", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ElGamalPublicBcpgKey(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Math::BigInteger y) ;

/// @brief Method .ctor addr 0x1147564 size 0xc0 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Math::BigInteger y) ;

/// @brief Method get_Format addr 0x1147624 size 0x40 virtual true final true
 ::StringW get_Format() ;

/// @brief Method GetEncoded addr 0x1147664 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method get_P addr 0x11476e8 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_G addr 0x1147704 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method get_Y addr 0x1147720 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Y() ;

/// @brief Method Encode addr 0x114773c size 0x100 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey, "Org.BouncyCastle.Bcpg", "ElGamalPublicBcpgKey");

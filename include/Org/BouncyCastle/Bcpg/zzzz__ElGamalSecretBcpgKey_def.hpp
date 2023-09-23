#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ElGamalSecretBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::ElGamalSecretBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(570))
// CS Name: Org.BouncyCastle.Bcpg.ElGamalSecretBcpgKey
class CORDL_TYPE ElGamalSecretBcpgKey : public Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Bcpg::IBcpgKey
constexpr operator  Org::BouncyCastle::Bcpg::IBcpgKey() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ElGamalSecretBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalSecretBcpgKey", modifiers: " const&", def_value: None }]
constexpr ElGamalSecretBcpgKey(ElGamalSecretBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalSecretBcpgKey", modifiers: "&&", def_value: None }]
constexpr ElGamalSecretBcpgKey(ElGamalSecretBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalSecretBcpgKey(void* ptr) noexcept : Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr ElGamalSecretBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalSecretBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalSecretBcpgKey& operator=(ElGamalSecretBcpgKey&& o) noexcept = default;
  constexpr ElGamalSecretBcpgKey& operator=(ElGamalSecretBcpgKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_x() const;


// Properties

 ::StringW __declspec(property(get=get_Format))  Format;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_X))  X;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit ElGamalSecretBcpgKey(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x114783c size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "x", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ElGamalSecretBcpgKey(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0x11478b4 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method get_Format addr 0x114792c size 0x40 virtual true final true
 ::StringW get_Format() ;

/// @brief Method get_X addr 0x114796c size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_X() ;

/// @brief Method GetEncoded addr 0x1147988 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x1147a0c size 0x24 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey, "Org.BouncyCastle.Bcpg", "ElGamalSecretBcpgKey");

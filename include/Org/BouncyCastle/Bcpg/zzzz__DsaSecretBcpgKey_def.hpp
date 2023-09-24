#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class DsaSecretBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::DsaSecretBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(564))
// CS Name: Org.BouncyCastle.Bcpg.DsaSecretBcpgKey
class CORDL_TYPE DsaSecretBcpgKey : public Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Bcpg::IBcpgKey
constexpr operator  Org::BouncyCastle::Bcpg::IBcpgKey() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DsaSecretBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaSecretBcpgKey", modifiers: " const&", def_value: None }]
constexpr DsaSecretBcpgKey(DsaSecretBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaSecretBcpgKey", modifiers: "&&", def_value: None }]
constexpr DsaSecretBcpgKey(DsaSecretBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaSecretBcpgKey(void* ptr) noexcept : Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr DsaSecretBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaSecretBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaSecretBcpgKey& operator=(DsaSecretBcpgKey&& o) noexcept = default;
  constexpr DsaSecretBcpgKey& operator=(DsaSecretBcpgKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_x() const;


// Properties

 ::StringW __declspec(property(get=get_Format))  Format;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_X))  X;


// Methods

static Org::BouncyCastle::Bcpg::DsaSecretBcpgKey New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1146948 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static Org::BouncyCastle::Bcpg::DsaSecretBcpgKey New_ctor(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0x11469c0 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method get_Format addr 0x1146a38 size 0x40 virtual true final true
 ::StringW get_Format() ;

/// @brief Method GetEncoded addr 0x1146a78 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x1146afc size 0x24 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

/// @brief Method get_X addr 0x1146b20 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_X() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::DsaSecretBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::DsaSecretBcpgKey, "Org.BouncyCastle.Bcpg", "DsaSecretBcpgKey");

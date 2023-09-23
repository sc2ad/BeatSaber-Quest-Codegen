#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ECSecretBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::ECSecretBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(568))
// CS Name: Org.BouncyCastle.Bcpg.ECSecretBcpgKey
class CORDL_TYPE ECSecretBcpgKey : public Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Bcpg::IBcpgKey
constexpr operator  Org::BouncyCastle::Bcpg::IBcpgKey() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ECSecretBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECSecretBcpgKey", modifiers: " const&", def_value: None }]
constexpr ECSecretBcpgKey(ECSecretBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECSecretBcpgKey", modifiers: "&&", def_value: None }]
constexpr ECSecretBcpgKey(ECSecretBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECSecretBcpgKey(void* ptr) noexcept : Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr ECSecretBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECSecretBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECSecretBcpgKey& operator=(ECSecretBcpgKey&& o) noexcept = default;
  constexpr ECSecretBcpgKey& operator=(ECSecretBcpgKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr Org::BouncyCastle::Bcpg::MPInteger __get_x() const;


// Properties

 ::StringW __declspec(property(get=get_Format))  Format;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_X))  X;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit ECSecretBcpgKey(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x11472c0 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "x", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECSecretBcpgKey(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0x1147338 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method get_Format addr 0x11473b0 size 0x40 virtual true final true
 ::StringW get_Format() ;

/// @brief Method GetEncoded addr 0x11473f0 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x1147474 size 0x24 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

/// @brief Method get_X addr 0x1147498 size 0x1c virtual true final false
 Org::BouncyCastle::Math::BigInteger get_X() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::ECSecretBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::ECSecretBcpgKey, "Org.BouncyCastle.Bcpg", "ECSecretBcpgKey");

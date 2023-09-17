#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class RsaPublicBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::RsaPublicBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(584))
// CS Name: Org.BouncyCastle.Bcpg.RsaPublicBcpgKey
class CORDL_TYPE RsaPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Bcpg::IBcpgKey
constexpr operator  ::Org::BouncyCastle::Bcpg::IBcpgKey() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RsaPublicBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaPublicBcpgKey", modifiers: " const&", def_value: None }]
constexpr RsaPublicBcpgKey(RsaPublicBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaPublicBcpgKey", modifiers: "&&", def_value: None }]
constexpr RsaPublicBcpgKey(RsaPublicBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaPublicBcpgKey(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr RsaPublicBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaPublicBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaPublicBcpgKey& operator=(RsaPublicBcpgKey&& o) noexcept = default;
  constexpr RsaPublicBcpgKey& operator=(RsaPublicBcpgKey const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(::Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger __get_n() const;

 ::Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(::Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger __get_e() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PublicExponent))  PublicExponent;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Modulus))  Modulus;

 ::StringW __declspec(property(get=get_Format))  Format;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit RsaPublicBcpgKey(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1148354 size 0x94 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "n", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit RsaPublicBcpgKey(::Org::BouncyCastle::Math::BigInteger n, ::Org::BouncyCastle::Math::BigInteger e) ;

/// @brief Method .ctor addr 0x11486ec size 0x98 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger n, ::Org::BouncyCastle::Math::BigInteger e) ;

/// @brief Method get_PublicExponent addr 0x1148784 size 0x1c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_PublicExponent() ;

/// @brief Method get_Modulus addr 0x11487a0 size 0x1c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Modulus() ;

/// @brief Method get_Format addr 0x11487bc size 0x40 virtual true final true
 ::StringW get_Format() ;

/// @brief Method GetEncoded addr 0x11487fc size 0x84 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x1148880 size 0xd4 virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey, "Org.BouncyCastle.Bcpg", "RsaPublicBcpgKey");

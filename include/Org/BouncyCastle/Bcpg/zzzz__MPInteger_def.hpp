#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
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
class MPInteger;
}
// Type: Org.BouncyCastle.Bcpg::MPInteger
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(576))
// CS Name: Org.BouncyCastle.Bcpg.MPInteger
class CORDL_TYPE MPInteger : public Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MPInteger() = default;

// Ctor Parameters [CppParam { name: "", ty: "MPInteger", modifiers: " const&", def_value: None }]
constexpr MPInteger(MPInteger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MPInteger", modifiers: "&&", def_value: None }]
constexpr MPInteger(MPInteger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MPInteger(void* ptr) noexcept : Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr MPInteger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MPInteger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MPInteger& operator=(MPInteger&& o) noexcept = default;
  constexpr MPInteger& operator=(MPInteger const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_val, put=__set_val))  val;

constexpr void __set_val(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_val() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit MPInteger(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x11463fc size 0x140 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "val", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit MPInteger(Org::BouncyCastle::Math::BigInteger val) ;

/// @brief Method .ctor addr 0x114661c size 0xcc virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger val) ;

/// @brief Method get_Value addr 0x1147d18 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Value() ;

/// @brief Method Encode addr 0x1147d20 size 0x70 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

/// @brief Method Encode addr 0x1147d90 size 0x6c virtual false final false
static void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut, Org::BouncyCastle::Math::BigInteger val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::MPInteger);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::MPInteger, "Org.BouncyCastle.Bcpg", "MPInteger");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
// Type: Org.BouncyCastle.Crypto::IDsaExt
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1126))
// CS Name: Org.BouncyCastle.Crypto.IDsaExt
class CORDL_TYPE IDsaExt : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDsa
constexpr operator  ::Org::BouncyCastle::Crypto::IDsa() const noexcept;

~IDsaExt() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDsaExt(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Order))  Order;


// Methods

/// @brief Method get_Order addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_Order() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IDsaExt);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IDsaExt, "Org.BouncyCastle.Crypto", "IDsaExt");

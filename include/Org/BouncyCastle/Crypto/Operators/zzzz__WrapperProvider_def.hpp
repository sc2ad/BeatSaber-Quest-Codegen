#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class WrapperProvider;
}
// Type: Org.BouncyCastle.Crypto.Operators::WrapperProvider
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(986))
// CS Name: Org.BouncyCastle.Crypto.Operators.WrapperProvider
class CORDL_TYPE WrapperProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~WrapperProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WrapperProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateWrapper addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType CreateWrapper(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::WrapperProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::WrapperProvider, "Org.BouncyCastle.Crypto.Operators", "WrapperProvider");

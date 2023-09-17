#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
// Type: Org.BouncyCastle.Crypto::IVerifierFactoryProvider
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(995))
// CS Name: Org.BouncyCastle.Crypto.IVerifierFactoryProvider
class CORDL_TYPE IVerifierFactoryProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVerifierFactoryProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVerifierFactoryProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateVerifierFactory addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::IVerifierFactory CreateVerifierFactory(::bs_hook::Il2CppWrapperType algorithmDetails) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider, "Org.BouncyCastle.Crypto", "IVerifierFactoryProvider");

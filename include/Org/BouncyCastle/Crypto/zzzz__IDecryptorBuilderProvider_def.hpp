#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDecryptorBuilderProvider;
}
// Type: Org.BouncyCastle.Crypto::IDecryptorBuilderProvider
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1349))
// CS Name: Org.BouncyCastle.Crypto.IDecryptorBuilderProvider
class CORDL_TYPE IDecryptorBuilderProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDecryptorBuilderProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDecryptorBuilderProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateDecryptorBuilder addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::ICipherBuilder CreateDecryptorBuilder(::bs_hook::Il2CppWrapperType algorithmDetails) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IDecryptorBuilderProvider);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IDecryptorBuilderProvider, "Org.BouncyCastle.Crypto", "IDecryptorBuilderProvider");

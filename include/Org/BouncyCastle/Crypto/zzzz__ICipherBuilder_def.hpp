#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class ICipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
// Type: Org.BouncyCastle.Crypto::ICipherBuilder
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(978))
// CS Name: Org.BouncyCastle.Crypto.ICipherBuilder
class CORDL_TYPE ICipherBuilder : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICipherBuilder() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICipherBuilder(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

/// @brief Method get_AlgorithmDetails addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method GetMaxOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetMaxOutputSize(int32_t inputLen) ;

/// @brief Method BuildCipher addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::ICipher BuildCipher(System::IO::Stream stream) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::ICipherBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::ICipherBuilder, "Org.BouncyCastle.Crypto", "ICipherBuilder");

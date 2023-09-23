#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IKeyUnwrapper;
}
// Type: Org.BouncyCastle.Crypto::IKeyUnwrapper
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(987))
// CS Name: Org.BouncyCastle.Crypto.IKeyUnwrapper
class CORDL_TYPE IKeyUnwrapper : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IKeyUnwrapper() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKeyUnwrapper(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

/// @brief Method get_AlgorithmDetails addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method Unwrap addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::IBlockResult Unwrap(::ArrayW<uint8_t> cipherText, int32_t offset, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IKeyUnwrapper);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IKeyUnwrapper, "Org.BouncyCastle.Crypto", "IKeyUnwrapper");

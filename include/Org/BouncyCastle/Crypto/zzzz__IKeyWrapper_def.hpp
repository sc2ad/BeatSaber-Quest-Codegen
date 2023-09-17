#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
// Type: Org.BouncyCastle.Crypto::IKeyWrapper
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(983))
// CS Name: Org.BouncyCastle.Crypto.IKeyWrapper
class CORDL_TYPE IKeyWrapper : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IKeyWrapper() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKeyWrapper(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

/// @brief Method get_AlgorithmDetails addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method Wrap addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::IBlockResult Wrap(::ArrayW<uint8_t> keyData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IKeyWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IKeyWrapper, "Org.BouncyCastle.Crypto", "IKeyWrapper");

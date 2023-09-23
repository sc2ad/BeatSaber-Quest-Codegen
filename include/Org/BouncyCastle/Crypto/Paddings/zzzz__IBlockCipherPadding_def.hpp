#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
// Type: Org.BouncyCastle.Crypto.Paddings::IBlockCipherPadding
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1005))
// CS Name: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
class CORDL_TYPE IBlockCipherPadding : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBlockCipherPadding() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBlockCipherPadding(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_PaddingName))  PaddingName;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_PaddingName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_PaddingName() ;

/// @brief Method AddPadding addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t AddPadding(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method PadCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t PadCount(::ArrayW<uint8_t> input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding, "Org.BouncyCastle.Crypto.Paddings", "IBlockCipherPadding");

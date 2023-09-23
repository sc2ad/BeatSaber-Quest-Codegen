#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
// Type: Org.BouncyCastle.Crypto::IWrapper
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(826))
// CS Name: Org.BouncyCastle.Crypto.IWrapper
class CORDL_TYPE IWrapper : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IWrapper() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IWrapper(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Wrap addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Unwrap addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IWrapper);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IWrapper, "Org.BouncyCastle.Crypto", "IWrapper");

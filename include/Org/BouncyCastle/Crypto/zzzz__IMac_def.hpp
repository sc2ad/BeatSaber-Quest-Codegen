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
class IMac;
}
// Type: Org.BouncyCastle.Crypto::IMac
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(934))
// CS Name: Org.BouncyCastle.Crypto.IMac
class CORDL_TYPE IMac : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMac() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMac(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetMacSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetMacSize() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IMac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IMac, "Org.BouncyCastle.Crypto", "IMac");

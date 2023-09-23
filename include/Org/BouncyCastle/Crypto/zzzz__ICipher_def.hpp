#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ICipher;
}
// Type: Org.BouncyCastle.Crypto::ICipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(981))
// CS Name: Org.BouncyCastle.Crypto.ICipher
class CORDL_TYPE ICipher : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICipher() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICipher(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::IO::Stream __declspec(property(get=get_Stream))  Stream;


// Methods

/// @brief Method GetMaxOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetMaxOutputSize(int32_t inputLen) ;

/// @brief Method GetUpdateOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetUpdateOutputSize(int32_t inputLen) ;

/// @brief Method get_Stream addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IO::Stream get_Stream() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::ICipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::ICipher, "Org.BouncyCastle.Crypto", "ICipher");

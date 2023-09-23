#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
// Type: Org.BouncyCastle.Crypto::IStreamCalculator
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(705))
// CS Name: Org.BouncyCastle.Crypto.IStreamCalculator
class CORDL_TYPE IStreamCalculator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStreamCalculator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStreamCalculator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::IO::Stream __declspec(property(get=get_Stream))  Stream;


// Methods

/// @brief Method get_Stream addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IO::Stream get_Stream() ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IStreamCalculator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IStreamCalculator, "Org.BouncyCastle.Crypto", "IStreamCalculator");

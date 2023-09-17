#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
// Type: Org.BouncyCastle.Crypto::ICipherBuilderWithKey
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(979))
// CS Name: Org.BouncyCastle.Crypto.ICipherBuilderWithKey
class CORDL_TYPE ICipherBuilderWithKey : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherBuilder
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherBuilder() const noexcept;

~ICipherBuilderWithKey() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICipherBuilderWithKey(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=get_Key))  Key;


// Methods

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters get_Key() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey, "Org.BouncyCastle.Crypto", "ICipherBuilderWithKey");

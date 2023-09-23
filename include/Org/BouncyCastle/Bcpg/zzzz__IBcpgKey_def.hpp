#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::IBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(562))
// CS Name: Org.BouncyCastle.Bcpg.IBcpgKey
class CORDL_TYPE IBcpgKey : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBcpgKey() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBcpgKey(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_Format))  Format;


// Methods

/// @brief Method get_Format addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::IBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::IBcpgKey, "Org.BouncyCastle.Bcpg", "IBcpgKey");

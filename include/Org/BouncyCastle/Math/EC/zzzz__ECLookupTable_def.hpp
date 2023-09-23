#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
// Type: Org.BouncyCastle.Math.EC::ECLookupTable
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1362))
// CS Name: Org.BouncyCastle.Math.EC.ECLookupTable
class CORDL_TYPE ECLookupTable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ECLookupTable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECLookupTable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_Size))  Size;


// Methods

/// @brief Method get_Size addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Size() ;

/// @brief Method Lookup addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Lookup(int32_t index) ;

/// @brief Method LookupVar addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint LookupVar(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::ECLookupTable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECLookupTable, "Org.BouncyCastle.Math.EC", "ECLookupTable");

#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractECLookupTable;
}
// Type: Org.BouncyCastle.Math.EC::AbstractECLookupTable
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1363))
// CS Name: Org.BouncyCastle.Math.EC.AbstractECLookupTable
class CORDL_TYPE AbstractECLookupTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::ECLookupTable
constexpr operator  Org::BouncyCastle::Math::EC::ECLookupTable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbstractECLookupTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractECLookupTable", modifiers: " const&", def_value: None }]
constexpr AbstractECLookupTable(AbstractECLookupTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractECLookupTable", modifiers: "&&", def_value: None }]
constexpr AbstractECLookupTable(AbstractECLookupTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractECLookupTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbstractECLookupTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractECLookupTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractECLookupTable& operator=(AbstractECLookupTable&& o) noexcept = default;
  constexpr AbstractECLookupTable& operator=(AbstractECLookupTable const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_Size))  Size;


// Methods

/// @brief Method Lookup addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Lookup(int32_t index) ;

/// @brief Method get_Size addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Size() ;

/// @brief Method LookupVar addr 0xf3eaf0 size 0xc virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint LookupVar(int32_t index) ;

// Ctor Parameters []
explicit AbstractECLookupTable() ;

/// @brief Method .ctor addr 0xf3e71c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::AbstractECLookupTable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractECLookupTable, "Org.BouncyCastle.Math.EC", "AbstractECLookupTable");

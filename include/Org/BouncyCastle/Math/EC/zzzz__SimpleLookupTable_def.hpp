#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class SimpleLookupTable;
}
// Type: Org.BouncyCastle.Math.EC::SimpleLookupTable
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1579))
// CS Name: Org.BouncyCastle.Math.EC.SimpleLookupTable
class CORDL_TYPE SimpleLookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SimpleLookupTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLookupTable", modifiers: " const&", def_value: None }]
constexpr SimpleLookupTable(SimpleLookupTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLookupTable", modifiers: "&&", def_value: None }]
constexpr SimpleLookupTable(SimpleLookupTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleLookupTable(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractECLookupTable(ptr) {
}


  constexpr SimpleLookupTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleLookupTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleLookupTable& operator=(SimpleLookupTable&& o) noexcept = default;
  constexpr SimpleLookupTable& operator=(SimpleLookupTable const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __declspec(property(get=__get_points, put=__set_points))  points;

constexpr void __set_points(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __get_points() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;


// Methods

/// @brief Method Copy addr 0xfcdd50 size 0xec virtual false final false
static ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> Copy(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len) ;

static Org::BouncyCastle::Math::EC::SimpleLookupTable New_ctor(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len) ;

/// @brief Method .ctor addr 0xfcde3c size 0x48 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len) ;

/// @brief Method get_Size addr 0xfcde84 size 0x1c virtual true final false
 int32_t get_Size() ;

/// @brief Method Lookup addr 0xfcdea0 size 0x50 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Lookup(int32_t index) ;

/// @brief Method LookupVar addr 0xfcdef0 size 0x30 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint LookupVar(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::SimpleLookupTable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::SimpleLookupTable, "Org.BouncyCastle.Math.EC", "SimpleLookupTable");

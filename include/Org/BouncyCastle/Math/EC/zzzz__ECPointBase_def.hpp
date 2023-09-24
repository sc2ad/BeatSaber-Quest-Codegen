#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECPointBase;
}
// Type: Org.BouncyCastle.Math.EC::ECPointBase
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1372))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1374))
// CS Name: Org.BouncyCastle.Math.EC.ECPointBase
class CORDL_TYPE ECPointBase : public Org::BouncyCastle::Math::EC::ECPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ECPointBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPointBase", modifiers: " const&", def_value: None }]
constexpr ECPointBase(ECPointBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPointBase", modifiers: "&&", def_value: None }]
constexpr ECPointBase(ECPointBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECPointBase(void* ptr) noexcept : Org::BouncyCastle::Math::EC::ECPoint(ptr) {
}


  constexpr ECPointBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECPointBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECPointBase& operator=(ECPointBase&& o) noexcept = default;
  constexpr ECPointBase& operator=(ECPointBase const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Math::EC::ECPointBase New_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xf43924 size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

static Org::BouncyCastle::Math::EC::ECPointBase New_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xf439a8 size 0x9c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method GetEncoded addr 0xf43a44 size 0x1b8 virtual true final false
 ::ArrayW<uint8_t> GetEncoded(bool compressed) ;

/// @brief Method Multiply addr 0xf43bfc size 0xd0 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Multiply(Org::BouncyCastle::Math::BigInteger k) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::ECPointBase);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECPointBase, "Org.BouncyCastle.Math.EC", "ECPointBase");

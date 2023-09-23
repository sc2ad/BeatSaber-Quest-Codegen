#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ScaleXNegateYPointMap;
}
// Type: Org.BouncyCastle.Math.EC::ScaleXNegateYPointMap
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1575))
// CS Name: Org.BouncyCastle.Math.EC.ScaleXNegateYPointMap
class CORDL_TYPE ScaleXNegateYPointMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::ECPointMap
constexpr operator  Org::BouncyCastle::Math::EC::ECPointMap() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ScaleXNegateYPointMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleXNegateYPointMap", modifiers: " const&", def_value: None }]
constexpr ScaleXNegateYPointMap(ScaleXNegateYPointMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleXNegateYPointMap", modifiers: "&&", def_value: None }]
constexpr ScaleXNegateYPointMap(ScaleXNegateYPointMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScaleXNegateYPointMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScaleXNegateYPointMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScaleXNegateYPointMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScaleXNegateYPointMap& operator=(ScaleXNegateYPointMap&& o) noexcept = default;
  constexpr ScaleXNegateYPointMap& operator=(ScaleXNegateYPointMap const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(Org::BouncyCastle::Math::EC::ECFieldElement value) ;

constexpr Org::BouncyCastle::Math::EC::ECFieldElement __get_scale() const;


// Methods

// Ctor Parameters [CppParam { name: "scale", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }]
explicit ScaleXNegateYPointMap(Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method .ctor addr 0xfcdc00 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method Map addr 0xfcdc28 size 0x2c virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Map(Org::BouncyCastle::Math::EC::ECPoint p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::ScaleXNegateYPointMap);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ScaleXNegateYPointMap, "Org.BouncyCastle.Math.EC", "ScaleXNegateYPointMap");

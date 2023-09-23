#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractFpFieldElement;
}
// Type: Org.BouncyCastle.Math.EC::AbstractFpFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1369))
// CS Name: Org.BouncyCastle.Math.EC.AbstractFpFieldElement
class CORDL_TYPE AbstractFpFieldElement : public Org::BouncyCastle::Math::EC::ECFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbstractFpFieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractFpFieldElement", modifiers: " const&", def_value: None }]
constexpr AbstractFpFieldElement(AbstractFpFieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractFpFieldElement", modifiers: "&&", def_value: None }]
constexpr AbstractFpFieldElement(AbstractFpFieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractFpFieldElement(void* ptr) noexcept : Org::BouncyCastle::Math::EC::ECFieldElement(ptr) {
}


  constexpr AbstractFpFieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractFpFieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractFpFieldElement& operator=(AbstractFpFieldElement&& o) noexcept = default;
  constexpr AbstractFpFieldElement& operator=(AbstractFpFieldElement const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AbstractFpFieldElement() ;

/// @brief Method .ctor addr 0xf416d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::AbstractFpFieldElement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractFpFieldElement, "Org.BouncyCastle.Math.EC", "AbstractFpFieldElement");

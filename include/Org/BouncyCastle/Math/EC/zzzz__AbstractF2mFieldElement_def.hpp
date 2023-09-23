#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mFieldElement;
}
// Type: Org.BouncyCastle.Math.EC::AbstractF2mFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1441))
// CS Name: Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
class CORDL_TYPE AbstractF2mFieldElement : public Org::BouncyCastle::Math::EC::ECFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbstractF2mFieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractF2mFieldElement", modifiers: " const&", def_value: None }]
constexpr AbstractF2mFieldElement(AbstractF2mFieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractF2mFieldElement", modifiers: "&&", def_value: None }]
constexpr AbstractF2mFieldElement(AbstractF2mFieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractF2mFieldElement(void* ptr) noexcept : Org::BouncyCastle::Math::EC::ECFieldElement(ptr) {
}


  constexpr AbstractF2mFieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractF2mFieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractF2mFieldElement& operator=(AbstractF2mFieldElement&& o) noexcept = default;
  constexpr AbstractF2mFieldElement& operator=(AbstractF2mFieldElement const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_HasFastTrace))  HasFastTrace;


// Methods

/// @brief Method HalfTrace addr 0xf74924 size 0x140 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement HalfTrace() ;

/// @brief Method get_HasFastTrace addr 0xf74a64 size 0x8 virtual true final false
 bool get_HasFastTrace() ;

/// @brief Method Trace addr 0xf74a6c size 0x14c virtual true final false
 int32_t Trace() ;

// Ctor Parameters []
explicit AbstractF2mFieldElement() ;

/// @brief Method .ctor addr 0xf74bb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::AbstractF2mFieldElement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractF2mFieldElement, "Org.BouncyCastle.Math.EC", "AbstractF2mFieldElement");

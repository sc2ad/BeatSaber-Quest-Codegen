#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
// Type: Org.BouncyCastle.Asn1::Asn1Null
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(454))
// CS Name: Org.BouncyCastle.Asn1.Asn1Null
class CORDL_TYPE Asn1Null : public Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Asn1Null() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Null", modifiers: " const&", def_value: None }]
constexpr Asn1Null(Asn1Null const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Null", modifiers: "&&", def_value: None }]
constexpr Asn1Null(Asn1Null&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1Null(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr Asn1Null& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1Null& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1Null& operator=(Asn1Null&& o) noexcept = default;
  constexpr Asn1Null& operator=(Asn1Null const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Asn1Null() ;

/// @brief Method .ctor addr 0x112c370 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ToString addr 0x112c378 size 0x40 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1Null);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Null, "Org.BouncyCastle.Asn1", "Asn1Null");

#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomialExtensionField;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class FiniteFields;
}
// Type: Org.BouncyCastle.Math.Field::FiniteFields
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1580))
// CS Name: Org.BouncyCastle.Math.Field.FiniteFields
class CORDL_TYPE FiniteFields : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FiniteFields() = default;

// Ctor Parameters [CppParam { name: "", ty: "FiniteFields", modifiers: " const&", def_value: None }]
constexpr FiniteFields(FiniteFields const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FiniteFields", modifiers: "&&", def_value: None }]
constexpr FiniteFields(FiniteFields&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FiniteFields(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FiniteFields& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FiniteFields& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FiniteFields& operator=(FiniteFields&& o) noexcept = default;
  constexpr FiniteFields& operator=(FiniteFields const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::Field::IFiniteField __declspec(property(get=__get_GF_2, put=__set_GF_2))  GF_2;

static void __set_GF_2(Org::BouncyCastle::Math::Field::IFiniteField value) ;

static Org::BouncyCastle::Math::Field::IFiniteField __get_GF_2() ;

static Org::BouncyCastle::Math::Field::IFiniteField __declspec(property(get=__get_GF_3, put=__set_GF_3))  GF_3;

static void __set_GF_3(Org::BouncyCastle::Math::Field::IFiniteField value) ;

static Org::BouncyCastle::Math::Field::IFiniteField __get_GF_3() ;


// Methods

/// @brief Method GetBinaryExtensionField addr 0xfcdf20 size 0x194 virtual false final false
static Org::BouncyCastle::Math::Field::IPolynomialExtensionField GetBinaryExtensionField(::ArrayW<int32_t> exponents) ;

/// @brief Method GetPrimeField addr 0xfce158 size 0x180 virtual false final false
static Org::BouncyCastle::Math::Field::IFiniteField GetPrimeField(Org::BouncyCastle::Math::BigInteger characteristic) ;

// Ctor Parameters []
explicit FiniteFields() ;

/// @brief Method .ctor addr 0xfce3f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Field
NEED_NO_BOX(Org::BouncyCastle::Math::Field::FiniteFields);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::FiniteFields, "Org.BouncyCastle.Math.Field", "FiniteFields");

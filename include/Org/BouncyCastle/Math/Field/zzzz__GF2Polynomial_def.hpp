#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class GF2Polynomial;
}
// Type: Org.BouncyCastle.Math.Field::GF2Polynomial
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1586))
// CS Name: Org.BouncyCastle.Math.Field.GF2Polynomial
class CORDL_TYPE GF2Polynomial : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::Field::IPolynomial
constexpr operator  Org::BouncyCastle::Math::Field::IPolynomial() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GF2Polynomial() = default;

// Ctor Parameters [CppParam { name: "", ty: "GF2Polynomial", modifiers: " const&", def_value: None }]
constexpr GF2Polynomial(GF2Polynomial const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GF2Polynomial", modifiers: "&&", def_value: None }]
constexpr GF2Polynomial(GF2Polynomial&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GF2Polynomial(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GF2Polynomial& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GF2Polynomial& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GF2Polynomial& operator=(GF2Polynomial&& o) noexcept = default;
  constexpr GF2Polynomial& operator=(GF2Polynomial const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_exponents, put=__set_exponents))  exponents;

constexpr void __set_exponents(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_exponents() const;


// Properties

 int32_t __declspec(property(get=get_Degree))  Degree;


// Methods

// Ctor Parameters [CppParam { name: "exponents", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
explicit GF2Polynomial(::ArrayW<int32_t> exponents) ;

/// @brief Method .ctor addr 0xfce0b4 size 0x78 virtual false final false
 void _ctor(::ArrayW<int32_t> exponents) ;

/// @brief Method get_Degree addr 0xfce798 size 0x34 virtual true final false
 int32_t get_Degree() ;

/// @brief Method GetExponentsPresent addr 0xfce7cc size 0x5c virtual true final false
 ::ArrayW<int32_t> GetExponentsPresent() ;

/// @brief Method Equals addr 0xfce828 size 0xd8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xfce900 size 0x5c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Field
NEED_NO_BOX(Org::BouncyCastle::Math::Field::GF2Polynomial);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::GF2Polynomial, "Org.BouncyCastle.Math.Field", "GF2Polynomial");

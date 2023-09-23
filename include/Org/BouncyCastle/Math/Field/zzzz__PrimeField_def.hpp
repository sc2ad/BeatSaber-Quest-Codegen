#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class PrimeField;
}
// Type: Org.BouncyCastle.Math.Field::PrimeField
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1587))
// CS Name: Org.BouncyCastle.Math.Field.PrimeField
class CORDL_TYPE PrimeField : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::Field::IFiniteField
constexpr operator  Org::BouncyCastle::Math::Field::IFiniteField() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PrimeField() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimeField", modifiers: " const&", def_value: None }]
constexpr PrimeField(PrimeField const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimeField", modifiers: "&&", def_value: None }]
constexpr PrimeField(PrimeField&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrimeField(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrimeField& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrimeField& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrimeField& operator=(PrimeField&& o) noexcept = default;
  constexpr PrimeField& operator=(PrimeField const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_characteristic, put=__set_characteristic))  characteristic;

constexpr void __set_characteristic(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_characteristic() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Characteristic))  Characteristic;

 int32_t __declspec(property(get=get_Dimension))  Dimension;


// Methods

// Ctor Parameters [CppParam { name: "characteristic", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit PrimeField(Org::BouncyCastle::Math::BigInteger characteristic) ;

/// @brief Method .ctor addr 0xfce2d8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger characteristic) ;

/// @brief Method get_Characteristic addr 0xfce95c size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Characteristic() ;

/// @brief Method get_Dimension addr 0xfce964 size 0x8 virtual true final false
 int32_t get_Dimension() ;

/// @brief Method Equals addr 0xfce96c size 0xb4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xfcea20 size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Field
NEED_NO_BOX(Org::BouncyCastle::Math::Field::PrimeField);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::PrimeField, "Org.BouncyCastle.Math.Field", "PrimeField");

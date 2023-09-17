#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410ValidationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410ValidationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1056))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters
class CORDL_TYPE Gost3410ValidationParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Gost3410ValidationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410ValidationParameters", modifiers: " const&", def_value: None }]
constexpr Gost3410ValidationParameters(Gost3410ValidationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410ValidationParameters", modifiers: "&&", def_value: None }]
constexpr Gost3410ValidationParameters(Gost3410ValidationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410ValidationParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost3410ValidationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410ValidationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410ValidationParameters& operator=(Gost3410ValidationParameters&& o) noexcept = default;
  constexpr Gost3410ValidationParameters& operator=(Gost3410ValidationParameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_x0, put=__set_x0))  x0;

constexpr void __set_x0(int32_t value) ;

constexpr int32_t __get_x0() const;

 int32_t __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(int32_t value) ;

constexpr int32_t __get_c() const;

 int64_t __declspec(property(get=__get_x0L, put=__set_x0L))  x0L;

constexpr void __set_x0L(int64_t value) ;

constexpr int64_t __get_x0L() const;

 int64_t __declspec(property(get=__get_cL, put=__set_cL))  cL;

constexpr void __set_cL(int64_t value) ;

constexpr int64_t __get_cL() const;


// Properties

 int32_t __declspec(property(get=get_C))  C;

 int32_t __declspec(property(get=get_X0))  X0;

 int64_t __declspec(property(get=get_CL))  CL;

 int64_t __declspec(property(get=get_X0L))  X0L;


// Methods

// Ctor Parameters [CppParam { name: "x0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "c", ty: "int32_t", modifiers: "", def_value: None }]
explicit Gost3410ValidationParameters(int32_t x0, int32_t c) ;

/// @brief Method .ctor addr 0xea9630 size 0x2c virtual false final false
 void _ctor(int32_t x0, int32_t c) ;

// Ctor Parameters [CppParam { name: "x0L", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "cL", ty: "int64_t", modifiers: "", def_value: None }]
explicit Gost3410ValidationParameters(int64_t x0L, int64_t cL) ;

/// @brief Method .ctor addr 0xea965c size 0x2c virtual false final false
 void _ctor(int64_t x0L, int64_t cL) ;

/// @brief Method get_C addr 0xea9688 size 0x8 virtual false final false
 int32_t get_C() ;

/// @brief Method get_X0 addr 0xea9690 size 0x8 virtual false final false
 int32_t get_X0() ;

/// @brief Method get_CL addr 0xea9698 size 0x8 virtual false final false
 int64_t get_CL() ;

/// @brief Method get_X0L addr 0xea96a0 size 0x8 virtual false final false
 int64_t get_X0L() ;

/// @brief Method Equals addr 0xea96a8 size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xea9770 size 0x68 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters, "Org.BouncyCastle.Crypto.Parameters", "Gost3410ValidationParameters");

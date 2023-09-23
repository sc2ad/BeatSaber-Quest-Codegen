#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParametersHolder;
}
// Type: Org.BouncyCastle.Asn1.X9::X9ECParametersHolder
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3))
// CS Name: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
class CORDL_TYPE X9ECParametersHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X9ECParametersHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "X9ECParametersHolder", modifiers: " const&", def_value: None }]
constexpr X9ECParametersHolder(X9ECParametersHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X9ECParametersHolder", modifiers: "&&", def_value: None }]
constexpr X9ECParametersHolder(X9ECParametersHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X9ECParametersHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X9ECParametersHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X9ECParametersHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X9ECParametersHolder& operator=(X9ECParametersHolder&& o) noexcept = default;
  constexpr X9ECParametersHolder& operator=(X9ECParametersHolder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X9::X9ECParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Asn1::X9::X9ECParameters value) ;

constexpr Org::BouncyCastle::Asn1::X9::X9ECParameters __get_parameters() const;


// Properties

 Org::BouncyCastle::Asn1::X9::X9ECParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

/// @brief Method get_Parameters addr 0xdd5430 size 0xb8 virtual false final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters get_Parameters() ;

/// @brief Method CreateParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

// Ctor Parameters []
explicit X9ECParametersHolder() ;

/// @brief Method .ctor addr 0xdd5704 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder, "Org.BouncyCastle.Asn1.X9", "X9ECParametersHolder");

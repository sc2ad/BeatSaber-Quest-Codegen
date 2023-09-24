#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DsaKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1027))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
class CORDL_TYPE DsaKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DsaKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaKeyParameters", modifiers: " const&", def_value: None }]
constexpr DsaKeyParameters(DsaKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaKeyParameters", modifiers: "&&", def_value: None }]
constexpr DsaKeyParameters(DsaKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr DsaKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaKeyParameters& operator=(DsaKeyParameters&& o) noexcept = default;
  constexpr DsaKeyParameters& operator=(DsaKeyParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::DsaParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::Parameters::DsaParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DsaParameters __get_parameters() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::DsaParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

static Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DsaParameters parameters) ;

/// @brief Method .ctor addr 0xea47c4 size 0x30 virtual false final false
 void _ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DsaParameters parameters) ;

/// @brief Method get_Parameters addr 0xea47f4 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::DsaParameters get_Parameters() ;

/// @brief Method Equals addr 0xea47fc size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea4898 size 0x50 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea48e8 size 0x50 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "DsaKeyParameters");

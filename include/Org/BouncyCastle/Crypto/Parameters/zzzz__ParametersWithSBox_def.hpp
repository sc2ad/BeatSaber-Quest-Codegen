#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithSBox;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ParametersWithSBox
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1075))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
class CORDL_TYPE ParametersWithSBox : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ParametersWithSBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithSBox", modifiers: " const&", def_value: None }]
constexpr ParametersWithSBox(ParametersWithSBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithSBox", modifiers: "&&", def_value: None }]
constexpr ParametersWithSBox(ParametersWithSBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParametersWithSBox(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParametersWithSBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParametersWithSBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParametersWithSBox& operator=(ParametersWithSBox&& o) noexcept = default;
  constexpr ParametersWithSBox& operator=(ParametersWithSBox const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::ICipherParameters value) ;

constexpr Org::BouncyCastle::Crypto::ICipherParameters __get_parameters() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_sBox, put=__set_sBox))  sBox;

constexpr void __set_sBox(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sBox() const;


// Properties

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

static Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox New_ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> sBox) ;

/// @brief Method .ctor addr 0xeab22c size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> sBox) ;

/// @brief Method GetSBox addr 0xeab258 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetSBox() ;

/// @brief Method get_Parameters addr 0xeab260 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::ICipherParameters get_Parameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithSBox");

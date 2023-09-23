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
class ParametersWithIV;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ParametersWithIV
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1072))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
class CORDL_TYPE ParametersWithIV : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ParametersWithIV() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithIV", modifiers: " const&", def_value: None }]
constexpr ParametersWithIV(ParametersWithIV const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithIV", modifiers: "&&", def_value: None }]
constexpr ParametersWithIV(ParametersWithIV&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParametersWithIV(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParametersWithIV& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParametersWithIV& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParametersWithIV& operator=(ParametersWithIV&& o) noexcept = default;
  constexpr ParametersWithIV& operator=(ParametersWithIV const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::ICipherParameters value) ;

constexpr Org::BouncyCastle::Crypto::ICipherParameters __get_parameters() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_iv() const;


// Properties

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

// Ctor Parameters [CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ParametersWithIV(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0xeaae44 size 0x1c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> iv) ;

// Ctor Parameters [CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "ivOff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ivLen", ty: "int32_t", modifiers: "", def_value: None }]
explicit ParametersWithIV(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> iv, int32_t ivOff, int32_t ivLen) ;

/// @brief Method .ctor addr 0xeaae60 size 0xe8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> iv, int32_t ivOff, int32_t ivLen) ;

/// @brief Method GetIV addr 0xeaaf48 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetIV() ;

/// @brief Method get_Parameters addr 0xeaafc0 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::ICipherParameters get_Parameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ParametersWithIV);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithIV, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithIV");

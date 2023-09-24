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
class ParametersWithSalt;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ParametersWithSalt
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1074))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ParametersWithSalt
class CORDL_TYPE ParametersWithSalt : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ParametersWithSalt() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithSalt", modifiers: " const&", def_value: None }]
constexpr ParametersWithSalt(ParametersWithSalt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithSalt", modifiers: "&&", def_value: None }]
constexpr ParametersWithSalt(ParametersWithSalt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParametersWithSalt(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParametersWithSalt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParametersWithSalt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParametersWithSalt& operator=(ParametersWithSalt&& o) noexcept = default;
  constexpr ParametersWithSalt& operator=(ParametersWithSalt const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_salt, put=__set_salt))  salt;

constexpr void __set_salt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_salt() const;

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::ICipherParameters value) ;

constexpr Org::BouncyCastle::Crypto::ICipherParameters __get_parameters() const;


// Properties

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

static Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt New_ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> salt) ;

/// @brief Method .ctor addr 0xeab16c size 0x1c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> salt) ;

static Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt New_ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> salt, int32_t saltOff, int32_t saltLen) ;

/// @brief Method .ctor addr 0xeab188 size 0x94 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> salt, int32_t saltOff, int32_t saltLen) ;

/// @brief Method GetSalt addr 0xeab21c size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetSalt() ;

/// @brief Method get_Parameters addr 0xeab224 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::ICipherParameters get_Parameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithSalt, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithSalt");

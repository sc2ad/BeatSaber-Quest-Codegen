#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameterGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DsaParameterGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1028))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters
class CORDL_TYPE DsaParameterGenerationParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DsaParameterGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaParameterGenerationParameters", modifiers: " const&", def_value: None }]
constexpr DsaParameterGenerationParameters(DsaParameterGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaParameterGenerationParameters", modifiers: "&&", def_value: None }]
constexpr DsaParameterGenerationParameters(DsaParameterGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaParameterGenerationParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DsaParameterGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaParameterGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaParameterGenerationParameters& operator=(DsaParameterGenerationParameters&& o) noexcept = default;
  constexpr DsaParameterGenerationParameters& operator=(DsaParameterGenerationParameters const& o) noexcept = default;
                


// Fields

/// @brief Field DigitalSignatureUsage offset 0
static constexpr int32_t  DigitalSignatureUsage{1};

/// @brief Field KeyEstablishmentUsage offset 0
static constexpr int32_t  KeyEstablishmentUsage{2};

 int32_t __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(int32_t value) ;

constexpr int32_t __get_l() const;

 int32_t __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(int32_t value) ;

constexpr int32_t __get_n() const;

 int32_t __declspec(property(get=__get_certainty, put=__set_certainty))  certainty;

constexpr void __set_certainty(int32_t value) ;

constexpr int32_t __get_certainty() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;

 int32_t __declspec(property(get=__get_usageIndex, put=__set_usageIndex))  usageIndex;

constexpr void __set_usageIndex(int32_t value) ;

constexpr int32_t __get_usageIndex() const;


// Properties

 int32_t __declspec(property(get=get_L))  L;

 int32_t __declspec(property(get=get_N))  N;

 int32_t __declspec(property(get=get_UsageIndex))  UsageIndex;

 int32_t __declspec(property(get=get_Certainty))  Certainty;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=get_Random))  Random;


// Methods

// Ctor Parameters [CppParam { name: "L", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "N", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "certainty", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit DsaParameterGenerationParameters(int32_t L, int32_t N, int32_t certainty, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xea4938 size 0x4c virtual false final false
 void _ctor(int32_t L, int32_t N, int32_t certainty, Org::BouncyCastle::Security::SecureRandom random) ;

// Ctor Parameters [CppParam { name: "L", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "N", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "certainty", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "usageIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit DsaParameterGenerationParameters(int32_t L, int32_t N, int32_t certainty, Org::BouncyCastle::Security::SecureRandom random, int32_t usageIndex) ;

/// @brief Method .ctor addr 0xea4984 size 0x54 virtual false final false
 void _ctor(int32_t L, int32_t N, int32_t certainty, Org::BouncyCastle::Security::SecureRandom random, int32_t usageIndex) ;

/// @brief Method get_L addr 0xea49d8 size 0x8 virtual true final false
 int32_t get_L() ;

/// @brief Method get_N addr 0xea49e0 size 0x8 virtual true final false
 int32_t get_N() ;

/// @brief Method get_UsageIndex addr 0xea49e8 size 0x8 virtual true final false
 int32_t get_UsageIndex() ;

/// @brief Method get_Certainty addr 0xea49f0 size 0x8 virtual true final false
 int32_t get_Certainty() ;

/// @brief Method get_Random addr 0xea49f8 size 0x8 virtual true final false
 Org::BouncyCastle::Security::SecureRandom get_Random() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "DsaParameterGenerationParameters");

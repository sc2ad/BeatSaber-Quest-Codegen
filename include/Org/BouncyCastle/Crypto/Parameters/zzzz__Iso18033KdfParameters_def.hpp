#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Iso18033KdfParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Iso18033KdfParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1060))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
class CORDL_TYPE Iso18033KdfParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationParameters
constexpr operator  Org::BouncyCastle::Crypto::IDerivationParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Iso18033KdfParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Iso18033KdfParameters", modifiers: " const&", def_value: None }]
constexpr Iso18033KdfParameters(Iso18033KdfParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Iso18033KdfParameters", modifiers: "&&", def_value: None }]
constexpr Iso18033KdfParameters(Iso18033KdfParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Iso18033KdfParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Iso18033KdfParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Iso18033KdfParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Iso18033KdfParameters& operator=(Iso18033KdfParameters&& o) noexcept = default;
  constexpr Iso18033KdfParameters& operator=(Iso18033KdfParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_seed() const;


// Methods

static Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters New_ctor(::ArrayW<uint8_t> seed) ;

/// @brief Method .ctor addr 0xea9be4 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> seed) ;

/// @brief Method GetSeed addr 0xea9c0c size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetSeed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters, "Org.BouncyCastle.Crypto.Parameters", "Iso18033KdfParameters");

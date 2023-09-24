#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class IesWithCipherParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::IesWithCipherParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1059))
// CS Name: Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters
class CORDL_TYPE IesWithCipherParameters : public Org::BouncyCastle::Crypto::Parameters::IesParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~IesWithCipherParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "IesWithCipherParameters", modifiers: " const&", def_value: None }]
constexpr IesWithCipherParameters(IesWithCipherParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IesWithCipherParameters", modifiers: "&&", def_value: None }]
constexpr IesWithCipherParameters(IesWithCipherParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IesWithCipherParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::IesParameters(ptr) {
}


  constexpr IesWithCipherParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IesWithCipherParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IesWithCipherParameters& operator=(IesWithCipherParameters&& o) noexcept = default;
  constexpr IesWithCipherParameters& operator=(IesWithCipherParameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_cipherKeySize, put=__set_cipherKeySize))  cipherKeySize;

constexpr void __set_cipherKeySize(int32_t value) ;

constexpr int32_t __get_cipherKeySize() const;


// Properties

 int32_t __declspec(property(get=get_CipherKeySize))  CipherKeySize;


// Methods

static Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters New_ctor(::ArrayW<uint8_t> derivation, ::ArrayW<uint8_t> encoding, int32_t macKeySize, int32_t cipherKeySize) ;

/// @brief Method .ctor addr 0xea9b9c size 0x40 virtual false final false
 void _ctor(::ArrayW<uint8_t> derivation, ::ArrayW<uint8_t> encoding, int32_t macKeySize, int32_t cipherKeySize) ;

/// @brief Method get_CipherKeySize addr 0xea9bdc size 0x8 virtual false final false
 int32_t get_CipherKeySize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters, "Org.BouncyCastle.Crypto.Parameters", "IesWithCipherParameters");

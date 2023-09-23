#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__AeadParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class CcmParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::CcmParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1014))
// CS Name: Org.BouncyCastle.Crypto.Parameters.CcmParameters
class CORDL_TYPE CcmParameters : public Org::BouncyCastle::Crypto::Parameters::AeadParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CcmParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "CcmParameters", modifiers: " const&", def_value: None }]
constexpr CcmParameters(CcmParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CcmParameters", modifiers: "&&", def_value: None }]
constexpr CcmParameters(CcmParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CcmParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::AeadParameters(ptr) {
}


  constexpr CcmParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CcmParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CcmParameters& operator=(CcmParameters&& o) noexcept = default;
  constexpr CcmParameters& operator=(CcmParameters const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "key", ty: "Org::BouncyCastle::Crypto::Parameters::KeyParameter", modifiers: "", def_value: None }, CppParam { name: "macSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "associatedText", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CcmParameters(Org::BouncyCastle::Crypto::Parameters::KeyParameter key, int32_t macSize, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> associatedText) ;

/// @brief Method .ctor addr 0xea251c size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::KeyParameter key, int32_t macSize, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> associatedText) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::CcmParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::CcmParameters, "Org.BouncyCastle.Crypto.Parameters", "CcmParameters");

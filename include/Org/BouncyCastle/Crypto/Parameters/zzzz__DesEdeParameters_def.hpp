#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DesParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DesEdeParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DesEdeParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1016))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1017))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DesEdeParameters
class CORDL_TYPE DesEdeParameters : public ::Org::BouncyCastle::Crypto::Parameters::DesParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DesEdeParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeParameters", modifiers: " const&", def_value: None }]
constexpr DesEdeParameters(DesEdeParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeParameters", modifiers: "&&", def_value: None }]
constexpr DesEdeParameters(DesEdeParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesEdeParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Parameters::DesParameters(ptr) {
}


  constexpr DesEdeParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesEdeParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesEdeParameters& operator=(DesEdeParameters&& o) noexcept = default;
  constexpr DesEdeParameters& operator=(DesEdeParameters const& o) noexcept = default;
                


// Fields

/// @brief Field DesEdeKeyLength offset 0
static constexpr int32_t  DesEdeKeyLength{24};


// Methods

/// @brief Method FixKey addr 0xea2c48 size 0x1ac virtual false final false
static ::ArrayW<uint8_t> FixKey(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DesEdeParameters(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0xea2e10 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "keyOff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyLen", ty: "int32_t", modifiers: "", def_value: None }]
explicit DesEdeParameters(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

/// @brief Method .ctor addr 0xea2e8c size 0x8c virtual false final false
 void _ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

/// @brief Method IsWeakKey addr 0xea2f18 size 0x90 virtual false final false
static bool IsWeakKey(::ArrayW<uint8_t> key, int32_t offset, int32_t length) ;

/// @brief Method IsWeakKey addr 0xea2fa8 size 0x1c virtual false final false
static bool IsWeakKey(::ArrayW<uint8_t> key, int32_t offset) ;

/// @brief Method IsWeakKey addr 0xea2df4 size 0x1c virtual false final false
static bool IsWeakKey(::ArrayW<uint8_t> key) ;

/// @brief Method IsRealEdeKey addr 0xea2fc4 size 0x28 virtual false final false
static bool IsRealEdeKey(::ArrayW<uint8_t> key, int32_t offset) ;

/// @brief Method IsReal2Key addr 0xea3094 size 0x64 virtual false final false
static bool IsReal2Key(::ArrayW<uint8_t> key, int32_t offset) ;

/// @brief Method IsReal3Key addr 0xea2fec size 0xa8 virtual false final false
static bool IsReal3Key(::ArrayW<uint8_t> key, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters, "Org.BouncyCastle.Crypto.Parameters", "DesEdeParameters");

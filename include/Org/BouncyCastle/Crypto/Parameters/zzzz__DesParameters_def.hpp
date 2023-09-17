#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DesParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DesParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1015))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1016))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DesParameters
class CORDL_TYPE DesParameters : public ::Org::BouncyCastle::Crypto::Parameters::KeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DesParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesParameters", modifiers: " const&", def_value: None }]
constexpr DesParameters(DesParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesParameters", modifiers: "&&", def_value: None }]
constexpr DesParameters(DesParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Parameters::KeyParameter(ptr) {
}


  constexpr DesParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesParameters& operator=(DesParameters&& o) noexcept = default;
  constexpr DesParameters& operator=(DesParameters const& o) noexcept = default;
                


// Fields

/// @brief Field DesKeyLength offset 0
static constexpr int32_t  DesKeyLength{8};

/// @brief Field N_DES_WEAK_KEYS offset 0
static constexpr int32_t  N_DES_WEAK_KEYS{16};

static ::ArrayW<uint8_t> __declspec(property(get=__get_DES_weak_keys, put=__set_DES_weak_keys))  DES_weak_keys;

static void __set_DES_weak_keys(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_DES_weak_keys() ;


// Methods

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DesParameters(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0xea26b0 size 0xc0 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "keyOff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyLen", ty: "int32_t", modifiers: "", def_value: None }]
explicit DesParameters(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

/// @brief Method .ctor addr 0xea27c8 size 0xdc virtual false final false
 void _ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

/// @brief Method IsWeakKey addr 0xea28a4 size 0x154 virtual false final false
static bool IsWeakKey(::ArrayW<uint8_t> key, int32_t offset) ;

/// @brief Method IsWeakKey addr 0xea2770 size 0x58 virtual false final false
static bool IsWeakKey(::ArrayW<uint8_t> key) ;

/// @brief Method SetOddParity addr 0xea29f8 size 0x20 virtual false final false
static uint8_t SetOddParity(uint8_t b) ;

/// @brief Method SetOddParity addr 0xea2a18 size 0xbc virtual false final false
static void SetOddParity(::ArrayW<uint8_t> bytes) ;

/// @brief Method SetOddParity addr 0xea2ad4 size 0xe0 virtual false final false
static void SetOddParity(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DesParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DesParameters, "Org.BouncyCastle.Crypto.Parameters", "DesParameters");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Utils;
}
// Type: System.Security.Cryptography::Utils
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2972))
// CS Name: System.Security.Cryptography.Utils
class CORDL_TYPE Utils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Utils() = default;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: " const&", def_value: None }]
constexpr Utils(Utils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
constexpr Utils(Utils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Utils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Utils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Utils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Utils& operator=(Utils&& o) noexcept = default;
  constexpr Utils& operator=(Utils const& o) noexcept = default;
                


// Fields

static ::System::Security::Cryptography::RNGCryptoServiceProvider __declspec(property(get=__get__rng, put=__set__rng))  _rng;

static void __set__rng(::System::Security::Cryptography::RNGCryptoServiceProvider value) ;

static ::System::Security::Cryptography::RNGCryptoServiceProvider __get__rng() ;


// Properties

static ::System::Security::Cryptography::RNGCryptoServiceProvider __declspec(property(get=get_StaticRandomNumberGenerator))  StaticRandomNumberGenerator;


// Methods

/// @brief Method get_StaticRandomNumberGenerator addr 0x2300adc size 0xa0 virtual false final false
static ::System::Security::Cryptography::RNGCryptoServiceProvider get_StaticRandomNumberGenerator() ;

/// @brief Method GenerateRandom addr 0x2300c7c size 0x70 virtual false final false
static ::ArrayW<uint8_t> GenerateRandom(int32_t keySize) ;

/// @brief Method HasAlgorithm addr 0x23004c4 size 0x8 virtual false final false
static bool HasAlgorithm(int32_t dwCalg, int32_t dwKeySize) ;

/// @brief Method DiscardWhiteSpaces addr 0x2300cec size 0x1c virtual false final false
static ::StringW DiscardWhiteSpaces(::StringW inputBuffer) ;

/// @brief Method DiscardWhiteSpaces addr 0x2300d08 size 0x188 virtual false final false
static ::StringW DiscardWhiteSpaces(::StringW inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method ConvertByteArrayToInt addr 0x2300e90 size 0x60 virtual false final false
static int32_t ConvertByteArrayToInt(::ArrayW<uint8_t> input) ;

/// @brief Method ConvertIntToByteArray addr 0x2300ef0 size 0x120 virtual false final false
static ::ArrayW<uint8_t> ConvertIntToByteArray(int32_t dwInput) ;

/// @brief Method FixupKeyParity addr 0x230010c size 0xc8 virtual false final false
static ::ArrayW<uint8_t> FixupKeyParity(::ArrayW<uint8_t> key) ;

/// @brief Method DWORDFromLittleEndian addr 0x2301010 size 0x4c virtual false final false
static void DWORDFromLittleEndian(void* x, int32_t digits, void* block) ;

/// @brief Method DWORDToLittleEndian addr 0x230105c size 0xf4 virtual false final false
static void DWORDToLittleEndian(::ArrayW<uint8_t> block, ::ArrayW<uint32_t> x, int32_t digits) ;

/// @brief Method DWORDFromBigEndian addr 0x2301150 size 0x50 virtual false final false
static void DWORDFromBigEndian(void* x, int32_t digits, void* block) ;

/// @brief Method DWORDToBigEndian addr 0x23011a0 size 0xf4 virtual false final false
static void DWORDToBigEndian(::ArrayW<uint8_t> block, ::ArrayW<uint32_t> x, int32_t digits) ;

/// @brief Method QuadWordFromBigEndian addr 0x22fdc6c size 0x80 virtual false final false
static void QuadWordFromBigEndian(void* x, int32_t digits, void* block) ;

/// @brief Method QuadWordToBigEndian addr 0x22fdab0 size 0x1bc virtual false final false
static void QuadWordToBigEndian(::ArrayW<uint8_t> block, ::ArrayW<uint64_t> x, int32_t digits) ;

/// @brief Method _ProduceLegacyHmacValues addr 0x2301294 size 0x8 virtual false final false
static bool _ProduceLegacyHmacValues() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::Utils);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Utils, "System.Security.Cryptography", "Utils");

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
class IesParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::IesParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1058))
// CS Name: Org.BouncyCastle.Crypto.Parameters.IesParameters
class CORDL_TYPE IesParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~IesParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "IesParameters", modifiers: " const&", def_value: None }]
constexpr IesParameters(IesParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IesParameters", modifiers: "&&", def_value: None }]
constexpr IesParameters(IesParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IesParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IesParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IesParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IesParameters& operator=(IesParameters&& o) noexcept = default;
  constexpr IesParameters& operator=(IesParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_derivation, put=__set_derivation))  derivation;

constexpr void __set_derivation(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_derivation() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_encoding() const;

 int32_t __declspec(property(get=__get_macKeySize, put=__set_macKeySize))  macKeySize;

constexpr void __set_macKeySize(int32_t value) ;

constexpr int32_t __get_macKeySize() const;


// Properties

 int32_t __declspec(property(get=get_MacKeySize))  MacKeySize;


// Methods

static Org::BouncyCastle::Crypto::Parameters::IesParameters New_ctor(::ArrayW<uint8_t> derivation, ::ArrayW<uint8_t> encoding, int32_t macKeySize) ;

/// @brief Method .ctor addr 0xea9b48 size 0x3c virtual false final false
 void _ctor(::ArrayW<uint8_t> derivation, ::ArrayW<uint8_t> encoding, int32_t macKeySize) ;

/// @brief Method GetDerivationV addr 0xea9b84 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetDerivationV() ;

/// @brief Method GetEncodingV addr 0xea9b8c size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetEncodingV() ;

/// @brief Method get_MacKeySize addr 0xea9b94 size 0x8 virtual false final false
 int32_t get_MacKeySize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::IesParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::IesParameters, "Org.BouncyCastle.Crypto.Parameters", "IesParameters");

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
class KdfParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::KdfParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1064))
// CS Name: Org.BouncyCastle.Crypto.Parameters.KdfParameters
class CORDL_TYPE KdfParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationParameters
constexpr operator  Org::BouncyCastle::Crypto::IDerivationParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KdfParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfParameters", modifiers: " const&", def_value: None }]
constexpr KdfParameters(KdfParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfParameters", modifiers: "&&", def_value: None }]
constexpr KdfParameters(KdfParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KdfParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KdfParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KdfParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KdfParameters& operator=(KdfParameters&& o) noexcept = default;
  constexpr KdfParameters& operator=(KdfParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_iv() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_shared, put=__set_shared))  shared;

constexpr void __set_shared(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_shared() const;


// Methods

static Org::BouncyCastle::Crypto::Parameters::KdfParameters New_ctor(::ArrayW<uint8_t> shared, ::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0xeaa6b4 size 0x2c virtual false final false
 void _ctor(::ArrayW<uint8_t> shared, ::ArrayW<uint8_t> iv) ;

/// @brief Method GetSharedSecret addr 0xeaa6e0 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetSharedSecret() ;

/// @brief Method GetIV addr 0xeaa6e8 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetIV() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::KdfParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::KdfParameters, "Org.BouncyCastle.Crypto.Parameters", "KdfParameters");

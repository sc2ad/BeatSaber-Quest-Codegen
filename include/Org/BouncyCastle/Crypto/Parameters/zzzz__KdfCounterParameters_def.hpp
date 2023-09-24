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
class KdfCounterParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::KdfCounterParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1061))
// CS Name: Org.BouncyCastle.Crypto.Parameters.KdfCounterParameters
class CORDL_TYPE KdfCounterParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationParameters
constexpr operator  Org::BouncyCastle::Crypto::IDerivationParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KdfCounterParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfCounterParameters", modifiers: " const&", def_value: None }]
constexpr KdfCounterParameters(KdfCounterParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfCounterParameters", modifiers: "&&", def_value: None }]
constexpr KdfCounterParameters(KdfCounterParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KdfCounterParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KdfCounterParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KdfCounterParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KdfCounterParameters& operator=(KdfCounterParameters&& o) noexcept = default;
  constexpr KdfCounterParameters& operator=(KdfCounterParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_ki, put=__set_ki))  ki;

constexpr void __set_ki(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ki() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fixedInputDataCounterPrefix, put=__set_fixedInputDataCounterPrefix))  fixedInputDataCounterPrefix;

constexpr void __set_fixedInputDataCounterPrefix(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fixedInputDataCounterPrefix() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fixedInputDataCounterSuffix, put=__set_fixedInputDataCounterSuffix))  fixedInputDataCounterSuffix;

constexpr void __set_fixedInputDataCounterSuffix(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fixedInputDataCounterSuffix() const;

 int32_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(int32_t value) ;

constexpr int32_t __get_r() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Ki))  Ki;

 ::ArrayW<uint8_t> __declspec(property(get=get_FixedInputData))  FixedInputData;

 ::ArrayW<uint8_t> __declspec(property(get=get_FixedInputDataCounterPrefix))  FixedInputDataCounterPrefix;

 ::ArrayW<uint8_t> __declspec(property(get=get_FixedInputDataCounterSuffix))  FixedInputDataCounterSuffix;

 int32_t __declspec(property(get=get_R))  R;


// Methods

static Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters New_ctor(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputDataCounterSuffix, int32_t r) ;

/// @brief Method .ctor addr 0xea9c14 size 0x10 virtual false final false
 void _ctor(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputDataCounterSuffix, int32_t r) ;

static Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters New_ctor(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputDataCounterPrefix, ::ArrayW<uint8_t> fixedInputDataCounterSuffix, int32_t r) ;

/// @brief Method .ctor addr 0xea9c24 size 0x190 virtual false final false
 void _ctor(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputDataCounterPrefix, ::ArrayW<uint8_t> fixedInputDataCounterSuffix, int32_t r) ;

/// @brief Method get_Ki addr 0xea9db4 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Ki() ;

/// @brief Method get_FixedInputData addr 0xea9dbc size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_FixedInputData() ;

/// @brief Method get_FixedInputDataCounterPrefix addr 0xea9e18 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_FixedInputDataCounterPrefix() ;

/// @brief Method get_FixedInputDataCounterSuffix addr 0xea9e74 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_FixedInputDataCounterSuffix() ;

/// @brief Method get_R addr 0xea9ed0 size 0x8 virtual false final false
 int32_t get_R() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters, "Org.BouncyCastle.Crypto.Parameters", "KdfCounterParameters");

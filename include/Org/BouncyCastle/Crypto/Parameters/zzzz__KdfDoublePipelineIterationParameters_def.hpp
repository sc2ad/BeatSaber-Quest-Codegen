#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class KdfDoublePipelineIterationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::KdfDoublePipelineIterationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1062))
// CS Name: Org.BouncyCastle.Crypto.Parameters.KdfDoublePipelineIterationParameters
class CORDL_TYPE KdfDoublePipelineIterationParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDerivationParameters
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~KdfDoublePipelineIterationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfDoublePipelineIterationParameters", modifiers: " const&", def_value: None }]
constexpr KdfDoublePipelineIterationParameters(KdfDoublePipelineIterationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfDoublePipelineIterationParameters", modifiers: "&&", def_value: None }]
constexpr KdfDoublePipelineIterationParameters(KdfDoublePipelineIterationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KdfDoublePipelineIterationParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KdfDoublePipelineIterationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KdfDoublePipelineIterationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KdfDoublePipelineIterationParameters& operator=(KdfDoublePipelineIterationParameters&& o) noexcept = default;
  constexpr KdfDoublePipelineIterationParameters& operator=(KdfDoublePipelineIterationParameters const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_UNUSED_R, put=__set_UNUSED_R))  UNUSED_R;

static void __set_UNUSED_R(int32_t value) ;

static int32_t __get_UNUSED_R() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_ki, put=__set_ki))  ki;

constexpr void __set_ki(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ki() const;

 bool __declspec(property(get=__get_useCounter, put=__set_useCounter))  useCounter;

constexpr void __set_useCounter(bool value) ;

constexpr bool __get_useCounter() const;

 int32_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(int32_t value) ;

constexpr int32_t __get_r() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fixedInputData, put=__set_fixedInputData))  fixedInputData;

constexpr void __set_fixedInputData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fixedInputData() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Ki))  Ki;

 bool __declspec(property(get=get_UseCounter))  UseCounter;

 int32_t __declspec(property(get=get_R))  R;

 ::ArrayW<uint8_t> __declspec(property(get=get_FixedInputData))  FixedInputData;


// Methods

// Ctor Parameters [CppParam { name: "ki", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "fixedInputData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "r", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "useCounter", ty: "bool", modifiers: "", def_value: None }]
explicit KdfDoublePipelineIterationParameters(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputData, int32_t r, bool useCounter) ;

/// @brief Method .ctor addr 0xea9ed8 size 0x164 virtual false final false
 void _ctor(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputData, int32_t r, bool useCounter) ;

/// @brief Method CreateWithCounter addr 0xeaa03c size 0x7c virtual false final false
static ::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters CreateWithCounter(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputData, int32_t r) ;

/// @brief Method CreateWithoutCounter addr 0xeaa0b8 size 0x90 virtual false final false
static ::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters CreateWithoutCounter(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputData) ;

/// @brief Method get_Ki addr 0xeaa148 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_Ki() ;

/// @brief Method get_UseCounter addr 0xeaa1a4 size 0x8 virtual false final false
 bool get_UseCounter() ;

/// @brief Method get_R addr 0xeaa1ac size 0x8 virtual false final false
 int32_t get_R() ;

/// @brief Method get_FixedInputData addr 0xeaa1b4 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_FixedInputData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters, "Org.BouncyCastle.Crypto.Parameters", "KdfDoublePipelineIterationParameters");

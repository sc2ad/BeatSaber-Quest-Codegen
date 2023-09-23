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
class MgfParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::MgfParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1065))
// CS Name: Org.BouncyCastle.Crypto.Parameters.MgfParameters
class CORDL_TYPE MgfParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationParameters
constexpr operator  Org::BouncyCastle::Crypto::IDerivationParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MgfParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "MgfParameters", modifiers: " const&", def_value: None }]
constexpr MgfParameters(MgfParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MgfParameters", modifiers: "&&", def_value: None }]
constexpr MgfParameters(MgfParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MgfParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MgfParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MgfParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MgfParameters& operator=(MgfParameters&& o) noexcept = default;
  constexpr MgfParameters& operator=(MgfParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_seed() const;


// Methods

// Ctor Parameters [CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit MgfParameters(::ArrayW<uint8_t> seed) ;

/// @brief Method .ctor addr 0xeaa6f0 size 0x1c virtual false final false
 void _ctor(::ArrayW<uint8_t> seed) ;

// Ctor Parameters [CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }]
explicit MgfParameters(::ArrayW<uint8_t> seed, int32_t off, int32_t len) ;

/// @brief Method .ctor addr 0xeaa70c size 0x90 virtual false final false
 void _ctor(::ArrayW<uint8_t> seed, int32_t off, int32_t len) ;

/// @brief Method GetSeed addr 0xeaa79c size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetSeed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::MgfParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::MgfParameters, "Org.BouncyCastle.Crypto.Parameters", "MgfParameters");

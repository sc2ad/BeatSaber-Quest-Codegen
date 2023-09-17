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
class HkdfParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::HkdfParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1057))
// CS Name: Org.BouncyCastle.Crypto.Parameters.HkdfParameters
class CORDL_TYPE HkdfParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDerivationParameters
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HkdfParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "HkdfParameters", modifiers: " const&", def_value: None }]
constexpr HkdfParameters(HkdfParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HkdfParameters", modifiers: "&&", def_value: None }]
constexpr HkdfParameters(HkdfParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HkdfParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HkdfParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HkdfParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HkdfParameters& operator=(HkdfParameters&& o) noexcept = default;
  constexpr HkdfParameters& operator=(HkdfParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_ikm, put=__set_ikm))  ikm;

constexpr void __set_ikm(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ikm() const;

 bool __declspec(property(get=__get_skipExpand, put=__set_skipExpand))  skipExpand;

constexpr void __set_skipExpand(bool value) ;

constexpr bool __get_skipExpand() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_salt, put=__set_salt))  salt;

constexpr void __set_salt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_salt() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_info() const;


// Properties

 bool __declspec(property(get=get_SkipExtract))  SkipExtract;


// Methods

// Ctor Parameters [CppParam { name: "ikm", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "skip", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "info", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit HkdfParameters(::ArrayW<uint8_t> ikm, bool skip, ::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> info) ;

/// @brief Method .ctor addr 0xea97d8 size 0x160 virtual false final false
 void _ctor(::ArrayW<uint8_t> ikm, bool skip, ::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> info) ;

// Ctor Parameters [CppParam { name: "ikm", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "info", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit HkdfParameters(::ArrayW<uint8_t> ikm, ::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> info) ;

/// @brief Method .ctor addr 0xea9938 size 0x10 virtual false final false
 void _ctor(::ArrayW<uint8_t> ikm, ::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> info) ;

/// @brief Method SkipExtractParameters addr 0xea9948 size 0x78 virtual false final false
static ::Org::BouncyCastle::Crypto::Parameters::HkdfParameters SkipExtractParameters(::ArrayW<uint8_t> ikm, ::ArrayW<uint8_t> info) ;

/// @brief Method DefaultParameters addr 0xea99c0 size 0x6c virtual false final false
static ::Org::BouncyCastle::Crypto::Parameters::HkdfParameters DefaultParameters(::ArrayW<uint8_t> ikm) ;

/// @brief Method GetIkm addr 0xea9a2c size 0x5c virtual true final false
 ::ArrayW<uint8_t> GetIkm() ;

/// @brief Method get_SkipExtract addr 0xea9a88 size 0x8 virtual true final false
 bool get_SkipExtract() ;

/// @brief Method GetSalt addr 0xea9a90 size 0x5c virtual true final false
 ::ArrayW<uint8_t> GetSalt() ;

/// @brief Method GetInfo addr 0xea9aec size 0x5c virtual true final false
 ::ArrayW<uint8_t> GetInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::HkdfParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::HkdfParameters, "Org.BouncyCastle.Crypto.Parameters", "HkdfParameters");

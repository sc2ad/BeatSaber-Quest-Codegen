#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpLoginParameters
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1327))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSrpLoginParameters
class CORDL_TYPE TlsSrpLoginParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TlsSrpLoginParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSrpLoginParameters", modifiers: " const&", def_value: None }]
constexpr TlsSrpLoginParameters(TlsSrpLoginParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSrpLoginParameters", modifiers: "&&", def_value: None }]
constexpr TlsSrpLoginParameters(TlsSrpLoginParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSrpLoginParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsSrpLoginParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsSrpLoginParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsSrpLoginParameters& operator=(TlsSrpLoginParameters&& o) noexcept = default;
  constexpr TlsSrpLoginParameters& operator=(TlsSrpLoginParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters __declspec(property(get=__get_mGroup, put=__set_mGroup))  mGroup;

constexpr void __set_mGroup(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters __get_mGroup() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_mVerifier, put=__set_mVerifier))  mVerifier;

constexpr void __set_mVerifier(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_mVerifier() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSalt, put=__set_mSalt))  mSalt;

constexpr void __set_mSalt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSalt() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters __declspec(property(get=get_Group))  Group;

 ::ArrayW<uint8_t> __declspec(property(get=get_Salt))  Salt;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Verifier))  Verifier;


// Methods

// Ctor Parameters [CppParam { name: "group", ty: "Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters", modifiers: "", def_value: None }, CppParam { name: "verifier", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TlsSrpLoginParameters(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, Org::BouncyCastle::Math::BigInteger verifier, ::ArrayW<uint8_t> salt) ;

/// @brief Method .ctor addr 0xf2b884 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, Org::BouncyCastle::Math::BigInteger verifier, ::ArrayW<uint8_t> salt) ;

/// @brief Method get_Group addr 0xf2b8c0 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters get_Group() ;

/// @brief Method get_Salt addr 0xf2b8c8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_Salt() ;

/// @brief Method get_Verifier addr 0xf2b8d0 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Verifier() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, "Org.BouncyCastle.Crypto.Tls", "TlsSrpLoginParameters");

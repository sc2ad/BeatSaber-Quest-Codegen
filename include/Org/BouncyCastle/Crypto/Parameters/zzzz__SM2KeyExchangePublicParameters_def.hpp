#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class SM2KeyExchangePublicParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::SM2KeyExchangePublicParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1085))
// CS Name: Org.BouncyCastle.Crypto.Parameters.SM2KeyExchangePublicParameters
class CORDL_TYPE SM2KeyExchangePublicParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SM2KeyExchangePublicParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePublicParameters", modifiers: " const&", def_value: None }]
constexpr SM2KeyExchangePublicParameters(SM2KeyExchangePublicParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePublicParameters", modifiers: "&&", def_value: None }]
constexpr SM2KeyExchangePublicParameters(SM2KeyExchangePublicParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SM2KeyExchangePublicParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SM2KeyExchangePublicParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SM2KeyExchangePublicParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SM2KeyExchangePublicParameters& operator=(SM2KeyExchangePublicParameters&& o) noexcept = default;
  constexpr SM2KeyExchangePublicParameters& operator=(SM2KeyExchangePublicParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=__get_mStaticPublicKey, put=__set_mStaticPublicKey))  mStaticPublicKey;

constexpr void __set_mStaticPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __get_mStaticPublicKey() const;

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=__get_mEphemeralPublicKey, put=__set_mEphemeralPublicKey))  mEphemeralPublicKey;

constexpr void __set_mEphemeralPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __get_mEphemeralPublicKey() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=get_StaticPublicKey))  StaticPublicKey;

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=get_EphemeralPublicKey))  EphemeralPublicKey;


// Methods

static Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters New_ctor(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters staticPublicKey, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ephemeralPublicKey) ;

/// @brief Method .ctor addr 0xead5ec size 0xfc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters staticPublicKey, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ephemeralPublicKey) ;

/// @brief Method get_StaticPublicKey addr 0xead6e8 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters get_StaticPublicKey() ;

/// @brief Method get_EphemeralPublicKey addr 0xead6f0 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters get_EphemeralPublicKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters, "Org.BouncyCastle.Crypto.Parameters", "SM2KeyExchangePublicParameters");

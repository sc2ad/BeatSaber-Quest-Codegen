#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class SM2KeyExchangePrivateParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::SM2KeyExchangePrivateParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1084))
// CS Name: Org.BouncyCastle.Crypto.Parameters.SM2KeyExchangePrivateParameters
class CORDL_TYPE SM2KeyExchangePrivateParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SM2KeyExchangePrivateParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePrivateParameters", modifiers: " const&", def_value: None }]
constexpr SM2KeyExchangePrivateParameters(SM2KeyExchangePrivateParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePrivateParameters", modifiers: "&&", def_value: None }]
constexpr SM2KeyExchangePrivateParameters(SM2KeyExchangePrivateParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SM2KeyExchangePrivateParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SM2KeyExchangePrivateParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SM2KeyExchangePrivateParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SM2KeyExchangePrivateParameters& operator=(SM2KeyExchangePrivateParameters&& o) noexcept = default;
  constexpr SM2KeyExchangePrivateParameters& operator=(SM2KeyExchangePrivateParameters const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_mInitiator, put=__set_mInitiator))  mInitiator;

constexpr void __set_mInitiator(bool value) ;

constexpr bool __get_mInitiator() const;

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_mStaticPrivateKey, put=__set_mStaticPrivateKey))  mStaticPrivateKey;

constexpr void __set_mStaticPrivateKey(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_mStaticPrivateKey() const;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_mStaticPublicPoint, put=__set_mStaticPublicPoint))  mStaticPublicPoint;

constexpr void __set_mStaticPublicPoint(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_mStaticPublicPoint() const;

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_mEphemeralPrivateKey, put=__set_mEphemeralPrivateKey))  mEphemeralPrivateKey;

constexpr void __set_mEphemeralPrivateKey(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_mEphemeralPrivateKey() const;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_mEphemeralPublicPoint, put=__set_mEphemeralPublicPoint))  mEphemeralPublicPoint;

constexpr void __set_mEphemeralPublicPoint(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_mEphemeralPublicPoint() const;


// Properties

 bool __declspec(property(get=get_IsInitiator))  IsInitiator;

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=get_StaticPrivateKey))  StaticPrivateKey;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_StaticPublicPoint))  StaticPublicPoint;

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=get_EphemeralPrivateKey))  EphemeralPrivateKey;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_EphemeralPublicPoint))  EphemeralPublicPoint;


// Methods

// Ctor Parameters [CppParam { name: "initiator", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "staticPrivateKey", ty: "Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters", modifiers: "", def_value: None }, CppParam { name: "ephemeralPrivateKey", ty: "Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters", modifiers: "", def_value: None }]
explicit SM2KeyExchangePrivateParameters(bool initiator, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters staticPrivateKey, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ephemeralPrivateKey) ;

/// @brief Method .ctor addr 0xead350 size 0x274 virtual false final false
 void _ctor(bool initiator, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters staticPrivateKey, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ephemeralPrivateKey) ;

/// @brief Method get_IsInitiator addr 0xead5c4 size 0x8 virtual true final false
 bool get_IsInitiator() ;

/// @brief Method get_StaticPrivateKey addr 0xead5cc size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters get_StaticPrivateKey() ;

/// @brief Method get_StaticPublicPoint addr 0xead5d4 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_StaticPublicPoint() ;

/// @brief Method get_EphemeralPrivateKey addr 0xead5dc size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters get_EphemeralPrivateKey() ;

/// @brief Method get_EphemeralPublicPoint addr 0xead5e4 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_EphemeralPublicPoint() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, "Org.BouncyCastle.Crypto.Parameters", "SM2KeyExchangePrivateParameters");

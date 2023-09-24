#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class MqvPrivateParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::MqvPrivateParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1066))
// CS Name: Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters
class CORDL_TYPE MqvPrivateParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MqvPrivateParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "MqvPrivateParameters", modifiers: " const&", def_value: None }]
constexpr MqvPrivateParameters(MqvPrivateParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MqvPrivateParameters", modifiers: "&&", def_value: None }]
constexpr MqvPrivateParameters(MqvPrivateParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MqvPrivateParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MqvPrivateParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MqvPrivateParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MqvPrivateParameters& operator=(MqvPrivateParameters&& o) noexcept = default;
  constexpr MqvPrivateParameters& operator=(MqvPrivateParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_staticPrivateKey, put=__set_staticPrivateKey))  staticPrivateKey;

constexpr void __set_staticPrivateKey(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_staticPrivateKey() const;

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_ephemeralPrivateKey, put=__set_ephemeralPrivateKey))  ephemeralPrivateKey;

constexpr void __set_ephemeralPrivateKey(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_ephemeralPrivateKey() const;

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=__get_ephemeralPublicKey, put=__set_ephemeralPublicKey))  ephemeralPublicKey;

constexpr void __set_ephemeralPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __get_ephemeralPublicKey() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=get_StaticPrivateKey))  StaticPrivateKey;

 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=get_EphemeralPrivateKey))  EphemeralPrivateKey;

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=get_EphemeralPublicKey))  EphemeralPublicKey;


// Methods

static Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters New_ctor(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters staticPrivateKey, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ephemeralPrivateKey) ;

/// @brief Method .ctor addr 0xeaa814 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters staticPrivateKey, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ephemeralPrivateKey) ;

static Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters New_ctor(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters staticPrivateKey, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ephemeralPrivateKey, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ephemeralPublicKey) ;

/// @brief Method .ctor addr 0xeaa81c size 0x1f0 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters staticPrivateKey, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ephemeralPrivateKey, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ephemeralPublicKey) ;

/// @brief Method get_StaticPrivateKey addr 0xeaaa0c size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters get_StaticPrivateKey() ;

/// @brief Method get_EphemeralPrivateKey addr 0xeaaa14 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters get_EphemeralPrivateKey() ;

/// @brief Method get_EphemeralPublicKey addr 0xeaaa1c size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters get_EphemeralPublicKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters, "Org.BouncyCastle.Crypto.Parameters", "MqvPrivateParameters");

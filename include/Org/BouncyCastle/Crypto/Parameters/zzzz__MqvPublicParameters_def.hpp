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
class MqvPublicParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::MqvPublicParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1067))
// CS Name: Org.BouncyCastle.Crypto.Parameters.MqvPublicParameters
class CORDL_TYPE MqvPublicParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MqvPublicParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "MqvPublicParameters", modifiers: " const&", def_value: None }]
constexpr MqvPublicParameters(MqvPublicParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MqvPublicParameters", modifiers: "&&", def_value: None }]
constexpr MqvPublicParameters(MqvPublicParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MqvPublicParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MqvPublicParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MqvPublicParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MqvPublicParameters& operator=(MqvPublicParameters&& o) noexcept = default;
  constexpr MqvPublicParameters& operator=(MqvPublicParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=__get_staticPublicKey, put=__set_staticPublicKey))  staticPublicKey;

constexpr void __set_staticPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __get_staticPublicKey() const;

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=__get_ephemeralPublicKey, put=__set_ephemeralPublicKey))  ephemeralPublicKey;

constexpr void __set_ephemeralPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __get_ephemeralPublicKey() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=get_StaticPublicKey))  StaticPublicKey;

 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters __declspec(property(get=get_EphemeralPublicKey))  EphemeralPublicKey;


// Methods

static Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters New_ctor(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters staticPublicKey, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ephemeralPublicKey) ;

/// @brief Method .ctor addr 0xeaaa24 size 0xfc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters staticPublicKey, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ephemeralPublicKey) ;

/// @brief Method get_StaticPublicKey addr 0xeaab20 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters get_StaticPublicKey() ;

/// @brief Method get_EphemeralPublicKey addr 0xeaab28 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters get_EphemeralPublicKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters, "Org.BouncyCastle.Crypto.Parameters", "MqvPublicParameters");

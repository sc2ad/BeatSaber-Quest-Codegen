#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpIdentityManager;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6VerifierGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SimulatedTlsSrpIdentityManager;
}
// Type: Org.BouncyCastle.Crypto.Tls::SimulatedTlsSrpIdentityManager
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1279))
// CS Name: Org.BouncyCastle.Crypto.Tls.SimulatedTlsSrpIdentityManager
class CORDL_TYPE SimulatedTlsSrpIdentityManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SimulatedTlsSrpIdentityManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimulatedTlsSrpIdentityManager", modifiers: " const&", def_value: None }]
constexpr SimulatedTlsSrpIdentityManager(SimulatedTlsSrpIdentityManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimulatedTlsSrpIdentityManager", modifiers: "&&", def_value: None }]
constexpr SimulatedTlsSrpIdentityManager(SimulatedTlsSrpIdentityManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimulatedTlsSrpIdentityManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimulatedTlsSrpIdentityManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimulatedTlsSrpIdentityManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimulatedTlsSrpIdentityManager& operator=(SimulatedTlsSrpIdentityManager&& o) noexcept = default;
  constexpr SimulatedTlsSrpIdentityManager& operator=(SimulatedTlsSrpIdentityManager const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_PREFIX_PASSWORD, put=__set_PREFIX_PASSWORD))  PREFIX_PASSWORD;

static void __set_PREFIX_PASSWORD(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_PREFIX_PASSWORD() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_PREFIX_SALT, put=__set_PREFIX_SALT))  PREFIX_SALT;

static void __set_PREFIX_SALT(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_PREFIX_SALT() ;

 Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters __declspec(property(get=__get_mGroup, put=__set_mGroup))  mGroup;

constexpr void __set_mGroup(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters __get_mGroup() const;

 Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator __declspec(property(get=__get_mVerifierGenerator, put=__set_mVerifierGenerator))  mVerifierGenerator;

constexpr void __set_mVerifierGenerator(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator value) ;

constexpr Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator __get_mVerifierGenerator() const;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mMac, put=__set_mMac))  mMac;

constexpr void __set_mMac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_mMac() const;


// Methods

/// @brief Method GetRfc5054Default addr 0xf09aa0 size 0x17c virtual false final false
static Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager GetRfc5054Default(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, ::ArrayW<uint8_t> seedKey) ;

// Ctor Parameters [CppParam { name: "group", ty: "Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters", modifiers: "", def_value: None }, CppParam { name: "verifierGenerator", ty: "Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator", modifiers: "", def_value: None }, CppParam { name: "mac", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
explicit SimulatedTlsSrpIdentityManager(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator verifierGenerator, Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method .ctor addr 0xf09c1c size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator verifierGenerator, Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method GetLoginParameters addr 0xf09c58 size 0x4bc virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters GetLoginParameters(::ArrayW<uint8_t> identity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager, "Org.BouncyCastle.Crypto.Tls", "SimulatedTlsSrpIdentityManager");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SecretKeyPacket;
}
// Type: Org.BouncyCastle.Bcpg::SecretKeyPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(587))
// CS Name: Org.BouncyCastle.Bcpg.SecretKeyPacket
class CORDL_TYPE SecretKeyPacket : public Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SecretKeyPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecretKeyPacket", modifiers: " const&", def_value: None }]
constexpr SecretKeyPacket(SecretKeyPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecretKeyPacket", modifiers: "&&", def_value: None }]
constexpr SecretKeyPacket(SecretKeyPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecretKeyPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr SecretKeyPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecretKeyPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecretKeyPacket& operator=(SecretKeyPacket&& o) noexcept = default;
  constexpr SecretKeyPacket& operator=(SecretKeyPacket const& o) noexcept = default;
                


// Fields

/// @brief Field UsageNone offset 0
static constexpr int32_t  UsageNone{0};

/// @brief Field UsageChecksum offset 0
static constexpr int32_t  UsageChecksum{255};

/// @brief Field UsageSha1 offset 0
static constexpr int32_t  UsageSha1{254};

 Org::BouncyCastle::Bcpg::PublicKeyPacket __declspec(property(get=__get_pubKeyPacket, put=__set_pubKeyPacket))  pubKeyPacket;

constexpr void __set_pubKeyPacket(Org::BouncyCastle::Bcpg::PublicKeyPacket value) ;

constexpr Org::BouncyCastle::Bcpg::PublicKeyPacket __get_pubKeyPacket() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_secKeyData, put=__set_secKeyData))  secKeyData;

constexpr void __set_secKeyData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_secKeyData() const;

 int32_t __declspec(property(get=__get_s2kUsage, put=__set_s2kUsage))  s2kUsage;

constexpr void __set_s2kUsage(int32_t value) ;

constexpr int32_t __get_s2kUsage() const;

 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=__get_encAlgorithm, put=__set_encAlgorithm))  encAlgorithm;

constexpr void __set_encAlgorithm(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __get_encAlgorithm() const;

 Org::BouncyCastle::Bcpg::S2k __declspec(property(get=__get_s2k, put=__set_s2k))  s2k;

constexpr void __set_s2k(Org::BouncyCastle::Bcpg::S2k value) ;

constexpr Org::BouncyCastle::Bcpg::S2k __get_s2k() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_iv() const;


// Properties

 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=get_EncAlgorithm))  EncAlgorithm;

 int32_t __declspec(property(get=get_S2kUsage))  S2kUsage;

 Org::BouncyCastle::Bcpg::S2k __declspec(property(get=get_S2k))  S2k;

 Org::BouncyCastle::Bcpg::PublicKeyPacket __declspec(property(get=get_PublicKeyPacket))  PublicKeyPacket;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit SecretKeyPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1144460 size 0x1e0 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "pubKeyPacket", ty: "Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "s2k", ty: "Org::BouncyCastle::Bcpg::S2k", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "secKeyData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SecretKeyPacket(Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyPacket, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) ;

/// @brief Method .ctor addr 0x114937c size 0xb4 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyPacket, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) ;

// Ctor Parameters [CppParam { name: "pubKeyPacket", ty: "Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "s2kUsage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "s2k", ty: "Org::BouncyCastle::Bcpg::S2k", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "secKeyData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SecretKeyPacket(Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyPacket, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, int32_t s2kUsage, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) ;

/// @brief Method .ctor addr 0x1149430 size 0xac virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyPacket, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, int32_t s2kUsage, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) ;

/// @brief Method get_EncAlgorithm addr 0x11494dc size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_EncAlgorithm() ;

/// @brief Method get_S2kUsage addr 0x11494e4 size 0x8 virtual false final false
 int32_t get_S2kUsage() ;

/// @brief Method GetIV addr 0x11494ec size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetIV() ;

/// @brief Method get_S2k addr 0x1149548 size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::S2k get_S2k() ;

/// @brief Method get_PublicKeyPacket addr 0x1149550 size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::PublicKeyPacket get_PublicKeyPacket() ;

/// @brief Method GetSecretKeyData addr 0x1149558 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetSecretKeyData() ;

/// @brief Method GetEncodedContents addr 0x1149560 size 0x160 virtual false final false
 ::ArrayW<uint8_t> GetEncodedContents() ;

/// @brief Method Encode addr 0x11496c0 size 0x2c virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::SecretKeyPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::SecretKeyPacket, "Org.BouncyCastle.Bcpg", "SecretKeyPacket");

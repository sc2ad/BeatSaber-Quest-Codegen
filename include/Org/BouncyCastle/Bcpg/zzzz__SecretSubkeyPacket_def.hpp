#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SecretKeyPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SecretSubkeyPacket;
}
// Type: Org.BouncyCastle.Bcpg::SecretSubkeyPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(587))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(588))
// CS Name: Org.BouncyCastle.Bcpg.SecretSubkeyPacket
class CORDL_TYPE SecretSubkeyPacket : public Org::BouncyCastle::Bcpg::SecretKeyPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SecretSubkeyPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecretSubkeyPacket", modifiers: " const&", def_value: None }]
constexpr SecretSubkeyPacket(SecretSubkeyPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecretSubkeyPacket", modifiers: "&&", def_value: None }]
constexpr SecretSubkeyPacket(SecretSubkeyPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecretSubkeyPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SecretKeyPacket(ptr) {
}


  constexpr SecretSubkeyPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecretSubkeyPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecretSubkeyPacket& operator=(SecretSubkeyPacket&& o) noexcept = default;
  constexpr SecretSubkeyPacket& operator=(SecretSubkeyPacket const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit SecretSubkeyPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x11448d8 size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "pubKeyPacket", ty: "Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "s2k", ty: "Org::BouncyCastle::Bcpg::S2k", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "secKeyData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SecretSubkeyPacket(Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyPacket, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) ;

/// @brief Method .ctor addr 0x11496ec size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyPacket, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) ;

// Ctor Parameters [CppParam { name: "pubKeyPacket", ty: "Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "s2kUsage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "s2k", ty: "Org::BouncyCastle::Bcpg::S2k", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "secKeyData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SecretSubkeyPacket(Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyPacket, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, int32_t s2kUsage, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) ;

/// @brief Method .ctor addr 0x11496f0 size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyPacket, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, int32_t s2kUsage, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) ;

/// @brief Method Encode addr 0x11496f4 size 0x2c virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::SecretSubkeyPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::SecretSubkeyPacket, "Org.BouncyCastle.Bcpg", "SecretSubkeyPacket");

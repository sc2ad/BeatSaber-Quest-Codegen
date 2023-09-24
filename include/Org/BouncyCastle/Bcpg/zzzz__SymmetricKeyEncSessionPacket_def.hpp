#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SymmetricKeyEncSessionPacket;
}
// Type: Org.BouncyCastle.Bcpg::SymmetricKeyEncSessionPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(595))
// CS Name: Org.BouncyCastle.Bcpg.SymmetricKeyEncSessionPacket
class CORDL_TYPE SymmetricKeyEncSessionPacket : public Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SymmetricKeyEncSessionPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricKeyEncSessionPacket", modifiers: " const&", def_value: None }]
constexpr SymmetricKeyEncSessionPacket(SymmetricKeyEncSessionPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricKeyEncSessionPacket", modifiers: "&&", def_value: None }]
constexpr SymmetricKeyEncSessionPacket(SymmetricKeyEncSessionPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SymmetricKeyEncSessionPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr SymmetricKeyEncSessionPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SymmetricKeyEncSessionPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SymmetricKeyEncSessionPacket& operator=(SymmetricKeyEncSessionPacket&& o) noexcept = default;
  constexpr SymmetricKeyEncSessionPacket& operator=(SymmetricKeyEncSessionPacket const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=__get_encAlgorithm, put=__set_encAlgorithm))  encAlgorithm;

constexpr void __set_encAlgorithm(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __get_encAlgorithm() const;

 Org::BouncyCastle::Bcpg::S2k __declspec(property(get=__get_s2k, put=__set_s2k))  s2k;

constexpr void __set_s2k(Org::BouncyCastle::Bcpg::S2k value) ;

constexpr Org::BouncyCastle::Bcpg::S2k __get_s2k() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_secKeyData, put=__set_secKeyData))  secKeyData;

constexpr void __set_secKeyData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_secKeyData() const;


// Properties

 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=get_EncAlgorithm))  EncAlgorithm;

 Org::BouncyCastle::Bcpg::S2k __declspec(property(get=get_S2k))  S2k;

 int32_t __declspec(property(get=get_Version))  Version;


// Methods

static Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1144214 size 0xb4 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket New_ctor(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> secKeyData) ;

/// @brief Method .ctor addr 0x114aa54 size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> secKeyData) ;

/// @brief Method get_EncAlgorithm addr 0x114aa94 size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_EncAlgorithm() ;

/// @brief Method get_S2k addr 0x114aa9c size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::S2k get_S2k() ;

/// @brief Method GetSecKeyData addr 0x114aaa4 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetSecKeyData() ;

/// @brief Method get_Version addr 0x114aaac size 0x8 virtual false final false
 int32_t get_Version() ;

/// @brief Method Encode addr 0x114aab4 size 0x15c virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, "Org.BouncyCastle.Bcpg", "SymmetricKeyEncSessionPacket");

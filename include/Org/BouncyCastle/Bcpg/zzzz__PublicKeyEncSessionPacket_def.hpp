#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class PublicKeyEncSessionPacket;
}
// Type: Org.BouncyCastle.Bcpg::PublicKeyEncSessionPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(581))
// CS Name: Org.BouncyCastle.Bcpg.PublicKeyEncSessionPacket
class CORDL_TYPE PublicKeyEncSessionPacket : public Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PublicKeyEncSessionPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKeyEncSessionPacket", modifiers: " const&", def_value: None }]
constexpr PublicKeyEncSessionPacket(PublicKeyEncSessionPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKeyEncSessionPacket", modifiers: "&&", def_value: None }]
constexpr PublicKeyEncSessionPacket(PublicKeyEncSessionPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PublicKeyEncSessionPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr PublicKeyEncSessionPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PublicKeyEncSessionPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PublicKeyEncSessionPacket& operator=(PublicKeyEncSessionPacket&& o) noexcept = default;
  constexpr PublicKeyEncSessionPacket& operator=(PublicKeyEncSessionPacket const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 int64_t __declspec(property(get=__get_keyId, put=__set_keyId))  keyId;

constexpr void __set_keyId(int64_t value) ;

constexpr int64_t __get_keyId() const;

 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __get_algorithm() const;

 ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<::ArrayW<uint8_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint8_t>> __get_data() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 int64_t __declspec(property(get=get_KeyId))  KeyId;

 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=get_Algorithm))  Algorithm;


// Methods

static Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1143134 size 0x364 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket New_ctor(int64_t keyId, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::ArrayW<::ArrayW<uint8_t>> data) ;

/// @brief Method .ctor addr 0x1148068 size 0x144 virtual false final false
 void _ctor(int64_t keyId, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::ArrayW<::ArrayW<uint8_t>> data) ;

/// @brief Method get_Version addr 0x11481ac size 0x8 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_KeyId addr 0x11481b4 size 0x8 virtual false final false
 int64_t get_KeyId() ;

/// @brief Method get_Algorithm addr 0x11481bc size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm() ;

/// @brief Method GetEncSessionKey addr 0x11481c4 size 0x8 virtual false final false
 ::ArrayW<::ArrayW<uint8_t>> GetEncSessionKey() ;

/// @brief Method Encode addr 0x11481cc size 0x188 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, "Org.BouncyCastle.Bcpg", "PublicKeyEncSessionPacket");

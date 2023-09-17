#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
// Type: Org.BouncyCastle.Bcpg::PublicKeyPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(582))
// CS Name: Org.BouncyCastle.Bcpg.PublicKeyPacket
class CORDL_TYPE PublicKeyPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PublicKeyPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKeyPacket", modifiers: " const&", def_value: None }]
constexpr PublicKeyPacket(PublicKeyPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicKeyPacket", modifiers: "&&", def_value: None }]
constexpr PublicKeyPacket(PublicKeyPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PublicKeyPacket(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr PublicKeyPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PublicKeyPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PublicKeyPacket& operator=(PublicKeyPacket&& o) noexcept = default;
  constexpr PublicKeyPacket& operator=(PublicKeyPacket const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 int64_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(int64_t value) ;

constexpr int64_t __get_time() const;

 int32_t __declspec(property(get=__get_validDays, put=__set_validDays))  validDays;

constexpr void __set_validDays(int32_t value) ;

constexpr int32_t __get_validDays() const;

 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __get_algorithm() const;

 ::Org::BouncyCastle::Bcpg::IBcpgKey __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::Org::BouncyCastle::Bcpg::IBcpgKey value) ;

constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey __get_key() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=get_Algorithm))  Algorithm;

 int32_t __declspec(property(get=get_ValidDays))  ValidDays;

 ::Org::BouncyCastle::Bcpg::IBcpgKey __declspec(property(get=get_Key))  Key;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit PublicKeyPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1144640 size 0x298 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "time", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::Org::BouncyCastle::Bcpg::IBcpgKey", modifiers: "", def_value: None }]
explicit PublicKeyPacket(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time, ::Org::BouncyCastle::Bcpg::IBcpgKey key) ;

/// @brief Method .ctor addr 0x11483e8 size 0xb4 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time, ::Org::BouncyCastle::Bcpg::IBcpgKey key) ;

/// @brief Method get_Version addr 0x114849c size 0x8 virtual true final false
 int32_t get_Version() ;

/// @brief Method get_Algorithm addr 0x11484a4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm() ;

/// @brief Method get_ValidDays addr 0x11484ac size 0x8 virtual true final false
 int32_t get_ValidDays() ;

/// @brief Method GetTime addr 0x11484b4 size 0x60 virtual true final false
 ::System::DateTime GetTime() ;

/// @brief Method get_Key addr 0x1148514 size 0x8 virtual true final false
 ::Org::BouncyCastle::Bcpg::IBcpgKey get_Key() ;

/// @brief Method GetEncodedContents addr 0x114851c size 0x15c virtual true final false
 ::ArrayW<uint8_t> GetEncodedContents() ;

/// @brief Method Encode addr 0x1148678 size 0x38 virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::PublicKeyPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PublicKeyPacket, "Org.BouncyCastle.Bcpg", "PublicKeyPacket");

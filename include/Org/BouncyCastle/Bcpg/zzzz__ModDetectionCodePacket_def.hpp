#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ModDetectionCodePacket;
}
// Type: Org.BouncyCastle.Bcpg::ModDetectionCodePacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(575))
// CS Name: Org.BouncyCastle.Bcpg.ModDetectionCodePacket
class CORDL_TYPE ModDetectionCodePacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ModDetectionCodePacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModDetectionCodePacket", modifiers: " const&", def_value: None }]
constexpr ModDetectionCodePacket(ModDetectionCodePacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModDetectionCodePacket", modifiers: "&&", def_value: None }]
constexpr ModDetectionCodePacket(ModDetectionCodePacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModDetectionCodePacket(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr ModDetectionCodePacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModDetectionCodePacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModDetectionCodePacket& operator=(ModDetectionCodePacket&& o) noexcept = default;
  constexpr ModDetectionCodePacket& operator=(ModDetectionCodePacket const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_digest() const;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit ModDetectionCodePacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x114502c size 0xb8 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "digest", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ModDetectionCodePacket(::ArrayW<uint8_t> digest) ;

/// @brief Method .ctor addr 0x1147b78 size 0x100 virtual false final false
 void _ctor(::ArrayW<uint8_t> digest) ;

/// @brief Method GetDigest addr 0x1147c78 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetDigest() ;

/// @brief Method Encode addr 0x1147cf0 size 0x28 virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket, "Org.BouncyCastle.Bcpg", "ModDetectionCodePacket");

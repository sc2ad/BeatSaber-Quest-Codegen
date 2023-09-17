#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ExperimentalPacket;
}
// Type: Org.BouncyCastle.Bcpg::ExperimentalPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(571))
// CS Name: Org.BouncyCastle.Bcpg.ExperimentalPacket
class CORDL_TYPE ExperimentalPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ExperimentalPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExperimentalPacket", modifiers: " const&", def_value: None }]
constexpr ExperimentalPacket(ExperimentalPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExperimentalPacket", modifiers: "&&", def_value: None }]
constexpr ExperimentalPacket(ExperimentalPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExperimentalPacket(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr ExperimentalPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExperimentalPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExperimentalPacket& operator=(ExperimentalPacket&& o) noexcept = default;
  constexpr ExperimentalPacket& operator=(ExperimentalPacket const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Bcpg::PacketTag __declspec(property(get=__get_tag, put=__set_tag))  tag;

constexpr void __set_tag(::Org::BouncyCastle::Bcpg::PacketTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::PacketTag __get_tag() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_contents, put=__set_contents))  contents;

constexpr void __set_contents(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_contents() const;


// Properties

 ::Org::BouncyCastle::Bcpg::PacketTag __declspec(property(get=get_Tag))  Tag;


// Methods

// Ctor Parameters [CppParam { name: "tag", ty: "::Org::BouncyCastle::Bcpg::PacketTag", modifiers: "", def_value: None }, CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit ExperimentalPacket(::Org::BouncyCastle::Bcpg::PacketTag tag, ::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x11450e4 size 0x44 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::PacketTag tag, ::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method get_Tag addr 0x1147a30 size 0x8 virtual false final false
 ::Org::BouncyCastle::Bcpg::PacketTag get_Tag() ;

/// @brief Method GetContents addr 0x1147a38 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetContents() ;

/// @brief Method Encode addr 0x1147ab0 size 0x28 virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ExperimentalPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ExperimentalPacket, "Org.BouncyCastle.Bcpg", "ExperimentalPacket");

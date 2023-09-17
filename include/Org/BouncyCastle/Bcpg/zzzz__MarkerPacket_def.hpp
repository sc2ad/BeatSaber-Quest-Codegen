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
class MarkerPacket;
}
// Type: Org.BouncyCastle.Bcpg::MarkerPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(574))
// CS Name: Org.BouncyCastle.Bcpg.MarkerPacket
class CORDL_TYPE MarkerPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MarkerPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "MarkerPacket", modifiers: " const&", def_value: None }]
constexpr MarkerPacket(MarkerPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MarkerPacket", modifiers: "&&", def_value: None }]
constexpr MarkerPacket(MarkerPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MarkerPacket(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr MarkerPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MarkerPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MarkerPacket& operator=(MarkerPacket&& o) noexcept = default;
  constexpr MarkerPacket& operator=(MarkerPacket const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_marker, put=__set_marker))  marker;

constexpr void __set_marker(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_marker() const;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit MarkerPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x114494c size 0x9c virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method Encode addr 0x1147b50 size 0x28 virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::MarkerPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::MarkerPacket, "Org.BouncyCastle.Bcpg", "MarkerPacket");

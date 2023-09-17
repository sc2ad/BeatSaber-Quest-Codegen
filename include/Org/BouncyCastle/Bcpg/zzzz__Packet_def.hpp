#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
// Type: Org.BouncyCastle.Bcpg::Packet
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(556))
// CS Name: Org.BouncyCastle.Bcpg.Packet
class CORDL_TYPE Packet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Packet() = default;

// Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: " const&", def_value: None }]
constexpr Packet(Packet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "&&", def_value: None }]
constexpr Packet(Packet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Packet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Packet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Packet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Packet& operator=(Packet&& o) noexcept = default;
  constexpr Packet& operator=(Packet const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Packet() ;

/// @brief Method .ctor addr 0x1146250 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Packet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Packet, "Org.BouncyCastle.Bcpg", "Packet");

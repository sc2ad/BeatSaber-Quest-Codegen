#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserIdPacket;
}
// Type: Org.BouncyCastle.Bcpg::UserIdPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(600))
// CS Name: Org.BouncyCastle.Bcpg.UserIdPacket
class CORDL_TYPE UserIdPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UserIdPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserIdPacket", modifiers: " const&", def_value: None }]
constexpr UserIdPacket(UserIdPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserIdPacket", modifiers: "&&", def_value: None }]
constexpr UserIdPacket(UserIdPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserIdPacket(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr UserIdPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserIdPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserIdPacket& operator=(UserIdPacket&& o) noexcept = default;
  constexpr UserIdPacket& operator=(UserIdPacket const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_idData, put=__set_idData))  idData;

constexpr void __set_idData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_idData() const;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit UserIdPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1144c80 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }]
explicit UserIdPacket(::StringW id) ;

/// @brief Method .ctor addr 0x114b124 size 0x4c virtual false final false
 void _ctor(::StringW id) ;

/// @brief Method GetId addr 0x114b170 size 0x3c virtual false final false
 ::StringW GetId() ;

/// @brief Method Encode addr 0x114b1ac size 0x28 virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserIdPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserIdPacket, "Org.BouncyCastle.Bcpg", "UserIdPacket");

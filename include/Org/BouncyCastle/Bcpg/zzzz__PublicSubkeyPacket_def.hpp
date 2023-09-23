#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class PublicSubkeyPacket;
}
// Type: Org.BouncyCastle.Bcpg::PublicSubkeyPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(583))
// CS Name: Org.BouncyCastle.Bcpg.PublicSubkeyPacket
class CORDL_TYPE PublicSubkeyPacket : public Org::BouncyCastle::Bcpg::PublicKeyPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PublicSubkeyPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicSubkeyPacket", modifiers: " const&", def_value: None }]
constexpr PublicSubkeyPacket(PublicSubkeyPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicSubkeyPacket", modifiers: "&&", def_value: None }]
constexpr PublicSubkeyPacket(PublicSubkeyPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PublicSubkeyPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::PublicKeyPacket(ptr) {
}


  constexpr PublicSubkeyPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PublicSubkeyPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PublicSubkeyPacket& operator=(PublicSubkeyPacket&& o) noexcept = default;
  constexpr PublicSubkeyPacket& operator=(PublicSubkeyPacket const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit PublicSubkeyPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1144fe0 size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "time", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "key", ty: "Org::BouncyCastle::Bcpg::IBcpgKey", modifiers: "", def_value: None }]
explicit PublicSubkeyPacket(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, System::DateTime time, Org::BouncyCastle::Bcpg::IBcpgKey key) ;

/// @brief Method .ctor addr 0x11486b0 size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, System::DateTime time, Org::BouncyCastle::Bcpg::IBcpgKey key) ;

/// @brief Method Encode addr 0x11486b4 size 0x38 virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::PublicSubkeyPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::PublicSubkeyPacket, "Org.BouncyCastle.Bcpg", "PublicSubkeyPacket");

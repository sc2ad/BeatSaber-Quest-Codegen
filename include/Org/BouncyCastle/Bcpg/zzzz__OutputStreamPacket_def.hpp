#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class OutputStreamPacket;
}
// Type: Org.BouncyCastle.Bcpg::OutputStreamPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(578))
// CS Name: Org.BouncyCastle.Bcpg.OutputStreamPacket
class CORDL_TYPE OutputStreamPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OutputStreamPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "OutputStreamPacket", modifiers: " const&", def_value: None }]
constexpr OutputStreamPacket(OutputStreamPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OutputStreamPacket", modifiers: "&&", def_value: None }]
constexpr OutputStreamPacket(OutputStreamPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OutputStreamPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OutputStreamPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OutputStreamPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OutputStreamPacket& operator=(OutputStreamPacket&& o) noexcept = default;
  constexpr OutputStreamPacket& operator=(OutputStreamPacket const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::BcpgOutputStream __declspec(property(get=__get_bcpgOut, put=__set_bcpgOut))  bcpgOut;

constexpr void __set_bcpgOut(Org::BouncyCastle::Bcpg::BcpgOutputStream value) ;

constexpr Org::BouncyCastle::Bcpg::BcpgOutputStream __get_bcpgOut() const;


// Methods

static Org::BouncyCastle::Bcpg::OutputStreamPacket New_ctor(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

/// @brief Method .ctor addr 0x1147ff0 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

/// @brief Method Open addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Bcpg::BcpgOutputStream Open() ;

/// @brief Method Close addr 0x0 size 0xffffffffffffffff virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OutputStreamPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OutputStreamPacket, "Org.BouncyCastle.Bcpg", "OutputStreamPacket");

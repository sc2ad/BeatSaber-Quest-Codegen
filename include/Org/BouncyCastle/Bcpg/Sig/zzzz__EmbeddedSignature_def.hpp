#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class EmbeddedSignature;
}
// Type: Org.BouncyCastle.Bcpg.Sig::EmbeddedSignature
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(532))
// CS Name: Org.BouncyCastle.Bcpg.Sig.EmbeddedSignature
class CORDL_TYPE EmbeddedSignature : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EmbeddedSignature() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedSignature", modifiers: " const&", def_value: None }]
constexpr EmbeddedSignature(EmbeddedSignature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedSignature", modifiers: "&&", def_value: None }]
constexpr EmbeddedSignature(EmbeddedSignature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmbeddedSignature(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr EmbeddedSignature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmbeddedSignature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmbeddedSignature& operator=(EmbeddedSignature&& o) noexcept = default;
  constexpr EmbeddedSignature& operator=(EmbeddedSignature const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113d264 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature, "Org.BouncyCastle.Bcpg.Sig", "EmbeddedSignature");

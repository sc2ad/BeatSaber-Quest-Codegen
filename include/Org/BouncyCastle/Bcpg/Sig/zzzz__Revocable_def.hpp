#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class Revocable;
}
// Type: Org.BouncyCastle.Bcpg.Sig::Revocable
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(541))
// CS Name: Org.BouncyCastle.Bcpg.Sig.Revocable
class CORDL_TYPE Revocable : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Revocable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Revocable", modifiers: " const&", def_value: None }]
constexpr Revocable(Revocable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Revocable", modifiers: "&&", def_value: None }]
constexpr Revocable(Revocable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Revocable(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr Revocable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Revocable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Revocable& operator=(Revocable&& o) noexcept = default;
  constexpr Revocable& operator=(Revocable const& o) noexcept = default;
                


// Methods

/// @brief Method BooleanToByteArray addr 0x113e4fc size 0x6c virtual false final false
static ::ArrayW<uint8_t> BooleanToByteArray(bool value) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Revocable(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113e568 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isRevocable", ty: "bool", modifiers: "", def_value: None }]
explicit Revocable(bool critical, bool isRevocable) ;

/// @brief Method .ctor addr 0x113e5b0 size 0x4c virtual false final false
 void _ctor(bool critical, bool isRevocable) ;

/// @brief Method IsRevocable addr 0x113e5fc size 0x30 virtual false final false
 bool IsRevocable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Sig::Revocable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Sig::Revocable, "Org.BouncyCastle.Bcpg.Sig", "Revocable");

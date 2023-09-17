#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class SignerUserId;
}
// Type: Org.BouncyCastle.Bcpg.Sig::SignerUserId
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(548))
// CS Name: Org.BouncyCastle.Bcpg.Sig.SignerUserId
class CORDL_TYPE SignerUserId : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignerUserId() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerUserId", modifiers: " const&", def_value: None }]
constexpr SignerUserId(SignerUserId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerUserId", modifiers: "&&", def_value: None }]
constexpr SignerUserId(SignerUserId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerUserId(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr SignerUserId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerUserId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerUserId& operator=(SignerUserId&& o) noexcept = default;
  constexpr SignerUserId& operator=(SignerUserId const& o) noexcept = default;
                


// Methods

/// @brief Method UserIdToBytes addr 0x113ee24 size 0xa4 virtual false final false
static ::ArrayW<uint8_t> UserIdToBytes(::StringW id) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SignerUserId(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113eec8 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }]
explicit SignerUserId(bool critical, ::StringW userId) ;

/// @brief Method .ctor addr 0x113ef10 size 0x4c virtual false final false
 void _ctor(bool critical, ::StringW userId) ;

/// @brief Method GetId addr 0x113ef5c size 0xb4 virtual false final false
 ::StringW GetId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::SignerUserId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::SignerUserId, "Org.BouncyCastle.Bcpg.Sig", "SignerUserId");

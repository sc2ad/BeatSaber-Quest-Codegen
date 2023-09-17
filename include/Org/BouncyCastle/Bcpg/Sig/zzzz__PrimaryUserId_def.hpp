#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class PrimaryUserId;
}
// Type: Org.BouncyCastle.Bcpg.Sig::PrimaryUserId
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(540))
// CS Name: Org.BouncyCastle.Bcpg.Sig.PrimaryUserId
class CORDL_TYPE PrimaryUserId : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PrimaryUserId() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimaryUserId", modifiers: " const&", def_value: None }]
constexpr PrimaryUserId(PrimaryUserId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimaryUserId", modifiers: "&&", def_value: None }]
constexpr PrimaryUserId(PrimaryUserId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrimaryUserId(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr PrimaryUserId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrimaryUserId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrimaryUserId& operator=(PrimaryUserId&& o) noexcept = default;
  constexpr PrimaryUserId& operator=(PrimaryUserId const& o) noexcept = default;
                


// Methods

/// @brief Method BooleanToByteArray addr 0x113e3cc size 0x6c virtual false final false
static ::ArrayW<uint8_t> BooleanToByteArray(bool val) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PrimaryUserId(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113e438 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPrimaryUserId", ty: "bool", modifiers: "", def_value: None }]
explicit PrimaryUserId(bool critical, bool isPrimaryUserId) ;

/// @brief Method .ctor addr 0x113e480 size 0x4c virtual false final false
 void _ctor(bool critical, bool isPrimaryUserId) ;

/// @brief Method IsPrimaryUserId addr 0x113e4cc size 0x30 virtual false final false
 bool IsPrimaryUserId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::PrimaryUserId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::PrimaryUserId, "Org.BouncyCastle.Bcpg.Sig", "PrimaryUserId");

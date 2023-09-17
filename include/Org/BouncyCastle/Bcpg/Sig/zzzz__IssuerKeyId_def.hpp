#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class IssuerKeyId;
}
// Type: Org.BouncyCastle.Bcpg.Sig::IssuerKeyId
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(535))
// CS Name: Org.BouncyCastle.Bcpg.Sig.IssuerKeyId
class CORDL_TYPE IssuerKeyId : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IssuerKeyId() = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuerKeyId", modifiers: " const&", def_value: None }]
constexpr IssuerKeyId(IssuerKeyId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuerKeyId", modifiers: "&&", def_value: None }]
constexpr IssuerKeyId(IssuerKeyId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IssuerKeyId(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr IssuerKeyId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IssuerKeyId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IssuerKeyId& operator=(IssuerKeyId&& o) noexcept = default;
  constexpr IssuerKeyId& operator=(IssuerKeyId const& o) noexcept = default;
                


// Properties

 int64_t __declspec(property(get=get_KeyId))  KeyId;


// Methods

/// @brief Method KeyIdToBytes addr 0x113d7f0 size 0xd4 virtual false final false
static ::ArrayW<uint8_t> KeyIdToBytes(int64_t keyId) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit IssuerKeyId(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113d8c4 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "keyId", ty: "int64_t", modifiers: "", def_value: None }]
explicit IssuerKeyId(bool critical, int64_t keyId) ;

/// @brief Method .ctor addr 0x113d90c size 0x4c virtual false final false
 void _ctor(bool critical, int64_t keyId) ;

/// @brief Method get_KeyId addr 0x113d958 size 0x9c virtual false final false
 int64_t get_KeyId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId, "Org.BouncyCastle.Bcpg.Sig", "IssuerKeyId");

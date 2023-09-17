#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class NetscapeRevocationUrl;
}
// Type: Org.BouncyCastle.Asn1.Misc::NetscapeRevocationUrl
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(199))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(200))
// CS Name: Org.BouncyCastle.Asn1.Misc.NetscapeRevocationUrl
class CORDL_TYPE NetscapeRevocationUrl : public ::Org::BouncyCastle::Asn1::DerIA5String {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NetscapeRevocationUrl() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetscapeRevocationUrl", modifiers: " const&", def_value: None }]
constexpr NetscapeRevocationUrl(NetscapeRevocationUrl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetscapeRevocationUrl", modifiers: "&&", def_value: None }]
constexpr NetscapeRevocationUrl(NetscapeRevocationUrl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetscapeRevocationUrl(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerIA5String(ptr) {
}


  constexpr NetscapeRevocationUrl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetscapeRevocationUrl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetscapeRevocationUrl& operator=(NetscapeRevocationUrl&& o) noexcept = default;
  constexpr NetscapeRevocationUrl& operator=(NetscapeRevocationUrl const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "str", ty: "::Org::BouncyCastle::Asn1::DerIA5String", modifiers: "", def_value: None }]
explicit NetscapeRevocationUrl(::Org::BouncyCastle::Asn1::DerIA5String str) ;

/// @brief Method .ctor addr 0xeef284 size 0x38 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerIA5String str) ;

/// @brief Method ToString addr 0xeef2bc size 0x60 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Misc
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl, "Org.BouncyCastle.Asn1.Misc", "NetscapeRevocationUrl");

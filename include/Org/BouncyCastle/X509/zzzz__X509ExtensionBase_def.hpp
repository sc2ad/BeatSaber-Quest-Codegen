#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509ExtensionBase;
}
// Type: Org.BouncyCastle.X509::X509ExtensionBase
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1606))
// CS Name: Org.BouncyCastle.X509.X509ExtensionBase
class CORDL_TYPE X509ExtensionBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::X509::IX509Extension
constexpr operator  ::Org::BouncyCastle::X509::IX509Extension() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509ExtensionBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionBase", modifiers: " const&", def_value: None }]
constexpr X509ExtensionBase(X509ExtensionBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionBase", modifiers: "&&", def_value: None }]
constexpr X509ExtensionBase(X509ExtensionBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ExtensionBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ExtensionBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ExtensionBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ExtensionBase& operator=(X509ExtensionBase&& o) noexcept = default;
  constexpr X509ExtensionBase& operator=(X509ExtensionBase const& o) noexcept = default;
                


// Methods

/// @brief Method GetX509Extensions addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

/// @brief Method GetExtensionOids addr 0x100f64c size 0x3f0 virtual true final false
 ::Org::BouncyCastle::Utilities::Collections::ISet GetExtensionOids(bool critical) ;

/// @brief Method GetNonCriticalExtensionOids addr 0x100fa3c size 0x10 virtual true final false
 ::Org::BouncyCastle::Utilities::Collections::ISet GetNonCriticalExtensionOids() ;

/// @brief Method GetCriticalExtensionOids addr 0x100fa4c size 0x10 virtual true final false
 ::Org::BouncyCastle::Utilities::Collections::ISet GetCriticalExtensionOids() ;

/// @brief Method GetExtensionValue addr 0x100fa5c size 0x7c virtual true final true
 ::Org::BouncyCastle::Asn1::Asn1OctetString GetExtensionValue(::StringW oid) ;

/// @brief Method GetExtensionValue addr 0x100fad8 size 0x38 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString GetExtensionValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

// Ctor Parameters []
explicit X509ExtensionBase() ;

/// @brief Method .ctor addr 0x100fb10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::X509ExtensionBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509ExtensionBase, "Org.BouncyCastle.X509", "X509ExtensionBase");

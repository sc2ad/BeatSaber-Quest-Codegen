#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
// Type: Org.BouncyCastle.X509::IX509Extension
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1605))
// CS Name: Org.BouncyCastle.X509.IX509Extension
class CORDL_TYPE IX509Extension : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IX509Extension() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IX509Extension(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetCriticalExtensionOids addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet GetCriticalExtensionOids() ;

/// @brief Method GetNonCriticalExtensionOids addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet GetNonCriticalExtensionOids() ;

/// @brief Method GetExtensionValue addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString GetExtensionValue(::StringW oid) ;

/// @brief Method GetExtensionValue addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString GetExtensionValue(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::IX509Extension);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::IX509Extension, "Org.BouncyCastle.X509", "IX509Extension");

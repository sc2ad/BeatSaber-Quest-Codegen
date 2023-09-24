#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Extension {
class X509ExtensionUtilities;
}
// Type: Org.BouncyCastle.X509.Extension::X509ExtensionUtilities
namespace Org::BouncyCastle::X509::Extension {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1841))
// CS Name: Org.BouncyCastle.X509.Extension.X509ExtensionUtilities
class CORDL_TYPE X509ExtensionUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509ExtensionUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionUtilities", modifiers: " const&", def_value: None }]
constexpr X509ExtensionUtilities(X509ExtensionUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionUtilities", modifiers: "&&", def_value: None }]
constexpr X509ExtensionUtilities(X509ExtensionUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ExtensionUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ExtensionUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ExtensionUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ExtensionUtilities& operator=(X509ExtensionUtilities&& o) noexcept = default;
  constexpr X509ExtensionUtilities& operator=(X509ExtensionUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method FromExtensionValue addr 0x10e3bc8 size 0x24 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Object FromExtensionValue(Org::BouncyCastle::Asn1::Asn1OctetString extensionValue) ;

/// @brief Method GetIssuerAlternativeNames addr 0x10e444c size 0x74 virtual false final false
static System::Collections::ICollection GetIssuerAlternativeNames(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method GetSubjectAlternativeNames addr 0x10e4eb0 size 0x74 virtual false final false
static System::Collections::ICollection GetSubjectAlternativeNames(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method GetAlternativeName addr 0x10e44c0 size 0x9f0 virtual false final false
static System::Collections::ICollection GetAlternativeName(Org::BouncyCastle::Asn1::Asn1OctetString extVal) ;

static Org::BouncyCastle::X509::Extension::X509ExtensionUtilities New_ctor() ;

/// @brief Method .ctor addr 0x10e4f24 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Extension
NEED_NO_BOX(Org::BouncyCastle::X509::Extension::X509ExtensionUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::Extension::X509ExtensionUtilities, "Org.BouncyCastle.X509.Extension", "X509ExtensionUtilities");

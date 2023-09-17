#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs12Entry_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class Hashtable;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class X509CertificateEntry;
}
// Type: Org.BouncyCastle.Pkcs::X509CertificateEntry
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1693))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1708))
// CS Name: Org.BouncyCastle.Pkcs.X509CertificateEntry
class CORDL_TYPE X509CertificateEntry : public ::Org::BouncyCastle::Pkcs::Pkcs12Entry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X509CertificateEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateEntry", modifiers: " const&", def_value: None }]
constexpr X509CertificateEntry(X509CertificateEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateEntry", modifiers: "&&", def_value: None }]
constexpr X509CertificateEntry(X509CertificateEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertificateEntry(void* ptr) noexcept : ::Org::BouncyCastle::Pkcs::Pkcs12Entry(ptr) {
}


  constexpr X509CertificateEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertificateEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertificateEntry& operator=(X509CertificateEntry&& o) noexcept = default;
  constexpr X509CertificateEntry& operator=(X509CertificateEntry const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::X509::X509Certificate __declspec(property(get=__get_cert, put=__set_cert))  cert;

constexpr void __set_cert(::Org::BouncyCastle::X509::X509Certificate value) ;

constexpr ::Org::BouncyCastle::X509::X509Certificate __get_cert() const;


// Properties

 ::Org::BouncyCastle::X509::X509Certificate __declspec(property(get=get_Certificate))  Certificate;


// Methods

// Ctor Parameters [CppParam { name: "cert", ty: "::Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }]
explicit X509CertificateEntry(::Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method .ctor addr 0x105c3e0 size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::X509::X509Certificate cert) ;

// Ctor Parameters [CppParam { name: "cert", ty: "::Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "::System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit X509CertificateEntry(::Org::BouncyCastle::X509::X509Certificate cert, ::System::Collections::Hashtable attributes) ;

/// @brief Method .ctor addr 0x105c458 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::X509::X509Certificate cert, ::System::Collections::Hashtable attributes) ;

// Ctor Parameters [CppParam { name: "cert", ty: "::Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "::System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit X509CertificateEntry(::Org::BouncyCastle::X509::X509Certificate cert, ::System::Collections::IDictionary attributes) ;

/// @brief Method .ctor addr 0x105c484 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::X509::X509Certificate cert, ::System::Collections::IDictionary attributes) ;

/// @brief Method get_Certificate addr 0x105c4b0 size 0x8 virtual false final false
 ::Org::BouncyCastle::X509::X509Certificate get_Certificate() ;

/// @brief Method Equals addr 0x105c4b8 size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x105c55c size 0x28 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::X509CertificateEntry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::X509CertificateEntry, "Org.BouncyCastle.Pkcs", "X509CertificateEntry");

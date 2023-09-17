#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
struct X509ChainStatusFlags;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Chain;
}
// Type: Mono.Security.X509::X509Chain
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13965))
// CS Name: Mono.Security.X509.X509Chain
class CORDL_TYPE X509Chain : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X509Chain() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: " const&", def_value: None }]
constexpr X509Chain(X509Chain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "&&", def_value: None }]
constexpr X509Chain(X509Chain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Chain(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Chain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Chain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Chain& operator=(X509Chain&& o) noexcept = default;
  constexpr X509Chain& operator=(X509Chain const& o) noexcept = default;
                


// Fields

 ::Mono::Security::X509::X509CertificateCollection __declspec(property(get=__get_roots, put=__set_roots))  roots;

constexpr void __set_roots(::Mono::Security::X509::X509CertificateCollection value) ;

constexpr ::Mono::Security::X509::X509CertificateCollection __get_roots() const;

 ::Mono::Security::X509::X509CertificateCollection __declspec(property(get=__get_certs, put=__set_certs))  certs;

constexpr void __set_certs(::Mono::Security::X509::X509CertificateCollection value) ;

constexpr ::Mono::Security::X509::X509CertificateCollection __get_certs() const;

 ::Mono::Security::X509::X509Certificate __declspec(property(get=__get__root, put=__set__root))  _root;

constexpr void __set__root(::Mono::Security::X509::X509Certificate value) ;

constexpr ::Mono::Security::X509::X509Certificate __get__root() const;

 ::Mono::Security::X509::X509CertificateCollection __declspec(property(get=__get__chain, put=__set__chain))  _chain;

constexpr void __set__chain(::Mono::Security::X509::X509CertificateCollection value) ;

constexpr ::Mono::Security::X509::X509CertificateCollection __get__chain() const;

 ::Mono::Security::X509::X509ChainStatusFlags __declspec(property(get=__get__status, put=__set__status))  _status;

constexpr void __set__status(::Mono::Security::X509::X509ChainStatusFlags value) ;

constexpr ::Mono::Security::X509::X509ChainStatusFlags __get__status() const;


// Properties

 ::Mono::Security::X509::X509CertificateCollection __declspec(property(get=get_TrustAnchors))  TrustAnchors;


// Methods

// Ctor Parameters []
explicit X509Chain() ;

/// @brief Method .ctor addr 0x228e864 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method get_TrustAnchors addr 0x228e8d0 size 0x7c virtual false final false
 ::Mono::Security::X509::X509CertificateCollection get_TrustAnchors() ;

/// @brief Method LoadCertificates addr 0x228ea18 size 0x18 virtual false final false
 void LoadCertificates(::Mono::Security::X509::X509CertificateCollection collection) ;

/// @brief Method Build addr 0x228ea30 size 0x3a8 virtual false final false
 bool Build(::Mono::Security::X509::X509Certificate leaf) ;

/// @brief Method Reset addr 0x228f3f8 size 0x40 virtual false final false
 void Reset() ;

/// @brief Method IsValid addr 0x228f34c size 0xac virtual false final false
 bool IsValid(::Mono::Security::X509::X509Certificate cert) ;

/// @brief Method FindCertificateParent addr 0x228edd8 size 0x1f0 virtual false final false
 ::Mono::Security::X509::X509Certificate FindCertificateParent(::Mono::Security::X509::X509Certificate child) ;

/// @brief Method FindCertificateRoot addr 0x228efc8 size 0x240 virtual false final false
 ::Mono::Security::X509::X509Certificate FindCertificateRoot(::Mono::Security::X509::X509Certificate potentialRoot) ;

/// @brief Method IsTrusted addr 0x228f438 size 0x2c virtual false final false
 bool IsTrusted(::Mono::Security::X509::X509Certificate potentialTrusted) ;

/// @brief Method IsParent addr 0x228f208 size 0x144 virtual false final false
 bool IsParent(::Mono::Security::X509::X509Certificate child, ::Mono::Security::X509::X509Certificate parent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::X509::X509Chain);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Chain, "Mono.Security.X509", "X509Chain");

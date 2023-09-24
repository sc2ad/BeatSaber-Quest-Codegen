#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace Mono::Security::Interface {
class MonoRemoteCertificateValidationCallback;
}
namespace Mono::Net::Security::Private {
class Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0;
}
namespace Mono::Net::Security::Private {
class Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0;
}
namespace System::Net::Security {
class LocalCertSelectionCallback;
}
namespace Mono::Security::Interface {
class MonoLocalCertificateSelectionCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
// Forward declare root types
namespace Mono::Net::Security::Private {
class CallbackHelpers;
}
namespace Mono::Net::Security::Private {
class Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0;
}
namespace Mono::Net::Security::Private {
class Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0;
}
// Type: ::<>c__DisplayClass0_0
namespace Mono::Net::Security::Private {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7698))
// CS Name: Mono.Net.Security.Private.CallbackHelpers::<>c__DisplayClass0_0
class CORDL_TYPE Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0(Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0(Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0& operator=(Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0&& o) noexcept = default;
  constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0& operator=(Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 System::Net::Security::RemoteCertificateValidationCallback __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Net::Security::RemoteCertificateValidationCallback value) ;

constexpr System::Net::Security::RemoteCertificateValidationCallback __get_callback() const;


// Methods

static Mono::Net::Security::Private::Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0 New_ctor() ;

/// @brief Method .ctor addr 0x2694524 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PublicToMono>b__0 addr 0x2694534 size 0x24 virtual false final false
 bool _PublicToMono_b__0(::StringW h, System::Security::Cryptography::X509Certificates::X509Certificate c, System::Security::Cryptography::X509Certificates::X509Chain ch, Mono::Security::Interface::MonoSslPolicyErrors e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security::Private
// Type: ::<>c__DisplayClass6_0
namespace Mono::Net::Security::Private {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7699))
// CS Name: Mono.Net.Security.Private.CallbackHelpers::<>c__DisplayClass6_0
class CORDL_TYPE Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0(Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0(Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0& operator=(Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0&& o) noexcept = default;
  constexpr Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0& operator=(Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 Mono::Security::Interface::MonoLocalCertificateSelectionCallback __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(Mono::Security::Interface::MonoLocalCertificateSelectionCallback value) ;

constexpr Mono::Security::Interface::MonoLocalCertificateSelectionCallback __get_callback() const;


// Methods

static Mono::Net::Security::Private::Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0 New_ctor() ;

/// @brief Method .ctor addr 0x269452c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <MonoToInternal>b__0 addr 0x2694558 size 0x24 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate _MonoToInternal_b__0(::StringW t, System::Security::Cryptography::X509Certificates::X509CertificateCollection lc, System::Security::Cryptography::X509Certificates::X509Certificate rc, ::ArrayW<::StringW> ai) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security::Private
// Type: Mono.Net.Security.Private::CallbackHelpers
namespace Mono::Net::Security::Private {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7700))
// CS Name: Mono.Net.Security.Private.CallbackHelpers
class CORDL_TYPE CallbackHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass6_0 = Mono::Net::Security::Private::Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0;

using __c__DisplayClass0_0 = Mono::Net::Security::Private::Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CallbackHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHelpers", modifiers: " const&", def_value: None }]
constexpr CallbackHelpers(CallbackHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHelpers", modifiers: "&&", def_value: None }]
constexpr CallbackHelpers(CallbackHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CallbackHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CallbackHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CallbackHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CallbackHelpers& operator=(CallbackHelpers&& o) noexcept = default;
  constexpr CallbackHelpers& operator=(CallbackHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method PublicToMono addr 0x2694474 size 0xb0 virtual false final false
static Mono::Security::Interface::MonoRemoteCertificateValidationCallback PublicToMono(System::Net::Security::RemoteCertificateValidationCallback callback) ;

/// @brief Method MonoToInternal addr 0x268ebb8 size 0xb0 virtual false final false
static System::Net::Security::LocalCertSelectionCallback MonoToInternal(Mono::Security::Interface::MonoLocalCertificateSelectionCallback callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security::Private
NEED_NO_BOX(Mono::Net::Security::Private::CallbackHelpers);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Private::CallbackHelpers, "Mono.Net.Security.Private", "CallbackHelpers");
NEED_NO_BOX(Mono::Net::Security::Private::Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Private::Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass0_0, "Mono.Net.Security.Private", "CallbackHelpers/<>c__DisplayClass0_0");
NEED_NO_BOX(Mono::Net::Security::Private::Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Private::Mono__Net__Security__Private__CallbackHelpers____c__DisplayClass6_0, "Mono.Net.Security.Private", "CallbackHelpers/<>c__DisplayClass6_0");

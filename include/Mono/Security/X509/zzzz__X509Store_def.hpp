#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace System::Collections {
class ArrayList;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Crl;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Store;
}
// Type: Mono.Security.X509::X509Store
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13969))
// CS Name: Mono.Security.X509.X509Store
class CORDL_TYPE X509Store : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~X509Store() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: " const&", def_value: None }]
constexpr X509Store(X509Store const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "&&", def_value: None }]
constexpr X509Store(X509Store&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Store(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Store& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Store& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Store& operator=(X509Store&& o) noexcept = default;
  constexpr X509Store& operator=(X509Store const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__storePath, put=__set__storePath))  _storePath;

constexpr void __set__storePath(::StringW value) ;

constexpr ::StringW __get__storePath() const;

 ::Mono::Security::X509::X509CertificateCollection __declspec(property(get=__get__certificates, put=__set__certificates))  _certificates;

constexpr void __set__certificates(::Mono::Security::X509::X509CertificateCollection value) ;

constexpr ::Mono::Security::X509::X509CertificateCollection __get__certificates() const;

 ::System::Collections::ArrayList __declspec(property(get=__get__crls, put=__set__crls))  _crls;

constexpr void __set__crls(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get__crls() const;

 bool __declspec(property(get=__get__crl, put=__set__crl))  _crl;

constexpr void __set__crl(bool value) ;

constexpr bool __get__crl() const;

 bool __declspec(property(get=__get__newFormat, put=__set__newFormat))  _newFormat;

constexpr void __set__newFormat(bool value) ;

constexpr bool __get__newFormat() const;


// Properties

 ::Mono::Security::X509::X509CertificateCollection __declspec(property(get=get_Certificates))  Certificates;

 ::System::Collections::ArrayList __declspec(property(get=get_Crls))  Crls;


// Methods

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "crl", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "newFormat", ty: "bool", modifiers: "", def_value: None }]
explicit X509Store(::StringW path, bool crl, bool newFormat) ;

/// @brief Method .ctor addr 0x228ff40 size 0x40 virtual false final false
 void _ctor(::StringW path, bool crl, bool newFormat) ;

/// @brief Method get_Certificates addr 0x228ff80 size 0x28 virtual false final false
 ::Mono::Security::X509::X509CertificateCollection get_Certificates() ;

/// @brief Method get_Crls addr 0x229017c size 0x90 virtual false final false
 ::System::Collections::ArrayList get_Crls() ;

/// @brief Method Load addr 0x22903cc size 0x20c virtual false final false
 ::ArrayW<uint8_t> Load(::StringW filename) ;

/// @brief Method LoadCertificate addr 0x22905d8 size 0x70 virtual false final false
 ::Mono::Security::X509::X509Certificate LoadCertificate(::StringW filename) ;

/// @brief Method LoadCrl addr 0x2290648 size 0x70 virtual false final false
 ::Mono::Security::X509::X509Crl LoadCrl(::StringW filename) ;

/// @brief Method CheckStore addr 0x22906b8 size 0xdc virtual false final false
 bool CheckStore(::StringW path, bool throwException) ;

/// @brief Method BuildCertificatesCollection addr 0x228ffa8 size 0x1d4 virtual false final false
 ::Mono::Security::X509::X509CertificateCollection BuildCertificatesCollection(::StringW storeName) ;

/// @brief Method BuildCrlsCollection addr 0x229020c size 0x1c0 virtual false final false
 ::System::Collections::ArrayList BuildCrlsCollection(::StringW storeName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::X509::X509Store);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Store, "Mono.Security.X509", "X509Store");

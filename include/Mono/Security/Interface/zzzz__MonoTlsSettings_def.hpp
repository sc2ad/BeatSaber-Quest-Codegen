#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Mono::Security::Interface {
class ICertificateValidator;
}
namespace System {
struct DateTime;
}
namespace Mono::Security::Interface {
struct TlsProtocols;
}
namespace Mono::Security::Interface {
class MonoRemoteCertificateValidationCallback;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace Mono::Security::Interface {
class MonoLocalCertificateSelectionCallback;
}
namespace Mono::Security::Interface {
struct CipherSuiteCode;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
// Type: Mono.Security.Interface::MonoTlsSettings
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13995))
// CS Name: Mono.Security.Interface.MonoTlsSettings
class CORDL_TYPE MonoTlsSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MonoTlsSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsSettings", modifiers: " const&", def_value: None }]
constexpr MonoTlsSettings(MonoTlsSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsSettings", modifiers: "&&", def_value: None }]
constexpr MonoTlsSettings(MonoTlsSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoTlsSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoTlsSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoTlsSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoTlsSettings& operator=(MonoTlsSettings&& o) noexcept = default;
  constexpr MonoTlsSettings& operator=(MonoTlsSettings const& o) noexcept = default;
                


// Fields

 Mono::Security::Interface::MonoRemoteCertificateValidationCallback __declspec(property(get=__get__RemoteCertificateValidationCallback_k__BackingField, put=__set__RemoteCertificateValidationCallback_k__BackingField))  _RemoteCertificateValidationCallback_k__BackingField;

constexpr void __set__RemoteCertificateValidationCallback_k__BackingField(Mono::Security::Interface::MonoRemoteCertificateValidationCallback value) ;

constexpr Mono::Security::Interface::MonoRemoteCertificateValidationCallback __get__RemoteCertificateValidationCallback_k__BackingField() const;

 Mono::Security::Interface::MonoLocalCertificateSelectionCallback __declspec(property(get=__get__ClientCertificateSelectionCallback_k__BackingField, put=__set__ClientCertificateSelectionCallback_k__BackingField))  _ClientCertificateSelectionCallback_k__BackingField;

constexpr void __set__ClientCertificateSelectionCallback_k__BackingField(Mono::Security::Interface::MonoLocalCertificateSelectionCallback value) ;

constexpr Mono::Security::Interface::MonoLocalCertificateSelectionCallback __get__ClientCertificateSelectionCallback_k__BackingField() const;

 System::Nullable_1<System::DateTime> __declspec(property(get=__get__CertificateValidationTime_k__BackingField, put=__set__CertificateValidationTime_k__BackingField))  _CertificateValidationTime_k__BackingField;

constexpr void __set__CertificateValidationTime_k__BackingField(System::Nullable_1<System::DateTime> value) ;

constexpr System::Nullable_1<System::DateTime> __get__CertificateValidationTime_k__BackingField() const;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=__get__TrustAnchors_k__BackingField, put=__set__TrustAnchors_k__BackingField))  _TrustAnchors_k__BackingField;

constexpr void __set__TrustAnchors_k__BackingField(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509CertificateCollection __get__TrustAnchors_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__UserSettings_k__BackingField, put=__set__UserSettings_k__BackingField))  _UserSettings_k__BackingField;

constexpr void __set__UserSettings_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__UserSettings_k__BackingField() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__CertificateSearchPaths_k__BackingField, put=__set__CertificateSearchPaths_k__BackingField))  _CertificateSearchPaths_k__BackingField;

constexpr void __set__CertificateSearchPaths_k__BackingField(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__CertificateSearchPaths_k__BackingField() const;

 bool __declspec(property(get=__get__SendCloseNotify_k__BackingField, put=__set__SendCloseNotify_k__BackingField))  _SendCloseNotify_k__BackingField;

constexpr void __set__SendCloseNotify_k__BackingField(bool value) ;

constexpr bool __get__SendCloseNotify_k__BackingField() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__ClientCertificateIssuers_k__BackingField, put=__set__ClientCertificateIssuers_k__BackingField))  _ClientCertificateIssuers_k__BackingField;

constexpr void __set__ClientCertificateIssuers_k__BackingField(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__ClientCertificateIssuers_k__BackingField() const;

 bool __declspec(property(get=__get__DisallowUnauthenticatedCertificateRequest_k__BackingField, put=__set__DisallowUnauthenticatedCertificateRequest_k__BackingField))  _DisallowUnauthenticatedCertificateRequest_k__BackingField;

constexpr void __set__DisallowUnauthenticatedCertificateRequest_k__BackingField(bool value) ;

constexpr bool __get__DisallowUnauthenticatedCertificateRequest_k__BackingField() const;

 System::Nullable_1<Mono::Security::Interface::TlsProtocols> __declspec(property(get=__get__EnabledProtocols_k__BackingField, put=__set__EnabledProtocols_k__BackingField))  _EnabledProtocols_k__BackingField;

constexpr void __set__EnabledProtocols_k__BackingField(System::Nullable_1<Mono::Security::Interface::TlsProtocols> value) ;

constexpr System::Nullable_1<Mono::Security::Interface::TlsProtocols> __get__EnabledProtocols_k__BackingField() const;

 ::ArrayW<Mono::Security::Interface::CipherSuiteCode> __declspec(property(get=__get__EnabledCiphers_k__BackingField, put=__set__EnabledCiphers_k__BackingField))  _EnabledCiphers_k__BackingField;

constexpr void __set__EnabledCiphers_k__BackingField(::ArrayW<Mono::Security::Interface::CipherSuiteCode> value) ;

constexpr ::ArrayW<Mono::Security::Interface::CipherSuiteCode> __get__EnabledCiphers_k__BackingField() const;

 bool __declspec(property(get=__get_cloned, put=__set_cloned))  cloned;

constexpr void __set_cloned(bool value) ;

constexpr bool __get_cloned() const;

 bool __declspec(property(get=__get_checkCertName, put=__set_checkCertName))  checkCertName;

constexpr void __set_checkCertName(bool value) ;

constexpr bool __get_checkCertName() const;

 bool __declspec(property(get=__get_checkCertRevocationStatus, put=__set_checkCertRevocationStatus))  checkCertRevocationStatus;

constexpr void __set_checkCertRevocationStatus(bool value) ;

constexpr bool __get_checkCertRevocationStatus() const;

 System::Nullable_1<bool> __declspec(property(get=__get_useServicePointManagerCallback, put=__set_useServicePointManagerCallback))  useServicePointManagerCallback;

constexpr void __set_useServicePointManagerCallback(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get_useServicePointManagerCallback() const;

 bool __declspec(property(get=__get_skipSystemValidators, put=__set_skipSystemValidators))  skipSystemValidators;

constexpr void __set_skipSystemValidators(bool value) ;

constexpr bool __get_skipSystemValidators() const;

 bool __declspec(property(get=__get_callbackNeedsChain, put=__set_callbackNeedsChain))  callbackNeedsChain;

constexpr void __set_callbackNeedsChain(bool value) ;

constexpr bool __get_callbackNeedsChain() const;

 Mono::Security::Interface::ICertificateValidator __declspec(property(get=__get_certificateValidator, put=__set_certificateValidator))  certificateValidator;

constexpr void __set_certificateValidator(Mono::Security::Interface::ICertificateValidator value) ;

constexpr Mono::Security::Interface::ICertificateValidator __get_certificateValidator() const;

static Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get_defaultSettings, put=__set_defaultSettings))  defaultSettings;

static void __set_defaultSettings(Mono::Security::Interface::MonoTlsSettings value) ;

static Mono::Security::Interface::MonoTlsSettings __get_defaultSettings() ;


// Properties

 Mono::Security::Interface::MonoRemoteCertificateValidationCallback __declspec(property(get=get_RemoteCertificateValidationCallback, put=set_RemoteCertificateValidationCallback))  RemoteCertificateValidationCallback;

 Mono::Security::Interface::MonoLocalCertificateSelectionCallback __declspec(property(get=get_ClientCertificateSelectionCallback, put=set_ClientCertificateSelectionCallback))  ClientCertificateSelectionCallback;

 System::Nullable_1<bool> __declspec(property(get=get_UseServicePointManagerCallback, put=set_UseServicePointManagerCallback))  UseServicePointManagerCallback;

 bool __declspec(property(get=get_CallbackNeedsCertificateChain))  CallbackNeedsCertificateChain;

 System::Nullable_1<System::DateTime> __declspec(property(get=get_CertificateValidationTime, put=set_CertificateValidationTime))  CertificateValidationTime;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=get_TrustAnchors, put=set_TrustAnchors))  TrustAnchors;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_UserSettings, put=set_UserSettings))  UserSettings;

 ::ArrayW<::StringW> __declspec(property(get=get_CertificateSearchPaths, put=set_CertificateSearchPaths))  CertificateSearchPaths;

 bool __declspec(property(get=get_SendCloseNotify, put=set_SendCloseNotify))  SendCloseNotify;

 ::ArrayW<::StringW> __declspec(property(get=get_ClientCertificateIssuers, put=set_ClientCertificateIssuers))  ClientCertificateIssuers;

 bool __declspec(property(get=get_DisallowUnauthenticatedCertificateRequest, put=set_DisallowUnauthenticatedCertificateRequest))  DisallowUnauthenticatedCertificateRequest;

 System::Nullable_1<Mono::Security::Interface::TlsProtocols> __declspec(property(get=get_EnabledProtocols, put=set_EnabledProtocols))  EnabledProtocols;

 ::ArrayW<Mono::Security::Interface::CipherSuiteCode> __declspec(property(get=get_EnabledCiphers, put=set_EnabledCiphers))  EnabledCiphers;

static Mono::Security::Interface::MonoTlsSettings __declspec(property(get=get_DefaultSettings))  DefaultSettings;

 Mono::Security::Interface::ICertificateValidator __declspec(property(get=get_CertificateValidator))  CertificateValidator;


// Methods

/// @brief Method get_RemoteCertificateValidationCallback addr 0x22957d4 size 0x8 virtual false final false
 Mono::Security::Interface::MonoRemoteCertificateValidationCallback get_RemoteCertificateValidationCallback() ;

/// @brief Method set_RemoteCertificateValidationCallback addr 0x22957dc size 0x8 virtual false final false
 void set_RemoteCertificateValidationCallback(Mono::Security::Interface::MonoRemoteCertificateValidationCallback value) ;

/// @brief Method get_ClientCertificateSelectionCallback addr 0x22957e4 size 0x8 virtual false final false
 Mono::Security::Interface::MonoLocalCertificateSelectionCallback get_ClientCertificateSelectionCallback() ;

/// @brief Method set_ClientCertificateSelectionCallback addr 0x22957ec size 0x8 virtual false final false
 void set_ClientCertificateSelectionCallback(Mono::Security::Interface::MonoLocalCertificateSelectionCallback value) ;

/// @brief Method get_UseServicePointManagerCallback addr 0x22957f4 size 0x8 virtual false final false
 System::Nullable_1<bool> get_UseServicePointManagerCallback() ;

/// @brief Method set_UseServicePointManagerCallback addr 0x22957fc size 0x8 virtual false final false
 void set_UseServicePointManagerCallback(System::Nullable_1<bool> value) ;

/// @brief Method get_CallbackNeedsCertificateChain addr 0x2295804 size 0x8 virtual false final false
 bool get_CallbackNeedsCertificateChain() ;

/// @brief Method get_CertificateValidationTime addr 0x229580c size 0xc virtual false final false
 System::Nullable_1<System::DateTime> get_CertificateValidationTime() ;

/// @brief Method set_CertificateValidationTime addr 0x2295818 size 0x8 virtual false final false
 void set_CertificateValidationTime(System::Nullable_1<System::DateTime> value) ;

/// @brief Method get_TrustAnchors addr 0x2295820 size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509CertificateCollection get_TrustAnchors() ;

/// @brief Method set_TrustAnchors addr 0x2295828 size 0x8 virtual false final false
 void set_TrustAnchors(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

/// @brief Method get_UserSettings addr 0x2295830 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_UserSettings() ;

/// @brief Method set_UserSettings addr 0x2295838 size 0x8 virtual false final false
 void set_UserSettings(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_CertificateSearchPaths addr 0x2295840 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_CertificateSearchPaths() ;

/// @brief Method set_CertificateSearchPaths addr 0x2295848 size 0x8 virtual false final false
 void set_CertificateSearchPaths(::ArrayW<::StringW> value) ;

/// @brief Method get_SendCloseNotify addr 0x2295850 size 0x8 virtual false final false
 bool get_SendCloseNotify() ;

/// @brief Method set_SendCloseNotify addr 0x2295858 size 0xc virtual false final false
 void set_SendCloseNotify(bool value) ;

/// @brief Method get_ClientCertificateIssuers addr 0x2295864 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_ClientCertificateIssuers() ;

/// @brief Method set_ClientCertificateIssuers addr 0x229586c size 0x8 virtual false final false
 void set_ClientCertificateIssuers(::ArrayW<::StringW> value) ;

/// @brief Method get_DisallowUnauthenticatedCertificateRequest addr 0x2295874 size 0x8 virtual false final false
 bool get_DisallowUnauthenticatedCertificateRequest() ;

/// @brief Method set_DisallowUnauthenticatedCertificateRequest addr 0x229587c size 0xc virtual false final false
 void set_DisallowUnauthenticatedCertificateRequest(bool value) ;

/// @brief Method get_EnabledProtocols addr 0x2295888 size 0x8 virtual false final false
 System::Nullable_1<Mono::Security::Interface::TlsProtocols> get_EnabledProtocols() ;

/// @brief Method set_EnabledProtocols addr 0x2295890 size 0x8 virtual false final false
 void set_EnabledProtocols(System::Nullable_1<Mono::Security::Interface::TlsProtocols> value) ;

/// @brief Method get_EnabledCiphers addr 0x2295898 size 0x8 virtual false final false
 ::ArrayW<Mono::Security::Interface::CipherSuiteCode> get_EnabledCiphers() ;

/// @brief Method set_EnabledCiphers addr 0x22958a0 size 0x8 virtual false final false
 void set_EnabledCiphers(::ArrayW<Mono::Security::Interface::CipherSuiteCode> value) ;

static Mono::Security::Interface::MonoTlsSettings New_ctor() ;

/// @brief Method .ctor addr 0x22958a8 size 0x14 virtual false final false
 void _ctor() ;

/// @brief Method get_DefaultSettings addr 0x22958bc size 0x94 virtual false final false
static Mono::Security::Interface::MonoTlsSettings get_DefaultSettings() ;

/// @brief Method CopyDefaultSettings addr 0x2295950 size 0x18 virtual false final false
static Mono::Security::Interface::MonoTlsSettings CopyDefaultSettings() ;

/// @brief Method get_CertificateValidator addr 0x22959c8 size 0x8 virtual false final false
 Mono::Security::Interface::ICertificateValidator get_CertificateValidator() ;

/// @brief Method CloneWithValidator addr 0x22959d0 size 0x80 virtual false final false
 Mono::Security::Interface::MonoTlsSettings CloneWithValidator(Mono::Security::Interface::ICertificateValidator validator) ;

/// @brief Method Clone addr 0x2295968 size 0x60 virtual false final false
 Mono::Security::Interface::MonoTlsSettings Clone() ;

static Mono::Security::Interface::MonoTlsSettings New_ctor(Mono::Security::Interface::MonoTlsSettings other) ;

/// @brief Method .ctor addr 0x2295a50 size 0x148 virtual false final false
 void _ctor(Mono::Security::Interface::MonoTlsSettings other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
NEED_NO_BOX(Mono::Security::Interface::MonoTlsSettings);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoTlsSettings, "Mono.Security.Interface", "MonoTlsSettings");

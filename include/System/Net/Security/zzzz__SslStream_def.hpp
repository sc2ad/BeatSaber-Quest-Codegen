#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Security/zzzz__AuthenticatedStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net::Security {
class SslStream;
}
namespace System::Net::Security {
class System__Net__Security__SslStream____c__DisplayClass21_0;
}
// Type: ::<>c__DisplayClass21_0
namespace System::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8223))
// CS Name: System.Net.Security.SslStream::<>c__DisplayClass21_0
class CORDL_TYPE System__Net__Security__SslStream____c__DisplayClass21_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Net__Security__SslStream____c__DisplayClass21_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Security__SslStream____c__DisplayClass21_0", modifiers: " const&", def_value: None }]
constexpr System__Net__Security__SslStream____c__DisplayClass21_0(System__Net__Security__SslStream____c__DisplayClass21_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Security__SslStream____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
constexpr System__Net__Security__SslStream____c__DisplayClass21_0(System__Net__Security__SslStream____c__DisplayClass21_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Security__SslStream____c__DisplayClass21_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Security__SslStream____c__DisplayClass21_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Security__SslStream____c__DisplayClass21_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Security__SslStream____c__DisplayClass21_0& operator=(System__Net__Security__SslStream____c__DisplayClass21_0&& o) noexcept = default;
  constexpr System__Net__Security__SslStream____c__DisplayClass21_0& operator=(System__Net__Security__SslStream____c__DisplayClass21_0 const& o) noexcept = default;
                


// Fields

 System::Net::Security::LocalCertificateSelectionCallback __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Net::Security::LocalCertificateSelectionCallback value) ;

constexpr System::Net::Security::LocalCertificateSelectionCallback __get_callback() const;

 System::Net::Security::SslStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::Security::SslStream value) ;

constexpr System::Net::Security::SslStream __get___4__this() const;


// Methods

// Ctor Parameters []
explicit System__Net__Security__SslStream____c__DisplayClass21_0() ;

/// @brief Method .ctor addr 0x276d9fc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetAndVerifySelectionCallback>b__0 addr 0x276e1c4 size 0x38 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate _SetAndVerifySelectionCallback_b__0(::StringW t, System::Security::Cryptography::X509Certificates::X509CertificateCollection lc, System::Security::Cryptography::X509Certificates::X509Certificate rc, ::ArrayW<::StringW> ai) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
// Type: System.Net.Security::SslStream
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8215))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8224))
// CS Name: System.Net.Security.SslStream
class CORDL_TYPE SslStream : public System::Net::Security::AuthenticatedStream {
public:
// Declarations
using __c__DisplayClass21_0 = System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~SslStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "SslStream", modifiers: " const&", def_value: None }]
constexpr SslStream(SslStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SslStream", modifiers: "&&", def_value: None }]
constexpr SslStream(SslStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SslStream(void* ptr) noexcept : System::Net::Security::AuthenticatedStream(ptr) {
}


  constexpr SslStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SslStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SslStream& operator=(SslStream&& o) noexcept = default;
  constexpr SslStream& operator=(SslStream const& o) noexcept = default;
                


// Fields

 Mono::Net::Security::MobileTlsProvider __declspec(property(get=__get_provider, put=__set_provider))  provider;

constexpr void __set_provider(Mono::Net::Security::MobileTlsProvider value) ;

constexpr Mono::Net::Security::MobileTlsProvider __get_provider() const;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(Mono::Security::Interface::MonoTlsSettings value) ;

constexpr Mono::Security::Interface::MonoTlsSettings __get_settings() const;

 System::Net::Security::RemoteCertificateValidationCallback __declspec(property(get=__get_validationCallback, put=__set_validationCallback))  validationCallback;

constexpr void __set_validationCallback(System::Net::Security::RemoteCertificateValidationCallback value) ;

constexpr System::Net::Security::RemoteCertificateValidationCallback __get_validationCallback() const;

 System::Net::Security::LocalCertificateSelectionCallback __declspec(property(get=__get_selectionCallback, put=__set_selectionCallback))  selectionCallback;

constexpr void __set_selectionCallback(System::Net::Security::LocalCertificateSelectionCallback value) ;

constexpr System::Net::Security::LocalCertificateSelectionCallback __get_selectionCallback() const;

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=__get_impl, put=__set_impl))  impl;

constexpr void __set_impl(Mono::Net::Security::MobileAuthenticatedStream value) ;

constexpr Mono::Net::Security::MobileAuthenticatedStream __get_impl() const;

 bool __declspec(property(get=__get_explicitSettings, put=__set_explicitSettings))  explicitSettings;

constexpr void __set_explicitSettings(bool value) ;

constexpr bool __get_explicitSettings() const;


// Properties

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=get_Impl))  Impl;

 ::StringW __declspec(property(get=get_InternalTargetHost))  InternalTargetHost;

 bool __declspec(property(get=get_IsAuthenticated))  IsAuthenticated;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_LocalCertificate))  LocalCertificate;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanTimeout))  CanTimeout;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int32_t __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout))  ReadTimeout;

 int32_t __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout))  WriteTimeout;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

/// @brief Method get_Impl addr 0x276d4d8 size 0x18 virtual false final false
 Mono::Net::Security::MobileAuthenticatedStream get_Impl() ;

/// @brief Method get_InternalTargetHost addr 0x276d550 size 0x24 virtual false final false
 ::StringW get_InternalTargetHost() ;

/// @brief Method GetProvider addr 0x276d574 size 0x70 virtual false final false
static Mono::Net::Security::MobileTlsProvider GetProvider() ;

// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "userCertificateValidationCallback", ty: "System::Net::Security::RemoteCertificateValidationCallback", modifiers: "", def_value: None }]
explicit SslStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback userCertificateValidationCallback) ;

/// @brief Method .ctor addr 0x276d5e4 size 0xc virtual false final false
 void _ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback userCertificateValidationCallback) ;

// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "userCertificateValidationCallback", ty: "System::Net::Security::RemoteCertificateValidationCallback", modifiers: "", def_value: None }, CppParam { name: "userCertificateSelectionCallback", ty: "System::Net::Security::LocalCertificateSelectionCallback", modifiers: "", def_value: None }]
explicit SslStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback userCertificateValidationCallback, System::Net::Security::LocalCertificateSelectionCallback userCertificateSelectionCallback) ;

/// @brief Method .ctor addr 0x276d5f0 size 0x90 virtual false final false
 void _ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback userCertificateValidationCallback, System::Net::Security::LocalCertificateSelectionCallback userCertificateSelectionCallback) ;

// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "Mono::Security::Interface::MonoTlsProvider", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "Mono::Security::Interface::MonoTlsSettings", modifiers: "", def_value: None }]
explicit SslStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings) ;

/// @brief Method .ctor addr 0x276d8d8 size 0x124 virtual false final false
 void _ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings) ;

/// @brief Method SetAndVerifyValidationCallback addr 0x276d680 size 0xe0 virtual false final false
 void SetAndVerifyValidationCallback(System::Net::Security::RemoteCertificateValidationCallback callback) ;

/// @brief Method SetAndVerifySelectionCallback addr 0x276d760 size 0x178 virtual false final false
 void SetAndVerifySelectionCallback(System::Net::Security::LocalCertificateSelectionCallback callback) ;

/// @brief Method AuthenticateAsClient addr 0x276da04 size 0x54 virtual true final false
 void AuthenticateAsClient(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) ;

/// @brief Method BeginAuthenticateAsClient addr 0x276da58 size 0x74 virtual true final false
 System::IAsyncResult BeginAuthenticateAsClient(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation, System::AsyncCallback asyncCallback, ::bs_hook::Il2CppWrapperType asyncState) ;

/// @brief Method EndAuthenticateAsClient addr 0x276dacc size 0xc virtual true final false
 void EndAuthenticateAsClient(System::IAsyncResult asyncResult) ;

/// @brief Method AuthenticateAsServer addr 0x276dad8 size 0x54 virtual true final false
 void AuthenticateAsServer(System::Security::Cryptography::X509Certificates::X509Certificate serverCertificate, bool clientCertificateRequired, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) ;

/// @brief Method AuthenticateAsClientAsync addr 0x276db2c size 0x54 virtual true final false
 System::Threading::Tasks::Task AuthenticateAsClientAsync(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) ;

/// @brief Method get_IsAuthenticated addr 0x276db80 size 0x2c virtual true final false
 bool get_IsAuthenticated() ;

/// @brief Method get_LocalCertificate addr 0x276dbac size 0x24 virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_LocalCertificate() ;

/// @brief Method get_CanSeek addr 0x276dbd0 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanRead addr 0x276dbd8 size 0x18 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanTimeout addr 0x276dbf0 size 0x20 virtual true final false
 bool get_CanTimeout() ;

/// @brief Method get_CanWrite addr 0x276dc10 size 0x18 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_ReadTimeout addr 0x276dc28 size 0x2c virtual true final false
 int32_t get_ReadTimeout() ;

/// @brief Method set_ReadTimeout addr 0x276dc54 size 0x3c virtual true final false
 void set_ReadTimeout(int32_t value) ;

/// @brief Method get_WriteTimeout addr 0x276dc90 size 0x2c virtual true final false
 int32_t get_WriteTimeout() ;

/// @brief Method set_WriteTimeout addr 0x276dcbc size 0x3c virtual true final false
 void set_WriteTimeout(int32_t value) ;

/// @brief Method get_Length addr 0x276dcf8 size 0x28 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x276dd20 size 0x28 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x276dd48 size 0x60 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method SetLength addr 0x276dda8 size 0x3c virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Seek addr 0x276dde4 size 0x60 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method FlushAsync addr 0x276de44 size 0x24 virtual true final false
 System::Threading::Tasks::Task FlushAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Flush addr 0x276de68 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method CheckDisposed addr 0x276d4f0 size 0x60 virtual false final false
 void CheckDisposed() ;

/// @brief Method Dispose addr 0x276de8c size 0xac virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Read addr 0x276df38 size 0x54 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x276df8c size 0x54 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadAsync addr 0x276dfe0 size 0x5c virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x276e03c size 0x5c virtual true final false
 System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method BeginRead addr 0x276e098 size 0x6c virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x276e104 size 0x48 virtual true final false
 int32_t EndRead(System::IAsyncResult asyncResult) ;

/// @brief Method BeginWrite addr 0x276e14c size 0x6c virtual true final false
 System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x276e1b8 size 0xc virtual true final false
 void EndWrite(System::IAsyncResult asyncResult) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
NEED_NO_BOX(System::Net::Security::SslStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::SslStream, "System.Net.Security", "SslStream");
NEED_NO_BOX(System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0, "System.Net.Security", "SslStream/<>c__DisplayClass21_0");

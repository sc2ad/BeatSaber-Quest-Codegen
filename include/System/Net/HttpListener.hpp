// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Net.AuthenticationSchemes
#include "System/Net/AuthenticationSchemes.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListenerPrefixCollection
  class HttpListenerPrefixCollection;
  // Forward declaring type: AuthenticationSchemeSelector
  class AuthenticationSchemeSelector;
  // Forward declaring type: ServiceNameStore
  class ServiceNameStore;
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: HttpConnection
  class HttpConnection;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Authentication::ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ExtendedProtectionPolicy
  class ExtendedProtectionPolicy;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
  // Forward declaring type: RemoteCertificateValidationCallback
  class RemoteCertificateValidationCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpListener
  class HttpListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListener*, "System.Net", "HttpListener");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListener
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListener : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private Mono.Security.Interface.MonoTlsProvider tlsProvider
    // Size: 0x8
    // Offset: 0x10
    ::Mono::Security::Interface::MonoTlsProvider* tlsProvider;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::MonoTlsProvider*) == 0x8);
    // private Mono.Security.Interface.MonoTlsSettings tlsSettings
    // Size: 0x8
    // Offset: 0x18
    ::Mono::Security::Interface::MonoTlsSettings* tlsSettings;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::MonoTlsSettings*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate certificate
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // private System.Net.AuthenticationSchemes auth_schemes
    // Size: 0x4
    // Offset: 0x28
    ::System::Net::AuthenticationSchemes auth_schemes;
    // Field size check
    static_assert(sizeof(::System::Net::AuthenticationSchemes) == 0x4);
    // Padding between fields: auth_schemes and: prefixes
    char __padding3[0x4] = {};
    // private System.Net.HttpListenerPrefixCollection prefixes
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::HttpListenerPrefixCollection* prefixes;
    // Field size check
    static_assert(sizeof(::System::Net::HttpListenerPrefixCollection*) == 0x8);
    // private System.Net.AuthenticationSchemeSelector auth_selector
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::AuthenticationSchemeSelector* auth_selector;
    // Field size check
    static_assert(sizeof(::System::Net::AuthenticationSchemeSelector*) == 0x8);
    // private System.String realm
    // Size: 0x8
    // Offset: 0x40
    ::StringW realm;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean ignore_write_exceptions
    // Size: 0x1
    // Offset: 0x48
    bool ignore_write_exceptions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean listening
    // Size: 0x1
    // Offset: 0x49
    bool listening;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x4A
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: internalLock
    char __padding9[0x5] = {};
    // private readonly System.Object _internalLock
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* internalLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.Hashtable registry
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Hashtable* registry;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.ArrayList ctx_queue
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::ArrayList* ctx_queue;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList wait_queue
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::ArrayList* wait_queue;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.Hashtable connections
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Hashtable* connections;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Net.ServiceNameStore defaultServiceNames
    // Size: 0x8
    // Offset: 0x78
    ::System::Net::ServiceNameStore* defaultServiceNames;
    // Field size check
    static_assert(sizeof(::System::Net::ServiceNameStore*) == 0x8);
    // private System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy extendedProtectionPolicy
    // Size: 0x8
    // Offset: 0x80
    ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* extendedProtectionPolicy;
    // Field size check
    static_assert(sizeof(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private Mono.Security.Interface.MonoTlsProvider tlsProvider
    [[deprecated("Use field access instead!")]] ::Mono::Security::Interface::MonoTlsProvider*& dyn_tlsProvider();
    // Get instance field reference: private Mono.Security.Interface.MonoTlsSettings tlsSettings
    [[deprecated("Use field access instead!")]] ::Mono::Security::Interface::MonoTlsSettings*& dyn_tlsSettings();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate certificate
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509Certificate*& dyn_certificate();
    // Get instance field reference: private System.Net.AuthenticationSchemes auth_schemes
    [[deprecated("Use field access instead!")]] ::System::Net::AuthenticationSchemes& dyn_auth_schemes();
    // Get instance field reference: private System.Net.HttpListenerPrefixCollection prefixes
    [[deprecated("Use field access instead!")]] ::System::Net::HttpListenerPrefixCollection*& dyn_prefixes();
    // Get instance field reference: private System.Net.AuthenticationSchemeSelector auth_selector
    [[deprecated("Use field access instead!")]] ::System::Net::AuthenticationSchemeSelector*& dyn_auth_selector();
    // Get instance field reference: private System.String realm
    [[deprecated("Use field access instead!")]] ::StringW& dyn_realm();
    // Get instance field reference: private System.Boolean ignore_write_exceptions
    [[deprecated("Use field access instead!")]] bool& dyn_ignore_write_exceptions();
    // Get instance field reference: private System.Boolean listening
    [[deprecated("Use field access instead!")]] bool& dyn_listening();
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: private readonly System.Object _internalLock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__internalLock();
    // Get instance field reference: private System.Collections.Hashtable registry
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_registry();
    // Get instance field reference: private System.Collections.ArrayList ctx_queue
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_ctx_queue();
    // Get instance field reference: private System.Collections.ArrayList wait_queue
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_wait_queue();
    // Get instance field reference: private System.Collections.Hashtable connections
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_connections();
    // Get instance field reference: private System.Net.ServiceNameStore defaultServiceNames
    [[deprecated("Use field access instead!")]] ::System::Net::ServiceNameStore*& dyn_defaultServiceNames();
    // Get instance field reference: private System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy extendedProtectionPolicy
    [[deprecated("Use field access instead!")]] ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*& dyn_extendedProtectionPolicy();
    // public System.Net.AuthenticationSchemes get_AuthenticationSchemes()
    // Offset: 0x1A9EFEC
    ::System::Net::AuthenticationSchemes get_AuthenticationSchemes();
    // public System.Net.AuthenticationSchemeSelector get_AuthenticationSchemeSelectorDelegate()
    // Offset: 0x1A9EFF4
    ::System::Net::AuthenticationSchemeSelector* get_AuthenticationSchemeSelectorDelegate();
    // public System.Boolean get_IgnoreWriteExceptions()
    // Offset: 0x1A9EFFC
    bool get_IgnoreWriteExceptions();
    // public System.Boolean get_IsListening()
    // Offset: 0x1A9F004
    bool get_IsListening();
    // public System.Net.HttpListenerPrefixCollection get_Prefixes()
    // Offset: 0x1A9F00C
    ::System::Net::HttpListenerPrefixCollection* get_Prefixes();
    // public System.String get_Realm()
    // Offset: 0x1A9F0D8
    ::StringW get_Realm();
    // public System.Void .ctor()
    // Offset: 0x1A9EE0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListener*, creationType>()));
    }
    // System.Security.Cryptography.X509Certificates.X509Certificate LoadCertificateAndKey(System.Net.IPAddress addr, System.Int32 port)
    // Offset: 0x1A9EAF4
    ::System::Security::Cryptography::X509Certificates::X509Certificate* LoadCertificateAndKey(::System::Net::IPAddress* addr, int port);
    // System.Net.Security.SslStream CreateSslStream(System.IO.Stream innerStream, System.Boolean ownsStream, System.Net.Security.RemoteCertificateValidationCallback callback)
    // Offset: 0x1A9B048
    ::System::Net::Security::SslStream* CreateSslStream(::System::IO::Stream* innerStream, bool ownsStream, ::System::Net::Security::RemoteCertificateValidationCallback* callback);
    // public System.Void Close()
    // Offset: 0x1A9F0E0
    void Close();
    // private System.Void Close(System.Boolean force)
    // Offset: 0x1A9F124
    void Close(bool force);
    // private System.Void Cleanup(System.Boolean close_existing)
    // Offset: 0x1A9F1AC
    void Cleanup(bool close_existing);
    // public System.IAsyncResult BeginGetContext(System.AsyncCallback callback, System.Object state)
    // Offset: 0x1A9FCF8
    ::System::IAsyncResult* BeginGetContext(::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.Net.HttpListenerContext EndGetContext(System.IAsyncResult asyncResult)
    // Offset: 0x1AA0674
    ::System::Net::HttpListenerContext* EndGetContext(::System::IAsyncResult* asyncResult);
    // System.Net.AuthenticationSchemes SelectAuthenticationScheme(System.Net.HttpListenerContext context)
    // Offset: 0x1AA0AE0
    ::System::Net::AuthenticationSchemes SelectAuthenticationScheme(::System::Net::HttpListenerContext* context);
    // public System.Net.HttpListenerContext GetContext()
    // Offset: 0x1AA0C30
    ::System::Net::HttpListenerContext* GetContext();
    // public System.Void Start()
    // Offset: 0x1AA0D74
    void Start();
    // public System.Void Stop()
    // Offset: 0x1AA0DF8
    void Stop();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1AA0E24
    void System_IDisposable_Dispose();
    // System.Void CheckDisposed()
    // Offset: 0x1A9F030
    void CheckDisposed();
    // private System.Net.HttpListenerContext GetContextFromQueue()
    // Offset: 0x1A9FFFC
    ::System::Net::HttpListenerContext* GetContextFromQueue();
    // System.Void RegisterContext(System.Net.HttpListenerContext context)
    // Offset: 0x1A9CB4C
    void RegisterContext(::System::Net::HttpListenerContext* context);
    // System.Void UnregisterContext(System.Net.HttpListenerContext context)
    // Offset: 0x1AA0E64
    void UnregisterContext(::System::Net::HttpListenerContext* context);
    // System.Void AddConnection(System.Net.HttpConnection cnc)
    // Offset: 0x1A9CB24
    void AddConnection(::System::Net::HttpConnection* cnc);
    // System.Void RemoveConnection(System.Net.HttpConnection cnc)
    // Offset: 0x1A9CE5C
    void RemoveConnection(::System::Net::HttpConnection* cnc);
  }; // System.Net.HttpListener
  #pragma pack(pop)
  static check_size<sizeof(HttpListener), 128 + sizeof(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*)> __System_Net_HttpListenerSizeCheck;
  static_assert(sizeof(HttpListener) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListener::get_AuthenticationSchemes
// Il2CppName: get_AuthenticationSchemes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::AuthenticationSchemes (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_AuthenticationSchemes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "get_AuthenticationSchemes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::get_AuthenticationSchemeSelectorDelegate
// Il2CppName: get_AuthenticationSchemeSelectorDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::AuthenticationSchemeSelector* (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_AuthenticationSchemeSelectorDelegate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "get_AuthenticationSchemeSelectorDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::get_IgnoreWriteExceptions
// Il2CppName: get_IgnoreWriteExceptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_IgnoreWriteExceptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "get_IgnoreWriteExceptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::get_IsListening
// Il2CppName: get_IsListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_IsListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "get_IsListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::get_Prefixes
// Il2CppName: get_Prefixes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerPrefixCollection* (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_Prefixes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "get_Prefixes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::get_Realm
// Il2CppName: get_Realm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_Realm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "get_Realm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpListener::LoadCertificateAndKey
// Il2CppName: LoadCertificateAndKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (System::Net::HttpListener::*)(::System::Net::IPAddress*, int)>(&System::Net::HttpListener::LoadCertificateAndKey)> {
  static const MethodInfo* get() {
    static auto* addr = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "LoadCertificateAndKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addr, port});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::CreateSslStream
// Il2CppName: CreateSslStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::SslStream* (System::Net::HttpListener::*)(::System::IO::Stream*, bool, ::System::Net::Security::RemoteCertificateValidationCallback*)>(&System::Net::HttpListener::CreateSslStream)> {
  static const MethodInfo* get() {
    static auto* innerStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* ownsStream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Net.Security", "RemoteCertificateValidationCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "CreateSslStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{innerStream, ownsStream, callback});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(bool)>(&System::Net::HttpListener::Close)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(bool)>(&System::Net::HttpListener::Cleanup)> {
  static const MethodInfo* get() {
    static auto* close_existing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{close_existing});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::BeginGetContext
// Il2CppName: BeginGetContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::HttpListener::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::HttpListener::BeginGetContext)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "BeginGetContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::EndGetContext
// Il2CppName: EndGetContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerContext* (System::Net::HttpListener::*)(::System::IAsyncResult*)>(&System::Net::HttpListener::EndGetContext)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "EndGetContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::SelectAuthenticationScheme
// Il2CppName: SelectAuthenticationScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::AuthenticationSchemes (System::Net::HttpListener::*)(::System::Net::HttpListenerContext*)>(&System::Net::HttpListener::SelectAuthenticationScheme)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "SelectAuthenticationScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::GetContext
// Il2CppName: GetContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerContext* (System::Net::HttpListener::*)()>(&System::Net::HttpListener::GetContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "GetContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::CheckDisposed
// Il2CppName: CheckDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::CheckDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "CheckDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::GetContextFromQueue
// Il2CppName: GetContextFromQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerContext* (System::Net::HttpListener::*)()>(&System::Net::HttpListener::GetContextFromQueue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "GetContextFromQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::RegisterContext
// Il2CppName: RegisterContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(::System::Net::HttpListenerContext*)>(&System::Net::HttpListener::RegisterContext)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "RegisterContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::UnregisterContext
// Il2CppName: UnregisterContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(::System::Net::HttpListenerContext*)>(&System::Net::HttpListener::UnregisterContext)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "UnregisterContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::AddConnection
// Il2CppName: AddConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(::System::Net::HttpConnection*)>(&System::Net::HttpListener::AddConnection)> {
  static const MethodInfo* get() {
    static auto* cnc = &::il2cpp_utils::GetClassFromName("System.Net", "HttpConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "AddConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cnc});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::RemoveConnection
// Il2CppName: RemoveConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(::System::Net::HttpConnection*)>(&System::Net::HttpListener::RemoveConnection)> {
  static const MethodInfo* get() {
    static auto* cnc = &::il2cpp_utils::GetClassFromName("System.Net", "HttpConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener*), "RemoveConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cnc});
  }
};

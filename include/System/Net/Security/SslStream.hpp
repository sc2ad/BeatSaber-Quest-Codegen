// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Security.AuthenticatedStream
#include "System/Net/Security/AuthenticatedStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
  // Forward declaring type: IMonoSslStream
  class IMonoSslStream;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Security::SslStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::SslStream*, "System.Net.Security", "SslStream");
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.SslStream
  // [TokenAttribute] Offset: FFFFFFFF
  class SslStream : public ::System::Net::Security::AuthenticatedStream {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x38
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Mono.Security.Interface.MonoTlsProvider provider
    // Size: 0x8
    // Offset: 0x38
    ::Mono::Security::Interface::MonoTlsProvider* provider;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::MonoTlsProvider*) == 0x8);
    // private Mono.Security.Interface.IMonoSslStream impl
    // Size: 0x8
    // Offset: 0x40
    ::Mono::Security::Interface::IMonoSslStream* impl;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::IMonoSslStream*) == 0x8);
    public:
    // Get instance field reference: private Mono.Security.Interface.MonoTlsProvider provider
    ::Mono::Security::Interface::MonoTlsProvider*& dyn_provider();
    // Get instance field reference: private Mono.Security.Interface.IMonoSslStream impl
    ::Mono::Security::Interface::IMonoSslStream*& dyn_impl();
    // Mono.Security.Interface.IMonoSslStream get_Impl()
    // Offset: 0x17B18D0
    ::Mono::Security::Interface::IMonoSslStream* get_Impl();
    // System.Void .ctor(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsProvider provider, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x17B1978
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SslStream* New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Security::SslStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SslStream*, creationType>(innerStream, leaveInnerStreamOpen, provider, settings)));
    }
    // static Mono.Security.Interface.IMonoSslStream CreateMonoSslStream(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsProvider provider, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x17B19EC
    static ::Mono::Security::Interface::IMonoSslStream* CreateMonoSslStream(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings);
    // public System.Void AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Boolean clientCertificateRequired, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    // Offset: 0x17B1A84
    void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
    // private System.Void CheckDisposed()
    // Offset: 0x17B18F4
    void CheckDisposed();
    // public override System.Boolean get_IsAuthenticated()
    // Offset: 0x17B1B70
    // Implemented from: System.Net.Security.AuthenticatedStream
    // Base method: System.Boolean AuthenticatedStream::get_IsAuthenticated()
    bool get_IsAuthenticated();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x17B1C2C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanRead()
    // Offset: 0x17B1C34
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x17B1CF4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int32 get_ReadTimeout()
    // Offset: 0x17B1DB4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_ReadTimeout()
    int get_ReadTimeout();
    // public override System.Int32 get_WriteTimeout()
    // Offset: 0x17B1E70
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_WriteTimeout()
    int get_WriteTimeout();
    // public override System.Int64 get_Length()
    // Offset: 0x17B1F2C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x17B1FE8
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x17B20A4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x17B2124
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x17B21F0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Void Flush()
    // Offset: 0x17B2270
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x17B2294
    // Implemented from: System.Net.Security.AuthenticatedStream
    // Base method: System.Void AuthenticatedStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x17B23A4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x17B2488
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x17B256C
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x17B2668
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(::System::IAsyncResult* asyncResult);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x17B2734
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t> buffer, int offset, int count, ::System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x17B2830
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(::System::IAsyncResult* asyncResult);
  }; // System.Net.Security.SslStream
  #pragma pack(pop)
  static check_size<sizeof(SslStream), 64 + sizeof(::Mono::Security::Interface::IMonoSslStream*)> __System_Net_Security_SslStreamSizeCheck;
  static_assert(sizeof(SslStream) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Security::SslStream::get_Impl
// Il2CppName: get_Impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::IMonoSslStream* (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_Impl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "get_Impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Security::SslStream::CreateMonoSslStream
// Il2CppName: CreateMonoSslStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::IMonoSslStream* (*)(::System::IO::Stream*, bool, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*)>(&System::Net::Security::SslStream::CreateMonoSslStream)> {
  static const MethodInfo* get() {
    static auto* innerStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* leaveInnerStreamOpen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsProvider")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "CreateMonoSslStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{innerStream, leaveInnerStreamOpen, provider, settings});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::AuthenticateAsServer
// Il2CppName: AuthenticateAsServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, bool, ::System::Security::Authentication::SslProtocols, bool)>(&System::Net::Security::SslStream::AuthenticateAsServer)> {
  static const MethodInfo* get() {
    static auto* serverCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* clientCertificateRequired = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* enabledSslProtocols = &::il2cpp_utils::GetClassFromName("System.Security.Authentication", "SslProtocols")->byval_arg;
    static auto* checkCertificateRevocation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "AuthenticateAsServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::CheckDisposed
// Il2CppName: CheckDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::CheckDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "CheckDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::get_IsAuthenticated
// Il2CppName: get_IsAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_IsAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "get_IsAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::get_ReadTimeout
// Il2CppName: get_ReadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_ReadTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "get_ReadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::get_WriteTimeout
// Il2CppName: get_WriteTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_WriteTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "get_WriteTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(int64_t)>(&System::Net::Security::SslStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(int64_t)>(&System::Net::Security::SslStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Security::SslStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::Net::Security::SslStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(bool)>(&System::Net::Security::SslStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::Security::SslStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::Security::SslStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Security::SslStream::BeginRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* asyncCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* asyncState = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, asyncCallback, asyncState});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Security::SslStream::*)(::System::IAsyncResult*)>(&System::Net::Security::SslStream::EndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Security::SslStream::BeginWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* asyncCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* asyncState = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, asyncCallback, asyncState});
  }
};
// Writing MetadataGetter for method: System::Net::Security::SslStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(::System::IAsyncResult*)>(&System::Net::Security::SslStream::EndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};

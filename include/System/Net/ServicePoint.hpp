// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPHostEntry
  class IPHostEntry;
  // Forward declaring type: WebConnectionGroup
  class WebConnectionGroup;
  // Forward declaring type: BindIPEndPoint
  class BindIPEndPoint;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Timer
  class Timer;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ServicePoint
  class ServicePoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ServicePoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePoint*, "System.Net", "ServicePoint");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServicePoint
  // [TokenAttribute] Offset: FFFFFFFF
  class ServicePoint : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Uri uri
    // Size: 0x8
    // Offset: 0x10
    ::System::Uri* uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.Int32 connectionLimit
    // Size: 0x4
    // Offset: 0x18
    int connectionLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 maxIdleTime
    // Size: 0x4
    // Offset: 0x1C
    int maxIdleTime;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 currentConnections
    // Size: 0x4
    // Offset: 0x20
    int currentConnections;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentConnections and: idleSince
    char __padding3[0x4] = {};
    // private System.DateTime idleSince
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime idleSince;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.DateTime lastDnsResolve
    // Size: 0x8
    // Offset: 0x30
    ::System::DateTime lastDnsResolve;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Version protocolVersion
    // Size: 0x8
    // Offset: 0x38
    ::System::Version* protocolVersion;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.Net.IPHostEntry host
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::IPHostEntry* host;
    // Field size check
    static_assert(sizeof(::System::Net::IPHostEntry*) == 0x8);
    // private System.Boolean usesProxy
    // Size: 0x1
    // Offset: 0x48
    bool usesProxy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usesProxy and: groups
    char __padding8[0x7] = {};
    // private System.Collections.Generic.Dictionary`2<System.String,System.Net.WebConnectionGroup> groups
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::WebConnectionGroup*>* groups;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::WebConnectionGroup*>*) == 0x8);
    // private System.Boolean sendContinue
    // Size: 0x1
    // Offset: 0x58
    bool sendContinue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean useConnect
    // Size: 0x1
    // Offset: 0x59
    bool useConnect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useConnect and: hostE
    char __padding11[0x6] = {};
    // private System.Object hostE
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppObject* hostE;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean useNagle
    // Size: 0x1
    // Offset: 0x68
    bool useNagle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useNagle and: endPointCallback
    char __padding13[0x7] = {};
    // private System.Net.BindIPEndPoint endPointCallback
    // Size: 0x8
    // Offset: 0x70
    ::System::Net::BindIPEndPoint* endPointCallback;
    // Field size check
    static_assert(sizeof(::System::Net::BindIPEndPoint*) == 0x8);
    // private System.Boolean tcp_keepalive
    // Size: 0x1
    // Offset: 0x78
    bool tcp_keepalive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: tcp_keepalive and: tcp_keepalive_time
    char __padding15[0x3] = {};
    // private System.Int32 tcp_keepalive_time
    // Size: 0x4
    // Offset: 0x7C
    int tcp_keepalive_time;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 tcp_keepalive_interval
    // Size: 0x4
    // Offset: 0x80
    int tcp_keepalive_interval;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: tcp_keepalive_interval and: idleTimer
    char __padding17[0x4] = {};
    // private System.Threading.Timer idleTimer
    // Size: 0x8
    // Offset: 0x88
    ::System::Threading::Timer* idleTimer;
    // Field size check
    static_assert(sizeof(::System::Threading::Timer*) == 0x8);
    // private System.Object m_ServerCertificateOrBytes
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppObject* m_ServerCertificateOrBytes;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object m_ClientCertificateOrBytes
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppObject* m_ClientCertificateOrBytes;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Uri uri
    ::System::Uri*& dyn_uri();
    // Get instance field reference: private System.Int32 connectionLimit
    int& dyn_connectionLimit();
    // Get instance field reference: private System.Int32 maxIdleTime
    int& dyn_maxIdleTime();
    // Get instance field reference: private System.Int32 currentConnections
    int& dyn_currentConnections();
    // Get instance field reference: private System.DateTime idleSince
    ::System::DateTime& dyn_idleSince();
    // Get instance field reference: private System.DateTime lastDnsResolve
    ::System::DateTime& dyn_lastDnsResolve();
    // Get instance field reference: private System.Version protocolVersion
    ::System::Version*& dyn_protocolVersion();
    // Get instance field reference: private System.Net.IPHostEntry host
    ::System::Net::IPHostEntry*& dyn_host();
    // Get instance field reference: private System.Boolean usesProxy
    bool& dyn_usesProxy();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Net.WebConnectionGroup> groups
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::WebConnectionGroup*>*& dyn_groups();
    // Get instance field reference: private System.Boolean sendContinue
    bool& dyn_sendContinue();
    // Get instance field reference: private System.Boolean useConnect
    bool& dyn_useConnect();
    // Get instance field reference: private System.Object hostE
    ::Il2CppObject*& dyn_hostE();
    // Get instance field reference: private System.Boolean useNagle
    bool& dyn_useNagle();
    // Get instance field reference: private System.Net.BindIPEndPoint endPointCallback
    ::System::Net::BindIPEndPoint*& dyn_endPointCallback();
    // Get instance field reference: private System.Boolean tcp_keepalive
    bool& dyn_tcp_keepalive();
    // Get instance field reference: private System.Int32 tcp_keepalive_time
    int& dyn_tcp_keepalive_time();
    // Get instance field reference: private System.Int32 tcp_keepalive_interval
    int& dyn_tcp_keepalive_interval();
    // Get instance field reference: private System.Threading.Timer idleTimer
    ::System::Threading::Timer*& dyn_idleTimer();
    // Get instance field reference: private System.Object m_ServerCertificateOrBytes
    ::Il2CppObject*& dyn_m_ServerCertificateOrBytes();
    // Get instance field reference: private System.Object m_ClientCertificateOrBytes
    ::Il2CppObject*& dyn_m_ClientCertificateOrBytes();
    // public System.Uri get_Address()
    // Offset: 0x1B323B0
    ::System::Uri* get_Address();
    // public System.Int32 get_ConnectionLimit()
    // Offset: 0x1B323B8
    int get_ConnectionLimit();
    // public System.Version get_ProtocolVersion()
    // Offset: 0x1B323C0
    ::System::Version* get_ProtocolVersion();
    // public System.Void set_Expect100Continue(System.Boolean value)
    // Offset: 0x1B323C8
    void set_Expect100Continue(bool value);
    // public System.Boolean get_UseNagleAlgorithm()
    // Offset: 0x1B323D4
    bool get_UseNagleAlgorithm();
    // public System.Void set_UseNagleAlgorithm(System.Boolean value)
    // Offset: 0x1B323DC
    void set_UseNagleAlgorithm(bool value);
    // System.Boolean get_SendContinue()
    // Offset: 0x1B323E8
    bool get_SendContinue();
    // System.Void set_SendContinue(System.Boolean value)
    // Offset: 0x1B324E4
    void set_SendContinue(bool value);
    // System.Boolean get_UsesProxy()
    // Offset: 0x1B327F4
    bool get_UsesProxy();
    // System.Void set_UsesProxy(System.Boolean value)
    // Offset: 0x1B327FC
    void set_UsesProxy(bool value);
    // System.Boolean get_UseConnect()
    // Offset: 0x1B32808
    bool get_UseConnect();
    // System.Void set_UseConnect(System.Boolean value)
    // Offset: 0x1B32810
    void set_UseConnect(bool value);
    // private System.Boolean get_HasTimedOut()
    // Offset: 0x1B32FE0
    bool get_HasTimedOut();
    // System.Net.IPHostEntry get_HostEntry()
    // Offset: 0x1B3312C
    ::System::Net::IPHostEntry* get_HostEntry();
    // System.Void .ctor(System.Uri uri, System.Int32 connectionLimit, System.Int32 maxIdleTime)
    // Offset: 0x1B322E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServicePoint* New_ctor(::System::Uri* uri, int connectionLimit, int maxIdleTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ServicePoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServicePoint*, creationType>(uri, connectionLimit, maxIdleTime)));
    }
    // public System.Void SetTcpKeepAlive(System.Boolean enabled, System.Int32 keepAliveTime, System.Int32 keepAliveInterval)
    // Offset: 0x1B324F0
    void SetTcpKeepAlive(bool enabled, int keepAliveTime, int keepAliveInterval);
    // System.Void KeepAliveSetup(System.Net.Sockets.Socket socket)
    // Offset: 0x1B325D0
    void KeepAliveSetup(::System::Net::Sockets::Socket* socket);
    // static private System.Void PutBytes(System.Byte[] bytes, System.UInt32 v, System.Int32 offset)
    // Offset: 0x1B32694
    static void PutBytes(::ArrayW<uint8_t> bytes, uint v, int offset);
    // private System.Net.WebConnectionGroup GetConnectionGroup(System.String name)
    // Offset: 0x1B3281C
    ::System::Net::WebConnectionGroup* GetConnectionGroup(::StringW name);
    // private System.Void RemoveConnectionGroup(System.Net.WebConnectionGroup group)
    // Offset: 0x1B3296C
    void RemoveConnectionGroup(::System::Net::WebConnectionGroup* group);
    // private System.Boolean CheckAvailableForRecycling(out System.DateTime outIdleSince)
    // Offset: 0x1B32A24
    bool CheckAvailableForRecycling(ByRef<::System::DateTime> outIdleSince);
    // private System.Void IdleTimerCallback(System.Object obj)
    // Offset: 0x1B32FBC
    void IdleTimerCallback(::Il2CppObject* obj);
    // System.Void SetVersion(System.Version version)
    // Offset: 0x1B334AC
    void SetVersion(::System::Version* version);
    // System.EventHandler SendRequest(System.Net.HttpWebRequest request, System.String groupName)
    // Offset: 0x1B334B4
    ::System::EventHandler* SendRequest(::System::Net::HttpWebRequest* request, ::StringW groupName);
    // public System.Boolean CloseConnectionGroup(System.String connectionGroupName)
    // Offset: 0x1B3364C
    bool CloseConnectionGroup(::StringW connectionGroupName);
    // System.Void UpdateServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    // Offset: 0x1B33710
    void UpdateServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);
    // System.Void UpdateClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    // Offset: 0x1B33750
    void UpdateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);
    // System.Boolean CallEndPointDelegate(System.Net.Sockets.Socket sock, System.Net.IPEndPoint remote)
    // Offset: 0x1B33790
    bool CallEndPointDelegate(::System::Net::Sockets::Socket* sock, ::System::Net::IPEndPoint* remote);
    // private System.Void <GetConnectionGroup>b__66_0(System.Object s, System.EventArgs e)
    // Offset: 0x1B33AB0
    void $GetConnectionGroup$b__66_0(::Il2CppObject* s, ::System::EventArgs* e);
  }; // System.Net.ServicePoint
  #pragma pack(pop)
  static check_size<sizeof(ServicePoint), 152 + sizeof(::Il2CppObject*)> __System_Net_ServicePointSizeCheck;
  static_assert(sizeof(ServicePoint) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServicePoint::get_Address
// Il2CppName: get_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_Address)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_ConnectionLimit
// Il2CppName: get_ConnectionLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_ConnectionLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_ConnectionLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_ProtocolVersion
// Il2CppName: get_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_ProtocolVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_Expect100Continue
// Il2CppName: set_Expect100Continue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_Expect100Continue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_Expect100Continue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_UseNagleAlgorithm
// Il2CppName: get_UseNagleAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_UseNagleAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_UseNagleAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_UseNagleAlgorithm
// Il2CppName: set_UseNagleAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_UseNagleAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_UseNagleAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_SendContinue
// Il2CppName: get_SendContinue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_SendContinue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_SendContinue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_SendContinue
// Il2CppName: set_SendContinue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_SendContinue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_SendContinue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_UsesProxy
// Il2CppName: get_UsesProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_UsesProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_UsesProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_UsesProxy
// Il2CppName: set_UsesProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_UsesProxy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_UsesProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_UseConnect
// Il2CppName: get_UseConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_UseConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_UseConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::set_UseConnect
// Il2CppName: set_UseConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool)>(&System::Net::ServicePoint::set_UseConnect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "set_UseConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_HasTimedOut
// Il2CppName: get_HasTimedOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_HasTimedOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_HasTimedOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::get_HostEntry
// Il2CppName: get_HostEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (System::Net::ServicePoint::*)()>(&System::Net::ServicePoint::get_HostEntry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "get_HostEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ServicePoint::SetTcpKeepAlive
// Il2CppName: SetTcpKeepAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(bool, int, int)>(&System::Net::ServicePoint::SetTcpKeepAlive)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* keepAliveTime = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* keepAliveInterval = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "SetTcpKeepAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled, keepAliveTime, keepAliveInterval});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::KeepAliveSetup
// Il2CppName: KeepAliveSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Net::Sockets::Socket*)>(&System::Net::ServicePoint::KeepAliveSetup)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "KeepAliveSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::PutBytes
// Il2CppName: PutBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, uint, int)>(&System::Net::ServicePoint::PutBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "PutBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, v, offset});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::GetConnectionGroup
// Il2CppName: GetConnectionGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebConnectionGroup* (System::Net::ServicePoint::*)(::StringW)>(&System::Net::ServicePoint::GetConnectionGroup)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "GetConnectionGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::RemoveConnectionGroup
// Il2CppName: RemoveConnectionGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Net::WebConnectionGroup*)>(&System::Net::ServicePoint::RemoveConnectionGroup)> {
  static const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnectionGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "RemoveConnectionGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::CheckAvailableForRecycling
// Il2CppName: CheckAvailableForRecycling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)(ByRef<::System::DateTime>)>(&System::Net::ServicePoint::CheckAvailableForRecycling)> {
  static const MethodInfo* get() {
    static auto* outIdleSince = &::il2cpp_utils::GetClassFromName("System", "DateTime")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "CheckAvailableForRecycling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outIdleSince});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::IdleTimerCallback
// Il2CppName: IdleTimerCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::Il2CppObject*)>(&System::Net::ServicePoint::IdleTimerCallback)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "IdleTimerCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::SetVersion
// Il2CppName: SetVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Version*)>(&System::Net::ServicePoint::SetVersion)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "SetVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::SendRequest
// Il2CppName: SendRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::EventHandler* (System::Net::ServicePoint::*)(::System::Net::HttpWebRequest*, ::StringW)>(&System::Net::ServicePoint::SendRequest)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    static auto* groupName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "SendRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, groupName});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::CloseConnectionGroup
// Il2CppName: CloseConnectionGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)(::StringW)>(&System::Net::ServicePoint::CloseConnectionGroup)> {
  static const MethodInfo* get() {
    static auto* connectionGroupName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "CloseConnectionGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectionGroupName});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::UpdateServerCertificate
// Il2CppName: UpdateServerCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Net::ServicePoint::UpdateServerCertificate)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "UpdateServerCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::UpdateClientCertificate
// Il2CppName: UpdateClientCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Net::ServicePoint::UpdateClientCertificate)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "UpdateClientCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::CallEndPointDelegate
// Il2CppName: CallEndPointDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePoint::*)(::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*)>(&System::Net::ServicePoint::CallEndPointDelegate)> {
  static const MethodInfo* get() {
    static auto* sock = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    static auto* remote = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "CallEndPointDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sock, remote});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePoint::$GetConnectionGroup$b__66_0
// Il2CppName: <GetConnectionGroup>b__66_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePoint::*)(::Il2CppObject*, ::System::EventArgs*)>(&System::Net::ServicePoint::$GetConnectionGroup$b__66_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePoint*), "<GetConnectionGroup>b__66_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, e});
  }
};

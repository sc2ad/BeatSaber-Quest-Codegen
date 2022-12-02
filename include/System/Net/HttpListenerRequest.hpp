// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: CookieCollection
  class CookieCollection;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: NameValueCollection
  class NameValueCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpListenerRequest
  class HttpListenerRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpListenerRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerRequest*, "System.Net", "HttpListenerRequest");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x83
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerRequest : public ::Il2CppObject {
    public:
    public:
    // private System.String[] accept_types
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> accept_types;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Int64 content_length
    // Size: 0x8
    // Offset: 0x18
    int64_t content_length;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean cl_set
    // Size: 0x1
    // Offset: 0x20
    bool cl_set;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cl_set and: cookies
    char __padding2[0x7] = {};
    // private System.Net.CookieCollection cookies
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::CookieCollection* cookies;
    // Field size check
    static_assert(sizeof(::System::Net::CookieCollection*) == 0x8);
    // private System.Net.WebHeaderCollection headers
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::WebHeaderCollection* headers;
    // Field size check
    static_assert(sizeof(::System::Net::WebHeaderCollection*) == 0x8);
    // private System.String method
    // Size: 0x8
    // Offset: 0x38
    ::StringW method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.IO.Stream input_stream
    // Size: 0x8
    // Offset: 0x40
    ::System::IO::Stream* input_stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Version version
    // Size: 0x8
    // Offset: 0x48
    ::System::Version* version;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.Collections.Specialized.NameValueCollection query_string
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Specialized::NameValueCollection* query_string;
    // Field size check
    static_assert(sizeof(::System::Collections::Specialized::NameValueCollection*) == 0x8);
    // private System.String raw_url
    // Size: 0x8
    // Offset: 0x58
    ::StringW raw_url;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Uri url
    // Size: 0x8
    // Offset: 0x60
    ::System::Uri* url;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.Uri referrer
    // Size: 0x8
    // Offset: 0x68
    ::System::Uri* referrer;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.String[] user_languages
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::StringW> user_languages;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Net.HttpListenerContext context
    // Size: 0x8
    // Offset: 0x78
    ::System::Net::HttpListenerContext* context;
    // Field size check
    static_assert(sizeof(::System::Net::HttpListenerContext*) == 0x8);
    // private System.Boolean is_chunked
    // Size: 0x1
    // Offset: 0x80
    bool is_chunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean ka_set
    // Size: 0x1
    // Offset: 0x81
    bool ka_set;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean keep_alive
    // Size: 0x1
    // Offset: 0x82
    bool keep_alive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Byte[] _100continue
    static ::ArrayW<uint8_t> _get__100continue();
    // Set static field: static private System.Byte[] _100continue
    static void _set__100continue(::ArrayW<uint8_t> value);
    // Get static field: static private System.Char[] separators
    static ::ArrayW<::Il2CppChar> _get_separators();
    // Set static field: static private System.Char[] separators
    static void _set_separators(::ArrayW<::Il2CppChar> value);
    // Get instance field reference: private System.String[] accept_types
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_accept_types();
    // Get instance field reference: private System.Int64 content_length
    [[deprecated("Use field access instead!")]] int64_t& dyn_content_length();
    // Get instance field reference: private System.Boolean cl_set
    [[deprecated("Use field access instead!")]] bool& dyn_cl_set();
    // Get instance field reference: private System.Net.CookieCollection cookies
    [[deprecated("Use field access instead!")]] ::System::Net::CookieCollection*& dyn_cookies();
    // Get instance field reference: private System.Net.WebHeaderCollection headers
    [[deprecated("Use field access instead!")]] ::System::Net::WebHeaderCollection*& dyn_headers();
    // Get instance field reference: private System.String method
    [[deprecated("Use field access instead!")]] ::StringW& dyn_method();
    // Get instance field reference: private System.IO.Stream input_stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_input_stream();
    // Get instance field reference: private System.Version version
    [[deprecated("Use field access instead!")]] ::System::Version*& dyn_version();
    // Get instance field reference: private System.Collections.Specialized.NameValueCollection query_string
    [[deprecated("Use field access instead!")]] ::System::Collections::Specialized::NameValueCollection*& dyn_query_string();
    // Get instance field reference: private System.String raw_url
    [[deprecated("Use field access instead!")]] ::StringW& dyn_raw_url();
    // Get instance field reference: private System.Uri url
    [[deprecated("Use field access instead!")]] ::System::Uri*& dyn_url();
    // Get instance field reference: private System.Uri referrer
    [[deprecated("Use field access instead!")]] ::System::Uri*& dyn_referrer();
    // Get instance field reference: private System.String[] user_languages
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_user_languages();
    // Get instance field reference: private System.Net.HttpListenerContext context
    [[deprecated("Use field access instead!")]] ::System::Net::HttpListenerContext*& dyn_context();
    // Get instance field reference: private System.Boolean is_chunked
    [[deprecated("Use field access instead!")]] bool& dyn_is_chunked();
    // Get instance field reference: private System.Boolean ka_set
    [[deprecated("Use field access instead!")]] bool& dyn_ka_set();
    // Get instance field reference: private System.Boolean keep_alive
    [[deprecated("Use field access instead!")]] bool& dyn_keep_alive();
    // public System.Boolean get_HasEntityBody()
    // Offset: 0x1ACC19C
    bool get_HasEntityBody();
    // public System.Collections.Specialized.NameValueCollection get_Headers()
    // Offset: 0x1ACC274
    ::System::Collections::Specialized::NameValueCollection* get_Headers();
    // public System.IO.Stream get_InputStream()
    // Offset: 0x1ACC1C0
    ::System::IO::Stream* get_InputStream();
    // public System.Boolean get_IsSecureConnection()
    // Offset: 0x1ACC048
    bool get_IsSecureConnection();
    // public System.Boolean get_KeepAlive()
    // Offset: 0x1AC7F78
    bool get_KeepAlive();
    // public System.Net.IPEndPoint get_LocalEndPoint()
    // Offset: 0x1ACC070
    ::System::Net::IPEndPoint* get_LocalEndPoint();
    // public System.Version get_ProtocolVersion()
    // Offset: 0x1ACC27C
    ::System::Version* get_ProtocolVersion();
    // public System.Uri get_Url()
    // Offset: 0x1ACC284
    ::System::Uri* get_Url();
    // public System.String get_UserHostAddress()
    // Offset: 0x1ACC024
    ::StringW get_UserHostAddress();
    // public System.String get_UserHostName()
    // Offset: 0x1ACBFC8
    ::StringW get_UserHostName();
    // System.Void .ctor(System.Net.HttpListenerContext context)
    // Offset: 0x1ACADE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerRequest* New_ctor(::System::Net::HttpListenerContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpListenerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerRequest*, creationType>(context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1ACC28C
    static void _cctor();
    // System.Void SetRequestLine(System.String req)
    // Offset: 0x1AC6D78
    void SetRequestLine(::StringW req);
    // private System.Void CreateQueryString(System.String query)
    // Offset: 0x1ACBB30
    void CreateQueryString(::StringW query);
    // static private System.Boolean MaybeUri(System.String s)
    // Offset: 0x1ACBD88
    static bool MaybeUri(::StringW s);
    // static private System.Boolean IsPredefinedScheme(System.String scheme)
    // Offset: 0x1ACBE40
    static bool IsPredefinedScheme(::StringW scheme);
    // System.Void FinishInitialization()
    // Offset: 0x1AC6254
    void FinishInitialization();
    // static System.String Unquote(System.String str)
    // Offset: 0x1ACC12C
    static ::StringW Unquote(::StringW str);
    // System.Void AddHeader(System.String header)
    // Offset: 0x1AC707C
    void AddHeader(::StringW header);
    // System.Boolean FlushInput()
    // Offset: 0x1AC80F0
    bool FlushInput();
  }; // System.Net.HttpListenerRequest
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerRequest), 130 + sizeof(bool)> __System_Net_HttpListenerRequestSizeCheck;
  static_assert(sizeof(HttpListenerRequest) == 0x83);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_HasEntityBody
// Il2CppName: get_HasEntityBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_HasEntityBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_HasEntityBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Specialized::NameValueCollection* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_InputStream
// Il2CppName: get_InputStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_InputStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_InputStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_IsSecureConnection
// Il2CppName: get_IsSecureConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_IsSecureConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_IsSecureConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_KeepAlive
// Il2CppName: get_KeepAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_KeepAlive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_KeepAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_LocalEndPoint
// Il2CppName: get_LocalEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_LocalEndPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_LocalEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_ProtocolVersion
// Il2CppName: get_ProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_ProtocolVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_ProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_Url
// Il2CppName: get_Url
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_Url)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_Url", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_UserHostAddress
// Il2CppName: get_UserHostAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_UserHostAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_UserHostAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::get_UserHostName
// Il2CppName: get_UserHostName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::get_UserHostName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "get_UserHostName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::HttpListenerRequest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::SetRequestLine
// Il2CppName: SetRequestLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequest::*)(::StringW)>(&System::Net::HttpListenerRequest::SetRequestLine)> {
  static const MethodInfo* get() {
    static auto* req = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "SetRequestLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{req});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::CreateQueryString
// Il2CppName: CreateQueryString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequest::*)(::StringW)>(&System::Net::HttpListenerRequest::CreateQueryString)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "CreateQueryString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::MaybeUri
// Il2CppName: MaybeUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::HttpListenerRequest::MaybeUri)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "MaybeUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::IsPredefinedScheme
// Il2CppName: IsPredefinedScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::HttpListenerRequest::IsPredefinedScheme)> {
  static const MethodInfo* get() {
    static auto* scheme = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "IsPredefinedScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scheme});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::FinishInitialization
// Il2CppName: FinishInitialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::FinishInitialization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "FinishInitialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::Unquote
// Il2CppName: Unquote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Net::HttpListenerRequest::Unquote)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "Unquote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::AddHeader
// Il2CppName: AddHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequest::*)(::StringW)>(&System::Net::HttpListenerRequest::AddHeader)> {
  static const MethodInfo* get() {
    static auto* header = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "AddHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{header});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequest::FlushInput
// Il2CppName: FlushInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequest::*)()>(&System::Net::HttpListenerRequest::FlushInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequest*), "FlushInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

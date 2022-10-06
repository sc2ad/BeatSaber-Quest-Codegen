// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: CookieCollection
  class CookieCollection;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: ResponseStream
  class ResponseStream;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: Cookie
  class Cookie;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpListenerResponse
  class HttpListenerResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpListenerResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerResponse*, "System.Net", "HttpListenerResponse");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x99
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerResponse : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: content_encoding
    char __padding0[0x7] = {};
    // private System.Text.Encoding content_encoding
    // Size: 0x8
    // Offset: 0x18
    ::System::Text::Encoding* content_encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Int64 content_length
    // Size: 0x8
    // Offset: 0x20
    int64_t content_length;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean cl_set
    // Size: 0x1
    // Offset: 0x28
    bool cl_set;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cl_set and: content_type
    char __padding3[0x7] = {};
    // private System.String content_type
    // Size: 0x8
    // Offset: 0x30
    ::StringW content_type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Net.CookieCollection cookies
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::CookieCollection* cookies;
    // Field size check
    static_assert(sizeof(::System::Net::CookieCollection*) == 0x8);
    // private System.Net.WebHeaderCollection headers
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::WebHeaderCollection* headers;
    // Field size check
    static_assert(sizeof(::System::Net::WebHeaderCollection*) == 0x8);
    // private System.Boolean keep_alive
    // Size: 0x1
    // Offset: 0x48
    bool keep_alive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: keep_alive and: output_stream
    char __padding7[0x7] = {};
    // private System.Net.ResponseStream output_stream
    // Size: 0x8
    // Offset: 0x50
    ::System::Net::ResponseStream* output_stream;
    // Field size check
    static_assert(sizeof(::System::Net::ResponseStream*) == 0x8);
    // private System.Version version
    // Size: 0x8
    // Offset: 0x58
    ::System::Version* version;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.String location
    // Size: 0x8
    // Offset: 0x60
    ::StringW location;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 status_code
    // Size: 0x4
    // Offset: 0x68
    int status_code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: status_code and: status_description
    char __padding11[0x4] = {};
    // private System.String status_description
    // Size: 0x8
    // Offset: 0x70
    ::StringW status_description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean chunked
    // Size: 0x1
    // Offset: 0x78
    bool chunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: chunked and: context
    char __padding13[0x7] = {};
    // private System.Net.HttpListenerContext context
    // Size: 0x8
    // Offset: 0x80
    ::System::Net::HttpListenerContext* context;
    // Field size check
    static_assert(sizeof(::System::Net::HttpListenerContext*) == 0x8);
    // System.Boolean HeadersSent
    // Size: 0x1
    // Offset: 0x88
    bool HeadersSent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HeadersSent and: headers_lock
    char __padding15[0x7] = {};
    // System.Object headers_lock
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppObject* headers_lock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean force_close_chunked
    // Size: 0x1
    // Offset: 0x98
    bool force_close_chunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static private System.String tspecials
    static ::StringW _get_tspecials();
    // Set static field: static private System.String tspecials
    static void _set_tspecials(::StringW value);
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: private System.Text.Encoding content_encoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn_content_encoding();
    // Get instance field reference: private System.Int64 content_length
    [[deprecated("Use field access instead!")]] int64_t& dyn_content_length();
    // Get instance field reference: private System.Boolean cl_set
    [[deprecated("Use field access instead!")]] bool& dyn_cl_set();
    // Get instance field reference: private System.String content_type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_content_type();
    // Get instance field reference: private System.Net.CookieCollection cookies
    [[deprecated("Use field access instead!")]] ::System::Net::CookieCollection*& dyn_cookies();
    // Get instance field reference: private System.Net.WebHeaderCollection headers
    [[deprecated("Use field access instead!")]] ::System::Net::WebHeaderCollection*& dyn_headers();
    // Get instance field reference: private System.Boolean keep_alive
    [[deprecated("Use field access instead!")]] bool& dyn_keep_alive();
    // Get instance field reference: private System.Net.ResponseStream output_stream
    [[deprecated("Use field access instead!")]] ::System::Net::ResponseStream*& dyn_output_stream();
    // Get instance field reference: private System.Version version
    [[deprecated("Use field access instead!")]] ::System::Version*& dyn_version();
    // Get instance field reference: private System.String location
    [[deprecated("Use field access instead!")]] ::StringW& dyn_location();
    // Get instance field reference: private System.Int32 status_code
    [[deprecated("Use field access instead!")]] int& dyn_status_code();
    // Get instance field reference: private System.String status_description
    [[deprecated("Use field access instead!")]] ::StringW& dyn_status_description();
    // Get instance field reference: private System.Boolean chunked
    [[deprecated("Use field access instead!")]] bool& dyn_chunked();
    // Get instance field reference: private System.Net.HttpListenerContext context
    [[deprecated("Use field access instead!")]] ::System::Net::HttpListenerContext*& dyn_context();
    // Get instance field reference: System.Boolean HeadersSent
    [[deprecated("Use field access instead!")]] bool& dyn_HeadersSent();
    // Get instance field reference: System.Object headers_lock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_headers_lock();
    // Get instance field reference: private System.Boolean force_close_chunked
    [[deprecated("Use field access instead!")]] bool& dyn_force_close_chunked();
    // System.Boolean get_ForceCloseChunked()
    // Offset: 0x1AA42B0
    bool get_ForceCloseChunked();
    // public System.Text.Encoding get_ContentEncoding()
    // Offset: 0x1A9E0F4
    ::System::Text::Encoding* get_ContentEncoding();
    // public System.Void set_ContentLength64(System.Int64 value)
    // Offset: 0x1AA42B8
    void set_ContentLength64(int64_t value);
    // public System.Void set_ContentType(System.String value)
    // Offset: 0x1A9DCD4
    void set_ContentType(::StringW value);
    // public System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x1AA43F8
    ::System::Net::WebHeaderCollection* get_Headers();
    // public System.IO.Stream get_OutputStream()
    // Offset: 0x1AA4400
    ::System::IO::Stream* get_OutputStream();
    // public System.Boolean get_SendChunked()
    // Offset: 0x1AA4440
    bool get_SendChunked();
    // public System.Void set_SendChunked(System.Boolean value)
    // Offset: 0x1A9B808
    void set_SendChunked(bool value);
    // public System.Void set_StatusCode(System.Int32 value)
    // Offset: 0x1A9DB94
    void set_StatusCode(int value);
    // System.Void .ctor(System.Net.HttpListenerContext context)
    // Offset: 0x1AA1120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerResponse* New_ctor(::System::Net::HttpListenerContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpListenerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerResponse*, creationType>(context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1AA53A8
    static void _cctor();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1AA4448
    void System_IDisposable_Dispose();
    // private System.Void Close(System.Boolean force)
    // Offset: 0x1AA4450
    void Close(bool force);
    // public System.Void Close()
    // Offset: 0x1AA4480
    void Close();
    // public System.Void Close(System.Byte[] responseEntity, System.Boolean willBlock)
    // Offset: 0x1A9E120
    void Close(::ArrayW<uint8_t> responseEntity, bool willBlock);
    // System.Void SendHeaders(System.Boolean closing, System.IO.MemoryStream ms)
    // Offset: 0x1AA4494
    void SendHeaders(bool closing, ::System::IO::MemoryStream* ms);
    // static private System.String FormatHeaders(System.Net.WebHeaderCollection headers)
    // Offset: 0x1AA4F94
    static ::StringW FormatHeaders(::System::Net::WebHeaderCollection* headers);
    // static private System.String CookieToClientString(System.Net.Cookie cookie)
    // Offset: 0x1AA4D34
    static ::StringW CookieToClientString(::System::Net::Cookie* cookie);
    // static private System.String QuotedString(System.Net.Cookie cookie, System.String value)
    // Offset: 0x1AA51EC
    static ::StringW QuotedString(::System::Net::Cookie* cookie, ::StringW value);
    // static private System.Boolean IsToken(System.String value)
    // Offset: 0x1AA52C0
    static bool IsToken(::StringW value);
  }; // System.Net.HttpListenerResponse
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerResponse), 152 + sizeof(bool)> __System_Net_HttpListenerResponseSizeCheck;
  static_assert(sizeof(HttpListenerResponse) == 0x99);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_ForceCloseChunked
// Il2CppName: get_ForceCloseChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_ForceCloseChunked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_ForceCloseChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_ContentEncoding
// Il2CppName: get_ContentEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_ContentEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_ContentEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::set_ContentLength64
// Il2CppName: set_ContentLength64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(int64_t)>(&System::Net::HttpListenerResponse::set_ContentLength64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "set_ContentLength64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::set_ContentType
// Il2CppName: set_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(::StringW)>(&System::Net::HttpListenerResponse::set_ContentType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "set_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_OutputStream
// Il2CppName: get_OutputStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_OutputStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_OutputStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_SendChunked
// Il2CppName: get_SendChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_SendChunked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_SendChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::set_SendChunked
// Il2CppName: set_SendChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(bool)>(&System::Net::HttpListenerResponse::set_SendChunked)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "set_SendChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(int)>(&System::Net::HttpListenerResponse::set_StatusCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::HttpListenerResponse::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(bool)>(&System::Net::HttpListenerResponse::Close)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(::ArrayW<uint8_t>, bool)>(&System::Net::HttpListenerResponse::Close)> {
  static const MethodInfo* get() {
    static auto* responseEntity = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* willBlock = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseEntity, willBlock});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::SendHeaders
// Il2CppName: SendHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(bool, ::System::IO::MemoryStream*)>(&System::Net::HttpListenerResponse::SendHeaders)> {
  static const MethodInfo* get() {
    static auto* closing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ms = &::il2cpp_utils::GetClassFromName("System.IO", "MemoryStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "SendHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{closing, ms});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::FormatHeaders
// Il2CppName: FormatHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::WebHeaderCollection*)>(&System::Net::HttpListenerResponse::FormatHeaders)> {
  static const MethodInfo* get() {
    static auto* headers = &::il2cpp_utils::GetClassFromName("System.Net", "WebHeaderCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "FormatHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headers});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::CookieToClientString
// Il2CppName: CookieToClientString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::Cookie*)>(&System::Net::HttpListenerResponse::CookieToClientString)> {
  static const MethodInfo* get() {
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System.Net", "Cookie")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "CookieToClientString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cookie});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::QuotedString
// Il2CppName: QuotedString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::Cookie*, ::StringW)>(&System::Net::HttpListenerResponse::QuotedString)> {
  static const MethodInfo* get() {
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System.Net", "Cookie")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "QuotedString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cookie, value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::IsToken
// Il2CppName: IsToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::HttpListenerResponse::IsToken)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "IsToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.FtpStatusCode
#include "System/Net/FtpStatusCode.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FtpWebRequest
  class FtpWebRequest;
  // Forward declaring type: FtpStatus
  class FtpStatus;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: FtpWebResponse
  class FtpWebResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::FtpWebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebResponse*, "System.Net", "FtpWebResponse");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpWebResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class FtpWebResponse : public ::System::Net::WebResponse {
    public:
    public:
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Uri uri
    // Size: 0x8
    // Offset: 0x20
    ::System::Uri* uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.Net.FtpStatusCode statusCode
    // Size: 0x4
    // Offset: 0x28
    ::System::Net::FtpStatusCode statusCode;
    // Field size check
    static_assert(sizeof(::System::Net::FtpStatusCode) == 0x4);
    // Padding between fields: statusCode and: lastModified
    char __padding2[0x4] = {};
    // private System.DateTime lastModified
    // Size: 0x8
    // Offset: 0x30
    ::System::DateTime lastModified;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.String bannerMessage
    // Size: 0x8
    // Offset: 0x38
    ::StringW bannerMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String welcomeMessage
    // Size: 0x8
    // Offset: 0x40
    ::StringW welcomeMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String exitMessage
    // Size: 0x8
    // Offset: 0x48
    ::StringW exitMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String statusDescription
    // Size: 0x8
    // Offset: 0x50
    ::StringW statusDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String method
    // Size: 0x8
    // Offset: 0x58
    ::StringW method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x60
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: request
    char __padding9[0x7] = {};
    // private System.Net.FtpWebRequest request
    // Size: 0x8
    // Offset: 0x68
    ::System::Net::FtpWebRequest* request;
    // Field size check
    static_assert(sizeof(::System::Net::FtpWebRequest*) == 0x8);
    // System.Int64 contentLength
    // Size: 0x8
    // Offset: 0x70
    int64_t contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get instance field reference: private System.IO.Stream stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_stream();
    // Get instance field reference: private System.Uri uri
    [[deprecated("Use field access instead!")]] ::System::Uri*& dyn_uri();
    // Get instance field reference: private System.Net.FtpStatusCode statusCode
    [[deprecated("Use field access instead!")]] ::System::Net::FtpStatusCode& dyn_statusCode();
    // Get instance field reference: private System.DateTime lastModified
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_lastModified();
    // Get instance field reference: private System.String bannerMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_bannerMessage();
    // Get instance field reference: private System.String welcomeMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_welcomeMessage();
    // Get instance field reference: private System.String exitMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_exitMessage();
    // Get instance field reference: private System.String statusDescription
    [[deprecated("Use field access instead!")]] ::StringW& dyn_statusDescription();
    // Get instance field reference: private System.String method
    [[deprecated("Use field access instead!")]] ::StringW& dyn_method();
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: private System.Net.FtpWebRequest request
    [[deprecated("Use field access instead!")]] ::System::Net::FtpWebRequest*& dyn_request();
    // Get instance field reference: System.Int64 contentLength
    [[deprecated("Use field access instead!")]] int64_t& dyn_contentLength();
    // System.Void set_LastModified(System.DateTime value)
    // Offset: 0x1AAE124
    void set_LastModified(::System::DateTime value);
    // System.Void set_BannerMessage(System.String value)
    // Offset: 0x1AAE12C
    void set_BannerMessage(::StringW value);
    // System.Void set_WelcomeMessage(System.String value)
    // Offset: 0x1AAE134
    void set_WelcomeMessage(::StringW value);
    // System.Void set_StatusCode(System.Net.FtpStatusCode value)
    // Offset: 0x1AAE13C
    void set_StatusCode(::System::Net::FtpStatusCode value);
    // System.Void set_Stream(System.IO.Stream value)
    // Offset: 0x1AAE370
    void set_Stream(::System::IO::Stream* value);
    // System.Void .ctor(System.Net.FtpWebRequest request, System.Uri uri, System.String method, System.Boolean keepAlive)
    // Offset: 0x1AAA9C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpWebResponse* New_ctor(::System::Net::FtpWebRequest* request, ::System::Uri* uri, ::StringW method, bool keepAlive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FtpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpWebResponse*, creationType>(request, uri, method, keepAlive)));
    }
    // System.Void .ctor(System.Net.FtpWebRequest request, System.Uri uri, System.String method, System.Net.FtpStatusCode statusCode, System.String statusDescription)
    // Offset: 0x1AA9DD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpWebResponse* New_ctor(::System::Net::FtpWebRequest* request, ::System::Uri* uri, ::StringW method, ::System::Net::FtpStatusCode statusCode, ::StringW statusDescription) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FtpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpWebResponse*, creationType>(request, uri, method, statusCode, statusDescription)));
    }
    // System.Void .ctor(System.Net.FtpWebRequest request, System.Uri uri, System.String method, System.Net.FtpStatus status)
    // Offset: 0x1AAD5F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpWebResponse* New_ctor(::System::Net::FtpWebRequest* request, ::System::Uri* uri, ::StringW method, ::System::Net::FtpStatus* status) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FtpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpWebResponse*, creationType>(request, uri, method, status)));
    }
    // System.Void UpdateStatus(System.Net.FtpStatus status)
    // Offset: 0x1AAA7CC
    void UpdateStatus(::System::Net::FtpStatus* status);
    // private System.Void CheckDisposed()
    // Offset: 0x1AAE2C4
    void CheckDisposed();
    // System.Boolean IsFinal()
    // Offset: 0x1AAB204
    bool IsFinal();
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x1AAE0C0
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    ::System::Net::WebHeaderCollection* get_Headers();
    // public override System.Uri get_ResponseUri()
    // Offset: 0x1AAE11C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Uri WebResponse::get_ResponseUri()
    ::System::Uri* get_ResponseUri();
    // public override System.Void Close()
    // Offset: 0x1AAE144
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0x1AAE208
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    ::System::IO::Stream* GetResponseStream();
  }; // System.Net.FtpWebResponse
  #pragma pack(pop)
  static check_size<sizeof(FtpWebResponse), 112 + sizeof(int64_t)> __System_Net_FtpWebResponseSizeCheck;
  static_assert(sizeof(FtpWebResponse) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FtpWebResponse::set_LastModified
// Il2CppName: set_LastModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebResponse::*)(::System::DateTime)>(&System::Net::FtpWebResponse::set_LastModified)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "set_LastModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::set_BannerMessage
// Il2CppName: set_BannerMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebResponse::*)(::StringW)>(&System::Net::FtpWebResponse::set_BannerMessage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "set_BannerMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::set_WelcomeMessage
// Il2CppName: set_WelcomeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebResponse::*)(::StringW)>(&System::Net::FtpWebResponse::set_WelcomeMessage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "set_WelcomeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebResponse::*)(::System::Net::FtpStatusCode)>(&System::Net::FtpWebResponse::set_StatusCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "FtpStatusCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::set_Stream
// Il2CppName: set_Stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebResponse::*)(::System::IO::Stream*)>(&System::Net::FtpWebResponse::set_Stream)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "set_Stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FtpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FtpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FtpWebResponse::UpdateStatus
// Il2CppName: UpdateStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebResponse::*)(::System::Net::FtpStatus*)>(&System::Net::FtpWebResponse::UpdateStatus)> {
  static const MethodInfo* get() {
    static auto* status = &::il2cpp_utils::GetClassFromName("System.Net", "FtpStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "UpdateStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::CheckDisposed
// Il2CppName: CheckDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebResponse::*)()>(&System::Net::FtpWebResponse::CheckDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "CheckDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::IsFinal
// Il2CppName: IsFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpWebResponse::*)()>(&System::Net::FtpWebResponse::IsFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "IsFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (System::Net::FtpWebResponse::*)()>(&System::Net::FtpWebResponse::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::get_ResponseUri
// Il2CppName: get_ResponseUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::FtpWebResponse::*)()>(&System::Net::FtpWebResponse::get_ResponseUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "get_ResponseUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpWebResponse::*)()>(&System::Net::FtpWebResponse::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpWebResponse::GetResponseStream
// Il2CppName: GetResponseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::FtpWebResponse::*)()>(&System::Net::FtpWebResponse::GetResponseStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpWebResponse*), "GetResponseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

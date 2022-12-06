// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: PlatformInternal
  class PlatformInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::PlatformInternal);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformInternal*, "Oculus.Platform", "PlatformInternal");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PlatformInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformInternal : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Platform::PlatformInternal::MessageTypeInternal
    struct MessageTypeInternal;
    // Nested type: ::Oculus::Platform::PlatformInternal::HTTP
    class HTTP;
    // Nested type: ::Oculus::Platform::PlatformInternal::Users
    class Users;
    // static public System.Void CrashApplication()
    // Offset: 0x2AFC3AC
    static void CrashApplication();
    // static Oculus.Platform.Message ParseMessageHandle(System.IntPtr messageHandle, Oculus.Platform.Message/Oculus.Platform.MessageType messageType)
    // Offset: 0x2AFC40C
    static ::Oculus::Platform::Message* ParseMessageHandle(::System::IntPtr messageHandle, ::Oculus::Platform::Message::MessageType messageType);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> InitializeStandaloneAsync(System.UInt64 appID, System.String accessToken)
    // Offset: 0x2AFCDC4
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* InitializeStandaloneAsync(uint64_t appID, ::StringW accessToken);
  }; // Oculus.Platform.PlatformInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::PlatformInternal::CrashApplication
// Il2CppName: CrashApplication
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::PlatformInternal::CrashApplication)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformInternal*), "CrashApplication", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformInternal::ParseMessageHandle
// Il2CppName: ParseMessageHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message* (*)(::System::IntPtr, ::Oculus::Platform::Message::MessageType)>(&Oculus::Platform::PlatformInternal::ParseMessageHandle)> {
  static const MethodInfo* get() {
    static auto* messageHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* messageType = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message/MessageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformInternal*), "ParseMessageHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageHandle, messageType});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformInternal::InitializeStandaloneAsync
// Il2CppName: InitializeStandaloneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (*)(uint64_t, ::StringW)>(&Oculus::Platform::PlatformInternal::InitializeStandaloneAsync)> {
  static const MethodInfo* get() {
    static auto* appID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* accessToken = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformInternal*), "InitializeStandaloneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appID, accessToken});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestWaiter
#include "BGNet/Core/Messages/UnconnectedMessageHandler_RequestWaiter.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedMessage
  class IUnconnectedMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter*, "BGNet.Core.Messages", "UnconnectedMessageHandler/RequestResponseWaiter");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestResponseWaiter
  // [TokenAttribute] Offset: FFFFFFFF
  class UnconnectedMessageHandler::RequestResponseWaiter : public ::BGNet::Core::Messages::UnconnectedMessageHandler::RequestWaiter {
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
    // private readonly System.Threading.Tasks.TaskCompletionSource`1<BGNet.Core.Messages.IUnconnectedMessage> _taskCompletionSource
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>* taskCompletionSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>*) == 0x8);
    // private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Threading::CancellationTokenRegistration disposedCancellationTokenRegistration;
    // private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Threading::CancellationTokenRegistration requestCancellationTokenRegistration;
    public:
    // Get instance field reference: private readonly System.Threading.Tasks.TaskCompletionSource`1<BGNet.Core.Messages.IUnconnectedMessage> _taskCompletionSource
    ::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>*& dyn__taskCompletionSource();
    // Get instance field reference: private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    ::System::Threading::CancellationTokenRegistration& dyn__disposedCancellationTokenRegistration();
    // Get instance field reference: private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    ::System::Threading::CancellationTokenRegistration& dyn__requestCancellationTokenRegistration();
    // public System.Threading.Tasks.Task`1<BGNet.Core.Messages.IUnconnectedMessage> get_task()
    // Offset: 0x2B8CE6C
    ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedMessage*>* get_task();
    // public System.Boolean get_isWaiting()
    // Offset: 0x2B8CD3C
    bool get_isWaiting();
    // public System.Void .ctor(System.Threading.CancellationToken disposedCancellationToken, System.Threading.CancellationToken requestCancellationToken)
    // Offset: 0x2B8CB44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnconnectedMessageHandler::RequestResponseWaiter* New_ctor(::System::Threading::CancellationToken disposedCancellationToken, ::System::Threading::CancellationToken requestCancellationToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnconnectedMessageHandler::RequestResponseWaiter*, creationType>(disposedCancellationToken, requestCancellationToken)));
    }
    // public System.Void Complete(BGNet.Core.Messages.IUnconnectedMessage response)
    // Offset: 0x2B897D4
    void Complete(::BGNet::Core::Messages::IUnconnectedMessage* response);
    // public System.Void Fail(System.Exception ex)
    // Offset: 0x2B8CDAC
    void Fail(::System::Exception* ex);
    // public System.Void Cancel()
    // Offset: 0x2B8CE14
    void Cancel();
    // public override System.Void Dispose()
    // Offset: 0x2B8CC60
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestWaiter
    // Base method: System.Void RequestWaiter::Dispose()
    void Dispose();
  }; // BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestResponseWaiter
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::get_task
// Il2CppName: get_task
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedMessage*>* (BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::get_task)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter*), "get_task", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::get_isWaiting
// Il2CppName: get_isWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::get_isWaiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter*), "get_isWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(&BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::Complete)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::*)(::System::Exception*)>(&BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::Fail)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::RequestResponseWaiter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

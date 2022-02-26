// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedReliableRequest
  class IUnconnectedReliableRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass73_0);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass73_0*, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass73_0");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass73_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnconnectedMessageHandler::$$c__DisplayClass73_0 : public ::Il2CppObject {
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
    // public BGNet.Core.Messages.UnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::BGNet::Core::Messages::UnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::UnconnectedMessageHandler*) == 0x8);
    // public System.UInt32 protocolVersion
    // Size: 0x4
    // Offset: 0x18
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: protocolVersion and: remoteEndPoint
    char __padding1[0x4] = {};
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    public:
    // Get instance field reference: public BGNet.Core.Messages.UnconnectedMessageHandler <>4__this
    ::BGNet::Core::Messages::UnconnectedMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public System.UInt32 protocolVersion
    uint& dyn_protocolVersion();
    // Get instance field reference: public System.Net.IPEndPoint remoteEndPoint
    ::System::Net::IPEndPoint*& dyn_remoteEndPoint();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    ::System::Threading::CancellationToken& dyn_cancellationToken();
    // System.Threading.Tasks.Task <SendMultipartMessageWithRetryAsync>b__0(BGNet.Core.Messages.IUnconnectedReliableRequest mm)
    // Offset: 0x2B8ABC0
    ::System::Threading::Tasks::Task* $SendMultipartMessageWithRetryAsync$b__0(::BGNet::Core::Messages::IUnconnectedReliableRequest* mm);
    // public System.Void .ctor()
    // Offset: 0x2B8ABB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnconnectedMessageHandler::$$c__DisplayClass73_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass73_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnconnectedMessageHandler::$$c__DisplayClass73_0*, creationType>()));
    }
  }; // BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass73_0
  #pragma pack(pop)
  static check_size<sizeof(UnconnectedMessageHandler::$$c__DisplayClass73_0), 40 + sizeof(::System::Threading::CancellationToken)> __BGNet_Core_Messages_UnconnectedMessageHandler_$$c__DisplayClass73_0SizeCheck;
  static_assert(sizeof(UnconnectedMessageHandler::$$c__DisplayClass73_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass73_0::$SendMultipartMessageWithRetryAsync$b__0
// Il2CppName: <SendMultipartMessageWithRetryAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass73_0::*)(::BGNet::Core::Messages::IUnconnectedReliableRequest*)>(&BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass73_0::$SendMultipartMessageWithRetryAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* mm = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass73_0*), "<SendMultipartMessageWithRetryAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mm});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass73_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
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
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.MessageHandler/<>c__DisplayClass98_0
  class MessageHandler::$$c__DisplayClass98_0 : public ::Il2CppObject {
    public:
    // public MasterServer.MessageHandler <>4__this
    // Offset: 0x10
    MasterServer::MessageHandler* $$4__this;
    // public System.UInt32 protocolVersion
    // Offset: 0x18
    uint protocolVersion;
    // public System.Net.IPEndPoint remoteEndPoint
    // Offset: 0x20
    System::Net::IPEndPoint* remoteEndPoint;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // System.Threading.Tasks.Task <SendMultipartMessageWithRetryAsync>b__0(MasterServer.IMasterServerReliableRequest mm)
    // Offset: 0x21259F0
    System::Threading::Tasks::Task* $SendMultipartMessageWithRetryAsync$b__0(MasterServer::IMasterServerReliableRequest* mm);
    // public System.Void .ctor()
    // Offset: 0x21259E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MessageHandler::$$c__DisplayClass98_0* New_ctor();
  }; // MasterServer.MessageHandler/<>c__DisplayClass98_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::$$c__DisplayClass98_0*, "MasterServer", "MessageHandler/<>c__DisplayClass98_0");
#pragma pack(pop)
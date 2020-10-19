// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: ServicePoint
  class ServicePoint;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.BindIPEndPoint
  class BindIPEndPoint : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12ABA30
    static BindIPEndPoint* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Net.IPEndPoint Invoke(System.Net.ServicePoint servicePoint, System.Net.IPEndPoint remoteEndPoint, System.Int32 retryCount)
    // Offset: 0x12ABA44
    System::Net::IPEndPoint* Invoke(System::Net::ServicePoint* servicePoint, System::Net::IPEndPoint* remoteEndPoint, int retryCount);
    // public System.IAsyncResult BeginInvoke(System.Net.ServicePoint servicePoint, System.Net.IPEndPoint remoteEndPoint, System.Int32 retryCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12ABE74
    System::IAsyncResult* BeginInvoke(System::Net::ServicePoint* servicePoint, System::Net::IPEndPoint* remoteEndPoint, int retryCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Net.IPEndPoint EndInvoke(System.IAsyncResult result)
    // Offset: 0x12ABF14
    System::Net::IPEndPoint* EndInvoke(System::IAsyncResult* result);
  }; // System.Net.BindIPEndPoint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::BindIPEndPoint*, "System.Net", "BindIPEndPoint");
#pragma pack(pop)
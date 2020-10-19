// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
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
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
  class UnityTls::unitytls_tlsctx_read_callback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FE090
    static UnityTls::unitytls_tlsctx_read_callback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(System.Void* userData, System.Byte* buffer, System.IntPtr bufferLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x11FE0A4
    System::IntPtr Invoke(void* userData, uint8_t* buffer, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(System.Void* userData, System.Byte* buffer, System.IntPtr bufferLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FE344
    System::IAsyncResult* BeginInvoke(void* userData, uint8_t* buffer, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x11FE3EC
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_tlsctx_read_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_read_callback");
#pragma pack(pop)
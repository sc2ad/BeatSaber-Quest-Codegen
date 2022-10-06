// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async*, "Valve.VR", "IVRRenderModels/_LoadIntoTextureD3D11_Async");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRRenderModels/Valve.VR._LoadIntoTextureD3D11_Async
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B6E3C
  class IVRRenderModels::_LoadIntoTextureD3D11_Async : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22C8E18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_LoadIntoTextureD3D11_Async* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_LoadIntoTextureD3D11_Async*, creationType>(object, method)));
    }
    // public Valve.VR.EVRRenderModelError Invoke(System.Int32 textureId, System.IntPtr pDstTexture)
    // Offset: 0x22C8E28
    ::Valve::VR::EVRRenderModelError Invoke(int textureId, ::System::IntPtr pDstTexture);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, System.IntPtr pDstTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x22C90AC
    ::System::IAsyncResult* BeginInvoke(int textureId, ::System::IntPtr pDstTexture, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRRenderModelError EndInvoke(System.IAsyncResult result)
    // Offset: 0x22C9158
    ::Valve::VR::EVRRenderModelError EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/Valve.VR._LoadIntoTextureD3D11_Async
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRRenderModelError (Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::*)(int, ::System::IntPtr)>(&Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::Invoke)> {
  static const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pDstTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, pDstTexture});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::*)(int, ::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pDstTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, pDstTexture, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRRenderModelError (Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::*)(::System::IAsyncResult*)>(&Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_LoadIntoTextureD3D11_Async*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

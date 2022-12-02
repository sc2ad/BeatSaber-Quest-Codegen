// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
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
NEED_NO_BOX(::OVR::OpenVR::IVRRenderModels::_LoadTexture_Async);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRRenderModels::_LoadTexture_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTexture_Async");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/OVR.OpenVR._LoadTexture_Async
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10C7F38
  class IVRRenderModels::_LoadTexture_Async : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x277FDDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_LoadTexture_Async* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_LoadTexture_Async*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRRenderModelError Invoke(System.Int32 textureId, ref System.IntPtr ppTexture)
    // Offset: 0x277FDEC
    ::OVR::OpenVR::EVRRenderModelError Invoke(int textureId, ByRef<::System::IntPtr> ppTexture);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, ref System.IntPtr ppTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2780070
    ::System::IAsyncResult* BeginInvoke(int textureId, ByRef<::System::IntPtr> ppTexture, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRRenderModelError EndInvoke(ref System.IntPtr ppTexture, System.IAsyncResult result)
    // Offset: 0x2780124
    ::OVR::OpenVR::EVRRenderModelError EndInvoke(ByRef<::System::IntPtr> ppTexture, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/OVR.OpenVR._LoadTexture_Async
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::*)(int, ByRef<::System::IntPtr>)>(&OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::Invoke)> {
  static const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ppTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_LoadTexture_Async*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, ppTexture});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::*)(int, ByRef<::System::IntPtr>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ppTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_LoadTexture_Async*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, ppTexture, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::*)(ByRef<::System::IntPtr>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_LoadTexture_Async::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* ppTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_LoadTexture_Async*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ppTexture, result});
  }
};

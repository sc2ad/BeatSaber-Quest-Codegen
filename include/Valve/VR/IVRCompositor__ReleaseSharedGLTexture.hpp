// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRCompositor::_ReleaseSharedGLTexture);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRCompositor::_ReleaseSharedGLTexture*, "Valve.VR", "IVRCompositor/_ReleaseSharedGLTexture");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._ReleaseSharedGLTexture
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B66E4
  class IVRCompositor::_ReleaseSharedGLTexture : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2708080
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_ReleaseSharedGLTexture* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_ReleaseSharedGLTexture*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle)
    // Offset: 0x2708090
    bool Invoke(uint glTextureId, ::System::IntPtr glSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2708318
    ::System::IAsyncResult* BeginInvoke(uint glTextureId, ::System::IntPtr glSharedTextureHandle, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x27083C4
    bool EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._ReleaseSharedGLTexture
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::*)(uint, ::System::IntPtr)>(&Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::Invoke)> {
  static const MethodInfo* get() {
    static auto* glTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* glSharedTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_ReleaseSharedGLTexture*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{glTextureId, glSharedTextureHandle});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::*)(uint, ::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* glTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* glSharedTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_ReleaseSharedGLTexture*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{glTextureId, glSharedTextureHandle, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::*)(::System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_ReleaseSharedGLTexture::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_ReleaseSharedGLTexture*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

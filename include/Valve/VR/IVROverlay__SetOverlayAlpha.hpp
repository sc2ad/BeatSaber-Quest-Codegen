// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
NEED_NO_BOX(::Valve::VR::IVROverlay::_SetOverlayAlpha);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_SetOverlayAlpha*, "Valve.VR", "IVROverlay/_SetOverlayAlpha");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._SetOverlayAlpha
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B68B0
  class IVROverlay::_SetOverlayAlpha : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2717844
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayAlpha* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_SetOverlayAlpha::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayAlpha*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Single fAlpha)
    // Offset: 0x2717854
    ::Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float fAlpha);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Single fAlpha, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2717ADC
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float fAlpha, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x2717B88
    ::Valve::VR::EVROverlayError EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._SetOverlayAlpha
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayAlpha::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayAlpha::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayAlpha::*)(uint64_t, float)>(&Valve::VR::IVROverlay::_SetOverlayAlpha::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* fAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayAlpha*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, fAlpha});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayAlpha::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_SetOverlayAlpha::*)(uint64_t, float, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_SetOverlayAlpha::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* fAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayAlpha*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, fAlpha, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayAlpha::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayAlpha::*)(::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_SetOverlayAlpha::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayAlpha*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

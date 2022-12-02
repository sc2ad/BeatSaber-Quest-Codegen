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
  // Forward declaring type: VROverlayFlags
  struct VROverlayFlags;
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
NEED_NO_BOX(::Valve::VR::IVROverlay::_GetOverlayFlag);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_GetOverlayFlag*, "Valve.VR", "IVROverlay/_GetOverlayFlag");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._GetOverlayFlag
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10CCAE0
  class IVROverlay::_GetOverlayFlag : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x27446D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayFlag* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_GetOverlayFlag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayFlag*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, Valve.VR.VROverlayFlags eOverlayFlag, ref System.Boolean pbEnabled)
    // Offset: 0x27446E0
    ::Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::Valve::VR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, Valve.VR.VROverlayFlags eOverlayFlag, ref System.Boolean pbEnabled, System.AsyncCallback callback, System.Object object)
    // Offset: 0x274497C
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::Valve::VR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.Boolean pbEnabled, System.IAsyncResult result)
    // Offset: 0x2744A50
    ::Valve::VR::EVROverlayError EndInvoke(ByRef<bool> pbEnabled, ::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._GetOverlayFlag
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayFlag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayFlag::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayFlag::*)(uint64_t, ::Valve::VR::VROverlayFlags, ByRef<bool>)>(&Valve::VR::IVROverlay::_GetOverlayFlag::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eOverlayFlag = &::il2cpp_utils::GetClassFromName("Valve.VR", "VROverlayFlags")->byval_arg;
    static auto* pbEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayFlag*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, eOverlayFlag, pbEnabled});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayFlag::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_GetOverlayFlag::*)(uint64_t, ::Valve::VR::VROverlayFlags, ByRef<bool>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetOverlayFlag::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eOverlayFlag = &::il2cpp_utils::GetClassFromName("Valve.VR", "VROverlayFlags")->byval_arg;
    static auto* pbEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayFlag*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, eOverlayFlag, pbEnabled, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayFlag::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayFlag::*)(ByRef<bool>, ::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetOverlayFlag::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pbEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayFlag*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pbEnabled, result});
  }
};

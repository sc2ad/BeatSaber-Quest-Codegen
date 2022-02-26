// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
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
NEED_NO_BOX(::OVR::OpenVR::IVROverlay::_CreateDashboardOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay::_CreateDashboardOverlay*, "OVR.OpenVR", "IVROverlay/_CreateDashboardOverlay");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._CreateDashboardOverlay
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 11E8E8C
  class IVROverlay::_CreateDashboardOverlay : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2458144
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_CreateDashboardOverlay* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_CreateDashboardOverlay*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.String pchOverlayKey, System.String pchOverlayFriendlyName, ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle)
    // Offset: 0x2458154
    ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, System.String pchOverlayFriendlyName, ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2458594
    ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle, System.IAsyncResult result)
    // Offset: 0x2458654
    ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._CreateDashboardOverlay
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::*)(::StringW, ::StringW, ByRef<uint64_t>, ByRef<uint64_t>)>(&OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchOverlayKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchOverlayFriendlyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pMainHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* pThumbnailHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_CreateDashboardOverlay*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::*)(::StringW, ::StringW, ByRef<uint64_t>, ByRef<uint64_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchOverlayKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchOverlayFriendlyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pMainHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* pThumbnailHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_CreateDashboardOverlay*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::*)(ByRef<uint64_t>, ByRef<uint64_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_CreateDashboardOverlay::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pMainHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* pThumbnailHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_CreateDashboardOverlay*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pMainHandle, pThumbnailHandle, result});
  }
};

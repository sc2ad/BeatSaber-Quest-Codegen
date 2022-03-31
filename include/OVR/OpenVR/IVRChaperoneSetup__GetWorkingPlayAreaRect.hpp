// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
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
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaRect");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._GetWorkingPlayAreaRect
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 1202A00
  class IVRChaperoneSetup::_GetWorkingPlayAreaRect : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A64F2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetWorkingPlayAreaRect* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetWorkingPlayAreaRect*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0x1A5B338
    bool Invoke(ByRef<::OVR::OpenVR::HmdQuad_t> rect);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A64F3C
    ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.IAsyncResult result)
    // Offset: 0x1A64FD0
    bool EndInvoke(ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._GetWorkingPlayAreaRect
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::*)(ByRef<::OVR::OpenVR::HmdQuad_t>)>(&OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::Invoke)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdQuad_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::*)(ByRef<::OVR::OpenVR::HmdQuad_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdQuad_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::*)(ByRef<::OVR::OpenVR::HmdQuad_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdQuad_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, result});
  }
};

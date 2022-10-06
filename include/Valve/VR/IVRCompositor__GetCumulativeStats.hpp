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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: Compositor_CumulativeStats
  struct Compositor_CumulativeStats;
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
NEED_NO_BOX(::Valve::VR::IVRCompositor::_GetCumulativeStats);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRCompositor::_GetCumulativeStats*, "Valve.VR", "IVRCompositor/_GetCumulativeStats");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._GetCumulativeStats
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B64F0
  class IVRCompositor::_GetCumulativeStats : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2703F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetCumulativeStats* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRCompositor::_GetCumulativeStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetCumulativeStats*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref Valve.VR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes)
    // Offset: 0x2703F68
    void Invoke(ByRef<::Valve::VR::Compositor_CumulativeStats> pStats, uint nStatsSizeInBytes);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27041DC
    ::System::IAsyncResult* BeginInvoke(ByRef<::Valve::VR::Compositor_CumulativeStats> pStats, uint nStatsSizeInBytes, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.Compositor_CumulativeStats pStats, System.IAsyncResult result)
    // Offset: 0x2704290
    void EndInvoke(ByRef<::Valve::VR::Compositor_CumulativeStats> pStats, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._GetCumulativeStats
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetCumulativeStats::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetCumulativeStats::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRCompositor::_GetCumulativeStats::*)(ByRef<::Valve::VR::Compositor_CumulativeStats>, uint)>(&Valve::VR::IVRCompositor::_GetCumulativeStats::Invoke)> {
  static const MethodInfo* get() {
    static auto* pStats = &::il2cpp_utils::GetClassFromName("Valve.VR", "Compositor_CumulativeStats")->this_arg;
    static auto* nStatsSizeInBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetCumulativeStats*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pStats, nStatsSizeInBytes});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetCumulativeStats::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRCompositor::_GetCumulativeStats::*)(ByRef<::Valve::VR::Compositor_CumulativeStats>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_GetCumulativeStats::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pStats = &::il2cpp_utils::GetClassFromName("Valve.VR", "Compositor_CumulativeStats")->this_arg;
    static auto* nStatsSizeInBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetCumulativeStats*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pStats, nStatsSizeInBytes, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetCumulativeStats::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRCompositor::_GetCumulativeStats::*)(ByRef<::Valve::VR::Compositor_CumulativeStats>, ::System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_GetCumulativeStats::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pStats = &::il2cpp_utils::GetClassFromName("Valve.VR", "Compositor_CumulativeStats")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetCumulativeStats*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pStats, result});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
NEED_NO_BOX(::Valve::VR::IVRSystem::_GetTimeSinceLastVsync);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSystem::_GetTimeSinceLastVsync*, "Valve.VR", "IVRSystem/_GetTimeSinceLastVsync");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetTimeSinceLastVsync
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10CDC70
  class IVRSystem::_GetTimeSinceLastVsync : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23343C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetTimeSinceLastVsync* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSystem::_GetTimeSinceLastVsync::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetTimeSinceLastVsync*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref System.Single pfSecondsSinceLastVsync, ref System.UInt64 pulFrameCounter)
    // Offset: 0x23343D4
    bool Invoke(ByRef<float> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter);
    // public System.IAsyncResult BeginInvoke(ref System.Single pfSecondsSinceLastVsync, ref System.UInt64 pulFrameCounter, System.AsyncCallback callback, System.Object object)
    // Offset: 0x233464C
    ::System::IAsyncResult* BeginInvoke(ByRef<float> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.Single pfSecondsSinceLastVsync, ref System.UInt64 pulFrameCounter, System.IAsyncResult result)
    // Offset: 0x2334700
    bool EndInvoke(ByRef<float> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetTimeSinceLastVsync
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTimeSinceLastVsync::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTimeSinceLastVsync::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_GetTimeSinceLastVsync::*)(ByRef<float>, ByRef<uint64_t>)>(&Valve::VR::IVRSystem::_GetTimeSinceLastVsync::Invoke)> {
  static const MethodInfo* get() {
    static auto* pfSecondsSinceLastVsync = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pulFrameCounter = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetTimeSinceLastVsync*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pfSecondsSinceLastVsync, pulFrameCounter});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTimeSinceLastVsync::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSystem::_GetTimeSinceLastVsync::*)(ByRef<float>, ByRef<uint64_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetTimeSinceLastVsync::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pfSecondsSinceLastVsync = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pulFrameCounter = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetTimeSinceLastVsync*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pfSecondsSinceLastVsync, pulFrameCounter, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTimeSinceLastVsync::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_GetTimeSinceLastVsync::*)(ByRef<float>, ByRef<uint64_t>, ::System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetTimeSinceLastVsync::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pfSecondsSinceLastVsync = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pulFrameCounter = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetTimeSinceLastVsync*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pfSecondsSinceLastVsync, pulFrameCounter, result});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
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
  // Forward declaring type: VREvent_t_Packed
  struct VREvent_t_Packed;
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
NEED_NO_BOX(::Valve::VR::CVRSystem::_PollNextEventPacked);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRSystem::_PollNextEventPacked*, "Valve.VR", "CVRSystem/_PollNextEventPacked");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRSystem/Valve.VR._PollNextEventPacked
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B7134
  class CVRSystem::_PollNextEventPacked : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C154FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSystem::_PollNextEventPacked* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::CVRSystem::_PollNextEventPacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSystem::_PollNextEventPacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref Valve.VR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x1C14448
    bool Invoke(ByRef<::Valve::VR::VREvent_t_Packed> pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C1550C
    ::System::IAsyncResult* BeginInvoke(ByRef<::Valve::VR::VREvent_t_Packed> pEvent, uint uncbVREvent, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VREvent_t_Packed pEvent, System.IAsyncResult result)
    // Offset: 0x1C155C0
    bool EndInvoke(ByRef<::Valve::VR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result);
  }; // Valve.VR.CVRSystem/Valve.VR._PollNextEventPacked
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_PollNextEventPacked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_PollNextEventPacked::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSystem::_PollNextEventPacked::*)(ByRef<::Valve::VR::VREvent_t_Packed>, uint)>(&Valve::VR::CVRSystem::_PollNextEventPacked::Invoke)> {
  static const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t_Packed")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_PollNextEventPacked*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, uncbVREvent});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_PollNextEventPacked::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::CVRSystem::_PollNextEventPacked::*)(ByRef<::Valve::VR::VREvent_t_Packed>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::CVRSystem::_PollNextEventPacked::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t_Packed")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_PollNextEventPacked*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, uncbVREvent, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_PollNextEventPacked::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSystem::_PollNextEventPacked::*)(ByRef<::Valve::VR::VREvent_t_Packed>, ::System::IAsyncResult*)>(&Valve::VR::CVRSystem::_PollNextEventPacked::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t_Packed")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_PollNextEventPacked*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, result});
  }
};

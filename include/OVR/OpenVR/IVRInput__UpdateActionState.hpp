// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.VRActiveActionSet_t
#include "OVR/OpenVR/VRActiveActionSet_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRInputError
  struct EVRInputError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRInput/OVR.OpenVR._UpdateActionState
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: EB165C
  class IVRInput::_UpdateActionState : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _UpdateActionState
    _UpdateActionState() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20F6140
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_UpdateActionState* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_UpdateActionState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_UpdateActionState*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(in OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t, System.UInt32 unSetCount)
    // Offset: 0x20F6150
    OVR::OpenVR::EVRInputError Invoke(ByRef<::ArrayWrapper<OVR::OpenVR::VRActiveActionSet_t>> pSets, uint unSizeOfVRSelectedActionSet_t, uint unSetCount);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t, System.UInt32 unSetCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20F63E4
    System::IAsyncResult* BeginInvoke(ByRef<::ArrayWrapper<OVR::OpenVR::VRActiveActionSet_t>> pSets, uint unSizeOfVRSelectedActionSet_t, uint unSetCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x20F6498
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/OVR.OpenVR._UpdateActionState
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_UpdateActionState*, "OVR.OpenVR", "IVRInput/_UpdateActionState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_UpdateActionState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_UpdateActionState::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_UpdateActionState::*)(ByRef<::ArrayWrapper<OVR::OpenVR::VRActiveActionSet_t>>, uint, uint)>(&OVR::OpenVR::IVRInput::_UpdateActionState::Invoke)> {
  static const MethodInfo* get() {
    static auto* pSets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRActiveActionSet_t"), 1)->this_arg;
    static auto* unSizeOfVRSelectedActionSet_t = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unSetCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_UpdateActionState*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSets, unSizeOfVRSelectedActionSet_t, unSetCount});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_UpdateActionState::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRInput::_UpdateActionState::*)(ByRef<::ArrayWrapper<OVR::OpenVR::VRActiveActionSet_t>>, uint, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_UpdateActionState::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pSets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRActiveActionSet_t"), 1)->this_arg;
    static auto* unSizeOfVRSelectedActionSet_t = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unSetCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_UpdateActionState*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSets, unSizeOfVRSelectedActionSet_t, unSetCount, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_UpdateActionState::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_UpdateActionState::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_UpdateActionState::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_UpdateActionState*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

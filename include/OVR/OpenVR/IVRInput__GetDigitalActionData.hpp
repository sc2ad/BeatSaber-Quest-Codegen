// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: InputDigitalActionData_t
  struct InputDigitalActionData_t;
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
NEED_NO_BOX(::OVR::OpenVR::IVRInput::_GetDigitalActionData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput::_GetDigitalActionData*, "OVR.OpenVR", "IVRInput/_GetDigitalActionData");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRInput/OVR.OpenVR._GetDigitalActionData
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10C82F8
  class IVRInput::_GetDigitalActionData : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2577E3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetDigitalActionData* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRInput::_GetDigitalActionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetDigitalActionData*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, ref OVR.OpenVR.InputDigitalActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x2577E4C
    ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, ref OVR.OpenVR.InputDigitalActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2578104
    ::System::IAsyncResult* BeginInvoke(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref OVR.OpenVR.InputDigitalActionData_t pActionData, System.IAsyncResult result)
    // Offset: 0x25781F0
    ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/OVR.OpenVR._GetDigitalActionData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetDigitalActionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetDigitalActionData::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetDigitalActionData::*)(uint64_t, ByRef<::OVR::OpenVR::InputDigitalActionData_t>, uint, uint64_t)>(&OVR::OpenVR::IVRInput::_GetDigitalActionData::Invoke)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputDigitalActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetDigitalActionData*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, pActionData, unActionDataSize, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetDigitalActionData::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRInput::_GetDigitalActionData::*)(uint64_t, ByRef<::OVR::OpenVR::InputDigitalActionData_t>, uint, uint64_t, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_GetDigitalActionData::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputDigitalActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetDigitalActionData*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, pActionData, unActionDataSize, ulRestrictToDevice, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetDigitalActionData::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetDigitalActionData::*)(ByRef<::OVR::OpenVR::InputDigitalActionData_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_GetDigitalActionData::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputDigitalActionData_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetDigitalActionData*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pActionData, result});
  }
};

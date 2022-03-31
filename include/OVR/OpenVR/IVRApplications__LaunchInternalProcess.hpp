// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRApplications::_LaunchInternalProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications::_LaunchInternalProcess*, "OVR.OpenVR", "IVRApplications/_LaunchInternalProcess");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchInternalProcess
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 12028FC
  class IVRApplications::_LaunchInternalProcess : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A64050
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_LaunchInternalProcess* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRApplications::_LaunchInternalProcess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_LaunchInternalProcess*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchBinaryPath, System.String pchArguments, System.String pchWorkingDirectory)
    // Offset: 0x1A58FD0
    ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory);
    // public System.IAsyncResult BeginInvoke(System.String pchBinaryPath, System.String pchArguments, System.String pchWorkingDirectory, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A64060
    ::System::IAsyncResult* BeginInvoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A64090
    ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchInternalProcess
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchInternalProcess::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchInternalProcess::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_LaunchInternalProcess::*)(::StringW, ::StringW, ::StringW)>(&OVR::OpenVR::IVRApplications::_LaunchInternalProcess::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchBinaryPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchArguments = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchWorkingDirectory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchInternalProcess*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchBinaryPath, pchArguments, pchWorkingDirectory});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchInternalProcess::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRApplications::_LaunchInternalProcess::*)(::StringW, ::StringW, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_LaunchInternalProcess::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchBinaryPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchArguments = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchWorkingDirectory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchInternalProcess*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchBinaryPath, pchArguments, pchWorkingDirectory, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchInternalProcess::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_LaunchInternalProcess::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_LaunchInternalProcess::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchInternalProcess*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

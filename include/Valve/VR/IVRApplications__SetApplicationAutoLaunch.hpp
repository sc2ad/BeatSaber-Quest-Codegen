// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
NEED_NO_BOX(::Valve::VR::IVRApplications::_SetApplicationAutoLaunch);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRApplications::_SetApplicationAutoLaunch*, "Valve.VR", "IVRApplications/_SetApplicationAutoLaunch");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRApplications/Valve.VR._SetApplicationAutoLaunch
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B60CC
  class IVRApplications::_SetApplicationAutoLaunch : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C16B1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_SetApplicationAutoLaunch* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRApplications::_SetApplicationAutoLaunch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_SetApplicationAutoLaunch*, creationType>(object, method)));
    }
    // public Valve.VR.EVRApplicationError Invoke(System.String pchAppKey, System.Boolean bAutoLaunch)
    // Offset: 0x1C0BD44
    ::Valve::VR::EVRApplicationError Invoke(::StringW pchAppKey, bool bAutoLaunch);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.Boolean bAutoLaunch, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C16B2C
    ::System::IAsyncResult* BeginInvoke(::StringW pchAppKey, bool bAutoLaunch, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C16BCC
    ::Valve::VR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/Valve.VR._SetApplicationAutoLaunch
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_SetApplicationAutoLaunch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_SetApplicationAutoLaunch::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRApplicationError (Valve::VR::IVRApplications::_SetApplicationAutoLaunch::*)(::StringW, bool)>(&Valve::VR::IVRApplications::_SetApplicationAutoLaunch::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bAutoLaunch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_SetApplicationAutoLaunch*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, bAutoLaunch});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_SetApplicationAutoLaunch::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRApplications::_SetApplicationAutoLaunch::*)(::StringW, bool, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRApplications::_SetApplicationAutoLaunch::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bAutoLaunch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_SetApplicationAutoLaunch*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKey, bAutoLaunch, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_SetApplicationAutoLaunch::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRApplicationError (Valve::VR::IVRApplications::_SetApplicationAutoLaunch::*)(::System::IAsyncResult*)>(&Valve::VR::IVRApplications::_SetApplicationAutoLaunch::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_SetApplicationAutoLaunch*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

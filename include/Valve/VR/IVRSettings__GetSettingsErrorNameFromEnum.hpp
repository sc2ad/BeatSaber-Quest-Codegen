// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
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
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
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
NEED_NO_BOX(::Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum*, "Valve.VR", "IVRSettings/_GetSettingsErrorNameFromEnum");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSettings/Valve.VR._GetSettingsErrorNameFromEnum
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10CF0D4
  class IVRSettings::_GetSettingsErrorNameFromEnum : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x232AFFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_GetSettingsErrorNameFromEnum* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_GetSettingsErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(Valve.VR.EVRSettingsError eError)
    // Offset: 0x232B00C
    ::System::IntPtr Invoke(::Valve::VR::EVRSettingsError eError);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRSettingsError eError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x232B284
    ::System::IAsyncResult* BeginInvoke(::Valve::VR::EVRSettingsError eError, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x232B310
    ::System::IntPtr EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/Valve.VR._GetSettingsErrorNameFromEnum
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::*)(::Valve::VR::EVRSettingsError)>(&Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::Invoke)> {
  static const MethodInfo* get() {
    static auto* eError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::*)(::Valve::VR::EVRSettingsError, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::*)(::System::IAsyncResult*)>(&Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

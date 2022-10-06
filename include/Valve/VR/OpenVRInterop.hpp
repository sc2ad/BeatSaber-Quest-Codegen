// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRInitError
  struct EVRInitError;
  // Forward declaring type: EVRApplicationType
  struct EVRApplicationType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: OpenVRInterop
  class OpenVRInterop;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::OpenVRInterop);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::OpenVRInterop*, "Valve.VR", "OpenVRInterop");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.OpenVRInterop
  // [TokenAttribute] Offset: FFFFFFFF
  class OpenVRInterop : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x2AFD084
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenVRInterop* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::OpenVRInterop::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenVRInterop*, creationType>()));
    }
    // static System.UInt32 InitInternal(ref Valve.VR.EVRInitError peError, Valve.VR.EVRApplicationType eApplicationType)
    // Offset: 0x2AFCCFC
    static uint InitInternal(ByRef<::Valve::VR::EVRInitError> peError, ::Valve::VR::EVRApplicationType eApplicationType);
    // static System.Void ShutdownInternal()
    // Offset: 0x2AFCD8C
    static void ShutdownInternal();
    // static System.Boolean IsHmdPresent()
    // Offset: 0x2AFCDFC
    static bool IsHmdPresent();
    // static System.Boolean IsRuntimeInstalled()
    // Offset: 0x2AFCE78
    static bool IsRuntimeInstalled();
    // static System.IntPtr GetStringForHmdError(Valve.VR.EVRInitError error)
    // Offset: 0x2AFCEF4
    static ::System::IntPtr GetStringForHmdError(::Valve::VR::EVRInitError error);
    // static System.IntPtr GetGenericInterface(in System.String pchInterfaceVersion, ref Valve.VR.EVRInitError peError)
    // Offset: 0x2AFC4D4
    static ::System::IntPtr GetGenericInterface(ByRef<::StringW> pchInterfaceVersion, ByRef<::Valve::VR::EVRInitError> peError);
    // static System.Boolean IsInterfaceVersionValid(in System.String pchInterfaceVersion)
    // Offset: 0x2AFCF74
    static bool IsInterfaceVersionValid(ByRef<::StringW> pchInterfaceVersion);
    // static System.UInt32 GetInitToken()
    // Offset: 0x2AFD010
    static uint GetInitToken();
  }; // Valve.VR.OpenVRInterop
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::OpenVRInterop::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::OpenVRInterop::InitInternal
// Il2CppName: InitInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(ByRef<::Valve::VR::EVRInitError>, ::Valve::VR::EVRApplicationType)>(&Valve::VR::OpenVRInterop::InitInternal)> {
  static const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRInitError")->this_arg;
    static auto* eApplicationType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRApplicationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::OpenVRInterop*), "InitInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, eApplicationType});
  }
};
// Writing MetadataGetter for method: Valve::VR::OpenVRInterop::ShutdownInternal
// Il2CppName: ShutdownInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Valve::VR::OpenVRInterop::ShutdownInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::OpenVRInterop*), "ShutdownInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::OpenVRInterop::IsHmdPresent
// Il2CppName: IsHmdPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Valve::VR::OpenVRInterop::IsHmdPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::OpenVRInterop*), "IsHmdPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::OpenVRInterop::IsRuntimeInstalled
// Il2CppName: IsRuntimeInstalled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Valve::VR::OpenVRInterop::IsRuntimeInstalled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::OpenVRInterop*), "IsRuntimeInstalled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::OpenVRInterop::GetStringForHmdError
// Il2CppName: GetStringForHmdError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Valve::VR::EVRInitError)>(&Valve::VR::OpenVRInterop::GetStringForHmdError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRInitError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::OpenVRInterop*), "GetStringForHmdError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: Valve::VR::OpenVRInterop::GetGenericInterface
// Il2CppName: GetGenericInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(ByRef<::StringW>, ByRef<::Valve::VR::EVRInitError>)>(&Valve::VR::OpenVRInterop::GetGenericInterface)> {
  static const MethodInfo* get() {
    static auto* pchInterfaceVersion = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRInitError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::OpenVRInterop*), "GetGenericInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchInterfaceVersion, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::OpenVRInterop::IsInterfaceVersionValid
// Il2CppName: IsInterfaceVersionValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::StringW>)>(&Valve::VR::OpenVRInterop::IsInterfaceVersionValid)> {
  static const MethodInfo* get() {
    static auto* pchInterfaceVersion = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::OpenVRInterop*), "IsInterfaceVersionValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchInterfaceVersion});
  }
};
// Writing MetadataGetter for method: Valve::VR::OpenVRInterop::GetInitToken
// Il2CppName: GetInitToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)()>(&Valve::VR::OpenVRInterop::GetInitToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::OpenVRInterop*), "GetInitToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

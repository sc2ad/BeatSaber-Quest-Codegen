// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserPlatform
  struct UserPlatform;
}
// Completed forward declares
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserPlatformExtension
  class UserPlatformExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::UserPlatformExtension);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::UserPlatformExtension*, "BeatSaberAPI.DataTransferObjects", "UserPlatformExtension");
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.UserPlatformExtension
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class UserPlatformExtension : public ::Il2CppObject {
    public:
    // static field const value: static public System.String kTest
    static constexpr const char* kTest = "Test";
    // Get static field: static public System.String kTest
    static ::StringW _get_kTest();
    // Set static field: static public System.String kTest
    static void _set_kTest(::StringW value);
    // static field const value: static public System.String kSteam
    static constexpr const char* kSteam = "Steam";
    // Get static field: static public System.String kSteam
    static ::StringW _get_kSteam();
    // Set static field: static public System.String kSteam
    static void _set_kSteam(::StringW value);
    // static field const value: static public System.String kPlayStation
    static constexpr const char* kPlayStation = "PlayStation";
    // Get static field: static public System.String kPlayStation
    static ::StringW _get_kPlayStation();
    // Set static field: static public System.String kPlayStation
    static void _set_kPlayStation(::StringW value);
    // static field const value: static public System.String kOculusPC
    static constexpr const char* kOculusPC = "OculusPC";
    // Get static field: static public System.String kOculusPC
    static ::StringW _get_kOculusPC();
    // Set static field: static public System.String kOculusPC
    static void _set_kOculusPC(::StringW value);
    // static field const value: static public System.String kOculusQuest
    static constexpr const char* kOculusQuest = "OculusQuest";
    // Get static field: static public System.String kOculusQuest
    static ::StringW _get_kOculusQuest();
    // Set static field: static public System.String kOculusQuest
    static void _set_kOculusQuest(::StringW value);
    // static public BeatSaberAPI.DataTransferObjects.UserPlatform GetUserPlatformFromSerializedName(System.String name)
    // Offset: 0x13A2B38
    static ::BeatSaberAPI::DataTransferObjects::UserPlatform GetUserPlatformFromSerializedName(::StringW name);
    // static public System.String GetUserPlatformSerializedName(BeatSaberAPI.DataTransferObjects.UserPlatform userPlatform)
    // Offset: 0x13A2C2C
    static ::StringW GetUserPlatformSerializedName(::BeatSaberAPI::DataTransferObjects::UserPlatform userPlatform);
  }; // BeatSaberAPI.DataTransferObjects.UserPlatformExtension
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::UserPlatformExtension::GetUserPlatformFromSerializedName
// Il2CppName: GetUserPlatformFromSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaberAPI::DataTransferObjects::UserPlatform (*)(::StringW)>(&BeatSaberAPI::DataTransferObjects::UserPlatformExtension::GetUserPlatformFromSerializedName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatSaberAPI::DataTransferObjects::UserPlatformExtension*), "GetUserPlatformFromSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::UserPlatformExtension::GetUserPlatformSerializedName
// Il2CppName: GetUserPlatformSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BeatSaberAPI::DataTransferObjects::UserPlatform)>(&BeatSaberAPI::DataTransferObjects::UserPlatformExtension::GetUserPlatformSerializedName)> {
  static const MethodInfo* get() {
    static auto* userPlatform = &::il2cpp_utils::GetClassFromName("BeatSaberAPI.DataTransferObjects", "UserPlatform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatSaberAPI::DataTransferObjects::UserPlatformExtension*), "GetUserPlatformSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userPlatform});
  }
};

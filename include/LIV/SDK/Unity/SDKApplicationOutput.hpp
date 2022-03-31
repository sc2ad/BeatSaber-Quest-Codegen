// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LIV.SDK.Unity.FEATURES
#include "LIV/SDK/Unity/FEATURES.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKApplicationOutput
  struct SDKApplicationOutput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKApplicationOutput, "LIV.SDK.Unity", "SDKApplicationOutput");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKApplicationOutput
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKApplicationOutput/*, public ::System::ValueType*/ {
    public:
    public:
    // public LIV.SDK.Unity.FEATURES supportedFeatures
    // Size: 0x8
    // Offset: 0x0
    ::LIV::SDK::Unity::FEATURES supportedFeatures;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::FEATURES) == 0x8);
    // public System.String engineName
    // Size: 0x8
    // Offset: 0x8
    ::StringW engineName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String engineVersion
    // Size: 0x8
    // Offset: 0x10
    ::StringW engineVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String applicationName
    // Size: 0x8
    // Offset: 0x18
    ::StringW applicationName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String applicationVersion
    // Size: 0x8
    // Offset: 0x20
    ::StringW applicationVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String xrDeviceName
    // Size: 0x8
    // Offset: 0x28
    ::StringW xrDeviceName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String graphicsAPI
    // Size: 0x8
    // Offset: 0x30
    ::StringW graphicsAPI;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String sdkID
    // Size: 0x8
    // Offset: 0x38
    ::StringW sdkID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String sdkVersion
    // Size: 0x8
    // Offset: 0x40
    ::StringW sdkVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: SDKApplicationOutput
    constexpr SDKApplicationOutput(::LIV::SDK::Unity::FEATURES supportedFeatures_ = {}, ::StringW engineName_ = {}, ::StringW engineVersion_ = {}, ::StringW applicationName_ = {}, ::StringW applicationVersion_ = {}, ::StringW xrDeviceName_ = {}, ::StringW graphicsAPI_ = {}, ::StringW sdkID_ = {}, ::StringW sdkVersion_ = {}) noexcept : supportedFeatures{supportedFeatures_}, engineName{engineName_}, engineVersion{engineVersion_}, applicationName{applicationName_}, applicationVersion{applicationVersion_}, xrDeviceName{xrDeviceName_}, graphicsAPI{graphicsAPI_}, sdkID{sdkID_}, sdkVersion{sdkVersion_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public LIV.SDK.Unity.FEATURES supportedFeatures
    ::LIV::SDK::Unity::FEATURES& dyn_supportedFeatures();
    // Get instance field reference: public System.String engineName
    ::StringW& dyn_engineName();
    // Get instance field reference: public System.String engineVersion
    ::StringW& dyn_engineVersion();
    // Get instance field reference: public System.String applicationName
    ::StringW& dyn_applicationName();
    // Get instance field reference: public System.String applicationVersion
    ::StringW& dyn_applicationVersion();
    // Get instance field reference: public System.String xrDeviceName
    ::StringW& dyn_xrDeviceName();
    // Get instance field reference: public System.String graphicsAPI
    ::StringW& dyn_graphicsAPI();
    // Get instance field reference: public System.String sdkID
    ::StringW& dyn_sdkID();
    // Get instance field reference: public System.String sdkVersion
    ::StringW& dyn_sdkVersion();
    // static public LIV.SDK.Unity.SDKApplicationOutput get_empty()
    // Offset: 0x29FA104
    static ::LIV::SDK::Unity::SDKApplicationOutput get_empty();
    // public override System.String ToString()
    // Offset: 0x29FA6CC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKApplicationOutput
  #pragma pack(pop)
  static check_size<sizeof(SDKApplicationOutput), 64 + sizeof(::StringW)> __LIV_SDK_Unity_SDKApplicationOutputSizeCheck;
  static_assert(sizeof(SDKApplicationOutput) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKApplicationOutput::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKApplicationOutput (*)()>(&LIV::SDK::Unity::SDKApplicationOutput::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKApplicationOutput), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKApplicationOutput::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKApplicationOutput::*)()>(&LIV::SDK::Unity::SDKApplicationOutput::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKApplicationOutput), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

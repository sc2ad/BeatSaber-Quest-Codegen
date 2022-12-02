// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRInput::OVRControllerLHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::OVRControllerLHand*, "", "OVRInput/OVRControllerLHand");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x101
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerLHand
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRInput::OVRControllerLHand : public ::GlobalNamespace::OVRInput::OVRControllerBase {
    public:
    // public System.Void .ctor()
    // Offset: 0x1A20A30
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerLHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRInput::OVRControllerLHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerLHand*, creationType>()));
    }
    // public override System.Void ConfigureButtonMap()
    // Offset: 0x1A2736C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureButtonMap()
    void ConfigureButtonMap();
    // public override System.Void ConfigureTouchMap()
    // Offset: 0x1A27514
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureTouchMap()
    void ConfigureTouchMap();
    // public override System.Void ConfigureNearTouchMap()
    // Offset: 0x1A275C4
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureNearTouchMap()
    void ConfigureNearTouchMap();
    // public override System.Void ConfigureAxis1DMap()
    // Offset: 0x1A27614
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis1DMap()
    void ConfigureAxis1DMap();
    // public override System.Void ConfigureAxis2DMap()
    // Offset: 0x1A27664
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis2DMap()
    void ConfigureAxis2DMap();
    // public override System.Byte GetBatteryPercentRemaining()
    // Offset: 0x1A276B4
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Byte OVRControllerBase::GetBatteryPercentRemaining()
    uint8_t GetBatteryPercentRemaining();
  }; // OVRInput/OVRControllerLHand
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureButtonMap
// Il2CppName: ConfigureButtonMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureButtonMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureButtonMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureTouchMap
// Il2CppName: ConfigureTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureTouchMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureNearTouchMap
// Il2CppName: ConfigureNearTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureNearTouchMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureNearTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureAxis1DMap
// Il2CppName: ConfigureAxis1DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureAxis1DMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureAxis1DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureAxis2DMap
// Il2CppName: ConfigureAxis2DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureAxis2DMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureAxis2DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::GetBatteryPercentRemaining
// Il2CppName: GetBatteryPercentRemaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::GetBatteryPercentRemaining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "GetBatteryPercentRemaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

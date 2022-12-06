// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRPlugin/ControllerState4
#include "GlobalNamespace/OVRPlugin_ControllerState4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRInput::OVRControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::OVRControllerBase*, "", "OVRInput/OVRControllerBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x101
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRInput::OVRControllerBase : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualButtonMap
    class VirtualButtonMap;
    // Nested type: ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualTouchMap
    class VirtualTouchMap;
    // Nested type: ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualNearTouchMap
    class VirtualNearTouchMap;
    // Nested type: ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap
    class VirtualAxis1DMap;
    // Nested type: ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap
    class VirtualAxis2DMap;
    public:
    // public OVRInput/Controller controllerType
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::OVRInput::Controller controllerType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    // Padding between fields: controllerType and: buttonMap
    char __padding0[0x4] = {};
    // public OVRInput/OVRControllerBase/VirtualButtonMap buttonMap
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualButtonMap* buttonMap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::OVRControllerBase::VirtualButtonMap*) == 0x8);
    // public OVRInput/OVRControllerBase/VirtualTouchMap touchMap
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualTouchMap* touchMap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::OVRControllerBase::VirtualTouchMap*) == 0x8);
    // public OVRInput/OVRControllerBase/VirtualNearTouchMap nearTouchMap
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualNearTouchMap* nearTouchMap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::OVRControllerBase::VirtualNearTouchMap*) == 0x8);
    // public OVRInput/OVRControllerBase/VirtualAxis1DMap axis1DMap
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap* axis1DMap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap*) == 0x8);
    // public OVRInput/OVRControllerBase/VirtualAxis2DMap axis2DMap
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap* axis2DMap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap*) == 0x8);
    // public OVRPlugin/ControllerState4 previousState
    // Size: 0x60
    // Offset: 0x40
    ::GlobalNamespace::OVRPlugin::ControllerState4 previousState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::ControllerState4) == 0x60);
    // public OVRPlugin/ControllerState4 currentState
    // Size: 0x60
    // Offset: 0xA0
    ::GlobalNamespace::OVRPlugin::ControllerState4 currentState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::ControllerState4) == 0x60);
    // public System.Boolean shouldApplyDeadzone
    // Size: 0x1
    // Offset: 0x100
    bool shouldApplyDeadzone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public OVRInput/Controller controllerType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn_controllerType();
    // Get instance field reference: public OVRInput/OVRControllerBase/VirtualButtonMap buttonMap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualButtonMap*& dyn_buttonMap();
    // Get instance field reference: public OVRInput/OVRControllerBase/VirtualTouchMap touchMap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualTouchMap*& dyn_touchMap();
    // Get instance field reference: public OVRInput/OVRControllerBase/VirtualNearTouchMap nearTouchMap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualNearTouchMap*& dyn_nearTouchMap();
    // Get instance field reference: public OVRInput/OVRControllerBase/VirtualAxis1DMap axis1DMap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap*& dyn_axis1DMap();
    // Get instance field reference: public OVRInput/OVRControllerBase/VirtualAxis2DMap axis2DMap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap*& dyn_axis2DMap();
    // Get instance field reference: public OVRPlugin/ControllerState4 previousState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::ControllerState4& dyn_previousState();
    // Get instance field reference: public OVRPlugin/ControllerState4 currentState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::ControllerState4& dyn_currentState();
    // Get instance field reference: public System.Boolean shouldApplyDeadzone
    [[deprecated("Use field access instead!")]] bool& dyn_shouldApplyDeadzone();
    // public System.Void .ctor()
    // Offset: 0x1A236A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRInput::OVRControllerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerBase*, creationType>()));
    }
    // public OVRInput/Controller Update()
    // Offset: 0x1A2380C
    ::GlobalNamespace::OVRInput::Controller Update();
    // private OVRPlugin/ControllerState4 GetOpenVRControllerState(OVRInput/Controller controllerType)
    // Offset: 0x1A23CE0
    ::GlobalNamespace::OVRPlugin::ControllerState4 GetOpenVRControllerState(::GlobalNamespace::OVRInput::Controller controllerType);
    // public System.Void SetControllerVibration(System.Single frequency, System.Single amplitude)
    // Offset: 0x1A2421C
    void SetControllerVibration(float frequency, float amplitude);
    // public System.Byte GetBatteryPercentRemaining()
    // Offset: 0x1A242A0
    uint8_t GetBatteryPercentRemaining();
    // public System.Void ConfigureButtonMap()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ConfigureButtonMap();
    // public System.Void ConfigureTouchMap()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ConfigureTouchMap();
    // public System.Void ConfigureNearTouchMap()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ConfigureNearTouchMap();
    // public System.Void ConfigureAxis1DMap()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ConfigureAxis1DMap();
    // public System.Void ConfigureAxis2DMap()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ConfigureAxis2DMap();
    // public OVRInput/RawButton ResolveToRawMask(OVRInput/Button virtualMask)
    // Offset: 0x1A20D64
    ::GlobalNamespace::OVRInput::RawButton ResolveToRawMask(::GlobalNamespace::OVRInput::Button virtualMask);
    // public OVRInput/RawTouch ResolveToRawMask(OVRInput/Touch virtualMask)
    // Offset: 0x1A21420
    ::GlobalNamespace::OVRInput::RawTouch ResolveToRawMask(::GlobalNamespace::OVRInput::Touch virtualMask);
    // public OVRInput/RawNearTouch ResolveToRawMask(OVRInput/NearTouch virtualMask)
    // Offset: 0x1A21B54
    ::GlobalNamespace::OVRInput::RawNearTouch ResolveToRawMask(::GlobalNamespace::OVRInput::NearTouch virtualMask);
    // public OVRInput/RawAxis1D ResolveToRawMask(OVRInput/Axis1D virtualMask)
    // Offset: 0x1A2252C
    ::GlobalNamespace::OVRInput::RawAxis1D ResolveToRawMask(::GlobalNamespace::OVRInput::Axis1D virtualMask);
    // public OVRInput/RawAxis2D ResolveToRawMask(OVRInput/Axis2D virtualMask)
    // Offset: 0x1A22A74
    ::GlobalNamespace::OVRInput::RawAxis2D ResolveToRawMask(::GlobalNamespace::OVRInput::Axis2D virtualMask);
  }; // OVRInput/OVRControllerBase
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::OVRControllerBase), 256 + sizeof(bool)> __GlobalNamespace_OVRInput_OVRControllerBaseSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerBase) == 0x101);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput::Controller (GlobalNamespace::OVRInput::OVRControllerBase::*)()>(&GlobalNamespace::OVRInput::OVRControllerBase::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::GetOpenVRControllerState
// Il2CppName: GetOpenVRControllerState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::ControllerState4 (GlobalNamespace::OVRInput::OVRControllerBase::*)(::GlobalNamespace::OVRInput::Controller)>(&GlobalNamespace::OVRInput::OVRControllerBase::GetOpenVRControllerState)> {
  static const MethodInfo* get() {
    static auto* controllerType = &::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "GetOpenVRControllerState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::SetControllerVibration
// Il2CppName: SetControllerVibration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerBase::*)(float, float)>(&GlobalNamespace::OVRInput::OVRControllerBase::SetControllerVibration)> {
  static const MethodInfo* get() {
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* amplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "SetControllerVibration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frequency, amplitude});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::GetBatteryPercentRemaining
// Il2CppName: GetBatteryPercentRemaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::OVRInput::OVRControllerBase::*)()>(&GlobalNamespace::OVRInput::OVRControllerBase::GetBatteryPercentRemaining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "GetBatteryPercentRemaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ConfigureButtonMap
// Il2CppName: ConfigureButtonMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerBase::*)()>(&GlobalNamespace::OVRInput::OVRControllerBase::ConfigureButtonMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ConfigureButtonMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ConfigureTouchMap
// Il2CppName: ConfigureTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerBase::*)()>(&GlobalNamespace::OVRInput::OVRControllerBase::ConfigureTouchMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ConfigureTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ConfigureNearTouchMap
// Il2CppName: ConfigureNearTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerBase::*)()>(&GlobalNamespace::OVRInput::OVRControllerBase::ConfigureNearTouchMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ConfigureNearTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ConfigureAxis1DMap
// Il2CppName: ConfigureAxis1DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerBase::*)()>(&GlobalNamespace::OVRInput::OVRControllerBase::ConfigureAxis1DMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ConfigureAxis1DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ConfigureAxis2DMap
// Il2CppName: ConfigureAxis2DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerBase::*)()>(&GlobalNamespace::OVRInput::OVRControllerBase::ConfigureAxis2DMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ConfigureAxis2DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask
// Il2CppName: ResolveToRawMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput::RawButton (GlobalNamespace::OVRInput::OVRControllerBase::*)(::GlobalNamespace::OVRInput::Button)>(&GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask)> {
  static const MethodInfo* get() {
    static auto* virtualMask = &::il2cpp_utils::GetClassFromName("", "OVRInput/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ResolveToRawMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{virtualMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask
// Il2CppName: ResolveToRawMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput::RawTouch (GlobalNamespace::OVRInput::OVRControllerBase::*)(::GlobalNamespace::OVRInput::Touch)>(&GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask)> {
  static const MethodInfo* get() {
    static auto* virtualMask = &::il2cpp_utils::GetClassFromName("", "OVRInput/Touch")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ResolveToRawMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{virtualMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask
// Il2CppName: ResolveToRawMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput::RawNearTouch (GlobalNamespace::OVRInput::OVRControllerBase::*)(::GlobalNamespace::OVRInput::NearTouch)>(&GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask)> {
  static const MethodInfo* get() {
    static auto* virtualMask = &::il2cpp_utils::GetClassFromName("", "OVRInput/NearTouch")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ResolveToRawMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{virtualMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask
// Il2CppName: ResolveToRawMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput::RawAxis1D (GlobalNamespace::OVRInput::OVRControllerBase::*)(::GlobalNamespace::OVRInput::Axis1D)>(&GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask)> {
  static const MethodInfo* get() {
    static auto* virtualMask = &::il2cpp_utils::GetClassFromName("", "OVRInput/Axis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ResolveToRawMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{virtualMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask
// Il2CppName: ResolveToRawMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput::RawAxis2D (GlobalNamespace::OVRInput::OVRControllerBase::*)(::GlobalNamespace::OVRInput::Axis2D)>(&GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask)> {
  static const MethodInfo* get() {
    static auto* virtualMask = &::il2cpp_utils::GetClassFromName("", "OVRInput/Axis2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase*), "ResolveToRawMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{virtualMask});
  }
};

#pragma once
namespace {
#include "OVR/OpenVR/zzzz__CVRInput_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__InputAnalogActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRInputError_def.hpp"
#include "OVR/OpenVR/zzzz__VRBoneTransform_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalMotionRange_def.hpp"
#include "OVR/OpenVR/zzzz__VRActiveActionSet_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputSkeletalActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__InputOriginInfo_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRInput_def.hpp"
#include "OVR/OpenVR/zzzz__InputDigitalActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSkeletalTransformSpace_def.hpp"
#include "OVR/OpenVR/zzzz__InputPoseActionData_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRInput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRInput::*)(::cordl_internals::intptr_t)>(&::OVR::OpenVR::CVRInput::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26681f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.SetActionManifestPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW)>(&::OVR::OpenVR::CVRInput::SetActionManifestPath)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x266830c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "SetActionManifestPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetActionSetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW, ByRef<uint64_t>)>(&::OVR::OpenVR::CVRInput::GetActionSetHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2668330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetActionSetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetActionHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW, ByRef<uint64_t>)>(&::OVR::OpenVR::CVRInput::GetActionHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2668358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetActionHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetInputSourceHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::StringW, ByRef<uint64_t>)>(&::OVR::OpenVR::CVRInput::GetInputSourceHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2668380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetInputSourceHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.UpdateActionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>, uint32_t)>(&::OVR::OpenVR::CVRInput::UpdateActionState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26683a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "UpdateActionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetDigitalActionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ByRef<::OVR::OpenVR::InputDigitalActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::GetDigitalActionData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26683d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetDigitalActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputDigitalActionData_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetAnalogActionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ByRef<::OVR::OpenVR::InputAnalogActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::GetAnalogActionData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26683f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetAnalogActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputAnalogActionData_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetPoseActionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ByRef<::OVR::OpenVR::InputPoseActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::GetPoseActionData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x266841c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetPoseActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputPoseActionData_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetSkeletalActionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ByRef<::OVR::OpenVR::InputSkeletalActionData_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::GetSkeletalActionData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetSkeletalActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputSkeletalActionData_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetSkeletalBoneData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t>, uint64_t)>(&::OVR::OpenVR::CVRInput::GetSkeletalBoneData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2668464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetSkeletalBoneData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalTransformSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalMotionRange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetSkeletalBoneDataCompressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::cordl_internals::intptr_t, uint32_t, ByRef<uint32_t>, uint64_t)>(&::OVR::OpenVR::CVRInput::GetSkeletalBoneDataCompressed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2668494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetSkeletalBoneDataCompressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalTransformSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalMotionRange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.DecompressSkeletalBoneData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::cordl_internals::intptr_t, uint32_t, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t>)>(&::OVR::OpenVR::CVRInput::DecompressSkeletalBoneData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26684c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "DecompressSkeletalBoneData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.TriggerHapticVibrationAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, float_t, float_t, float_t, float_t, uint64_t)>(&::OVR::OpenVR::CVRInput::TriggerHapticVibrationAction)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26684ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "TriggerHapticVibrationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetActionOrigins
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, uint64_t, ::ArrayW<uint64_t>)>(&::OVR::OpenVR::CVRInput::GetActionOrigins)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2668510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetActionOrigins",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetOriginLocalizedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::CVRInput::GetOriginLocalizedName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x266853c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetOriginLocalizedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.GetOriginTrackedDeviceInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, ByRef<::OVR::OpenVR::InputOriginInfo_t>, uint32_t)>(&::OVR::OpenVR::CVRInput::GetOriginTrackedDeviceInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetOriginTrackedDeviceInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputOriginInfo_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.ShowActionOrigins
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(uint64_t, uint64_t)>(&::OVR::OpenVR::CVRInput::ShowActionOrigins)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "ShowActionOrigins",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRInput.ShowBindingsForActionSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (::OVR::OpenVR::CVRInput::*)(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>, uint32_t, uint64_t)>(&::OVR::OpenVR::CVRInput::ShowBindingsForActionSet)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26685a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "ShowBindingsForActionSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::OVR::OpenVR::CVRInput::__set_FnTable(::OVR::OpenVR::IVRInput value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::IVRInput, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::OVR::OpenVR::IVRInput>(value));
}
constexpr ::OVR::OpenVR::IVRInput ::OVR::OpenVR::CVRInput::__get_FnTable() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::IVRInput, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::CVRInput::CVRInput(::cordl_internals::intptr_t pInterface)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CVRInput>(pInterface))) {}
 void ::OVR::OpenVR::CVRInput::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::SetActionManifestPath(::StringW pchActionManifestPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "SetActionManifestPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, pchActionManifestPath);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetActionSetHandle(::StringW pchActionSetName, ByRef<uint64_t> pHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetActionSetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, pchActionSetName, pHandle);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetActionHandle(::StringW pchActionName, ByRef<uint64_t> pHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetActionHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, pchActionName, pHandle);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetInputSourceHandle(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetInputSourceHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, pchInputSourcePath, pHandle);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::UpdateActionState(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t> pSets, uint32_t unSizeOfVRSelectedActionSet_t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "UpdateActionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, pSets, unSizeOfVRSelectedActionSet_t);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetDigitalActionData(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetDigitalActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputDigitalActionData_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetAnalogActionData(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetAnalogActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputAnalogActionData_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetPoseActionData(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow, ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetPoseActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputPoseActionData_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetSkeletalActionData(uint64_t action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetSkeletalActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputSkeletalActionData_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, action, pActionData, unActionDataSize, ulRestrictToDevice);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetSkeletalBoneData(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t> pTransformArray, uint64_t ulRestrictToDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetSkeletalBoneData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalTransformSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalMotionRange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, action, eTransformSpace, eMotionRange, pTransformArray, ulRestrictToDevice);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetSkeletalBoneDataCompressed(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::cordl_internals::intptr_t pvCompressedData, uint32_t unCompressedSize, ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetSkeletalBoneDataCompressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalTransformSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSkeletalMotionRange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize, ulRestrictToDevice);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::DecompressSkeletalBoneData(::cordl_internals::intptr_t pvCompressedBuffer, uint32_t unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t> pTransformArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "DecompressSkeletalBoneData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::TriggerHapticVibrationAction(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "TriggerHapticVibrationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetActionOrigins(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::ArrayW<uint64_t> originsOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetActionOrigins",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, actionSetHandle, digitalActionHandle, originsOut);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetOriginLocalizedName(uint64_t origin, ::System::Text::StringBuilder pchNameArray, uint32_t unNameArraySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetOriginLocalizedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, origin, pchNameArray, unNameArraySize);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::GetOriginTrackedDeviceInfo(uint64_t origin, ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "GetOriginTrackedDeviceInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::InputOriginInfo_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, origin, pOriginInfo, unOriginInfoSize);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::ShowActionOrigins(uint64_t actionSetHandle, uint64_t ulActionHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "ShowActionOrigins",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, actionSetHandle, ulActionHandle);
}
 ::OVR::OpenVR::EVRInputError ::OVR::OpenVR::CVRInput::ShowBindingsForActionSet(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint64_t originToHighlight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRInput>::get(),
                            "ShowBindingsForActionSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRInputError, false>(const_cast<void*>(instance), ___internal_method, pSets, unSizeOfVRSelectedActionSet_t, originToHighlight);
}
} // end anonymous namespace

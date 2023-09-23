#pragma once
#include "OVR/OpenVR/zzzz__CVRChaperoneSetup_def.hpp"
#include "OVR/OpenVR/zzzz__IVRChaperoneSetup_def.hpp"
#include "OVR/OpenVR/zzzz__HmdQuad_t_def.hpp"
#include "OVR/OpenVR/zzzz__EChaperoneConfigFile_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::CVRChaperoneSetup::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26652cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.CommitWorkingCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::EChaperoneConfigFile)>(&OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26653e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "CommitWorkingCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EChaperoneConfigFile>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.RevertWorkingCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)()>(&OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2665404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "RevertWorkingCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.GetWorkingPlayAreaSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<float_t>, ByRef<float_t>)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2665428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingPlayAreaSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.GetWorkingPlayAreaRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<OVR::OpenVR::HmdQuad_t>)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2665454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingPlayAreaRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdQuad_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.GetWorkingCollisionBoundsInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2665478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingCollisionBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.GetLiveCollisionBoundsInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>)>(&OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2665520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetLiveCollisionBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.GetWorkingSeatedZeroPoseToRawTrackingPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<OVR::OpenVR::HmdMatrix34_t>)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26655c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingSeatedZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.GetWorkingStandingZeroPoseToRawTrackingPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<OVR::OpenVR::HmdMatrix34_t>)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26655ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingStandingZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.SetWorkingPlayAreaSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(float_t, float_t)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2665610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingPlayAreaSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.SetWorkingCollisionBoundsInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(::ArrayW<OVR::OpenVR::HmdQuad_t>)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2665634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingCollisionBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::HmdQuad_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.SetWorkingSeatedZeroPoseToRawTrackingPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<OVR::OpenVR::HmdMatrix34_t>)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2665660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingSeatedZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.SetWorkingStandingZeroPoseToRawTrackingPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<OVR::OpenVR::HmdMatrix34_t>)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2665684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingStandingZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.ReloadFromDisk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::EChaperoneConfigFile)>(&OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26656a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "ReloadFromDisk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EChaperoneConfigFile>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.GetLiveSeatedZeroPoseToRawTrackingPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<OVR::OpenVR::HmdMatrix34_t>)>(&OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26656cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetLiveSeatedZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.SetWorkingCollisionBoundsTagsInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(::ArrayW<uint8_t>)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26656f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingCollisionBoundsTagsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.GetLiveCollisionBoundsTagsInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::ArrayW<uint8_t>>)>(&OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x266571c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetLiveCollisionBoundsTagsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.SetWorkingPhysicalBoundsInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(::ArrayW<OVR::OpenVR::HmdQuad_t>)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26657c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingPhysicalBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::HmdQuad_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.GetLivePhysicalBoundsInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>)>(&OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26657f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetLivePhysicalBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.ExportLiveToBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(System::Text::StringBuilder, ByRef<uint32_t>)>(&OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2665898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "ExportLiveToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRChaperoneSetup.ImportFromBufferToWorking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(::StringW, uint32_t)>(&OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26658c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "ImportFromBufferToWorking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::CVRChaperoneSetup::__set_FnTable(OVR::OpenVR::IVRChaperoneSetup value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IVRChaperoneSetup, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVR::OpenVR::IVRChaperoneSetup>(value));
}
constexpr OVR::OpenVR::IVRChaperoneSetup OVR::OpenVR::CVRChaperoneSetup::__get_FnTable() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IVRChaperoneSetup, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::CVRChaperoneSetup::CVRChaperoneSetup(::cordl_internals::intptr_t pInterface)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CVRChaperoneSetup>(pInterface))) {}
 void OVR::OpenVR::CVRChaperoneSetup::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 bool OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy(OVR::OpenVR::EChaperoneConfigFile configFile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "CommitWorkingCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EChaperoneConfigFile>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, configFile);
}
 void OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "RevertWorkingCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingPlayAreaSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pSizeX, pSizeZ);
}
 bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect(ByRef<OVR::OpenVR::HmdQuad_t> rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingPlayAreaRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdQuad_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, rect);
}
 bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingCollisionBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pQuadsBuffer);
}
 bool OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetLiveCollisionBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pQuadsBuffer);
}
 bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingSeatedZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pmatSeatedZeroPoseToRawTrackingPose);
}
 bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetWorkingStandingZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pmatStandingZeroPoseToRawTrackingPose);
}
 void OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize(float_t sizeX, float_t sizeZ)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingPlayAreaSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sizeX, sizeZ);
}
 void OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo(::ArrayW<OVR::OpenVR::HmdQuad_t> pQuadsBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingCollisionBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::HmdQuad_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pQuadsBuffer);
}
 void OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingSeatedZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pMatSeatedZeroPoseToRawTrackingPose);
}
 void OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose(ByRef<OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingStandingZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pMatStandingZeroPoseToRawTrackingPose);
}
 void OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk(OVR::OpenVR::EChaperoneConfigFile configFile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "ReloadFromDisk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EChaperoneConfigFile>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, configFile);
}
 bool OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetLiveSeatedZeroPoseToRawTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pmatSeatedZeroPoseToRawTrackingPose);
}
 void OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo(::ArrayW<uint8_t> pTagsBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingCollisionBoundsTagsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pTagsBuffer);
}
 bool OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo(ByRef<::ArrayW<uint8_t>> pTagsBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetLiveCollisionBoundsTagsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pTagsBuffer);
}
 bool OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo(::ArrayW<OVR::OpenVR::HmdQuad_t> pQuadsBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "SetWorkingPhysicalBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::HmdQuad_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pQuadsBuffer);
}
 bool OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "GetLivePhysicalBoundsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pQuadsBuffer);
}
 bool OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer(System::Text::StringBuilder pBuffer, ByRef<uint32_t> pnBufferLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "ExportLiveToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pBuffer, pnBufferLength);
}
 bool OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking(::StringW pBuffer, uint32_t nImportFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRChaperoneSetup>::get(),
                            "ImportFromBufferToWorking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pBuffer, nImportFlags);
}

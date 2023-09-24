#pragma once
#include "OVR/OpenVR/zzzz__CVRSpatialAnchors_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSpatialAnchorError_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__SpatialAnchorPose_t_def.hpp"
//  Writing Method size for method: OVR::OpenVR::CVRSpatialAnchors._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSpatialAnchors::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::CVRSpatialAnchors::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x26687a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSpatialAnchors.CreateSpatialAnchorFromDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::CVRSpatialAnchors::*)(::StringW, ByRef<uint32_t>)>(&OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromDescriptor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26688b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            "CreateSpatialAnchorFromDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSpatialAnchors.CreateSpatialAnchorFromPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::CVRSpatialAnchors::*)(uint32_t, OVR::OpenVR::ETrackingUniverseOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t>, ByRef<uint32_t>)>(&OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromPose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26688dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            "CreateSpatialAnchorFromPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::SpatialAnchorPose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSpatialAnchors.GetSpatialAnchorPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::CVRSpatialAnchors::*)(uint32_t, OVR::OpenVR::ETrackingUniverseOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t>)>(&OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            "GetSpatialAnchorPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::SpatialAnchorPose_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSpatialAnchors.GetSpatialAnchorDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::CVRSpatialAnchors::*)(uint32_t, System::Text::StringBuilder, ByRef<uint32_t>)>(&OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorDescriptor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2668928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            "GetSpatialAnchorDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::CVRSpatialAnchors::__set_FnTable(OVR::OpenVR::IVRSpatialAnchors value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IVRSpatialAnchors, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVR::OpenVR::IVRSpatialAnchors>(value));
}
constexpr OVR::OpenVR::IVRSpatialAnchors OVR::OpenVR::CVRSpatialAnchors::__get_FnTable() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IVRSpatialAnchors, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 OVR::OpenVR::CVRSpatialAnchors OVR::OpenVR::CVRSpatialAnchors::New_ctor(::cordl_internals::intptr_t pInterface)  {
OVR::OpenVR::CVRSpatialAnchors o{THROW_UNLESS(::il2cpp_utils::New<OVR::OpenVR::CVRSpatialAnchors>(pInterface))};
return o;
}
 void OVR::OpenVR::CVRSpatialAnchors::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromDescriptor(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            "CreateSpatialAnchorFromDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRSpatialAnchorError, false>(const_cast<void*>(instance), ___internal_method, pchDescriptor, pHandleOut);
}
 OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromPose(uint32_t unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            "CreateSpatialAnchorFromPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::SpatialAnchorPose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRSpatialAnchorError, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, eOrigin, pPose, pHandleOut);
}
 OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorPose(uint32_t unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPoseOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            "GetSpatialAnchorPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::SpatialAnchorPose_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRSpatialAnchorError, false>(const_cast<void*>(instance), ___internal_method, unHandle, eOrigin, pPoseOut);
}
 OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorDescriptor(uint32_t unHandle, System::Text::StringBuilder pchDescriptorOut, ByRef<uint32_t> punDescriptorBufferLenInOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSpatialAnchors>::get(),
                            "GetSpatialAnchorDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRSpatialAnchorError, false>(const_cast<void*>(instance), ___internal_method, unHandle, pchDescriptorOut, punDescriptorBufferLenInOut);
}

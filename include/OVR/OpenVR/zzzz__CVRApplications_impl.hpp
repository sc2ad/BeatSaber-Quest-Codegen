#pragma once
#include "OVR/OpenVR/zzzz__CVRApplications_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__IVRApplications_def.hpp"
#include "OVR/OpenVR/zzzz__AppOverrideKeys_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationProperty_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationTransitionState_def.hpp"
//  Writing Method size for method: OVR::OpenVR::CVRApplications._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRApplications::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::CVRApplications::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2664a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.AddApplicationManifest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW, bool)>(&OVR::OpenVR::CVRApplications::AddApplicationManifest)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2664b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "AddApplicationManifest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.RemoveApplicationManifest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW)>(&OVR::OpenVR::CVRApplications::RemoveApplicationManifest)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "RemoveApplicationManifest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.IsApplicationInstalled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRApplications::*)(::StringW)>(&OVR::OpenVR::CVRApplications::IsApplicationInstalled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "IsApplicationInstalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRApplications::*)()>(&OVR::OpenVR::CVRApplications::GetApplicationCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationKeyByIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(uint32_t, System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::CVRApplications::GetApplicationKeyByIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationKeyByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationKeyByProcessId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(uint32_t, System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::CVRApplications::GetApplicationKeyByProcessId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationKeyByProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.LaunchApplication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW)>(&OVR::OpenVR::CVRApplications::LaunchApplication)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.LaunchTemplateApplication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW, ::StringW, ::ArrayW<OVR::OpenVR::AppOverrideKeys_t>)>(&OVR::OpenVR::CVRApplications::LaunchTemplateApplication)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2664c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchTemplateApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::AppOverrideKeys_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.LaunchApplicationFromMimeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW, ::StringW)>(&OVR::OpenVR::CVRApplications::LaunchApplicationFromMimeType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchApplicationFromMimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.LaunchDashboardOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW)>(&OVR::OpenVR::CVRApplications::LaunchDashboardOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchDashboardOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.CancelApplicationLaunch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRApplications::*)(::StringW)>(&OVR::OpenVR::CVRApplications::CancelApplicationLaunch)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "CancelApplicationLaunch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.IdentifyApplication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(uint32_t, ::StringW)>(&OVR::OpenVR::CVRApplications::IdentifyApplication)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "IdentifyApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationProcessId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRApplications::*)(::StringW)>(&OVR::OpenVR::CVRApplications::GetApplicationProcessId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationsErrorNameFromEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRApplications::*)(OVR::OpenVR::EVRApplicationError)>(&OVR::OpenVR::CVRApplications::GetApplicationsErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2664d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationsErrorNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationPropertyString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRApplications::*)(::StringW, OVR::OpenVR::EVRApplicationProperty, System::Text::StringBuilder, uint32_t, ByRef<OVR::OpenVR::EVRApplicationError>)>(&OVR::OpenVR::CVRApplications::GetApplicationPropertyString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationPropertyString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRApplicationError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationPropertyBool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRApplications::*)(::StringW, OVR::OpenVR::EVRApplicationProperty, ByRef<OVR::OpenVR::EVRApplicationError>)>(&OVR::OpenVR::CVRApplications::GetApplicationPropertyBool)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationPropertyBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRApplicationError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationPropertyUint64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::CVRApplications::*)(::StringW, OVR::OpenVR::EVRApplicationProperty, ByRef<OVR::OpenVR::EVRApplicationError>)>(&OVR::OpenVR::CVRApplications::GetApplicationPropertyUint64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationPropertyUint64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRApplicationError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.SetApplicationAutoLaunch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW, bool)>(&OVR::OpenVR::CVRApplications::SetApplicationAutoLaunch)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2664e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "SetApplicationAutoLaunch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationAutoLaunch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRApplications::*)(::StringW)>(&OVR::OpenVR::CVRApplications::GetApplicationAutoLaunch)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationAutoLaunch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.SetDefaultApplicationForMimeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW, ::StringW)>(&OVR::OpenVR::CVRApplications::SetDefaultApplicationForMimeType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "SetDefaultApplicationForMimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetDefaultApplicationForMimeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRApplications::*)(::StringW, System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::CVRApplications::GetDefaultApplicationForMimeType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetDefaultApplicationForMimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationSupportedMimeTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRApplications::*)(::StringW, System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::CVRApplications::GetApplicationSupportedMimeTypes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationSupportedMimeTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationsThatSupportMimeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRApplications::*)(::StringW, System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::CVRApplications::GetApplicationsThatSupportMimeType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationsThatSupportMimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationLaunchArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRApplications::*)(uint32_t, System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::CVRApplications::GetApplicationLaunchArguments)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationLaunchArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetStartingApplication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::CVRApplications::GetStartingApplication)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetStartingApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetTransitionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationTransitionState (OVR::OpenVR::CVRApplications::*)()>(&OVR::OpenVR::CVRApplications::GetTransitionState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetTransitionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.PerformApplicationPrelaunchCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW)>(&OVR::OpenVR::CVRApplications::PerformApplicationPrelaunchCheck)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "PerformApplicationPrelaunchCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetApplicationsTransitionStateNameFromEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRApplications::*)(OVR::OpenVR::EVRApplicationTransitionState)>(&OVR::OpenVR::CVRApplications::GetApplicationsTransitionStateNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2664f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationsTransitionStateNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationTransitionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.IsQuitUserPromptRequested
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRApplications::*)()>(&OVR::OpenVR::CVRApplications::IsQuitUserPromptRequested)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2665020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "IsQuitUserPromptRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.LaunchInternalProcess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::CVRApplications::*)(::StringW, ::StringW, ::StringW)>(&OVR::OpenVR::CVRApplications::LaunchInternalProcess)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2665044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchInternalProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRApplications.GetCurrentSceneProcessId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRApplications::*)()>(&OVR::OpenVR::CVRApplications::GetCurrentSceneProcessId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2665068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetCurrentSceneProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::CVRApplications::__set_FnTable(OVR::OpenVR::IVRApplications value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IVRApplications, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVR::OpenVR::IVRApplications>(value));
}
constexpr OVR::OpenVR::IVRApplications OVR::OpenVR::CVRApplications::__get_FnTable() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IVRApplications, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 OVR::OpenVR::CVRApplications OVR::OpenVR::CVRApplications::New_ctor(::cordl_internals::intptr_t pInterface)  {
OVR::OpenVR::CVRApplications o{THROW_UNLESS(::il2cpp_utils::New<OVR::OpenVR::CVRApplications>(pInterface))};
return o;
}
 void OVR::OpenVR::CVRApplications::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::AddApplicationManifest(::StringW pchApplicationManifestFullPath, bool bTemporary)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "AddApplicationManifest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchApplicationManifestFullPath, bTemporary);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::RemoveApplicationManifest(::StringW pchApplicationManifestFullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "RemoveApplicationManifest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchApplicationManifestFullPath);
}
 bool OVR::OpenVR::CVRApplications::IsApplicationInstalled(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "IsApplicationInstalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 uint32_t OVR::OpenVR::CVRApplications::GetApplicationCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::GetApplicationKeyByIndex(uint32_t unApplicationIndex, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationKeyByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::GetApplicationKeyByProcessId(uint32_t unProcessId, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationKeyByProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::LaunchApplication(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::LaunchTemplateApplication(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ::ArrayW<OVR::OpenVR::AppOverrideKeys_t> pKeys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchTemplateApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::AppOverrideKeys_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchTemplateAppKey, pchNewAppKey, pKeys);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::LaunchApplicationFromMimeType(::StringW pchMimeType, ::StringW pchArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchApplicationFromMimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchMimeType, pchArgs);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::LaunchDashboardOverlay(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchDashboardOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 bool OVR::OpenVR::CVRApplications::CancelApplicationLaunch(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "CancelApplicationLaunch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::IdentifyApplication(uint32_t unProcessId, ::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "IdentifyApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, unProcessId, pchAppKey);
}
 uint32_t OVR::OpenVR::CVRApplications::GetApplicationProcessId(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 ::StringW OVR::OpenVR::CVRApplications::GetApplicationsErrorNameFromEnum(OVR::OpenVR::EVRApplicationError error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationsErrorNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, error);
}
 uint32_t OVR::OpenVR::CVRApplications::GetApplicationPropertyString(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, System::Text::StringBuilder pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, ByRef<OVR::OpenVR::EVRApplicationError> peError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationPropertyString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRApplicationError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}
 bool OVR::OpenVR::CVRApplications::GetApplicationPropertyBool(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<OVR::OpenVR::EVRApplicationError> peError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationPropertyBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRApplicationError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, eProperty, peError);
}
 uint64_t OVR::OpenVR::CVRApplications::GetApplicationPropertyUint64(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<OVR::OpenVR::EVRApplicationError> peError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationPropertyUint64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRApplicationError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, eProperty, peError);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::SetApplicationAutoLaunch(::StringW pchAppKey, bool bAutoLaunch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "SetApplicationAutoLaunch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, bAutoLaunch);
}
 bool OVR::OpenVR::CVRApplications::GetApplicationAutoLaunch(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationAutoLaunch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::SetDefaultApplicationForMimeType(::StringW pchAppKey, ::StringW pchMimeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "SetDefaultApplicationForMimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, pchMimeType);
}
 bool OVR::OpenVR::CVRApplications::GetDefaultApplicationForMimeType(::StringW pchMimeType, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetDefaultApplicationForMimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen);
}
 bool OVR::OpenVR::CVRApplications::GetApplicationSupportedMimeTypes(::StringW pchAppKey, System::Text::StringBuilder pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationSupportedMimeTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
}
 uint32_t OVR::OpenVR::CVRApplications::GetApplicationsThatSupportMimeType(::StringW pchMimeType, System::Text::StringBuilder pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationsThatSupportMimeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
}
 uint32_t OVR::OpenVR::CVRApplications::GetApplicationLaunchArguments(uint32_t unHandle, System::Text::StringBuilder pchArgs, uint32_t unArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationLaunchArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, unHandle, pchArgs, unArgs);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::GetStartingApplication(System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetStartingApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKeyBuffer, unAppKeyBufferLen);
}
 OVR::OpenVR::EVRApplicationTransitionState OVR::OpenVR::CVRApplications::GetTransitionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetTransitionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationTransitionState, false>(const_cast<void*>(instance), ___internal_method);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::PerformApplicationPrelaunchCheck(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "PerformApplicationPrelaunchCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 ::StringW OVR::OpenVR::CVRApplications::GetApplicationsTransitionStateNameFromEnum(OVR::OpenVR::EVRApplicationTransitionState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetApplicationsTransitionStateNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRApplicationTransitionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, state);
}
 bool OVR::OpenVR::CVRApplications::IsQuitUserPromptRequested()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "IsQuitUserPromptRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 OVR::OpenVR::EVRApplicationError OVR::OpenVR::CVRApplications::LaunchInternalProcess(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "LaunchInternalProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchBinaryPath, pchArguments, pchWorkingDirectory);
}
 uint32_t OVR::OpenVR::CVRApplications::GetCurrentSceneProcessId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRApplications>::get(),
                            "GetCurrentSceneProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}

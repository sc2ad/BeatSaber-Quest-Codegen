#pragma once
#include "OVR/OpenVR/zzzz__CVRScreenshots_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotType_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotPropertyFilenames_def.hpp"
#include "OVR/OpenVR/zzzz__IVRScreenshots_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotError_def.hpp"
//  Writing Method size for method: OVR::OpenVR::CVRScreenshots._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRScreenshots::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::CVRScreenshots::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2667cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRScreenshots.RequestScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(ByRef<uint32_t>, OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&OVR::OpenVR::CVRScreenshots::RequestScreenshot)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2667e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "RequestScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRScreenshots.HookScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(::ArrayW<OVR::OpenVR::EVRScreenshotType>)>(&OVR::OpenVR::CVRScreenshots::HookScreenshot)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2667e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "HookScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::EVRScreenshotType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRScreenshots.GetScreenshotPropertyType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotType (OVR::OpenVR::CVRScreenshots::*)(uint32_t, ByRef<OVR::OpenVR::EVRScreenshotError>)>(&OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2667e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "GetScreenshotPropertyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRScreenshots.GetScreenshotPropertyFilename
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRScreenshots::*)(uint32_t, OVR::OpenVR::EVRScreenshotPropertyFilenames, System::Text::StringBuilder, uint32_t, ByRef<OVR::OpenVR::EVRScreenshotError>)>(&OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyFilename)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2667e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "GetScreenshotPropertyFilename",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotPropertyFilenames>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRScreenshots.UpdateScreenshotProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(uint32_t, float_t)>(&OVR::OpenVR::CVRScreenshots::UpdateScreenshotProgress)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2667eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "UpdateScreenshotProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRScreenshots.TakeStereoScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(ByRef<uint32_t>, ::StringW, ::StringW)>(&OVR::OpenVR::CVRScreenshots::TakeStereoScreenshot)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2667ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "TakeStereoScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRScreenshots.SubmitScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(uint32_t, OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&OVR::OpenVR::CVRScreenshots::SubmitScreenshot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2667f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "SubmitScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::CVRScreenshots::__set_FnTable(OVR::OpenVR::IVRScreenshots value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IVRScreenshots, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVR::OpenVR::IVRScreenshots>(value));
}
constexpr OVR::OpenVR::IVRScreenshots OVR::OpenVR::CVRScreenshots::__get_FnTable() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IVRScreenshots, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::CVRScreenshots::CVRScreenshots(::cordl_internals::intptr_t pInterface)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CVRScreenshots>(pInterface))) {}
 void OVR::OpenVR::CVRScreenshots::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::RequestScreenshot(ByRef<uint32_t> pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "RequestScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::HookScreenshot(::ArrayW<OVR::OpenVR::EVRScreenshotType> pSupportedTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "HookScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::EVRScreenshotType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, pSupportedTypes);
}
 OVR::OpenVR::EVRScreenshotType OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyType(uint32_t screenshotHandle, ByRef<OVR::OpenVR::EVRScreenshotError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "GetScreenshotPropertyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotType, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, pError);
}
 uint32_t OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyFilename(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder pchFilename, uint32_t cchFilename, ByRef<OVR::OpenVR::EVRScreenshotError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "GetScreenshotPropertyFilename",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotPropertyFilenames>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::UpdateScreenshotProgress(uint32_t screenshotHandle, float_t flProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "UpdateScreenshotProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, flProgress);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::TakeStereoScreenshot(ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "TakeStereoScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::CVRScreenshots::SubmitScreenshot(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRScreenshots>::get(),
                            "SubmitScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
}

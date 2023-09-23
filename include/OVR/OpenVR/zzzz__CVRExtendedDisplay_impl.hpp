#pragma once
#include "OVR/OpenVR/zzzz__CVRExtendedDisplay_def.hpp"
#include "OVR/OpenVR/zzzz__IVRExtendedDisplay_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
//  Writing Method size for method: OVR::OpenVR::CVRExtendedDisplay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRExtendedDisplay::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::CVRExtendedDisplay::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2664560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRExtendedDisplay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRExtendedDisplay.GetWindowBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRExtendedDisplay::*)(ByRef<int32_t>, ByRef<int32_t>, ByRef<uint32_t>, ByRef<uint32_t>)>(&OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2664674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRExtendedDisplay>::get(),
                            "GetWindowBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRExtendedDisplay.GetEyeOutputViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRExtendedDisplay::*)(OVR::OpenVR::EVREye, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>)>(&OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26646a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRExtendedDisplay>::get(),
                            "GetEyeOutputViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRExtendedDisplay.GetDXGIOutputInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRExtendedDisplay::*)(ByRef<int32_t>, ByRef<int32_t>)>(&OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26646dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRExtendedDisplay>::get(),
                            "GetDXGIOutputInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::CVRExtendedDisplay::__set_FnTable(OVR::OpenVR::IVRExtendedDisplay value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IVRExtendedDisplay, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVR::OpenVR::IVRExtendedDisplay>(value));
}
constexpr OVR::OpenVR::IVRExtendedDisplay OVR::OpenVR::CVRExtendedDisplay::__get_FnTable() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IVRExtendedDisplay, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::CVRExtendedDisplay::CVRExtendedDisplay(::cordl_internals::intptr_t pInterface)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CVRExtendedDisplay>(pInterface))) {}
 void OVR::OpenVR::CVRExtendedDisplay::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRExtendedDisplay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 void OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds(ByRef<int32_t> pnX, ByRef<int32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRExtendedDisplay>::get(),
                            "GetWindowBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pnX, pnY, pnWidth, pnHeight);
}
 void OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport(OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pnX, ByRef<uint32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRExtendedDisplay>::get(),
                            "GetEyeOutputViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eEye, pnX, pnY, pnWidth, pnHeight);
}
 void OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo(ByRef<int32_t> pnAdapterIndex, ByRef<int32_t> pnAdapterOutputIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRExtendedDisplay>::get(),
                            "GetDXGIOutputInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pnAdapterIndex, pnAdapterOutputIndex);
}

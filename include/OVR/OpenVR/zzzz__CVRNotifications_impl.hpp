#pragma once
#include "OVR/OpenVR/zzzz__CVRNotifications_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationStyle_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationType_def.hpp"
#include "OVR/OpenVR/zzzz__IVRNotifications_def.hpp"
#include "OVR/OpenVR/zzzz__NotificationBitmap_t_def.hpp"
//  Writing Method size for method: OVR::OpenVR::CVRNotifications._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRNotifications::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::CVRNotifications::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2667874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRNotifications>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRNotifications.CreateNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRNotificationError (OVR::OpenVR::CVRNotifications::*)(uint64_t, uint64_t, OVR::OpenVR::EVRNotificationType, ::StringW, OVR::OpenVR::EVRNotificationStyle, ByRef<OVR::OpenVR::NotificationBitmap_t>, ByRef<uint32_t>)>(&OVR::OpenVR::CVRNotifications::CreateNotification)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2667980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRNotifications>::get(),
                            "CreateNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRNotificationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRNotificationStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::NotificationBitmap_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRNotifications.RemoveNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRNotificationError (OVR::OpenVR::CVRNotifications::*)(uint32_t)>(&OVR::OpenVR::CVRNotifications::RemoveNotification)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26679ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRNotifications>::get(),
                            "RemoveNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::CVRNotifications::__set_FnTable(OVR::OpenVR::IVRNotifications value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IVRNotifications, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVR::OpenVR::IVRNotifications>(value));
}
constexpr OVR::OpenVR::IVRNotifications OVR::OpenVR::CVRNotifications::__get_FnTable() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IVRNotifications, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::CVRNotifications::CVRNotifications(::cordl_internals::intptr_t pInterface)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CVRNotifications>(pInterface))) {}
 void OVR::OpenVR::CVRNotifications::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRNotifications>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 OVR::OpenVR::EVRNotificationError OVR::OpenVR::CVRNotifications::CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, OVR::OpenVR::EVRNotificationType type, ::StringW pchText, OVR::OpenVR::EVRNotificationStyle style, ByRef<OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRNotifications>::get(),
                            "CreateNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRNotificationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRNotificationStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::NotificationBitmap_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRNotificationError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
}
 OVR::OpenVR::EVRNotificationError OVR::OpenVR::CVRNotifications::RemoveNotification(uint32_t notificationId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRNotifications>::get(),
                            "RemoveNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRNotificationError, false>(const_cast<void*>(instance), ___internal_method, notificationId);
}

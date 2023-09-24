#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceClass_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedPropertyError_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__HiddenAreaMesh_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedControllerRole_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__EVREventType_def.hpp"
#include "OVR/OpenVR/zzzz__EHiddenAreaMeshType_def.hpp"
#include "OVR/OpenVR/zzzz__EVRControllerAxisType_def.hpp"
#include "OVR/OpenVR/zzzz__EVRButtonId_def.hpp"
#include "OVR/OpenVR/zzzz__EVRFirmwareError_def.hpp"
#include "OVR/OpenVR/zzzz__EDeviceActivityLevel_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
#include "OVR/OpenVR/zzzz__DistortionCoordinates_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_Packed_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_Packed_def.hpp"
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2663f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::*)(ByRef<OVR::OpenVR::VREvent_t_Packed>, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2664058;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::*)(ByRef<OVR::OpenVR::VREvent_t_Packed>, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x266406c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::*)(ByRef<OVR::OpenVR::VREvent_t_Packed>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2664124;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked o{THROW_UNLESS(::il2cpp_utils::New<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>(object, method))};
return o;
}
 void OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::Invoke(ByRef<OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VREvent_t_Packed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pEvent, uncbVREvent);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::BeginInvoke(ByRef<OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VREvent_t_Packed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pEvent, uncbVREvent, callback, object);
}
 bool OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked::EndInvoke(ByRef<OVR::OpenVR::VREvent_t_Packed> pEvent, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VREvent_t_Packed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pEvent, result);
}
// Ctor Parameters [CppParam { name: "pPollNextEvent", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "pPollNextEventPacked", ty: "OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked", modifiers: "", def_value: Some("csnull") }]
constexpr OVR::OpenVR::OVR__OpenVR__CVRSystem__PollNextEventUnion::OVR__OpenVR__CVRSystem__PollNextEventUnion(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent pPollNextEvent, OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked pPollNextEventPacked) noexcept : ::bs_hook::ValueTypeWrapper() {this->pPollNextEvent = pPollNextEvent;
this->pPollNextEventPacked = pPollNextEventPacked;
}
constexpr void OVR::OpenVR::OVR__OpenVR__CVRSystem__PollNextEventUnion::__set_pPollNextEvent(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent, 0x0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent OVR::OpenVR::OVR__OpenVR__CVRSystem__PollNextEventUnion::__get_pPollNextEvent() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::OVR__OpenVR__CVRSystem__PollNextEventUnion::__set_pPollNextEventPacked(OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked, 0x0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked OVR::OpenVR::OVR__OpenVR__CVRSystem__PollNextEventUnion::__get_pPollNextEventPacked() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked, 0x0>(this->__instance);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2664150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::*)(uint32_t, ByRef<OVR::OpenVR::VRControllerState_t_Packed>, uint32_t)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2664214;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::*)(uint32_t, ByRef<OVR::OpenVR::VRControllerState_t_Packed>, uint32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2664228;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::*)(ByRef<OVR::OpenVR::VRControllerState_t_Packed>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26642f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked o{THROW_UNLESS(::il2cpp_utils::New<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>(object, method))};
return o;
}
 void OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::Invoke(uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t_Packed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::BeginInvoke(uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t_Packed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object);
}
 bool OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked::EndInvoke(ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t_Packed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pControllerState, result);
}
// Ctor Parameters [CppParam { name: "pGetControllerState", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState", modifiers: "", def_value: Some("csnull") }, CppParam { name: "pGetControllerStatePacked", ty: "OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked", modifiers: "", def_value: Some("csnull") }]
constexpr OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateUnion::OVR__OpenVR__CVRSystem__GetControllerStateUnion(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState pGetControllerState, OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked pGetControllerStatePacked) noexcept : ::bs_hook::ValueTypeWrapper() {this->pGetControllerState = pGetControllerState;
this->pGetControllerStatePacked = pGetControllerStatePacked;
}
constexpr void OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateUnion::__set_pGetControllerState(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState, 0x0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateUnion::__get_pGetControllerState() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateUnion::__set_pGetControllerStatePacked(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked, 0x0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateUnion::__get_pGetControllerStatePacked() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked, 0x0>(this->__instance);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2664320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::*)(OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ByRef<OVR::OpenVR::VRControllerState_t_Packed>, uint32_t, ByRef<OVR::OpenVR::TrackedDevicePose_t>)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26643e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::*)(OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ByRef<OVR::OpenVR::VRControllerState_t_Packed>, uint32_t, ByRef<OVR::OpenVR::TrackedDevicePose_t>, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26643f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::*)(ByRef<OVR::OpenVR::VRControllerState_t_Packed>, ByRef<OVR::OpenVR::TrackedDevicePose_t>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x266452c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked o{THROW_UNLESS(::il2cpp_utils::New<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>(object, method))};
return o;
}
 void OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t_Packed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t_Packed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback, object);
}
 bool OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked::EndInvoke(ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t_Packed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pControllerState, pTrackedDevicePose, result);
}
// Ctor Parameters [CppParam { name: "pGetControllerStateWithPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose", modifiers: "", def_value: Some("csnull") }, CppParam { name: "pGetControllerStateWithPosePacked", ty: "OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked", modifiers: "", def_value: Some("csnull") }]
constexpr OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion::OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose pGetControllerStateWithPose, OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked pGetControllerStateWithPosePacked) noexcept : ::bs_hook::ValueTypeWrapper() {this->pGetControllerStateWithPose = pGetControllerStateWithPose;
this->pGetControllerStateWithPosePacked = pGetControllerStateWithPosePacked;
}
constexpr void OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion::__set_pGetControllerStateWithPose(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose, 0x0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion::__get_pGetControllerStateWithPose() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion::__set_pGetControllerStateWithPosePacked(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked, 0x0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion::__get_pGetControllerStateWithPosePacked() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked, 0x0>(this->__instance);
}
//  Writing Method size for method: OVR::OpenVR::CVRSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::CVRSystem::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x266303c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetRecommendedRenderTargetSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)(ByRef<uint32_t>, ByRef<uint32_t>)>(&OVR::OpenVR::CVRSystem::GetRecommendedRenderTargetSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2663150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetRecommendedRenderTargetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetProjectionMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdMatrix44_t (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::EVREye, float_t, float_t)>(&OVR::OpenVR::CVRSystem::GetProjectionMatrix)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x266317c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetProjectionMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetProjectionRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::EVREye, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&OVR::OpenVR::CVRSystem::GetProjectionRaw)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26631c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetProjectionRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.ComputeDistortion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::EVREye, float_t, float_t, ByRef<OVR::OpenVR::DistortionCoordinates_t>)>(&OVR::OpenVR::CVRSystem::ComputeDistortion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26631f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ComputeDistortion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::DistortionCoordinates_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetEyeToHeadTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdMatrix34_t (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::EVREye)>(&OVR::OpenVR::CVRSystem::GetEyeToHeadTransform)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x266321c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetEyeToHeadTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetTimeSinceLastVsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)(ByRef<float_t>, ByRef<uint64_t>)>(&OVR::OpenVR::CVRSystem::GetTimeSinceLastVsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2663264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetTimeSinceLastVsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetD3D9AdapterIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::GetD3D9AdapterIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetD3D9AdapterIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetDXGIOutputInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)(ByRef<int32_t>)>(&OVR::OpenVR::CVRSystem::GetDXGIOutputInfo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26632b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetDXGIOutputInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetOutputDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)(ByRef<uint64_t>, OVR::OpenVR::ETextureType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::CVRSystem::GetOutputDevice)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26632dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetOutputDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETextureType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.IsDisplayOnDesktop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::IsDisplayOnDesktop)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "IsDisplayOnDesktop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.SetDisplayVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)(bool)>(&OVR::OpenVR::CVRSystem::SetDisplayVisibility)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2663328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "SetDisplayVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetDeviceToAbsoluteTrackingPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::ETrackingUniverseOrigin, float_t, ::ArrayW<OVR::OpenVR::TrackedDevicePose_t>)>(&OVR::OpenVR::CVRSystem::GetDeviceToAbsoluteTrackingPose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2663350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetDeviceToAbsoluteTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.ResetSeatedZeroPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::ResetSeatedZeroPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x266337c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ResetSeatedZeroPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetSeatedZeroPoseToStandingAbsoluteTrackingPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdMatrix34_t (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26633a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetSeatedZeroPoseToStandingAbsoluteTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetRawZeroPoseToStandingAbsoluteTrackingPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdMatrix34_t (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26633e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetRawZeroPoseToStandingAbsoluteTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetSortedTrackedDeviceIndicesOfClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::ETrackedDeviceClass, ::ArrayW<uint32_t>, uint32_t)>(&OVR::OpenVR::CVRSystem::GetSortedTrackedDeviceIndicesOfClass)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2663430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetSortedTrackedDeviceIndicesOfClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetTrackedDeviceActivityLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EDeviceActivityLevel (OVR::OpenVR::CVRSystem::*)(uint32_t)>(&OVR::OpenVR::CVRSystem::GetTrackedDeviceActivityLevel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetTrackedDeviceActivityLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.ApplyTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)(ByRef<OVR::OpenVR::TrackedDevicePose_t>, ByRef<OVR::OpenVR::TrackedDevicePose_t>, ByRef<OVR::OpenVR::HmdMatrix34_t>)>(&OVR::OpenVR::CVRSystem::ApplyTransform)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ApplyTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetTrackedDeviceIndexForControllerRole
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::ETrackedControllerRole)>(&OVR::OpenVR::CVRSystem::GetTrackedDeviceIndexForControllerRole)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26634a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetTrackedDeviceIndexForControllerRole",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedControllerRole>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetControllerRoleForTrackedDeviceIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::ETrackedControllerRole (OVR::OpenVR::CVRSystem::*)(uint32_t)>(&OVR::OpenVR::CVRSystem::GetControllerRoleForTrackedDeviceIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26634cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetControllerRoleForTrackedDeviceIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetTrackedDeviceClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::ETrackedDeviceClass (OVR::OpenVR::CVRSystem::*)(uint32_t)>(&OVR::OpenVR::CVRSystem::GetTrackedDeviceClass)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26634f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetTrackedDeviceClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.IsTrackedDeviceConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)(uint32_t)>(&OVR::OpenVR::CVRSystem::IsTrackedDeviceConnected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "IsTrackedDeviceConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetBoolTrackedDeviceProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)(uint32_t, OVR::OpenVR::ETrackedDeviceProperty, ByRef<OVR::OpenVR::ETrackedPropertyError>)>(&OVR::OpenVR::CVRSystem::GetBoolTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetBoolTrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetFloatTrackedDeviceProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (OVR::OpenVR::CVRSystem::*)(uint32_t, OVR::OpenVR::ETrackedDeviceProperty, ByRef<OVR::OpenVR::ETrackedPropertyError>)>(&OVR::OpenVR::CVRSystem::GetFloatTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x266355c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetFloatTrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetInt32TrackedDeviceProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (OVR::OpenVR::CVRSystem::*)(uint32_t, OVR::OpenVR::ETrackedDeviceProperty, ByRef<OVR::OpenVR::ETrackedPropertyError>)>(&OVR::OpenVR::CVRSystem::GetInt32TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetInt32TrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetUint64TrackedDeviceProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::CVRSystem::*)(uint32_t, OVR::OpenVR::ETrackedDeviceProperty, ByRef<OVR::OpenVR::ETrackedPropertyError>)>(&OVR::OpenVR::CVRSystem::GetUint64TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26635a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetUint64TrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetMatrix34TrackedDeviceProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdMatrix34_t (OVR::OpenVR::CVRSystem::*)(uint32_t, OVR::OpenVR::ETrackedDeviceProperty, ByRef<OVR::OpenVR::ETrackedPropertyError>)>(&OVR::OpenVR::CVRSystem::GetMatrix34TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26635c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetMatrix34TrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetArrayTrackedDeviceProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRSystem::*)(uint32_t, OVR::OpenVR::ETrackedDeviceProperty, uint32_t, ::cordl_internals::intptr_t, uint32_t, ByRef<OVR::OpenVR::ETrackedPropertyError>)>(&OVR::OpenVR::CVRSystem::GetArrayTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetArrayTrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetStringTrackedDeviceProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRSystem::*)(uint32_t, OVR::OpenVR::ETrackedDeviceProperty, System::Text::StringBuilder, uint32_t, ByRef<OVR::OpenVR::ETrackedPropertyError>)>(&OVR::OpenVR::CVRSystem::GetStringTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetStringTrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetPropErrorNameFromEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::ETrackedPropertyError)>(&OVR::OpenVR::CVRSystem::GetPropErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2663658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetPropErrorNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedPropertyError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.PollNextEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)(ByRef<OVR::OpenVR::VREvent_t>, uint32_t)>(&OVR::OpenVR::CVRSystem::PollNextEvent)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x26636dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "PollNextEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VREvent_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.PollNextEventWithPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::ETrackingUniverseOrigin, ByRef<OVR::OpenVR::VREvent_t>, uint32_t, ByRef<OVR::OpenVR::TrackedDevicePose_t>)>(&OVR::OpenVR::CVRSystem::PollNextEventWithPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "PollNextEventWithPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VREvent_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetEventTypeNameFromEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::EVREventType)>(&OVR::OpenVR::CVRSystem::GetEventTypeNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2663894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetEventTypeNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREventType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetHiddenAreaMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HiddenAreaMesh_t (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::EVREye, OVR::OpenVR::EHiddenAreaMeshType)>(&OVR::OpenVR::CVRSystem::GetHiddenAreaMesh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetHiddenAreaMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EHiddenAreaMeshType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetControllerState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)(uint32_t, ByRef<OVR::OpenVR::VRControllerState_t>, uint32_t)>(&OVR::OpenVR::CVRSystem::GetControllerState)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x266393c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetControllerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetControllerStateWithPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ByRef<OVR::OpenVR::VRControllerState_t>, uint32_t, ByRef<OVR::OpenVR::TrackedDevicePose_t>)>(&OVR::OpenVR::CVRSystem::GetControllerStateWithPose)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2663b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetControllerStateWithPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.TriggerHapticPulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)(uint32_t, uint32_t, uint16_t)>(&OVR::OpenVR::CVRSystem::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetButtonIdNameFromEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::EVRButtonId)>(&OVR::OpenVR::CVRSystem::GetButtonIdNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2663d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetButtonIdNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRButtonId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.GetControllerAxisTypeNameFromEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRSystem::*)(OVR::OpenVR::EVRControllerAxisType)>(&OVR::OpenVR::CVRSystem::GetControllerAxisTypeNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2663ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetControllerAxisTypeNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRControllerAxisType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.IsInputAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::IsInputAvailable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "IsInputAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.IsSteamVRDrawingControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::IsSteamVRDrawingControllers)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "IsSteamVRDrawingControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.ShouldApplicationPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::ShouldApplicationPause)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ShouldApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.ShouldApplicationReduceRenderingWork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::ShouldApplicationReduceRenderingWork)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ShouldApplicationReduceRenderingWork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.DriverDebugRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::CVRSystem::*)(uint32_t, ::StringW, System::Text::StringBuilder, uint32_t)>(&OVR::OpenVR::CVRSystem::DriverDebugRequest)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "DriverDebugRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.PerformFirmwareUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRFirmwareError (OVR::OpenVR::CVRSystem::*)(uint32_t)>(&OVR::OpenVR::CVRSystem::PerformFirmwareUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "PerformFirmwareUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.AcknowledgeQuit_Exiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::AcknowledgeQuit_Exiting)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "AcknowledgeQuit_Exiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRSystem.AcknowledgeQuit_UserPrompt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSystem::*)()>(&OVR::OpenVR::CVRSystem::AcknowledgeQuit_UserPrompt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "AcknowledgeQuit_UserPrompt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::CVRSystem::__set_FnTable(OVR::OpenVR::IVRSystem value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IVRSystem, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVR::OpenVR::IVRSystem>(value));
}
constexpr OVR::OpenVR::IVRSystem OVR::OpenVR::CVRSystem::__get_FnTable() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IVRSystem, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 OVR::OpenVR::CVRSystem OVR::OpenVR::CVRSystem::New_ctor(::cordl_internals::intptr_t pInterface)  {
OVR::OpenVR::CVRSystem o{THROW_UNLESS(::il2cpp_utils::New<OVR::OpenVR::CVRSystem>(pInterface))};
return o;
}
 void OVR::OpenVR::CVRSystem::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 void OVR::OpenVR::CVRSystem::GetRecommendedRenderTargetSize(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetRecommendedRenderTargetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pnWidth, pnHeight);
}
 OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::CVRSystem::GetProjectionMatrix(OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetProjectionMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::HmdMatrix44_t, false>(const_cast<void*>(instance), ___internal_method, eEye, fNearZ, fFarZ);
}
 void OVR::OpenVR::CVRSystem::GetProjectionRaw(OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetProjectionRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom);
}
 bool OVR::OpenVR::CVRSystem::ComputeDistortion(OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ByRef<OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ComputeDistortion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::DistortionCoordinates_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, eEye, fU, fV, pDistortionCoordinates);
}
 OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetEyeToHeadTransform(OVR::OpenVR::EVREye eEye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetEyeToHeadTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::HmdMatrix34_t, false>(const_cast<void*>(instance), ___internal_method, eEye);
}
 bool OVR::OpenVR::CVRSystem::GetTimeSinceLastVsync(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetTimeSinceLastVsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter);
}
 int32_t OVR::OpenVR::CVRSystem::GetD3D9AdapterIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetD3D9AdapterIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVR::OpenVR::CVRSystem::GetDXGIOutputInfo(ByRef<int32_t> pnAdapterIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetDXGIOutputInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pnAdapterIndex);
}
 void OVR::OpenVR::CVRSystem::GetOutputDevice(ByRef<uint64_t> pnDevice, OVR::OpenVR::ETextureType textureType, ::cordl_internals::intptr_t pInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetOutputDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETextureType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pnDevice, textureType, pInstance);
}
 bool OVR::OpenVR::CVRSystem::IsDisplayOnDesktop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "IsDisplayOnDesktop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVR::OpenVR::CVRSystem::SetDisplayVisibility(bool bIsVisibleOnDesktop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "SetDisplayVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bIsVisibleOnDesktop);
}
 void OVR::OpenVR::CVRSystem::GetDeviceToAbsoluteTrackingPose(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow, ::ArrayW<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePoseArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetDeviceToAbsoluteTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<OVR::OpenVR::TrackedDevicePose_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray);
}
 void OVR::OpenVR::CVRSystem::ResetSeatedZeroPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ResetSeatedZeroPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetSeatedZeroPoseToStandingAbsoluteTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::HmdMatrix34_t, false>(const_cast<void*>(instance), ___internal_method);
}
 OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetRawZeroPoseToStandingAbsoluteTrackingPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::HmdMatrix34_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint32_t OVR::OpenVR::CVRSystem::GetSortedTrackedDeviceIndicesOfClass(OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::ArrayW<uint32_t> punTrackedDeviceIndexArray, uint32_t unRelativeToTrackedDeviceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetSortedTrackedDeviceIndicesOfClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, eTrackedDeviceClass, punTrackedDeviceIndexArray, unRelativeToTrackedDeviceIndex);
}
 OVR::OpenVR::EDeviceActivityLevel OVR::OpenVR::CVRSystem::GetTrackedDeviceActivityLevel(uint32_t unDeviceId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetTrackedDeviceActivityLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EDeviceActivityLevel, false>(const_cast<void*>(instance), ___internal_method, unDeviceId);
}
 void OVR::OpenVR::CVRSystem::ApplyTransform(ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<OVR::OpenVR::HmdMatrix34_t> pTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ApplyTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pOutputPose, pTrackedDevicePose, pTransform);
}
 uint32_t OVR::OpenVR::CVRSystem::GetTrackedDeviceIndexForControllerRole(OVR::OpenVR::ETrackedControllerRole unDeviceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetTrackedDeviceIndexForControllerRole",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedControllerRole>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, unDeviceType);
}
 OVR::OpenVR::ETrackedControllerRole OVR::OpenVR::CVRSystem::GetControllerRoleForTrackedDeviceIndex(uint32_t unDeviceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetControllerRoleForTrackedDeviceIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::ETrackedControllerRole, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex);
}
 OVR::OpenVR::ETrackedDeviceClass OVR::OpenVR::CVRSystem::GetTrackedDeviceClass(uint32_t unDeviceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetTrackedDeviceClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::ETrackedDeviceClass, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex);
}
 bool OVR::OpenVR::CVRSystem::IsTrackedDeviceConnected(uint32_t unDeviceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "IsTrackedDeviceConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex);
}
 bool OVR::OpenVR::CVRSystem::GetBoolTrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetBoolTrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, prop, pError);
}
 float_t OVR::OpenVR::CVRSystem::GetFloatTrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetFloatTrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, prop, pError);
}
 int32_t OVR::OpenVR::CVRSystem::GetInt32TrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetInt32TrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, prop, pError);
}
 uint64_t OVR::OpenVR::CVRSystem::GetUint64TrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetUint64TrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, prop, pError);
}
 OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetMatrix34TrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetMatrix34TrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::HmdMatrix34_t, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, prop, pError);
}
 uint32_t OVR::OpenVR::CVRSystem::GetArrayTrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::cordl_internals::intptr_t pBuffer, uint32_t unBufferSize, ByRef<OVR::OpenVR::ETrackedPropertyError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetArrayTrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
}
 uint32_t OVR::OpenVR::CVRSystem::GetStringTrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::ETrackedPropertyError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetStringTrackedDeviceProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedDeviceProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::ETrackedPropertyError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}
 ::StringW OVR::OpenVR::CVRSystem::GetPropErrorNameFromEnum(OVR::OpenVR::ETrackedPropertyError error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetPropErrorNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackedPropertyError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, error);
}
 bool OVR::OpenVR::CVRSystem::PollNextEvent(ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "PollNextEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VREvent_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pEvent, uncbVREvent);
}
 bool OVR::OpenVR::CVRSystem::PollNextEventWithPose(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "PollNextEventWithPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VREvent_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}
 ::StringW OVR::OpenVR::CVRSystem::GetEventTypeNameFromEnum(OVR::OpenVR::EVREventType eType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetEventTypeNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREventType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, eType);
}
 OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::CVRSystem::GetHiddenAreaMesh(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetHiddenAreaMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EHiddenAreaMeshType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::HiddenAreaMesh_t, false>(const_cast<void*>(instance), ___internal_method, eEye, type);
}
 bool OVR::OpenVR::CVRSystem::GetControllerState(uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetControllerState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
 bool OVR::OpenVR::CVRSystem::GetControllerStateWithPose(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetControllerStateWithPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::TrackedDevicePose_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
 void OVR::OpenVR::CVRSystem::TriggerHapticPulse(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}
 ::StringW OVR::OpenVR::CVRSystem::GetButtonIdNameFromEnum(OVR::OpenVR::EVRButtonId eButtonId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetButtonIdNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRButtonId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, eButtonId);
}
 ::StringW OVR::OpenVR::CVRSystem::GetControllerAxisTypeNameFromEnum(OVR::OpenVR::EVRControllerAxisType eAxisType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "GetControllerAxisTypeNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRControllerAxisType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, eAxisType);
}
 bool OVR::OpenVR::CVRSystem::IsInputAvailable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "IsInputAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVR::OpenVR::CVRSystem::IsSteamVRDrawingControllers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "IsSteamVRDrawingControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVR::OpenVR::CVRSystem::ShouldApplicationPause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ShouldApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVR::OpenVR::CVRSystem::ShouldApplicationReduceRenderingWork()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "ShouldApplicationReduceRenderingWork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 uint32_t OVR::OpenVR::CVRSystem::DriverDebugRequest(uint32_t unDeviceIndex, ::StringW pchRequest, System::Text::StringBuilder pchResponseBuffer, uint32_t unResponseBufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "DriverDebugRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}
 OVR::OpenVR::EVRFirmwareError OVR::OpenVR::CVRSystem::PerformFirmwareUpdate(uint32_t unDeviceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "PerformFirmwareUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRFirmwareError, false>(const_cast<void*>(instance), ___internal_method, unDeviceIndex);
}
 void OVR::OpenVR::CVRSystem::AcknowledgeQuit_Exiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "AcknowledgeQuit_Exiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVR::OpenVR::CVRSystem::AcknowledgeQuit_UserPrompt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRSystem>::get(),
                            "AcknowledgeQuit_UserPrompt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

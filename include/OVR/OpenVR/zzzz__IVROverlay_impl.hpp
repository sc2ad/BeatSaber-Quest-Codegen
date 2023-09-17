#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "OVR/OpenVR/zzzz__EVROverlayError_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionResults_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionParams_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__EDualAnalogWhich_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayFlags_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayInputMethod_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "OVR/OpenVR/zzzz__EColorSpace_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayTransformType_def.hpp"
#include "OVR/OpenVR/zzzz__EOverlayDirection_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdRect2_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_t_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRMessageOverlayResponse_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26514e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::*)(::StringW, ByRef<uint64_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26515b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::*)(::StringW, ByRef<uint64_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26515cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::*)(ByRef<uint64_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2651660;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::____OVR__OpenVR__IVROverlay___FindOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___FindOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::Invoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pchOverlayKey, pOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::BeginInvoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchOverlayKey, pOverlayHandle, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay::EndInvoke(ByRef<uint64_t> pOverlayHandle, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pOverlayHandle, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x265168c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::*)(::StringW, ::StringW, ByRef<uint64_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2651764;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::*)(::StringW, ::StringW, ByRef<uint64_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2651778;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::*)(ByRef<uint64_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2651818;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::____OVR__OpenVR__IVROverlay___CreateOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___CreateOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::Invoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay::EndInvoke(ByRef<uint64_t> pOverlayHandle, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pOverlayHandle, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2651844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2651908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x265191c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26519a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::____OVR__OpenVR__IVROverlay___DestroyOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___DestroyOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::Invoke(uint64_t ulOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26519c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2651a8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2651aa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2651b24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::Invoke(uint64_t ulOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2651b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2651c08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2651c1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2651c3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint64_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 uint64_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2651c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::*)(uint64_t, ::System::Text::StringBuilder, uint32_t, ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2651d28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::*)(uint64_t, ::System::Text::StringBuilder, uint32_t, ByRef<::OVR::OpenVR::EVROverlayError>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2651d3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::*)(ByRef<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2651e2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::____OVR__OpenVR__IVROverlay___GetOverlayKey(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayKey>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVROverlayError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVROverlayError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey::EndInvoke(ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVROverlayError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pError, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2651e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::*)(uint64_t, ::System::Text::StringBuilder, uint32_t, ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2651f1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::*)(uint64_t, ::System::Text::StringBuilder, uint32_t, ByRef<::OVR::OpenVR::EVROverlayError>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2651f30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::*)(ByRef<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2652020;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::____OVR__OpenVR__IVROverlay___GetOverlayName(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayName>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVROverlayError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVROverlayError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName::EndInvoke(ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVROverlayError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pError, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265204c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::*)(uint64_t, ::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2652110;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::*)(uint64_t, ::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2652124;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26521b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::____OVR__OpenVR__IVROverlay___SetOverlayName(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayName>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::Invoke(uint64_t ulOverlayHandle, ::StringW pchName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchName);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchName, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchName, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26521d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::*)(uint64_t, ::cordl_internals::intptr_t, uint32_t, ByRef<uint32_t>, ByRef<uint32_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265229c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::*)(uint64_t, ::cordl_internals::intptr_t, uint32_t, ByRef<uint32_t>, ByRef<uint32_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::BeginInvoke)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x26522b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::*)(ByRef<uint32_t>, ByRef<uint32_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26523c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::____OVR__OpenVR__IVROverlay___GetOverlayImageData(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayImageData>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::Invoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::BeginInvoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData::EndInvoke(ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, punWidth, punHeight, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26523fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::*)(::OVR::OpenVR::EVROverlayError)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26524c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::*)(::OVR::OpenVR::EVROverlayError, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26524d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2652558;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::cordl_internals::intptr_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::Invoke(::OVR::OpenVR::EVROverlayError error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVROverlayError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, error);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVROverlayError error, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVROverlayError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, error, callback, object);
}
 ::cordl_internals::intptr_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2652580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::*)(uint64_t, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2652644;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::*)(uint64_t, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2652658;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265270c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle, uint32_t unPID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unPID);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unPID, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unPID, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2652734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26527f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x265280c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2652890;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26528b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, bool)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x265297c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, bool, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2652994;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2652a7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::____OVR__OpenVR__IVROverlay___SetOverlayFlag(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayFlag>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2652aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, ByRef<bool>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2652b68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, ByRef<bool>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2652b7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::*)(ByRef<bool>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2652c64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::____OVR__OpenVR__IVROverlay___GetOverlayFlag(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayFlag>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag::EndInvoke(ByRef<bool> pbEnabled, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pbEnabled, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2652c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::*)(uint64_t, float_t, float_t, float_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2652d54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::*)(uint64_t, float_t, float_t, float_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2652d68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2652e48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::____OVR__OpenVR__IVROverlay___SetOverlayColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayColor>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::Invoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::BeginInvoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2652e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::*)(uint64_t, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2652f34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::*)(uint64_t, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2652f48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::*)(ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2653038;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::____OVR__OpenVR__IVROverlay___GetOverlayColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayColor>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor::EndInvoke(ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pfRed, pfGreen, pfBlue, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265306c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::*)(uint64_t, float_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2653130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::*)(uint64_t, float_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2653144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26531f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::____OVR__OpenVR__IVROverlay___SetOverlayAlpha(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayAlpha>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, float_t fAlpha)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fAlpha);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, float_t fAlpha, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fAlpha, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2653220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::*)(uint64_t, ByRef<float_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26532e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::*)(uint64_t, ByRef<float_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26532f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::*)(ByRef<float_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26533b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::____OVR__OpenVR__IVROverlay___GetOverlayAlpha(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayAlpha>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfAlpha);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfAlpha, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha::EndInvoke(ByRef<float_t> pfAlpha, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pfAlpha, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26533dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::*)(uint64_t, float_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26534a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::*)(uint64_t, float_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26534b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2653568;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::Invoke(uint64_t ulOverlayHandle, float_t fTexelAspect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fTexelAspect);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::BeginInvoke(uint64_t ulOverlayHandle, float_t fTexelAspect, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fTexelAspect, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2653590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::*)(uint64_t, ByRef<float_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2653654;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::*)(uint64_t, ByRef<float_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2653668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::*)(ByRef<float_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2653720;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfTexelAspect);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfTexelAspect, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect::EndInvoke(ByRef<float_t> pfTexelAspect, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pfTexelAspect, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265374c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::*)(uint64_t, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2653810;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::*)(uint64_t, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2653824;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26538d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, uint32_t unSortOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unSortOrder);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unSortOrder, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unSortOrder, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2653900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::*)(uint64_t, ByRef<uint32_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26539c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::*)(uint64_t, ByRef<uint32_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26539d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::*)(ByRef<uint32_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2653a90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, punSortOrder);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, punSortOrder, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder::EndInvoke(ByRef<uint32_t> punSortOrder, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, punSortOrder, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2653abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::*)(uint64_t, float_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2653b80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::*)(uint64_t, float_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2653b94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2653c48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::Invoke(uint64_t ulOverlayHandle, float_t fWidthInMeters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fWidthInMeters);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::BeginInvoke(uint64_t ulOverlayHandle, float_t fWidthInMeters, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fWidthInMeters, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2653c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::*)(uint64_t, ByRef<float_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2653d34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::*)(uint64_t, ByRef<float_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2653d48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::*)(ByRef<float_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2653e00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfWidthInMeters);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfWidthInMeters, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters::EndInvoke(ByRef<float_t> pfWidthInMeters, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pfWidthInMeters, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2653e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, float_t, float_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2653ef0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, float_t, float_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2653f04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2653fcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::Invoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2653ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, ByRef<float_t>, ByRef<float_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26540b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, ByRef<float_t>, ByRef<float_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26540cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::*)(ByRef<float_t>, ByRef<float_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26541a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke(ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pfMinDistanceInMeters, pfMaxDistanceInMeters, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26541d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::*)(uint64_t, ::OVR::OpenVR::EColorSpace)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2654298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::*)(uint64_t, ::OVR::OpenVR::EColorSpace, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26542ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2654360;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EColorSpace>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eTextureColorSpace);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EColorSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eTextureColorSpace, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2654388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::*)(uint64_t, ByRef<::OVR::OpenVR::EColorSpace>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265444c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::*)(uint64_t, ByRef<::OVR::OpenVR::EColorSpace>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2654460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::*)(ByRef<::OVR::OpenVR::EColorSpace>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2654518;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EColorSpace>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, peTextureColorSpace);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EColorSpace>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, peTextureColorSpace, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace::EndInvoke(ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EColorSpace>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, peTextureColorSpace, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2654544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::*)(uint64_t, ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2654608;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::*)(uint64_t, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x265461c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::*)(ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26546d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pOverlayTextureBounds, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds::EndInvoke(ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pOverlayTextureBounds, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2654700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::*)(uint64_t, ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26547c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::*)(uint64_t, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26547d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::*)(ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2654890;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pOverlayTextureBounds, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds::EndInvoke(ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pOverlayTextureBounds, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26548bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::*)(uint64_t, ::System::Text::StringBuilder, uint32_t, ByRef<::OVR::OpenVR::HmdColor_t>, ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2654980;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::*)(uint64_t, ::System::Text::StringBuilder, uint32_t, ByRef<::OVR::OpenVR::HmdColor_t>, ByRef<::OVR::OpenVR::EVROverlayError>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2654994;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::*)(ByRef<::OVR::OpenVR::HmdColor_t>, ByRef<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2654ab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::HmdColor_t> pColor, ByRef<::OVR::OpenVR::EVROverlayError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdColor_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVROverlayError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::HmdColor_t> pColor, ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdColor_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVROverlayError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel::EndInvoke(ByRef<::OVR::OpenVR::HmdColor_t> pColor, ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdColor_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVROverlayError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pColor, pError, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2654aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::*)(uint64_t, ::StringW, ByRef<::OVR::OpenVR::HmdColor_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2654bb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::*)(uint64_t, ::StringW, ByRef<::OVR::OpenVR::HmdColor_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2654bc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::*)(ByRef<::OVR::OpenVR::HmdColor_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2654c84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::Invoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<::OVR::OpenVR::HmdColor_t> pColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdColor_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchRenderModel, pColor);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<::OVR::OpenVR::HmdColor_t> pColor, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdColor_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchRenderModel, pColor, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel::EndInvoke(ByRef<::OVR::OpenVR::HmdColor_t> pColor, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdColor_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pColor, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2654cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayTransformType>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2654d74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayTransformType>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2654d88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::*)(ByRef<::OVR::OpenVR::VROverlayTransformType>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2654e40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::____OVR__OpenVR__IVROverlay___GetOverlayTransformType(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTransformType>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayTransformType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, peTransformType);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayTransformType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, peTransformType, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType::EndInvoke(ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayTransformType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, peTransformType, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2654e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2654f30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2654f44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x265502c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pmatTrackingOriginToOverlayTransform, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2655058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::*)(uint64_t, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265511c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::*)(uint64_t, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2655130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::*)(ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x265521c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute::EndInvoke(ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2655250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::*)(uint64_t, uint32_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2655314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::*)(uint64_t, uint32_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2655328;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2655410;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::Invoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pmatTrackedDeviceToOverlayTransform, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265543c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::*)(uint64_t, ByRef<uint32_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2655500;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::*)(uint64_t, ByRef<uint32_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2655514;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::*)(ByRef<uint32_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2655600;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative::EndInvoke(ByRef<uint32_t> punTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2655634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::*)(uint64_t, uint32_t, ::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26556f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::*)(uint64_t, uint32_t, ::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x265570c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26557c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::Invoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26557f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::*)(uint64_t, ByRef<uint32_t>, ::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26558b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::*)(uint64_t, ByRef<uint32_t>, ::System::Text::StringBuilder, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26558c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::*)(ByRef<uint32_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26559a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex, ::System::Text::StringBuilder pchComponentName, uint32_t unComponentNameSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex, ::System::Text::StringBuilder pchComponentName, uint32_t unComponentNameSize, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent::EndInvoke(ByRef<uint32_t> punDeviceIndex, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, punDeviceIndex, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26559cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::*)(uint64_t, ByRef<uint64_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2655a90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::*)(uint64_t, ByRef<uint64_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2655aa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::*)(ByRef<uint64_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2655b78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::Invoke(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative::EndInvoke(ByRef<uint64_t> ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2655bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::*)(uint64_t, uint64_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2655c70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::*)(uint64_t, uint64_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2655c84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2655d50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::Invoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pmatParentOverlayToOverlayTransform, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2655d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2655e40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2655e54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2655ed8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::____OVR__OpenVR__IVROverlay___ShowOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___ShowOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::Invoke(uint64_t ulOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2655f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2655fc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2655fd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265605c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::____OVR__OpenVR__IVROverlay___HideOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___HideOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::Invoke(uint64_t ulOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2656084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2656148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x265615c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26561e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::____OVR__OpenVR__IVROverlay___IsOverlayVisible(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___IsOverlayVisible>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::Invoke(uint64_t ulOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2656208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26562cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::BeginInvoke)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x26562e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26563f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdVector2_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdVector2_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pmatTransform, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2656424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::*)(uint64_t, ByRef<::OVR::OpenVR::VREvent_t>, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26564e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::*)(uint64_t, ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26564fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::*)(ByRef<::OVR::OpenVR::VREvent_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26565e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pEvent, uncbVREvent);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pEvent, uncbVREvent, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent::EndInvoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pEvent, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2656610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayInputMethod>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26566d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayInputMethod>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26566e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::*)(ByRef<::OVR::OpenVR::VROverlayInputMethod>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26567a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayInputMethod>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, peInputMethod);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayInputMethod>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, peInputMethod, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod::EndInvoke(ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayInputMethod>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, peInputMethod, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26567cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::*)(uint64_t, ::OVR::OpenVR::VROverlayInputMethod)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2656890;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::*)(uint64_t, ::OVR::OpenVR::VROverlayInputMethod, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26568a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2656958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayInputMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eInputMethod);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayInputMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eInputMethod, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2656980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::*)(uint64_t, ByRef<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2656a44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::*)(uint64_t, ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2656a58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::*)(ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2656b10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdVector2_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pvecMouseScale);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pvecMouseScale, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale::EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pvecMouseScale, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2656b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::*)(uint64_t, ByRef<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2656c00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::*)(uint64_t, ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2656c14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::*)(ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2656ccc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdVector2_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pvecMouseScale);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pvecMouseScale, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale::EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pvecMouseScale, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2656cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2656dbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2656dd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::*)(ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2656ebc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pParams, pResults);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pParams, pResults, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection::EndInvoke(ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pParams, pResults, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2656ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2656fb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2656fc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265704c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::Invoke(uint64_t ulOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2657074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2657130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2657144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2657164;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint64_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 uint64_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265718c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2657250;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2657264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26572e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::Invoke(uint64_t ulNewFocusOverlay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulNewFocusOverlay);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::BeginInvoke(uint64_t ulNewFocusOverlay, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulNewFocusOverlay, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2657310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26573d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x26573e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26574b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EOverlayDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, eDirection, ulFrom, ulTo);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EOverlayDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eDirection, ulFrom, ulTo, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26574dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26575a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26575b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2657668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EOverlayDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, eDirection, ulFrom);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EOverlayDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eDirection, ulFrom, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2657690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::cordl_internals::intptr_t, float_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2657754;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::cordl_internals::intptr_t, float_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2657768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265787c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::cordl_internals::intptr_t vCenter, float_t fRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EDualAnalogWhich>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlay, eWhich, vCenter, fRadius);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::cordl_internals::intptr_t vCenter, float_t fRadius, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EDualAnalogWhich>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlay, eWhich, vCenter, fRadius, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26578a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<float_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2657968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<float_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x265797c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::*)(ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<float_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2657a98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EDualAnalogWhich>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EDualAnalogWhich>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform::EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pvCenter, pfRadius, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2657acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::*)(uint64_t, ByRef<::OVR::OpenVR::Texture_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2657b90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::*)(uint64_t, ByRef<::OVR::OpenVR::Texture_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2657ba4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::*)(ByRef<::OVR::OpenVR::Texture_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2657c5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::____OVR__OpenVR__IVROverlay___SetOverlayTexture(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayTexture>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::Texture_t> pTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Texture_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pTexture);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::Texture_t> pTexture, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Texture_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pTexture, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture::EndInvoke(ByRef<::OVR::OpenVR::Texture_t> pTexture, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Texture_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pTexture, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2657c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2657d4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2657d60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2657de4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::____OVR__OpenVR__IVROverlay___ClearOverlayTexture(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___ClearOverlayTexture>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::Invoke(uint64_t ulOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2657e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::*)(uint64_t, ::cordl_internals::intptr_t, uint32_t, uint32_t, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2657ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::*)(uint64_t, ::cordl_internals::intptr_t, uint32_t, uint32_t, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2657ee4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2657ff0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::____OVR__OpenVR__IVROverlay___SetOverlayRaw(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayRaw>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::Invoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::BeginInvoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2658018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::*)(uint64_t, ::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26580dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::*)(uint64_t, ::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26580f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265817c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::____OVR__OpenVR__IVROverlay___SetOverlayFromFile(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayFromFile>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::Invoke(uint64_t ulOverlayHandle, ::StringW pchFilePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchFilePath);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchFilePath, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pchFilePath, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26581a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::*)(uint64_t, ByRef<::cordl_internals::intptr_t>, ::cordl_internals::intptr_t, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<::OVR::OpenVR::ETextureType>, ByRef<::OVR::OpenVR::EColorSpace>, ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2658268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::*)(uint64_t, ByRef<::cordl_internals::intptr_t>, ::cordl_internals::intptr_t, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<::OVR::OpenVR::ETextureType>, ByRef<::OVR::OpenVR::EColorSpace>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2658284;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::*)(ByRef<::cordl_internals::intptr_t>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<::OVR::OpenVR::ETextureType>, ByRef<::OVR::OpenVR::EColorSpace>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x265843c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::____OVR__OpenVR__IVROverlay___GetOverlayTexture(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTexture>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::Invoke(uint64_t ulOverlayHandle, ByRef<::cordl_internals::intptr_t> pNativeTextureHandle, ::cordl_internals::intptr_t pNativeTextureRef, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETextureType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EColorSpace>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::cordl_internals::intptr_t> pNativeTextureHandle, ::cordl_internals::intptr_t pNativeTextureRef, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETextureType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EColorSpace>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture::EndInvoke(ByRef<::cordl_internals::intptr_t> pNativeTextureHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETextureType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EColorSpace>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pNativeTextureHandle, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2658478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::*)(uint64_t, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265853c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::*)(uint64_t, ::cordl_internals::intptr_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2658550;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2658604;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::Invoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pNativeTextureHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pNativeTextureHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::BeginInvoke(uint64_t ulOverlayHandle, ::cordl_internals::intptr_t pNativeTextureHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pNativeTextureHandle, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265862c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::*)(uint64_t, ByRef<uint32_t>, ByRef<uint32_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26586f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::*)(uint64_t, ByRef<uint32_t>, ByRef<uint32_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2658704;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::*)(ByRef<uint32_t>, ByRef<uint32_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26587d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pWidth, pHeight);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pWidth, pHeight, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize::EndInvoke(ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pWidth, pHeight, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x265880c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::*)(::StringW, ::StringW, ByRef<uint64_t>, ByRef<uint64_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26588e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::*)(::StringW, ::StringW, ByRef<uint64_t>, ByRef<uint64_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26588f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::*)(ByRef<uint64_t>, ByRef<uint64_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26589b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::Invoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay::EndInvoke(ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pMainHandle, pThumbnailHandle, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26589e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2658aa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2658ab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x1028;
  constexpr static std::size_t addrs = 0x2658ad4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::____OVR__OpenVR__IVROverlay___IsDashboardVisible(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___IsDashboardVisible>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2659afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::*)(uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2659bc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::*)(uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2659bd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2659c58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::Invoke(uint64_t ulOverlayHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2659c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::*)(uint64_t, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2659d44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::*)(uint64_t, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2659d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2659e0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::Invoke(uint64_t ulOverlayHandle, uint32_t unProcessId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unProcessId);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unProcessId, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, unProcessId, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2659e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::*)(uint64_t, ByRef<uint32_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2659ef8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::*)(uint64_t, ByRef<uint32_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2659f0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::*)(ByRef<uint32_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2659fc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, punProcessId);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, punProcessId, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess::EndInvoke(ByRef<uint32_t> punProcessId, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, punProcessId, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2659ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::*)(::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265a0c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x265a0d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x265a0f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::____OVR__OpenVR__IVROverlay___ShowDashboard(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___ShowDashboard>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::Invoke(::StringW pchOverlayToShow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pchOverlayToShow);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::BeginInvoke(::StringW pchOverlayToShow, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchOverlayToShow, callback, object);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x265a104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265a1c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x265a1d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265a1f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265a21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::*)(int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x265a2e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::*)(int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x265a2fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265a438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::____OVR__OpenVR__IVROverlay___ShowKeyboard(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___ShowKeyboard>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::Invoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::BeginInvoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265a460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::*)(uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x265a524;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::*)(uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x265a540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265a68c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::Invoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::BeginInvoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x265a6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::*)(::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265a78c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::*)(::System::Text::StringBuilder, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x265a7a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265a834;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::____OVR__OpenVR__IVROverlay___GetKeyboardText(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetKeyboardText>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::Invoke(::System::Text::StringBuilder pchText, uint32_t cchText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pchText, cchText);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::BeginInvoke(::System::Text::StringBuilder pchText, uint32_t cchText, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchText, cchText, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x265a85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265a918;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x265a92c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x265a94c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::____OVR__OpenVR__IVROverlay___HideKeyboard(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___HideKeyboard>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265a958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265aa1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x265aa30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x265aae8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform, callback, object);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pmatTrackingOriginToKeyboardTransform, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265ab04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265abc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x265abdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x265ac94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdRect2_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, avoidRect);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdRect2_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, avoidRect, callback, object);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265aca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265ad64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::BeginInvoke)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x265ad78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::*)(ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x265ae74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask::EndInvoke(ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pMaskPrimitives, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265aea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::*)(uint64_t, ByRef<uint32_t>)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265af64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::*)(uint64_t, ByRef<uint32_t>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x265af78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::*)(ByRef<uint32_t>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x265b030;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::____OVR__OpenVR__IVROverlay___GetOverlayFlags(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___GetOverlayFlags>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pFlags);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ulOverlayHandle, pFlags, callback, object);
}
 ::OVR::OpenVR::EVROverlayError ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags::EndInvoke(ByRef<uint32_t> pFlags, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(const_cast<void*>(instance), ___internal_method, pFlags, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x265b05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265b134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x265b148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265b17c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::____OVR__OpenVR__IVROverlay___ShowMessageOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___ShowMessageOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::VRMessageOverlayResponse ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::Invoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse, false>(const_cast<void*>(instance), ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::BeginInvoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text, callback, object);
}
 ::OVR::OpenVR::VRMessageOverlayResponse ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x265b1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265b260;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x265b274;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x265b294;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::____OVR__OpenVR__IVROverlay___CloseMessageOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVROverlay___CloseMessageOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "FindOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CreateOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "DestroyOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetHighQualityOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetHighQualityOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayKey", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayName", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayName", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayImageData", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayErrorNameFromEnum", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayRenderingPid", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayRenderingPid", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayFlag", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayFlag", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayColor", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayColor", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayAlpha", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayAlpha", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayTexelAspect", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTexelAspect", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlaySortOrder", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlaySortOrder", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayWidthInMeters", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayWidthInMeters", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayTextureColorSpace", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTextureColorSpace", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayTextureBounds", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTextureBounds", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayRenderModel", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayRenderModel", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTransformType", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayTransformAbsolute", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTransformAbsolute", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayTransformTrackedDeviceRelative", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTransformTrackedDeviceRelative", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayTransformTrackedDeviceComponent", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTransformTrackedDeviceComponent", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTransformOverlayRelative", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayTransformOverlayRelative", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ShowOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "HideOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsOverlayVisible", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetTransformForOverlayCoordinates", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates", modifiers: "", def_value: Some("csnull") }, CppParam { name: "PollNextOverlayEvent", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayInputMethod", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayInputMethod", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayMouseScale", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayMouseScale", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ComputeOverlayIntersection", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsHoverTargetOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetGamepadFocusOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetGamepadFocusOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayNeighbor", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor", modifiers: "", def_value: Some("csnull") }, CppParam { name: "MoveGamepadFocusToNeighbor", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayDualAnalogTransform", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayDualAnalogTransform", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayTexture", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ClearOverlayTexture", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayRaw", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayFromFile", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTexture", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ReleaseNativeOverlayHandle", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayTextureSize", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CreateDashboardOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsDashboardVisible", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsActiveDashboardOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetDashboardOverlaySceneProcess", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetDashboardOverlaySceneProcess", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ShowDashboard", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetPrimaryDashboardDevice", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ShowKeyboard", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ShowKeyboardForOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetKeyboardText", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText", modifiers: "", def_value: Some("csnull") }, CppParam { name: "HideKeyboard", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetKeyboardTransformAbsolute", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetKeyboardPositionForOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetOverlayIntersectionMask", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetOverlayFlags", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ShowMessageOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CloseMessageOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay", modifiers: "", def_value: Some("csnull") }]
constexpr ::OVR::OpenVR::IVROverlay::IVROverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay FindOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay CreateOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay DestroyOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay SetHighQualityOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay GetHighQualityOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey GetOverlayKey, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName GetOverlayName, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName SetOverlayName, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData GetOverlayImageData, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum GetOverlayErrorNameFromEnum, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid SetOverlayRenderingPid, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid GetOverlayRenderingPid, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag SetOverlayFlag, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag GetOverlayFlag, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor SetOverlayColor, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor GetOverlayColor, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha SetOverlayAlpha, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha GetOverlayAlpha, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect SetOverlayTexelAspect, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect GetOverlayTexelAspect, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder SetOverlaySortOrder, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder GetOverlaySortOrder, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters SetOverlayWidthInMeters, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters GetOverlayWidthInMeters, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters SetOverlayAutoCurveDistanceRangeInMeters, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters GetOverlayAutoCurveDistanceRangeInMeters, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace SetOverlayTextureColorSpace, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace GetOverlayTextureColorSpace, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds SetOverlayTextureBounds, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds GetOverlayTextureBounds, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel GetOverlayRenderModel, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel SetOverlayRenderModel, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType GetOverlayTransformType, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute SetOverlayTransformAbsolute, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute GetOverlayTransformAbsolute, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative SetOverlayTransformTrackedDeviceRelative, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative GetOverlayTransformTrackedDeviceRelative, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent SetOverlayTransformTrackedDeviceComponent, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent GetOverlayTransformTrackedDeviceComponent, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative GetOverlayTransformOverlayRelative, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative SetOverlayTransformOverlayRelative, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay ShowOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay HideOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible IsOverlayVisible, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates GetTransformForOverlayCoordinates, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent PollNextOverlayEvent, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod GetOverlayInputMethod, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod SetOverlayInputMethod, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale GetOverlayMouseScale, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale SetOverlayMouseScale, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection ComputeOverlayIntersection, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay IsHoverTargetOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay GetGamepadFocusOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay SetGamepadFocusOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor SetOverlayNeighbor, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor MoveGamepadFocusToNeighbor, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform SetOverlayDualAnalogTransform, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform GetOverlayDualAnalogTransform, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture SetOverlayTexture, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture ClearOverlayTexture, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw SetOverlayRaw, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile SetOverlayFromFile, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture GetOverlayTexture, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle ReleaseNativeOverlayHandle, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize GetOverlayTextureSize, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay CreateDashboardOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible IsDashboardVisible, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay IsActiveDashboardOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess SetDashboardOverlaySceneProcess, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess GetDashboardOverlaySceneProcess, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard ShowDashboard, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice GetPrimaryDashboardDevice, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard ShowKeyboard, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay ShowKeyboardForOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText GetKeyboardText, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard HideKeyboard, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute SetKeyboardTransformAbsolute, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay SetKeyboardPositionForOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask SetOverlayIntersectionMask, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags GetOverlayFlags, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay ShowMessageOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay CloseMessageOverlay) noexcept : ::bs_hook::ValueTypeWrapper() {this->FindOverlay = FindOverlay;
this->CreateOverlay = CreateOverlay;
this->DestroyOverlay = DestroyOverlay;
this->SetHighQualityOverlay = SetHighQualityOverlay;
this->GetHighQualityOverlay = GetHighQualityOverlay;
this->GetOverlayKey = GetOverlayKey;
this->GetOverlayName = GetOverlayName;
this->SetOverlayName = SetOverlayName;
this->GetOverlayImageData = GetOverlayImageData;
this->GetOverlayErrorNameFromEnum = GetOverlayErrorNameFromEnum;
this->SetOverlayRenderingPid = SetOverlayRenderingPid;
this->GetOverlayRenderingPid = GetOverlayRenderingPid;
this->SetOverlayFlag = SetOverlayFlag;
this->GetOverlayFlag = GetOverlayFlag;
this->SetOverlayColor = SetOverlayColor;
this->GetOverlayColor = GetOverlayColor;
this->SetOverlayAlpha = SetOverlayAlpha;
this->GetOverlayAlpha = GetOverlayAlpha;
this->SetOverlayTexelAspect = SetOverlayTexelAspect;
this->GetOverlayTexelAspect = GetOverlayTexelAspect;
this->SetOverlaySortOrder = SetOverlaySortOrder;
this->GetOverlaySortOrder = GetOverlaySortOrder;
this->SetOverlayWidthInMeters = SetOverlayWidthInMeters;
this->GetOverlayWidthInMeters = GetOverlayWidthInMeters;
this->SetOverlayAutoCurveDistanceRangeInMeters = SetOverlayAutoCurveDistanceRangeInMeters;
this->GetOverlayAutoCurveDistanceRangeInMeters = GetOverlayAutoCurveDistanceRangeInMeters;
this->SetOverlayTextureColorSpace = SetOverlayTextureColorSpace;
this->GetOverlayTextureColorSpace = GetOverlayTextureColorSpace;
this->SetOverlayTextureBounds = SetOverlayTextureBounds;
this->GetOverlayTextureBounds = GetOverlayTextureBounds;
this->GetOverlayRenderModel = GetOverlayRenderModel;
this->SetOverlayRenderModel = SetOverlayRenderModel;
this->GetOverlayTransformType = GetOverlayTransformType;
this->SetOverlayTransformAbsolute = SetOverlayTransformAbsolute;
this->GetOverlayTransformAbsolute = GetOverlayTransformAbsolute;
this->SetOverlayTransformTrackedDeviceRelative = SetOverlayTransformTrackedDeviceRelative;
this->GetOverlayTransformTrackedDeviceRelative = GetOverlayTransformTrackedDeviceRelative;
this->SetOverlayTransformTrackedDeviceComponent = SetOverlayTransformTrackedDeviceComponent;
this->GetOverlayTransformTrackedDeviceComponent = GetOverlayTransformTrackedDeviceComponent;
this->GetOverlayTransformOverlayRelative = GetOverlayTransformOverlayRelative;
this->SetOverlayTransformOverlayRelative = SetOverlayTransformOverlayRelative;
this->ShowOverlay = ShowOverlay;
this->HideOverlay = HideOverlay;
this->IsOverlayVisible = IsOverlayVisible;
this->GetTransformForOverlayCoordinates = GetTransformForOverlayCoordinates;
this->PollNextOverlayEvent = PollNextOverlayEvent;
this->GetOverlayInputMethod = GetOverlayInputMethod;
this->SetOverlayInputMethod = SetOverlayInputMethod;
this->GetOverlayMouseScale = GetOverlayMouseScale;
this->SetOverlayMouseScale = SetOverlayMouseScale;
this->ComputeOverlayIntersection = ComputeOverlayIntersection;
this->IsHoverTargetOverlay = IsHoverTargetOverlay;
this->GetGamepadFocusOverlay = GetGamepadFocusOverlay;
this->SetGamepadFocusOverlay = SetGamepadFocusOverlay;
this->SetOverlayNeighbor = SetOverlayNeighbor;
this->MoveGamepadFocusToNeighbor = MoveGamepadFocusToNeighbor;
this->SetOverlayDualAnalogTransform = SetOverlayDualAnalogTransform;
this->GetOverlayDualAnalogTransform = GetOverlayDualAnalogTransform;
this->SetOverlayTexture = SetOverlayTexture;
this->ClearOverlayTexture = ClearOverlayTexture;
this->SetOverlayRaw = SetOverlayRaw;
this->SetOverlayFromFile = SetOverlayFromFile;
this->GetOverlayTexture = GetOverlayTexture;
this->ReleaseNativeOverlayHandle = ReleaseNativeOverlayHandle;
this->GetOverlayTextureSize = GetOverlayTextureSize;
this->CreateDashboardOverlay = CreateDashboardOverlay;
this->IsDashboardVisible = IsDashboardVisible;
this->IsActiveDashboardOverlay = IsActiveDashboardOverlay;
this->SetDashboardOverlaySceneProcess = SetDashboardOverlaySceneProcess;
this->GetDashboardOverlaySceneProcess = GetDashboardOverlaySceneProcess;
this->ShowDashboard = ShowDashboard;
this->GetPrimaryDashboardDevice = GetPrimaryDashboardDevice;
this->ShowKeyboard = ShowKeyboard;
this->ShowKeyboardForOverlay = ShowKeyboardForOverlay;
this->GetKeyboardText = GetKeyboardText;
this->HideKeyboard = HideKeyboard;
this->SetKeyboardTransformAbsolute = SetKeyboardTransformAbsolute;
this->SetKeyboardPositionForOverlay = SetKeyboardPositionForOverlay;
this->SetOverlayIntersectionMask = SetOverlayIntersectionMask;
this->GetOverlayFlags = GetOverlayFlags;
this->ShowMessageOverlay = ShowMessageOverlay;
this->CloseMessageOverlay = CloseMessageOverlay;
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_FindOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay, 0x0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay ::OVR::OpenVR::IVROverlay::__get_FindOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___FindOverlay, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_CreateOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay, 0x8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay ::OVR::OpenVR::IVROverlay::__get_CreateOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateOverlay, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_DestroyOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay, 0x10>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay ::OVR::OpenVR::IVROverlay::__get_DestroyOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___DestroyOverlay, 0x10>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetHighQualityOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay, 0x18>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay ::OVR::OpenVR::IVROverlay::__get_SetHighQualityOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetHighQualityOverlay, 0x18>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetHighQualityOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay, 0x20>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay ::OVR::OpenVR::IVROverlay::__get_GetHighQualityOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetHighQualityOverlay, 0x20>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayKey(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey, 0x28>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey ::OVR::OpenVR::IVROverlay::__get_GetOverlayKey() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayKey, 0x28>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayName(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName, 0x30>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName ::OVR::OpenVR::IVROverlay::__get_GetOverlayName() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayName, 0x30>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayName(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName, 0x38>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName ::OVR::OpenVR::IVROverlay::__get_SetOverlayName() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayName, 0x38>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayImageData(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData, 0x40>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData ::OVR::OpenVR::IVROverlay::__get_GetOverlayImageData() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayImageData, 0x40>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayErrorNameFromEnum(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum, 0x48>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum ::OVR::OpenVR::IVROverlay::__get_GetOverlayErrorNameFromEnum() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayErrorNameFromEnum, 0x48>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayRenderingPid(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid, 0x50>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid ::OVR::OpenVR::IVROverlay::__get_SetOverlayRenderingPid() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderingPid, 0x50>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayRenderingPid(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid, 0x58>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid ::OVR::OpenVR::IVROverlay::__get_GetOverlayRenderingPid() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderingPid, 0x58>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayFlag(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag, 0x60>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag ::OVR::OpenVR::IVROverlay::__get_SetOverlayFlag() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFlag, 0x60>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayFlag(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag, 0x68>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag ::OVR::OpenVR::IVROverlay::__get_GetOverlayFlag() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlag, 0x68>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayColor(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor, 0x70>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor ::OVR::OpenVR::IVROverlay::__get_SetOverlayColor() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayColor, 0x70>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayColor(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor, 0x78>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor ::OVR::OpenVR::IVROverlay::__get_GetOverlayColor() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayColor, 0x78>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayAlpha(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha, 0x80>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha ::OVR::OpenVR::IVROverlay::__get_SetOverlayAlpha() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAlpha, 0x80>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayAlpha(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha, 0x88>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha ::OVR::OpenVR::IVROverlay::__get_GetOverlayAlpha() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAlpha, 0x88>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayTexelAspect(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect, 0x90>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect ::OVR::OpenVR::IVROverlay::__get_SetOverlayTexelAspect() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexelAspect, 0x90>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTexelAspect(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect, 0x98>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect ::OVR::OpenVR::IVROverlay::__get_GetOverlayTexelAspect() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexelAspect, 0x98>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlaySortOrder(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder, 0xa0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder ::OVR::OpenVR::IVROverlay::__get_SetOverlaySortOrder() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlaySortOrder, 0xa0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlaySortOrder(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder, 0xa8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder ::OVR::OpenVR::IVROverlay::__get_GetOverlaySortOrder() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlaySortOrder, 0xa8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayWidthInMeters(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters, 0xb0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters ::OVR::OpenVR::IVROverlay::__get_SetOverlayWidthInMeters() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayWidthInMeters, 0xb0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayWidthInMeters(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters, 0xb8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters ::OVR::OpenVR::IVROverlay::__get_GetOverlayWidthInMeters() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayWidthInMeters, 0xb8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayAutoCurveDistanceRangeInMeters(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters, 0xc0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters ::OVR::OpenVR::IVROverlay::__get_SetOverlayAutoCurveDistanceRangeInMeters() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters, 0xc0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayAutoCurveDistanceRangeInMeters(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters, 0xc8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters ::OVR::OpenVR::IVROverlay::__get_GetOverlayAutoCurveDistanceRangeInMeters() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters, 0xc8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayTextureColorSpace(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace, 0xd0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace ::OVR::OpenVR::IVROverlay::__get_SetOverlayTextureColorSpace() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureColorSpace, 0xd0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTextureColorSpace(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace, 0xd8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace ::OVR::OpenVR::IVROverlay::__get_GetOverlayTextureColorSpace() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureColorSpace, 0xd8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayTextureBounds(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds, 0xe0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds ::OVR::OpenVR::IVROverlay::__get_SetOverlayTextureBounds() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTextureBounds, 0xe0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTextureBounds(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds, 0xe8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds ::OVR::OpenVR::IVROverlay::__get_GetOverlayTextureBounds() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureBounds, 0xe8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayRenderModel(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel, 0xf0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel ::OVR::OpenVR::IVROverlay::__get_GetOverlayRenderModel() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayRenderModel, 0xf0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayRenderModel(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel, 0xf8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel ::OVR::OpenVR::IVROverlay::__get_SetOverlayRenderModel() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRenderModel, 0xf8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTransformType(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType, 0x100>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType ::OVR::OpenVR::IVROverlay::__get_GetOverlayTransformType() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformType, 0x100>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayTransformAbsolute(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute, 0x108>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute ::OVR::OpenVR::IVROverlay::__get_SetOverlayTransformAbsolute() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformAbsolute, 0x108>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTransformAbsolute(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute, 0x110>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute ::OVR::OpenVR::IVROverlay::__get_GetOverlayTransformAbsolute() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformAbsolute, 0x110>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayTransformTrackedDeviceRelative(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative, 0x118>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative ::OVR::OpenVR::IVROverlay::__get_SetOverlayTransformTrackedDeviceRelative() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceRelative, 0x118>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTransformTrackedDeviceRelative(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative, 0x120>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative ::OVR::OpenVR::IVROverlay::__get_GetOverlayTransformTrackedDeviceRelative() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceRelative, 0x120>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayTransformTrackedDeviceComponent(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent, 0x128>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent ::OVR::OpenVR::IVROverlay::__get_SetOverlayTransformTrackedDeviceComponent() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformTrackedDeviceComponent, 0x128>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTransformTrackedDeviceComponent(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent, 0x130>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent ::OVR::OpenVR::IVROverlay::__get_GetOverlayTransformTrackedDeviceComponent() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformTrackedDeviceComponent, 0x130>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTransformOverlayRelative(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative, 0x138>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative ::OVR::OpenVR::IVROverlay::__get_GetOverlayTransformOverlayRelative() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTransformOverlayRelative, 0x138>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayTransformOverlayRelative(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative, 0x140>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative ::OVR::OpenVR::IVROverlay::__get_SetOverlayTransformOverlayRelative() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTransformOverlayRelative, 0x140>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_ShowOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay, 0x148>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay ::OVR::OpenVR::IVROverlay::__get_ShowOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowOverlay, 0x148>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_HideOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay, 0x150>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay ::OVR::OpenVR::IVROverlay::__get_HideOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideOverlay, 0x150>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_IsOverlayVisible(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible, 0x158>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible ::OVR::OpenVR::IVROverlay::__get_IsOverlayVisible() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsOverlayVisible, 0x158>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetTransformForOverlayCoordinates(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates, 0x160>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates ::OVR::OpenVR::IVROverlay::__get_GetTransformForOverlayCoordinates() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetTransformForOverlayCoordinates, 0x160>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_PollNextOverlayEvent(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent, 0x168>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent ::OVR::OpenVR::IVROverlay::__get_PollNextOverlayEvent() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___PollNextOverlayEvent, 0x168>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayInputMethod(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod, 0x170>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod ::OVR::OpenVR::IVROverlay::__get_GetOverlayInputMethod() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayInputMethod, 0x170>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayInputMethod(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod, 0x178>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod ::OVR::OpenVR::IVROverlay::__get_SetOverlayInputMethod() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayInputMethod, 0x178>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayMouseScale(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale, 0x180>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale ::OVR::OpenVR::IVROverlay::__get_GetOverlayMouseScale() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayMouseScale, 0x180>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayMouseScale(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale, 0x188>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale ::OVR::OpenVR::IVROverlay::__get_SetOverlayMouseScale() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayMouseScale, 0x188>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_ComputeOverlayIntersection(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection, 0x190>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection ::OVR::OpenVR::IVROverlay::__get_ComputeOverlayIntersection() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ComputeOverlayIntersection, 0x190>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_IsHoverTargetOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay, 0x198>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay ::OVR::OpenVR::IVROverlay::__get_IsHoverTargetOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsHoverTargetOverlay, 0x198>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetGamepadFocusOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay, 0x1a0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay ::OVR::OpenVR::IVROverlay::__get_GetGamepadFocusOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetGamepadFocusOverlay, 0x1a0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetGamepadFocusOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay, 0x1a8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay ::OVR::OpenVR::IVROverlay::__get_SetGamepadFocusOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetGamepadFocusOverlay, 0x1a8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayNeighbor(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor, 0x1b0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor ::OVR::OpenVR::IVROverlay::__get_SetOverlayNeighbor() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayNeighbor, 0x1b0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_MoveGamepadFocusToNeighbor(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor, 0x1b8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor ::OVR::OpenVR::IVROverlay::__get_MoveGamepadFocusToNeighbor() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___MoveGamepadFocusToNeighbor, 0x1b8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayDualAnalogTransform(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform, 0x1c0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform ::OVR::OpenVR::IVROverlay::__get_SetOverlayDualAnalogTransform() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayDualAnalogTransform, 0x1c0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayDualAnalogTransform(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform, 0x1c8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform ::OVR::OpenVR::IVROverlay::__get_GetOverlayDualAnalogTransform() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayDualAnalogTransform, 0x1c8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayTexture(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture, 0x1d0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture ::OVR::OpenVR::IVROverlay::__get_SetOverlayTexture() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayTexture, 0x1d0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_ClearOverlayTexture(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture, 0x1d8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture ::OVR::OpenVR::IVROverlay::__get_ClearOverlayTexture() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ClearOverlayTexture, 0x1d8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayRaw(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw, 0x1e0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw ::OVR::OpenVR::IVROverlay::__get_SetOverlayRaw() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayRaw, 0x1e0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayFromFile(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile, 0x1e8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile ::OVR::OpenVR::IVROverlay::__get_SetOverlayFromFile() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayFromFile, 0x1e8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTexture(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture, 0x1f0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture ::OVR::OpenVR::IVROverlay::__get_GetOverlayTexture() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTexture, 0x1f0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_ReleaseNativeOverlayHandle(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle, 0x1f8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle ::OVR::OpenVR::IVROverlay::__get_ReleaseNativeOverlayHandle() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ReleaseNativeOverlayHandle, 0x1f8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayTextureSize(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize, 0x200>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize ::OVR::OpenVR::IVROverlay::__get_GetOverlayTextureSize() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayTextureSize, 0x200>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_CreateDashboardOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay, 0x208>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay ::OVR::OpenVR::IVROverlay::__get_CreateDashboardOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CreateDashboardOverlay, 0x208>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_IsDashboardVisible(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible, 0x210>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible ::OVR::OpenVR::IVROverlay::__get_IsDashboardVisible() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsDashboardVisible, 0x210>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_IsActiveDashboardOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay, 0x218>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay ::OVR::OpenVR::IVROverlay::__get_IsActiveDashboardOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___IsActiveDashboardOverlay, 0x218>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetDashboardOverlaySceneProcess(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess, 0x220>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess ::OVR::OpenVR::IVROverlay::__get_SetDashboardOverlaySceneProcess() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetDashboardOverlaySceneProcess, 0x220>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetDashboardOverlaySceneProcess(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess, 0x228>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess ::OVR::OpenVR::IVROverlay::__get_GetDashboardOverlaySceneProcess() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetDashboardOverlaySceneProcess, 0x228>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_ShowDashboard(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard, 0x230>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard ::OVR::OpenVR::IVROverlay::__get_ShowDashboard() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowDashboard, 0x230>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetPrimaryDashboardDevice(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice, 0x238>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice ::OVR::OpenVR::IVROverlay::__get_GetPrimaryDashboardDevice() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetPrimaryDashboardDevice, 0x238>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_ShowKeyboard(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard, 0x240>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard ::OVR::OpenVR::IVROverlay::__get_ShowKeyboard() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboard, 0x240>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_ShowKeyboardForOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay, 0x248>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay ::OVR::OpenVR::IVROverlay::__get_ShowKeyboardForOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowKeyboardForOverlay, 0x248>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetKeyboardText(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText, 0x250>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText ::OVR::OpenVR::IVROverlay::__get_GetKeyboardText() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetKeyboardText, 0x250>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_HideKeyboard(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard, 0x258>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard ::OVR::OpenVR::IVROverlay::__get_HideKeyboard() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___HideKeyboard, 0x258>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetKeyboardTransformAbsolute(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute, 0x260>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute ::OVR::OpenVR::IVROverlay::__get_SetKeyboardTransformAbsolute() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardTransformAbsolute, 0x260>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetKeyboardPositionForOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay, 0x268>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay ::OVR::OpenVR::IVROverlay::__get_SetKeyboardPositionForOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetKeyboardPositionForOverlay, 0x268>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_SetOverlayIntersectionMask(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask, 0x270>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask ::OVR::OpenVR::IVROverlay::__get_SetOverlayIntersectionMask() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___SetOverlayIntersectionMask, 0x270>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_GetOverlayFlags(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags, 0x278>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags ::OVR::OpenVR::IVROverlay::__get_GetOverlayFlags() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___GetOverlayFlags, 0x278>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_ShowMessageOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay, 0x280>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay ::OVR::OpenVR::IVROverlay::__get_ShowMessageOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___ShowMessageOverlay, 0x280>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVROverlay::__set_CloseMessageOverlay(::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay, 0x288>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay ::OVR::OpenVR::IVROverlay::__get_CloseMessageOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVROverlay___CloseMessageOverlay, 0x288>(this->__instance);
}
} // end anonymous namespace

#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
namespace {
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrEnvironmentBlendMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent::SubsystemCreate{0};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent::SubsystemDestroy{1};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent::SubsystemStart{2};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent::SubsystemStop{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrSetupConfigValues{0};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrSystemIdChanged{1};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrInstanceChanged{2};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrSessionChanged{3};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrBeginSession{4};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrSessionStateChanged{5};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrChangedSpaceApp{6};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrEndSession{7};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrDestroySession{8};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrDestroyInstance{9};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrIdle{10};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrReady{11};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrSynchronized{12};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrVisible{13};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrFocused{14};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrStopping{15};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrExiting{16};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrLossPending{17};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrInstanceLossPending{18};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrRestartRequested{19};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrRequestRestartLoop{20};
constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent  ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent::XrRequestGetSystemLoop{21};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_failedInitialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_failedInitialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aeff98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "get_failedInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_failedInitialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_failedInitialization)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aeffa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "set_failedInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_requiredFeatureFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_requiredFeatureFailed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2aeffac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "get_requiredFeatureFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_requiredFeatureFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_requiredFeatureFailed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2aefff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "set_requiredFeatureFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_enabled)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2aea2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_enabled)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2af0040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_xrGetInstanceProcAddr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_xrGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af019c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "get_xrGetInstanceProcAddr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.HookGetInstanceProcAddr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::cordl_internals::intptr_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af0220;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0228;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af022c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemStop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0230;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0234;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnInstanceCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af0238;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSystemChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSystemChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0240;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0244;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnAppSpaceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnAppSpaceChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionStateChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(int32_t, int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af024c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0250;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0254;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionExiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionExiting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0258;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af025c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnInstanceDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0260;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionLossPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionLossPending)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnInstanceLossPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceLossPending)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnFormFactorChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnFormFactorChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af026c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnViewConfigurationTypeChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnViewConfigurationTypeChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnvironmentBlendModeChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnvironmentBlendModeChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0274;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnabledChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnabledChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.PathToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::PathToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2af027c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "PathToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.StringToPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::StringToPath)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2af0384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "StringToPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentInteractionProfile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2af0448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetCurrentInteractionProfile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentInteractionProfile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2af04f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetCurrentInteractionProfile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentAppSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentAppSpace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2af0534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetCurrentAppSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetViewConfigurationTypeForRenderPass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetViewConfigurationTypeForRenderPass)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af05dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetViewConfigurationTypeForRenderPass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.SetEnvironmentBlendMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af065c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "SetEnvironmentBlendMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetEnvironmentBlendMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af06dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetEnvironmentBlendMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0748;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af074c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0750;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.ReceiveLoaderEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveLoaderEvent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2ae7de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "ReceiveLoaderEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.ReceiveNativeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent, uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveNativeEvent)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2aeaad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "ReceiveNativeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2ae6fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.HookGetInstanceProcAddr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2ae7168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "HookGetInstanceProcAddr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::UnityEngine::InputSystem::InputAction)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2af0924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_PathToStringPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ByRef<::cordl_internals::intptr_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_PathToStringPtr)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2af02f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_PathToStringPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_StringToPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_StringToPath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2af03a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_StringToPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetCurrentInteractionProfile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ByRef<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2af046c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetCurrentInteractionProfile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetFormFactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetFormFactor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2af0754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetFormFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetViewConfigurationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewConfigurationType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2af07bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetViewConfigurationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetViewTypeFromRenderIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewTypeFromRenderIndex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2af05e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetViewTypeFromRenderIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetSessionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>, ByRef<int32_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetSessionState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2af0824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetSessionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetEnvironmentBlendMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2af06e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetEnvironmentBlendMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_SetEnvironmentBlendMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2af0660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_SetEnvironmentBlendMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetAppSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetAppSpace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2af0558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetAppSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetProcAddressPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetProcAddressPtr)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2af01a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetProcAddressPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_SetProcAddressPtrAndLoadStage1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetProcAddressPtrAndLoadStage1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2af08a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_SetProcAddressPtrAndLoadStage1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af097c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_m_enabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_m_enabled() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set__failedInitialization_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get__failedInitialization_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set__requiredFeatureFailed_k__BackingField(bool value)  {
::cordl_internals::setStaticField<bool, "<requiredFeatureFailed>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get>(std::forward<bool>(value));
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get__requiredFeatureFailed_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<requiredFeatureFailed>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get>();
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_nameUi(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_nameUi() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_featureIdInternal(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_featureIdInternal() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_openxrExtensionStrings(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_openxrExtensionStrings() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_company(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_company() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_priority(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_required(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_required() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_internalFieldsUpdated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_internalFieldsUpdated() const {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_failedInitialization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "get_failedInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_failedInitialization(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "set_failedInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_requiredFeatureFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "get_requiredFeatureFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_requiredFeatureFailed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "set_requiredFeatureFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_enabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::cordl_internals::intptr_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_xrGetInstanceProcAddr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "get_xrGetInstanceProcAddr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method);
}
 ::cordl_internals::intptr_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr(::cordl_internals::intptr_t func)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "HookGetInstanceProcAddr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, func);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemCreate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSubsystemCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSubsystemStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSubsystemStop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSubsystemDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceCreate(uint64_t xrInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnInstanceCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, xrInstance);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSystemChange(uint64_t xrSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSystemChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrSystem);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionCreate(uint64_t xrSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSessionCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrSession);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnAppSpaceChange(uint64_t xrSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnAppSpaceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrSpace);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionStateChange(int32_t oldState, int32_t newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSessionStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldState, newState);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionBegin(uint64_t xrSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSessionBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrSession);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionEnd(uint64_t xrSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSessionEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrSession);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionExiting(uint64_t xrSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSessionExiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrSession);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionDestroy(uint64_t xrSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSessionDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrSession);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceDestroy(uint64_t xrInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnInstanceDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrInstance);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionLossPending(uint64_t xrSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnSessionLossPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrSession);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceLossPending(uint64_t xrInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnInstanceLossPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrInstance);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnFormFactorChange(int32_t xrFormFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnFormFactorChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrFormFactor);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnViewConfigurationTypeChange(int32_t xrViewConfigurationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnViewConfigurationTypeChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrViewConfigurationType);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnvironmentBlendModeChange(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnEnvironmentBlendModeChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xrEnvironmentBlendMode);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnabledChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnEnabledChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::PathToString(uint64_t path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "PathToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
 uint64_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::StringToPath(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "StringToPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, str);
}
 uint64_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile(uint64_t userPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetCurrentInteractionProfile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, userPath);
}
 uint64_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile(::StringW userPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetCurrentInteractionProfile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, userPath);
}
 uint64_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentAppSpace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetCurrentAppSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
 int32_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetViewConfigurationTypeForRenderPass(int32_t renderPassIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetViewConfigurationTypeForRenderPass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderPassIndex);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "SetEnvironmentBlendMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrEnvironmentBlendMode);
}
 ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetEnvironmentBlendMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetEnvironmentBlendMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, false>(nullptr, ___internal_method);
}
template<typename TDescriptor,typename TSubsystem>
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                        "CreateSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, descriptors, id);
}
template<typename T>
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::StartSubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                        "StartSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::StopSubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                        "StopSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::DestroySubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                        "DestroySubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveLoaderEvent(::UnityEngine::XR::OpenXR::OpenXRLoaderBase loader, ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "ReceiveLoaderEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, loader, e);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent e, uint64_t payload)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "ReceiveNativeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e, payload);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "HookGetInstanceProcAddr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 uint64_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction(::UnityEngine::InputSystem::InputAction inputAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "GetAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, inputAction);
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_PathToStringPtr(uint64_t pathId, ByRef<::cordl_internals::intptr_t> path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_PathToStringPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pathId, path);
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_StringToPath(::StringW str, ByRef<uint64_t> pathId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_StringToPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, pathId);
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetCurrentInteractionProfile(uint64_t pathId, ByRef<uint64_t> interactionProfile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetCurrentInteractionProfile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pathId, interactionProfile);
}
 int32_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetFormFactor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetFormFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewConfigurationType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetViewConfigurationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewTypeFromRenderIndex(int32_t renderPassIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetViewTypeFromRenderIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderPassIndex);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetSessionState(ByRef<int32_t> oldState, ByRef<int32_t> newState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetSessionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, oldState, newState);
}
 ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetEnvironmentBlendMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetEnvironmentBlendMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_SetEnvironmentBlendMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrEnvironmentBlendMode);
}
 bool ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetAppSpace(ByRef<uint64_t> appSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetAppSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, appSpace);
}
 ::cordl_internals::intptr_t ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetProcAddressPtr(bool loaderDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_GetProcAddressPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, loaderDefault);
}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetProcAddressPtrAndLoadStage1(::cordl_internals::intptr_t func)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            "Internal_SetProcAddressPtrAndLoadStage1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, func);
}
// Ctor Parameters []
 ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OpenXRFeature()  : ::UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<OpenXRFeature>())) {}
 void ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

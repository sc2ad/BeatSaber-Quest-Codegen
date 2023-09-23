#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
#include "System/zzzz__UnhandledExceptionEventHandler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystemDescriptor_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::Uninitialized{0};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::InitializeAttempted{1};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::Initialized{2};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::StartAttempted{3};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::Started{4};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::StopAttempted{5};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::Stopped{6};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState::DeinitializeAttempted{7};
//  Writing Method size for method: UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2aeaf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::*)(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent, uint64_t)>(&UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2aeb12c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::*)(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent, uint64_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2aeb140;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::*)(System::IAsyncResult)>(&UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aeb1f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>(object, method))) {}
 void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::Invoke(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent e, uint64_t payload)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, payload);
}
 System::IAsyncResult UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::BeginInvoke(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent e, uint64_t payload, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, e, payload, callback, object);
}
 void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::*)()>(&UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aeb264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c._InitializeInternal_b__31_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::*)(UnityEngine::XR::OpenXR::Features::OpenXRFeature)>(&UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::_InitializeInternal_b__31_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2aeb26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get(),
                            "<InitializeInternal>b__31_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c._InitializeInternal_b__31_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::*)(UnityEngine::XR::OpenXR::Features::OpenXRFeature)>(&UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::_InitializeInternal_b__31_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2aeb2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get(),
                            "<InitializeInternal>b__31_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c._InitializeInternal_b__31_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::*)(UnityEngine::XR::OpenXR::Features::OpenXRFeature)>(&UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::_InitializeInternal_b__31_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2aeb2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get(),
                            "<InitializeInternal>b__31_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::__set___9(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c value)  {
::cordl_internals::setStaticField<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get>(std::forward<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>(value));
}
 UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get>();
}
 void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::__set___9__31_0(System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,bool>, "<>9__31_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get>(std::forward<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,bool>>(value));
}
 System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,bool> UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::__get___9__31_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,bool>, "<>9__31_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get>();
}
 void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::__set___9__31_1(System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,int32_t>, "<>9__31_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get>(std::forward<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,int32_t>>(value));
}
 System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,int32_t> UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::__get___9__31_1()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,int32_t>, "<>9__31_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get>();
}
 void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::__set___9__31_2(System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,::StringW>, "<>9__31_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get>(std::forward<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,::StringW>>(value));
}
 System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,::StringW> UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::__get___9__31_2()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRFeature,::StringW>, "<>9__31_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get>();
}
// Ctor Parameters []
 UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>())) {}
 void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::_InitializeInternal_b__31_0(UnityEngine::XR::OpenXR::Features::OpenXRFeature f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get(),
                            "<InitializeInternal>b__31_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, f);
}
 int32_t UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::_InitializeInternal_b__31_1(UnityEngine::XR::OpenXR::Features::OpenXRFeature f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get(),
                            "<InitializeInternal>b__31_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, f);
}
 ::StringW UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c::_InitializeInternal_b__31_2(UnityEngine::XR::OpenXR::Features::OpenXRFeature f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase____c>::get(),
                            "<InitializeInternal>b__31_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRFeature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, f);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::OpenXRLoaderBase (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ae6158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.set_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::OpenXRLoaderBase)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_Instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ae61b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "set_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_currentLoaderState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_currentLoaderState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae620c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_currentLoaderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.set_currentLoaderState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_currentLoaderState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae6214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "set_currentLoaderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_displaySubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::XRDisplaySubsystem (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_displaySubsystem)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae621c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_displaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_inputSubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::XRInputSubsystem (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_inputSubsystem)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2ae628c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_inputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_isInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ae6364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_isInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.get_isStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isStarted)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ae6380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_isStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.ExceptionHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, System::UnhandledExceptionEventArgs)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::ExceptionHandler)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2ae63d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "ExceptionHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UnhandledExceptionEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Initialize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2ae6608;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::OpenXRLoaderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.InitializeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::InitializeInternal)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x2ae6868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "InitializeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.CreateSubsystems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::CreateSubsystems)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2ae7ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "CreateSubsystems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.ProcessOpenXRMessageLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::ProcessOpenXRMessageLoop)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2ae8190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "ProcessOpenXRMessageLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ae8290;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::OpenXRLoaderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.StartInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::StartInternal)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2ae8330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "StartInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Stop)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2ae9b14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::OpenXRLoaderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.StopInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::StopInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ae9c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "StopInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Deinitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Deinitialize)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2ae9cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::OpenXRLoaderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.SetApplicationInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::SetApplicationInfo)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2ae72f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "SetApplicationInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.StringToWCHAR_T
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::StringToWCHAR_T)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2aea1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "StringToWCHAR_T",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.LoadOpenXRSymbols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::LoadOpenXRSymbols)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ae7100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "LoadOpenXRSymbols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.RequestOpenXRFeatures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::RequestOpenXRFeatures)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x2ae7458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "RequestOpenXRFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.DebugLogEnabledSpecExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::DebugLogEnabledSpecExtensions)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2ae7fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "DebugLogEnabledSpecExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.ReceiveNativeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent, uint64_t)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::ReceiveNativeEvent)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2ae5ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "ReceiveNativeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.RegisterOpenXRCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::RegisterOpenXRCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ae7c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "RegisterOpenXRCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_LoadOpenXRLibrary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_LoadOpenXRLibrary)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2aea248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_LoadOpenXRLibrary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_UnloadOpenXRLibrary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_UnloadOpenXRLibrary)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2aea07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_UnloadOpenXRLibrary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_SetCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetCallbacks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2aeafd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_SetCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_SetApplicationInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, uint32_t, ::StringW)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetApplicationInfo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2aea0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_SetApplicationInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_RequestExitSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestExitSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ae9fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_RequestExitSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_InitializeSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_InitializeSession)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae7284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_InitializeSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_CreateSessionIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_CreateSessionIfNeeded)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae84d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_CreateSessionIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_BeginSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_BeginSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ae8548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_EndSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_EndSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ae9c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_EndSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_DestroySession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_DestroySession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2aea018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_DestroySession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_PumpMessageLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_PumpMessageLoop)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ae822c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_PumpMessageLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_SetSuccessfullyInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetSuccessfullyInitialized)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae6d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_SetSuccessfullyInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase.Internal_RequestEnableExtensionString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestEnableExtensionString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2aea3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_RequestEnableExtensionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRLoaderBase::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderBase::_ctor)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x2ae57c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_s_DisplaySubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>, "s_DisplaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_s_DisplaySubsystemDescriptors()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>, "s_DisplaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get>();
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_s_InputSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor>, "s_InputSubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_s_InputSubsystemDescriptors()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor>, "s_InputSubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get>();
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set__Instance_k__BackingField(UnityEngine::XR::OpenXR::OpenXRLoaderBase value)  {
::cordl_internals::setStaticField<UnityEngine::XR::OpenXR::OpenXRLoaderBase, "<Instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get>(std::forward<UnityEngine::XR::OpenXR::OpenXRLoaderBase>(value));
}
 UnityEngine::XR::OpenXR::OpenXRLoaderBase UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<UnityEngine::XR::OpenXR::OpenXRLoaderBase, "<Instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get>();
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set__currentLoaderState_k__BackingField(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>(value));
}
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get__currentLoaderState_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_validLoaderInitStates(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderInitStates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_validLoaderStartStates(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderStartStates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_validLoaderStopStates(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderStopStates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_validLoaderDeinitStates(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_validLoaderDeinitStates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_runningStates(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_runningStates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_currentOpenXRState(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent>(value));
}
constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_currentOpenXRState() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_actionSetsAttached(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_actionSetsAttached() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_unhandledExceptionHandler(System::UnhandledExceptionEventHandler value)  {
::cordl_internals::setInstanceField<System::UnhandledExceptionEventHandler, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::UnhandledExceptionEventHandler>(value));
}
constexpr System::UnhandledExceptionEventHandler UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_unhandledExceptionHandler() const {
return ::cordl_internals::getInstanceField<System::UnhandledExceptionEventHandler, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_DisableValidationChecksOnEnteringPlaymode(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_DisableValidationChecksOnEnteringPlaymode() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRLoaderBase::__set_lastPollCheckTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::XR::OpenXR::OpenXRLoaderBase::__get_lastPollCheckTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::XR::OpenXR::OpenXRLoaderBase UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::OpenXRLoaderBase, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_Instance(UnityEngine::XR::OpenXR::OpenXRLoaderBase value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "set_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_currentLoaderState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_currentLoaderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::set_currentLoaderState(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "set_currentLoaderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::XR::XRDisplaySubsystem UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_displaySubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_displaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::XRDisplaySubsystem, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::XR::XRInputSubsystem UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_inputSubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_inputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::XRInputSubsystem, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_isInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::get_isStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "get_isStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::ExceptionHandler(::bs_hook::Il2CppWrapperType sender, System::UnhandledExceptionEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "ExceptionHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UnhandledExceptionEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, args);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::InitializeInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "InitializeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::CreateSubsystems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "CreateSubsystems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::ProcessOpenXRMessageLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "ProcessOpenXRMessageLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::StartInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "StartInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::StopInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "StopInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Deinitialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Deinitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TDescriptor,typename TSubsystem>
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::CreateSubsystem(System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                        "CreateSubsystem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<TDescriptor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, descriptors, id);
}
template<typename T>
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::StartSubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
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
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::StopSubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
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
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::DestroySubsystem()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
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
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::SetApplicationInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "SetApplicationInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> UnityEngine::XR::OpenXR::OpenXRLoaderBase::StringToWCHAR_T(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "StringToWCHAR_T",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, s);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::LoadOpenXRSymbols()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "LoadOpenXRSymbols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::RequestOpenXRFeatures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "RequestOpenXRFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::DebugLogEnabledSpecExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "DebugLogEnabledSpecExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::ReceiveNativeEvent(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent e, uint64_t payload)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "ReceiveNativeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e, payload);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::RegisterOpenXRCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "RegisterOpenXRCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_LoadOpenXRLibrary(::ArrayW<uint8_t> loaderPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_LoadOpenXRLibrary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, loaderPath);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_UnloadOpenXRLibrary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_UnloadOpenXRLibrary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetCallbacks(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_SetCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetApplicationInfo(::StringW applicationName, ::StringW applicationVersion, uint32_t applicationVersionHash, ::StringW engineVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_SetApplicationInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, applicationName, applicationVersion, applicationVersionHash, engineVersion);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestExitSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_RequestExitSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_InitializeSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_InitializeSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_CreateSessionIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_CreateSessionIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_BeginSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_EndSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_EndSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_DestroySession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_DestroySession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_PumpMessageLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_PumpMessageLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_SetSuccessfullyInitialized(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_SetSuccessfullyInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool UnityEngine::XR::OpenXR::OpenXRLoaderBase::Internal_RequestEnableExtensionString(::StringW extensionString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            "Internal_RequestEnableExtensionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, extensionString);
}
// Ctor Parameters []
 UnityEngine::XR::OpenXR::OpenXRLoaderBase::OpenXRLoaderBase()  : UnityEngine::XR::Management::XRLoaderHelper(THROW_UNLESS(::il2cpp_utils::New<OpenXRLoaderBase>())) {}
 void UnityEngine::XR::OpenXR::OpenXRLoaderBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

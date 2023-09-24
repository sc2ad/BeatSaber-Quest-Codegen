#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Mock/zzzz__MockRuntime_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewConfigurationType_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Mock/zzzz__MockRuntime_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrReferenceSpaceType_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSessionState_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrViewStateFlags_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpaceLocationFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent  UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent::Unknown{0};
constexpr UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent  UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent::EndFrame{1};
constexpr UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent  UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent::HapticImpulse{2};
constexpr UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent  UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent::HapticStop{3};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b06254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::*)(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent, uint64_t)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b06318;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::*)(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent, uint64_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2b0632c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::*)(System::IAsyncResult)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b063e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>(object, method))};
return o;
}
 void UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::Invoke(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent evt, uint64_t param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt, param);
}
 System::IAsyncResult UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::BeginInvoke(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent evt, uint64_t param, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, evt, param, callback, object);
}
 void UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2b05684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::NativeTypes::XrResult (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::*)(::StringW)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b063ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::*)(::StringW, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b06400;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::NativeTypes::XrResult (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::*)(System::IAsyncResult)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b06420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>(object, method))};
return o;
}
 void UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::Invoke(::StringW functionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(const_cast<void*>(instance), ___internal_method, functionName);
}
 System::IAsyncResult UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::BeginInvoke(::StringW functionName, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, functionName, callback, object);
}
 UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b05758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::*)(::StringW, UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b06448;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::*)(::StringW, UnityEngine::XR::OpenXR::NativeTypes::XrResult, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b0645c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::*)(System::IAsyncResult)>(&UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b064f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>(object, method))};
return o;
}
 void UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::Invoke(::StringW functionName, UnityEngine::XR::OpenXR::NativeTypes::XrResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, functionName, result);
}
 System::IAsyncResult UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::BeginInvoke(::StringW functionName, UnityEngine::XR::OpenXR::NativeTypes::XrResult result, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, functionName, result, callback, object);
}
 void UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.add_onScriptEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::add_onScriptEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b050b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "add_onScriptEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.remove_onScriptEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::remove_onScriptEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b0516c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "remove_onScriptEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime (*)()>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b05228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ReceiveScriptEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent, uint64_t)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ReceiveScriptEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b04fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "ReceiveScriptEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.BeforeFunctionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(::StringW)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::BeforeFunctionCallback)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2b05034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "BeforeFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.AfterFunctionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::AfterFunctionCallback)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b05068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "AfterFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2b05388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b058c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetFunctionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b058f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetBeforeFunctionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate (*)(::StringW)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetBeforeFunctionCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b05270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "GetBeforeFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetAfterFunctionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate (*)(::StringW)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetAfterFunctionCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b052fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "GetAfterFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ClearFunctionCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ClearFunctionCallbacks)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b05920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "ClearFunctionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ResetDefaults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ResetDefaults)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b05970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "ResetDefaults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.OnInstanceDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::*)(uint64_t)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b059b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::Mock::MockRuntime),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.HookCreateInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::cordl_internals::intptr_t)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::HookCreateInstance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b059bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "HookCreateInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetKeepFunctionCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetKeepFunctionCallbacks)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b05a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetKeepFunctionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetViewPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, int32_t, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector4)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewPose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b05ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetViewPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetViewState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b05ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b05c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b05d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_RegisterScriptEventCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::NativeTypes::XrResult (*)(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_RegisterScriptEventCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b05ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "Internal_RegisterScriptEventCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_TransitionToState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, bool)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_TransitionToState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b05e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "Internal_TransitionToState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrSessionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.Internal_GetSessionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::NativeTypes::XrSessionState (*)()>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetSessionState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b05ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "Internal_GetSessionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.RequestExitSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::RequestExitSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b05f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "RequestExitSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.CauseInstanceLoss
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseInstanceLoss)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b05fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "CauseInstanceLoss",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.SetReferenceSpaceBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, UnityEngine::Vector2)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetReferenceSpaceBounds)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b06010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetReferenceSpaceBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.GetEndFrameStats
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>, ByRef<int32_t>)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetEndFrameStats)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b060a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "GetEndFrameStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.ActivateSecondaryView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, bool)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ActivateSecondaryView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b06128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "ActivateSecondaryView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.MockRuntime_RegisterFunctionCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime_RegisterFunctionCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b05830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "MockRuntime_RegisterFunctionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime.MetaPerformanceMetrics_SeedCounterOnce_Float
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, float_t, uint32_t)>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MetaPerformanceMetrics_SeedCounterOnce_Float)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2b061a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "MetaPerformanceMetrics_SeedCounterOnce_Float",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::Mock::MockRuntime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::*)()>(&UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0624c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__set_s_AfterFunctionCallbacks(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>, "s_AfterFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate> UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__get_s_AfterFunctionCallbacks()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>, "s_AfterFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get>();
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__set_s_BeforeFunctionCallbacks(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>, "s_BeforeFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate> UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__get_s_BeforeFunctionCallbacks()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>, "s_BeforeFunctionCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get>();
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__set_onScriptEvent(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate value)  {
::cordl_internals::setStaticField<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate, "onScriptEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get>(std::forward<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>(value));
}
 UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__get_onScriptEvent()  {
return ::cordl_internals::getStaticField<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate, "onScriptEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get>();
}
constexpr void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__set_ignoreValidationErrors(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::__get_ignoreValidationErrors() const {
return ::cordl_internals::getInstanceField<bool, 0x4e>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::add_onScriptEvent(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "add_onScriptEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::remove_onScriptEvent(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "remove_onScriptEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 UnityEngine::XR::OpenXR::Features::Mock::MockRuntime UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ReceiveScriptEvent(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent evt, uint64_t param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "ReceiveScriptEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt, param);
}
 UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::BeforeFunctionCallback(::StringW function)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "BeforeFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(nullptr, ___internal_method, function);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::AfterFunctionCallback(::StringW function, UnityEngine::XR::OpenXR::NativeTypes::XrResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "AfterFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, result);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate beforeCallback, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate afterCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, beforeCallback, afterCallback);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate beforeCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, beforeCallback);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetFunctionCallback(::StringW function, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate afterCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, function, afterCallback);
}
 UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetBeforeFunctionCallback(::StringW function)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "GetBeforeFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate, false>(nullptr, ___internal_method, function);
}
 UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetAfterFunctionCallback(::StringW function)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "GetAfterFunctionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate, false>(nullptr, ___internal_method, function);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ClearFunctionCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "ClearFunctionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ResetDefaults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "ResetDefaults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::OnInstanceDestroy(uint64_t instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "OnInstanceDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, instance);
}
 ::cordl_internals::intptr_t UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::HookCreateInstance(::cordl_internals::intptr_t func)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "HookCreateInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, func);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetKeepFunctionCallbacks(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetKeepFunctionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewPose(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, int32_t viewIndex, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation, UnityEngine::Vector4 fov)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetViewPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewConfigurationType, viewIndex, position, orientation, fov);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetViewState(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags viewStateFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewConfigurationType, viewStateFlags);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace(UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation, UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, referenceSpace, position, orientation, locationFlags);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetSpace(uint64_t actionHandle, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation, UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionHandle, position, orientation, locationFlags);
}
 UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_RegisterScriptEventCallback(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "Internal_RegisterScriptEventCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::NativeTypes::XrResult, false>(nullptr, ___internal_method, callback);
}
 bool UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_TransitionToState(UnityEngine::XR::OpenXR::NativeTypes::XrSessionState state, bool forceTransition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "Internal_TransitionToState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrSessionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state, forceTransition);
}
 UnityEngine::XR::OpenXR::NativeTypes::XrSessionState UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::Internal_GetSessionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "Internal_GetSessionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::RequestExitSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "RequestExitSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::CauseInstanceLoss()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "CauseInstanceLoss",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::SetReferenceSpaceBounds(UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, UnityEngine::Vector2 bounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "SetReferenceSpaceBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, referenceSpace, bounds);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::GetEndFrameStats(ByRef<int32_t> primaryLayerCount, ByRef<int32_t> secondaryLayerCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "GetEndFrameStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, primaryLayerCount, secondaryLayerCount);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::ActivateSecondaryView(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, bool activate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "ActivateSecondaryView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewConfigurationType, activate);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MockRuntime_RegisterFunctionCallbacks(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate hookBefore, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate hookAfter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "MockRuntime_RegisterFunctionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hookBefore, hookAfter);
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::MetaPerformanceMetrics_SeedCounterOnce_Float(::StringW xrPathString, float_t value, uint32_t unit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            "MetaPerformanceMetrics_SeedCounterOnce_Float",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrPathString, value, unit);
}
 UnityEngine::XR::OpenXR::Features::Mock::MockRuntime UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::New_ctor()  {
UnityEngine::XR::OpenXR::Features::Mock::MockRuntime o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>())};
return o;
}
 void UnityEngine::XR::OpenXR::Features::Mock::MockRuntime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::Mock::MockRuntime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

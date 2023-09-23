#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "RootMotion/zzzz__Warning_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: RootMotion::RootMotion__Warning__Logger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::RootMotion__Warning__Logger::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&RootMotion::RootMotion__Warning__Logger::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x11b6710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__Warning__Logger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::RootMotion__Warning__Logger.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::RootMotion__Warning__Logger::*)(::StringW)>(&RootMotion::RootMotion__Warning__Logger::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11b67e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::RootMotion__Warning__Logger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__Warning__Logger>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::RootMotion__Warning__Logger.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (RootMotion::RootMotion__Warning__Logger::*)(::StringW, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&RootMotion::RootMotion__Warning__Logger::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11b67f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::RootMotion__Warning__Logger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__Warning__Logger>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::RootMotion__Warning__Logger.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::RootMotion__Warning__Logger::*)(System::IAsyncResult)>(&RootMotion::RootMotion__Warning__Logger::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11b6818;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::RootMotion__Warning__Logger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__Warning__Logger>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 RootMotion::RootMotion__Warning__Logger::RootMotion__Warning__Logger(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<RootMotion__Warning__Logger>(object, method))) {}
 void RootMotion::RootMotion__Warning__Logger::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__Warning__Logger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void RootMotion::RootMotion__Warning__Logger::Invoke(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__Warning__Logger>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 System::IAsyncResult RootMotion::RootMotion__Warning__Logger::BeginInvoke(::StringW message, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__Warning__Logger>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, message, callback, object);
}
 void RootMotion::RootMotion__Warning__Logger::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__Warning__Logger>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: RootMotion::Warning.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, RootMotion::RootMotion__Warning__Logger, bool)>(&RootMotion::Warning::Log)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11b6678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Warning>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__Warning__Logger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::Warning.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, UnityEngine::Transform, bool)>(&RootMotion::Warning::Log)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x11b0918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Warning>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void RootMotion::Warning::__set_logged(bool value)  {
::cordl_internals::setStaticField<bool, "logged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Warning>::get>(std::forward<bool>(value));
}
 bool RootMotion::Warning::__get_logged()  {
return ::cordl_internals::getStaticField<bool, "logged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Warning>::get>();
}
/// @param logInEditMode: bool (default: false)
 void RootMotion::Warning::Log(::StringW message, RootMotion::RootMotion__Warning__Logger logger, bool logInEditMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Warning>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__Warning__Logger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, logger, logInEditMode);
}
/// @param logInEditMode: bool (default: false)
 void RootMotion::Warning::Log(::StringW message, UnityEngine::Transform context, bool logInEditMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Warning>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, context, logInEditMode);
}

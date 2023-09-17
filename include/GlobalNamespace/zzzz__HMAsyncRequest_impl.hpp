#pragma once
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1f78710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::*)(::GlobalNamespace::HMAsyncRequest)>(&::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1f7883c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::*)(::GlobalNamespace::HMAsyncRequest, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1f78850;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::*)(::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f78870;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::____GlobalNamespace__HMAsyncRequest__CancelHander(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__HMAsyncRequest__CancelHander>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::Invoke(::GlobalNamespace::HMAsyncRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::BeginInvoke(::GlobalNamespace::HMAsyncRequest request, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, request, callback, object);
}
 void ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.get_CancelHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::get_CancelHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f78668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                            "get_CancelHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.set_CancelHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HMAsyncRequest::*)(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander)>(&::GlobalNamespace::HMAsyncRequest::set_CancelHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f78670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                            "set_CancelHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.get_cancelled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::get_cancelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f78678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                            "get_cancelled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::Cancel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f78680;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::HMAsyncRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f786a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::HMAsyncRequest::__set__cancelled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::HMAsyncRequest::__get__cancelled() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HMAsyncRequest::__set__cancelHander(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander ::GlobalNamespace::HMAsyncRequest::__get__cancelHander() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander ::GlobalNamespace::HMAsyncRequest::get_CancelHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                            "get_CancelHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::HMAsyncRequest::set_CancelHandler(::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                            "set_CancelHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__HMAsyncRequest__CancelHander>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::HMAsyncRequest::get_cancelled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                            "get_cancelled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::HMAsyncRequest::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::HMAsyncRequest::HMAsyncRequest()  : ::GlobalNamespace::HMAutoincrementedRequestId(THROW_UNLESS(::il2cpp_utils::New<HMAsyncRequest>())) {}
 void ::GlobalNamespace::HMAsyncRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

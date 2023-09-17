#pragma once
namespace {
#include "System/Net/zzzz__ListenerAsyncResult_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
//  Writing Method size for method: ::System::Net::ListenerAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Net::ListenerAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x283fff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Exception)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2840074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.InvokeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&::System::Net::ListenerAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2840268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Net::HttpListenerContext)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28403a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Net::HttpListenerContext, bool)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x28403ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.GetContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerContext (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::GetContext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x28408dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "GetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_AsyncState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2840918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_AsyncWaitHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x284092c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_CompletedSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2840a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2840a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IAsyncResult
constexpr  ::System::Net::ListenerAsyncResult::operator ::System::IAsyncResult() const noexcept {
return ::System::IAsyncResult(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_handle(::System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::ManualResetEvent>(value));
}
constexpr ::System::Threading::ManualResetEvent ::System::Net::ListenerAsyncResult::__get_handle() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_synch(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::ListenerAsyncResult::__get_synch() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_completed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::ListenerAsyncResult::__get_completed() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_cb(::System::AsyncCallback value)  {
::cordl_internals::setInstanceField<::System::AsyncCallback, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::AsyncCallback>(value));
}
constexpr ::System::AsyncCallback ::System::Net::ListenerAsyncResult::__get_cb() const {
return ::cordl_internals::getInstanceField<::System::AsyncCallback, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_state(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Net::ListenerAsyncResult::__get_state() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_exception(::System::Exception value)  {
::cordl_internals::setInstanceField<::System::Exception, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Exception>(value));
}
constexpr ::System::Exception ::System::Net::ListenerAsyncResult::__get_exception() const {
return ::cordl_internals::getInstanceField<::System::Exception, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_context(::System::Net::HttpListenerContext value)  {
::cordl_internals::setInstanceField<::System::Net::HttpListenerContext, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::HttpListenerContext>(value));
}
constexpr ::System::Net::HttpListenerContext ::System::Net::ListenerAsyncResult::__get_context() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpListenerContext, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_locker(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Net::ListenerAsyncResult::__get_locker() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_forward(::System::Net::ListenerAsyncResult value)  {
::cordl_internals::setInstanceField<::System::Net::ListenerAsyncResult, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::ListenerAsyncResult>(value));
}
constexpr ::System::Net::ListenerAsyncResult ::System::Net::ListenerAsyncResult::__get_forward() const {
return ::cordl_internals::getInstanceField<::System::Net::ListenerAsyncResult, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_EndCalled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::ListenerAsyncResult::__get_EndCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ListenerAsyncResult::__set_InGet(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::ListenerAsyncResult::__get_InGet() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Net::ListenerAsyncResult::__set_InvokeCB(::System::Threading::WaitCallback value)  {
::cordl_internals::setStaticField<::System::Threading::WaitCallback, "InvokeCB", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get>(std::forward<::System::Threading::WaitCallback>(value));
}
 ::System::Threading::WaitCallback ::System::Net::ListenerAsyncResult::__get_InvokeCB()  {
return ::cordl_internals::getStaticField<::System::Threading::WaitCallback, "InvokeCB", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get>();
}
// Ctor Parameters [CppParam { name: "cb", ty: "::System::AsyncCallback", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 ::System::Net::ListenerAsyncResult::ListenerAsyncResult(::System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ListenerAsyncResult>(cb, state))) {}
 void ::System::Net::ListenerAsyncResult::_ctor(::System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cb, state);
}
 void ::System::Net::ListenerAsyncResult::Complete(::System::Exception exc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exc);
}
 void ::System::Net::ListenerAsyncResult::InvokeCallback(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
 void ::System::Net::ListenerAsyncResult::Complete(::System::Net::HttpListenerContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::System::Net::ListenerAsyncResult::Complete(::System::Net::HttpListenerContext context, bool synch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, synch);
}
 ::System::Net::HttpListenerContext ::System::Net::ListenerAsyncResult::GetContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "GetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Net::ListenerAsyncResult::get_AsyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::WaitHandle ::System::Net::ListenerAsyncResult::get_AsyncWaitHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::ListenerAsyncResult::get_CompletedSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::ListenerAsyncResult::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

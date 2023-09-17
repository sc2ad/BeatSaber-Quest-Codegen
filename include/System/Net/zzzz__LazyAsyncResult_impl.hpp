#pragma once
namespace {
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
//  Writing Method size for method: ::System::Net::____System__Net__LazyAsyncResult__ThreadContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__LazyAsyncResult__ThreadContext::*)()>(&::System::Net::____System__Net__LazyAsyncResult__ThreadContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__LazyAsyncResult__ThreadContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::____System__Net__LazyAsyncResult__ThreadContext::__set_m_NestedIOCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__LazyAsyncResult__ThreadContext::__get_m_NestedIOCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Net::____System__Net__LazyAsyncResult__ThreadContext::____System__Net__LazyAsyncResult__ThreadContext()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__LazyAsyncResult__ThreadContext>())) {}
 void ::System::Net::____System__Net__LazyAsyncResult__ThreadContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__LazyAsyncResult__ThreadContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_CurrentThreadContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__LazyAsyncResult__ThreadContext (*)()>(&::System::Net::LazyAsyncResult::get_CurrentThreadContext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28163fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_CurrentThreadContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, ::System::AsyncCallback)>(&::System::Net::LazyAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2816498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_AsyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AsyncCallback (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_AsyncCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncWaitHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2816540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.LazilyCreateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)(ByRef<::System::Threading::ManualResetEvent>)>(&::System::Net::LazyAsyncResult::LazilyCreateEvent)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x28165e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "LazilyCreateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ManualResetEvent>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_CompletedSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28167a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28167d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_InternalPeekCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_InternalPeekCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2816798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_InternalPeekCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_EndCalled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_EndCalled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_EndCalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.set_EndCalled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(bool)>(&::System::Net::LazyAsyncResult::set_EndCalled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2816810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "set_EndCalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.ProtectedInvokeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::System::Net::LazyAsyncResult::ProtectedInvokeCallback)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x281681c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "ProtectedInvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.InvokeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(::bs_hook::Il2CppWrapperType)>(&::System::Net::LazyAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28169f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.InvokeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2816a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(::cordl_internals::intptr_t)>(&::System::Net::LazyAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2816aa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::LazyAsyncResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.WorkerThreadComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)(::bs_hook::Il2CppWrapperType)>(&::System::Net::LazyAsyncResult::WorkerThreadComplete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2816c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "WorkerThreadComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::Cleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2816cec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::LazyAsyncResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.InternalWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::InternalWaitForCompletion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "InternalWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.WaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Net::LazyAsyncResult::*)(bool)>(&::System::Net::LazyAsyncResult::WaitForCompletion)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2816cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IAsyncResult
constexpr  ::System::Net::LazyAsyncResult::operator ::System::IAsyncResult() const noexcept {
return ::System::IAsyncResult(::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Net::LazyAsyncResult::__set_t_ThreadContext(::System::Net::____System__Net__LazyAsyncResult__ThreadContext value)  {
::cordl_internals::setStaticField<::System::Net::____System__Net__LazyAsyncResult__ThreadContext, "t_ThreadContext", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get>(std::forward<::System::Net::____System__Net__LazyAsyncResult__ThreadContext>(value));
}
 ::System::Net::____System__Net__LazyAsyncResult__ThreadContext ::System::Net::LazyAsyncResult::__get_t_ThreadContext()  {
return ::cordl_internals::getStaticField<::System::Net::____System__Net__LazyAsyncResult__ThreadContext, "t_ThreadContext", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get>();
}
constexpr void ::System::Net::LazyAsyncResult::__set_m_AsyncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Net::LazyAsyncResult::__get_m_AsyncObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::LazyAsyncResult::__set_m_AsyncState(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Net::LazyAsyncResult::__get_m_AsyncState() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::LazyAsyncResult::__set_m_AsyncCallback(::System::AsyncCallback value)  {
::cordl_internals::setInstanceField<::System::AsyncCallback, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::AsyncCallback>(value));
}
constexpr ::System::AsyncCallback ::System::Net::LazyAsyncResult::__get_m_AsyncCallback() const {
return ::cordl_internals::getInstanceField<::System::AsyncCallback, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::LazyAsyncResult::__set_m_Result(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Net::LazyAsyncResult::__get_m_Result() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::LazyAsyncResult::__set_m_IntCompleted(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::LazyAsyncResult::__get_m_IntCompleted() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::LazyAsyncResult::__set_m_EndCalled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::LazyAsyncResult::__get_m_EndCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::LazyAsyncResult::__set_m_UserEvent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x35>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::LazyAsyncResult::__get_m_UserEvent() const {
return ::cordl_internals::getInstanceField<bool, 0x35>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::LazyAsyncResult::__set_m_Event(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Net::LazyAsyncResult::__get_m_Event() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::____System__Net__LazyAsyncResult__ThreadContext ::System::Net::LazyAsyncResult::get_CurrentThreadContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_CurrentThreadContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__LazyAsyncResult__ThreadContext, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "myObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myCallBack", ty: "::System::AsyncCallback", modifiers: "", def_value: None }]
 ::System::Net::LazyAsyncResult::LazyAsyncResult(::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, ::System::AsyncCallback myCallBack)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LazyAsyncResult>(myObject, myState, myCallBack))) {}
 void ::System::Net::LazyAsyncResult::_ctor(::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, ::System::AsyncCallback myCallBack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, myObject, myState, myCallBack);
}
 ::bs_hook::Il2CppWrapperType ::System::Net::LazyAsyncResult::get_AsyncObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_AsyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Net::LazyAsyncResult::get_AsyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::AsyncCallback ::System::Net::LazyAsyncResult::get_AsyncCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_AsyncCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::AsyncCallback, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::WaitHandle ::System::Net::LazyAsyncResult::get_AsyncWaitHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::LazyAsyncResult::LazilyCreateEvent(ByRef<::System::Threading::ManualResetEvent> waitHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "LazilyCreateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ManualResetEvent>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, waitHandle);
}
 bool ::System::Net::LazyAsyncResult::get_CompletedSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::LazyAsyncResult::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::LazyAsyncResult::get_InternalPeekCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_InternalPeekCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::LazyAsyncResult::get_EndCalled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "get_EndCalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::LazyAsyncResult::set_EndCalled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "set_EndCalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::LazyAsyncResult::ProtectedInvokeCallback(::bs_hook::Il2CppWrapperType result, ::cordl_internals::intptr_t userToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "ProtectedInvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, userToken);
}
 void ::System::Net::LazyAsyncResult::InvokeCallback(::bs_hook::Il2CppWrapperType result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
 void ::System::Net::LazyAsyncResult::InvokeCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::LazyAsyncResult::Complete(::cordl_internals::intptr_t userToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userToken);
}
 void ::System::Net::LazyAsyncResult::WorkerThreadComplete(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "WorkerThreadComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void ::System::Net::LazyAsyncResult::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Net::LazyAsyncResult::InternalWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "InternalWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Net::LazyAsyncResult::WaitForCompletion(bool snap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::LazyAsyncResult>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, snap);
}
} // end anonymous namespace

#pragma once
#include "System/Threading/zzzz__SynchronizationContext_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__UnitySynchronizationContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::*)(::System::Threading::SendOrPostCallback, ::bs_hook::Il2CppWrapperType, ::System::Threading::ManualResetEvent)>(&::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b5d2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ManualResetEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::*)()>(&::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::Invoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b5d668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_DelagateCallback", ty: "::System::Threading::SendOrPostCallback", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_DelagateState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_WaitHandle", ty: "::System::Threading::ManualResetEvent", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::____UnityEngine__UnitySynchronizationContext__WorkRequest(::System::Threading::SendOrPostCallback m_DelagateCallback, ::bs_hook::Il2CppWrapperType m_DelagateState, ::System::Threading::ManualResetEvent m_WaitHandle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_DelagateCallback = m_DelagateCallback;
this->m_DelagateState = m_DelagateState;
this->m_WaitHandle = m_WaitHandle;
}
constexpr void ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::__set_m_DelagateCallback(::System::Threading::SendOrPostCallback value)  {
::cordl_internals::setInstanceField<::System::Threading::SendOrPostCallback, 0x0>(this->__instance, std::forward<::System::Threading::SendOrPostCallback>(value));
}
constexpr ::System::Threading::SendOrPostCallback ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::__get_m_DelagateCallback() const {
return ::cordl_internals::getInstanceField<::System::Threading::SendOrPostCallback, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::__set_m_DelagateState(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::__get_m_DelagateState() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::__set_m_WaitHandle(::System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent, 0x10>(this->__instance, std::forward<::System::Threading::ManualResetEvent>(value));
}
constexpr ::System::Threading::ManualResetEvent ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::__get_m_WaitHandle() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent, 0x10>(this->__instance);
}
/// @param waitHandle: ::System::Threading::ManualResetEvent (default: csnull)
 void ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::_ctor(::System::Threading::SendOrPostCallback callback, ::bs_hook::Il2CppWrapperType state, ::System::Threading::ManualResetEvent waitHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ManualResetEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, callback, state, waitHandle);
}
 void ::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(int32_t)>(&::UnityEngine::UnitySynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b5ce6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>, int32_t)>(&::UnityEngine::UnitySynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b5cf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Threading::SendOrPostCallback, ::bs_hook::Il2CppWrapperType)>(&::UnityEngine::UnitySynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2b5cfc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UnitySynchronizationContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.OperationStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::OperationStarted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b5d2d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UnitySynchronizationContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.OperationCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::OperationCompleted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b5d2e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UnitySynchronizationContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Post
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Threading::SendOrPostCallback, ::bs_hook::Il2CppWrapperType)>(&::UnityEngine::UnitySynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2b5d2ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UnitySynchronizationContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.CreateCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b5d43c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UnitySynchronizationContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Exec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::Exec)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2b5d4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "Exec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.HasPendingTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::HasPendingTasks)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b5d714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "HasPendingTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b5d774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "InitializeSynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.ExecuteTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UnitySynchronizationContext::ExecuteTasks)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b5d7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "ExecuteTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.ExecutePendingTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t)>(&::UnityEngine::UnitySynchronizationContext::ExecutePendingTasks)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2b5d854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "ExecutePendingTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UnitySynchronizationContext::__set_m_AsyncWorkQueue(::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest> ::UnityEngine::UnitySynchronizationContext::__get_m_AsyncWorkQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UnitySynchronizationContext::__set_m_CurrentFrameWork(::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest> ::UnityEngine::UnitySynchronizationContext::__get_m_CurrentFrameWork() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UnitySynchronizationContext::__set_m_MainThreadID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UnitySynchronizationContext::__get_m_MainThreadID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UnitySynchronizationContext::__set_m_TrackedCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UnitySynchronizationContext::__get_m_TrackedCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "mainThreadID", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::UnitySynchronizationContext::UnitySynchronizationContext(int32_t mainThreadID)  : ::System::Threading::SynchronizationContext(THROW_UNLESS(::il2cpp_utils::New<UnitySynchronizationContext>(mainThreadID))) {}
 void ::UnityEngine::UnitySynchronizationContext::_ctor(int32_t mainThreadID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mainThreadID);
}
// Ctor Parameters [CppParam { name: "queue", ty: "::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>", modifiers: "", def_value: None }, CppParam { name: "mainThreadID", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::UnitySynchronizationContext::UnitySynchronizationContext(::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest> queue, int32_t mainThreadID)  : ::System::Threading::SynchronizationContext(THROW_UNLESS(::il2cpp_utils::New<UnitySynchronizationContext>(queue, mainThreadID))) {}
 void ::UnityEngine::UnitySynchronizationContext::_ctor(::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest> queue, int32_t mainThreadID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::____UnityEngine__UnitySynchronizationContext__WorkRequest>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, queue, mainThreadID);
}
 void ::UnityEngine::UnitySynchronizationContext::Send(::System::Threading::SendOrPostCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 void ::UnityEngine::UnitySynchronizationContext::OperationStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "OperationStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UnitySynchronizationContext::OperationCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "OperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UnitySynchronizationContext::Post(::System::Threading::SendOrPostCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "Post",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 ::System::Threading::SynchronizationContext ::UnityEngine::UnitySynchronizationContext::CreateCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "CreateCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UnitySynchronizationContext::Exec()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "Exec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UnitySynchronizationContext::HasPendingTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "HasPendingTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "InitializeSynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::UnitySynchronizationContext::ExecuteTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "ExecuteTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool ::UnityEngine::UnitySynchronizationContext::ExecutePendingTasks(int64_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext>::get(),
                            "ExecutePendingTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, millisecondsTimeout);
}
} // end anonymous namespace

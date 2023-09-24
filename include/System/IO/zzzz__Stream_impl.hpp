#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/IO/zzzz__Stream_NullStream_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
// Ctor Parameters [CppParam { name: "Buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::System__IO__Stream__ReadWriteParameters::System__IO__Stream__ReadWriteParameters(::ArrayW<uint8_t> Buffer, int32_t Offset, int32_t Count) noexcept : ::bs_hook::ValueTypeWrapper() {this->Buffer = Buffer;
this->Offset = Offset;
this->Count = Count;
}
constexpr void System::IO::System__IO__Stream__ReadWriteParameters::__set_Buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::IO::System__IO__Stream__ReadWriteParameters::__get_Buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteParameters::__set_Offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__Stream__ReadWriteParameters::__get_Offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteParameters::__set_Count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__Stream__ReadWriteParameters::__get_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
//  Writing Method size for method: System::IO::System__IO__Stream__ReadWriteTask.ClearBeginState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream__ReadWriteTask::*)()>(&System::IO::System__IO__Stream__ReadWriteTask::ClearBeginState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c6154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            "ClearBeginState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__ReadWriteTask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream__ReadWriteTask::*)(bool, bool, System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>, ::bs_hook::Il2CppWrapperType, System::IO::Stream, ::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback)>(&System::IO::System__IO__Stream__ReadWriteTask::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x23c3f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__ReadWriteTask.InvokeAsyncCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__Stream__ReadWriteTask::InvokeAsyncCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23c615c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            "InvokeAsyncCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__ReadWriteTask.System_Threading_Tasks_ITaskCompletionAction_Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream__ReadWriteTask::*)(System::Threading::Tasks::Task)>(&System::IO::System__IO__Stream__ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_Invoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x23c61d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            "System.Threading.Tasks.ITaskCompletionAction.Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__ReadWriteTask.System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::System__IO__Stream__ReadWriteTask::*)()>(&System::IO::System__IO__Stream__ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c62f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            "System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::Tasks::ITaskCompletionAction
constexpr  System::IO::System__IO__Stream__ReadWriteTask::operator System::Threading::Tasks::ITaskCompletionAction() const noexcept {
return System::Threading::Tasks::ITaskCompletionAction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteTask::__set__isRead(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::System__IO__Stream__ReadWriteTask::__get__isRead() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteTask::__set__apm(bool value)  {
::cordl_internals::setInstanceField<bool, 0x55>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::System__IO__Stream__ReadWriteTask::__get__apm() const {
return ::cordl_internals::getInstanceField<bool, 0x55>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteTask::__set__stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::IO::System__IO__Stream__ReadWriteTask::__get__stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteTask::__set__buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::IO::System__IO__Stream__ReadWriteTask::__get__buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteTask::__set__offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__Stream__ReadWriteTask::__get__offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteTask::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__Stream__ReadWriteTask::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteTask::__set__callback(System::AsyncCallback value)  {
::cordl_internals::setInstanceField<System::AsyncCallback, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::AsyncCallback>(value));
}
constexpr System::AsyncCallback System::IO::System__IO__Stream__ReadWriteTask::__get__callback() const {
return ::cordl_internals::getInstanceField<System::AsyncCallback, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__ReadWriteTask::__set__context(System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<System::Threading::ExecutionContext, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ExecutionContext>(value));
}
constexpr System::Threading::ExecutionContext System::IO::System__IO__Stream__ReadWriteTask::__get__context() const {
return ::cordl_internals::getInstanceField<System::Threading::ExecutionContext, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::IO::System__IO__Stream__ReadWriteTask::__set_s_invokeAsyncCallback(System::Threading::ContextCallback value)  {
::cordl_internals::setStaticField<System::Threading::ContextCallback, "s_invokeAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get>(std::forward<System::Threading::ContextCallback>(value));
}
 System::Threading::ContextCallback System::IO::System__IO__Stream__ReadWriteTask::__get_s_invokeAsyncCallback()  {
return ::cordl_internals::getStaticField<System::Threading::ContextCallback, "s_invokeAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get>();
}
 void System::IO::System__IO__Stream__ReadWriteTask::ClearBeginState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            "ClearBeginState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::System__IO__Stream__ReadWriteTask System::IO::System__IO__Stream__ReadWriteTask::New_ctor(bool isRead, bool apm, System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> function, ::bs_hook::Il2CppWrapperType state, System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback)  {
System::IO::System__IO__Stream__ReadWriteTask o{THROW_UNLESS(::il2cpp_utils::New<System::IO::System__IO__Stream__ReadWriteTask>(isRead, apm, function, state, stream, buffer, offset, count, callback))};
return o;
}
 void System::IO::System__IO__Stream__ReadWriteTask::_ctor(bool isRead, bool apm, System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> function, ::bs_hook::Il2CppWrapperType state, System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isRead, apm, function, state, stream, buffer, offset, count, callback);
}
 void System::IO::System__IO__Stream__ReadWriteTask::InvokeAsyncCallback(::bs_hook::Il2CppWrapperType completedTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            "InvokeAsyncCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, completedTask);
}
 void System::IO::System__IO__Stream__ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_Invoke(System::Threading::Tasks::Task completingTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            "System.Threading.Tasks.ITaskCompletionAction.Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, completingTask);
}
 bool System::IO::System__IO__Stream__ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__ReadWriteTask>::get(),
                            "System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::*)()>(&GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c6b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c._get_AsyncWaitHandle_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ManualResetEvent (GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::*)()>(&GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::_get_AsyncWaitHandle_b__12_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23c6b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>::get(),
                            "<get_AsyncWaitHandle>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::__set___9(GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>::get>(std::forward<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>(value));
}
 GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>::get>();
}
 void GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::__set___9__12_0(System::Func_1<System::Threading::ManualResetEvent> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Threading::ManualResetEvent>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>::get>(std::forward<System::Func_1<System::Threading::ManualResetEvent>>(value));
}
 System::Func_1<System::Threading::ManualResetEvent> GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::__get___9__12_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Threading::ManualResetEvent>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>::get>();
}
 GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::New_ctor()  {
GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>())};
return o;
}
 void GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::ManualResetEvent GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c::_get_AsyncWaitHandle_b__12_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__IO__Stream__SynchronousAsyncResult____c>::get(),
                            "<get_AsyncWaitHandle>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::ManualResetEvent, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream__SynchronousAsyncResult::*)(int32_t, ::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__Stream__SynchronousAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23c5c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream__SynchronousAsyncResult::*)(::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__Stream__SynchronousAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23c5f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream__SynchronousAsyncResult::*)(System::Exception, ::bs_hook::Il2CppWrapperType, bool)>(&System::IO::System__IO__Stream__SynchronousAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23c5ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::System__IO__Stream__SynchronousAsyncResult::*)()>(&System::IO::System__IO__Stream__SynchronousAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c69d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult.get_AsyncWaitHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::WaitHandle (System::IO::System__IO__Stream__SynchronousAsyncResult::*)()>(&System::IO::System__IO__Stream__SynchronousAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x23c69e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult.get_AsyncState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::IO::System__IO__Stream__SynchronousAsyncResult::*)()>(&System::IO::System__IO__Stream__SynchronousAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c6ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult.get_CompletedSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::System__IO__Stream__SynchronousAsyncResult::*)()>(&System::IO::System__IO__Stream__SynchronousAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c6ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult.ThrowIfError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream__SynchronousAsyncResult::*)()>(&System::IO::System__IO__Stream__SynchronousAsyncResult::ThrowIfError)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23c6ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "ThrowIfError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::IAsyncResult)>(&System::IO::System__IO__Stream__SynchronousAsyncResult::EndRead)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23c5cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream__SynchronousAsyncResult.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult)>(&System::IO::System__IO__Stream__SynchronousAsyncResult::EndWrite)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23c5f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IAsyncResult
constexpr  System::IO::System__IO__Stream__SynchronousAsyncResult::operator System::IAsyncResult() const noexcept {
return System::IAsyncResult(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__SynchronousAsyncResult::__set__stateObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::IO::System__IO__Stream__SynchronousAsyncResult::__get__stateObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__SynchronousAsyncResult::__set__isWrite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::System__IO__Stream__SynchronousAsyncResult::__get__isWrite() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__SynchronousAsyncResult::__set__waitHandle(System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<System::Threading::ManualResetEvent, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ManualResetEvent>(value));
}
constexpr System::Threading::ManualResetEvent System::IO::System__IO__Stream__SynchronousAsyncResult::__get__waitHandle() const {
return ::cordl_internals::getInstanceField<System::Threading::ManualResetEvent, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__SynchronousAsyncResult::__set__exceptionInfo(System::Runtime::ExceptionServices::ExceptionDispatchInfo value)  {
::cordl_internals::setInstanceField<System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::ExceptionServices::ExceptionDispatchInfo>(value));
}
constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo System::IO::System__IO__Stream__SynchronousAsyncResult::__get__exceptionInfo() const {
return ::cordl_internals::getInstanceField<System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__SynchronousAsyncResult::__set__endXxxCalled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::System__IO__Stream__SynchronousAsyncResult::__get__endXxxCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::System__IO__Stream__SynchronousAsyncResult::__set__bytesRead(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__Stream__SynchronousAsyncResult::__get__bytesRead() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::IO::System__IO__Stream__SynchronousAsyncResult System::IO::System__IO__Stream__SynchronousAsyncResult::New_ctor(int32_t bytesRead, ::bs_hook::Il2CppWrapperType asyncStateObject)  {
System::IO::System__IO__Stream__SynchronousAsyncResult o{THROW_UNLESS(::il2cpp_utils::New<System::IO::System__IO__Stream__SynchronousAsyncResult>(bytesRead, asyncStateObject))};
return o;
}
 void System::IO::System__IO__Stream__SynchronousAsyncResult::_ctor(int32_t bytesRead, ::bs_hook::Il2CppWrapperType asyncStateObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bytesRead, asyncStateObject);
}
 System::IO::System__IO__Stream__SynchronousAsyncResult System::IO::System__IO__Stream__SynchronousAsyncResult::New_ctor(::bs_hook::Il2CppWrapperType asyncStateObject)  {
System::IO::System__IO__Stream__SynchronousAsyncResult o{THROW_UNLESS(::il2cpp_utils::New<System::IO::System__IO__Stream__SynchronousAsyncResult>(asyncStateObject))};
return o;
}
 void System::IO::System__IO__Stream__SynchronousAsyncResult::_ctor(::bs_hook::Il2CppWrapperType asyncStateObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncStateObject);
}
 System::IO::System__IO__Stream__SynchronousAsyncResult System::IO::System__IO__Stream__SynchronousAsyncResult::New_ctor(System::Exception ex, ::bs_hook::Il2CppWrapperType asyncStateObject, bool isWrite)  {
System::IO::System__IO__Stream__SynchronousAsyncResult o{THROW_UNLESS(::il2cpp_utils::New<System::IO::System__IO__Stream__SynchronousAsyncResult>(ex, asyncStateObject, isWrite))};
return o;
}
 void System::IO::System__IO__Stream__SynchronousAsyncResult::_ctor(System::Exception ex, ::bs_hook::Il2CppWrapperType asyncStateObject, bool isWrite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ex, asyncStateObject, isWrite);
}
 bool System::IO::System__IO__Stream__SynchronousAsyncResult::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::WaitHandle System::IO::System__IO__Stream__SynchronousAsyncResult::get_AsyncWaitHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::WaitHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::IO::System__IO__Stream__SynchronousAsyncResult::get_AsyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::System__IO__Stream__SynchronousAsyncResult::get_CompletedSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::System__IO__Stream__SynchronousAsyncResult::ThrowIfError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "ThrowIfError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::IO::System__IO__Stream__SynchronousAsyncResult::EndRead(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, asyncResult);
}
 void System::IO::System__IO__Stream__SynchronousAsyncResult::EndWrite(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream__SynchronousAsyncResult>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
//  Writing Method size for method: System::IO::System__IO__Stream____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream____c::*)()>(&System::IO::System__IO__Stream____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c6c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____c._EnsureAsyncActiveSemaphoreInitialized_b__4_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SemaphoreSlim (System::IO::System__IO__Stream____c::*)()>(&System::IO::System__IO__Stream____c::_EnsureAsyncActiveSemaphoreInitialized_b__4_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23c6c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<EnsureAsyncActiveSemaphoreInitialized>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____c._FlushAsync_b__37_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream____c::*)(::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__Stream____c::_FlushAsync_b__37_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23c6c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<FlushAsync>b__37_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____c._BeginReadInternal_b__40_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::System__IO__Stream____c::*)(::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__Stream____c::_BeginReadInternal_b__40_0)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x23c6d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginReadInternal>b__40_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____c._BeginEndReadAsync_b__45_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::System__IO__Stream____c::*)(System::IO::Stream, System::IO::System__IO__Stream__ReadWriteParameters, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__Stream____c::_BeginEndReadAsync_b__45_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23c6ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginEndReadAsync>b__45_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::System__IO__Stream__ReadWriteParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____c._BeginEndReadAsync_b__45_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::System__IO__Stream____c::*)(System::IO::Stream, System::IAsyncResult)>(&System::IO::System__IO__Stream____c::_BeginEndReadAsync_b__45_1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23c6f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginEndReadAsync>b__45_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____c._BeginWriteInternal_b__48_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::System__IO__Stream____c::*)(::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__Stream____c::_BeginWriteInternal_b__48_0)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x23c6f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginWriteInternal>b__48_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____c._RunReadWriteTaskWhenReady_b__49_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream____c::*)(System::Threading::Tasks::Task, ::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__Stream____c::_RunReadWriteTaskWhenReady_b__49_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23c70b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<RunReadWriteTaskWhenReady>b__49_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____c._BeginEndWriteAsync_b__58_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::System__IO__Stream____c::*)(System::IO::Stream, System::IO::System__IO__Stream__ReadWriteParameters, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::System__IO__Stream____c::_BeginEndWriteAsync_b__58_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23c7124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginEndWriteAsync>b__58_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::System__IO__Stream__ReadWriteParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____c._BeginEndWriteAsync_b__58_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::VoidTaskResult (System::IO::System__IO__Stream____c::*)(System::IO::Stream, System::IAsyncResult)>(&System::IO::System__IO__Stream____c::_BeginEndWriteAsync_b__58_1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23c7158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginEndWriteAsync>b__58_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::IO::System__IO__Stream____c::__set___9(System::IO::System__IO__Stream____c value)  {
::cordl_internals::setStaticField<System::IO::System__IO__Stream____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::IO::System__IO__Stream____c>(value));
}
 System::IO::System__IO__Stream____c System::IO::System__IO__Stream____c::__get___9()  {
return ::cordl_internals::getStaticField<System::IO::System__IO__Stream____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 void System::IO::System__IO__Stream____c::__set___9__4_0(System::Func_1<System::Threading::SemaphoreSlim> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Threading::SemaphoreSlim>, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::Func_1<System::Threading::SemaphoreSlim>>(value));
}
 System::Func_1<System::Threading::SemaphoreSlim> System::IO::System__IO__Stream____c::__get___9__4_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Threading::SemaphoreSlim>, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 void System::IO::System__IO__Stream____c::__set___9__37_0(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
 System::Action_1<::bs_hook::Il2CppWrapperType> System::IO::System__IO__Stream____c::__get___9__37_0()  {
return ::cordl_internals::getStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 void System::IO::System__IO__Stream____c::__set___9__40_0(System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>, "<>9__40_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>>(value));
}
 System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> System::IO::System__IO__Stream____c::__get___9__40_0()  {
return ::cordl_internals::getStaticField<System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>, "<>9__40_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 void System::IO::System__IO__Stream____c::__set___9__45_0(System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> value)  {
::cordl_internals::setStaticField<System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>(value));
}
 System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> System::IO::System__IO__Stream____c::__get___9__45_0()  {
return ::cordl_internals::getStaticField<System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 void System::IO::System__IO__Stream____c::__set___9__45_1(System::Func_3<System::IO::Stream,System::IAsyncResult,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_3<System::IO::Stream,System::IAsyncResult,int32_t>, "<>9__45_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::Func_3<System::IO::Stream,System::IAsyncResult,int32_t>>(value));
}
 System::Func_3<System::IO::Stream,System::IAsyncResult,int32_t> System::IO::System__IO__Stream____c::__get___9__45_1()  {
return ::cordl_internals::getStaticField<System::Func_3<System::IO::Stream,System::IAsyncResult,int32_t>, "<>9__45_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 void System::IO::System__IO__Stream____c::__set___9__48_0(System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>, "<>9__48_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>>(value));
}
 System::Func_2<::bs_hook::Il2CppWrapperType,int32_t> System::IO::System__IO__Stream____c::__get___9__48_0()  {
return ::cordl_internals::getStaticField<System::Func_2<::bs_hook::Il2CppWrapperType,int32_t>, "<>9__48_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 void System::IO::System__IO__Stream____c::__set___9__49_0(System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType>, "<>9__49_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType>>(value));
}
 System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType> System::IO::System__IO__Stream____c::__get___9__49_0()  {
return ::cordl_internals::getStaticField<System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType>, "<>9__49_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 void System::IO::System__IO__Stream____c::__set___9__58_0(System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> value)  {
::cordl_internals::setStaticField<System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, "<>9__58_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>(value));
}
 System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> System::IO::System__IO__Stream____c::__get___9__58_0()  {
return ::cordl_internals::getStaticField<System::Func_5<System::IO::Stream,System::IO::System__IO__Stream__ReadWriteParameters,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, "<>9__58_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 void System::IO::System__IO__Stream____c::__set___9__58_1(System::Func_3<System::IO::Stream,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setStaticField<System::Func_3<System::IO::Stream,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, "<>9__58_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>(std::forward<System::Func_3<System::IO::Stream,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>(value));
}
 System::Func_3<System::IO::Stream,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> System::IO::System__IO__Stream____c::__get___9__58_1()  {
return ::cordl_internals::getStaticField<System::Func_3<System::IO::Stream,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, "<>9__58_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get>();
}
 System::IO::System__IO__Stream____c System::IO::System__IO__Stream____c::New_ctor()  {
System::IO::System__IO__Stream____c o{THROW_UNLESS(::il2cpp_utils::New<System::IO::System__IO__Stream____c>())};
return o;
}
 void System::IO::System__IO__Stream____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::SemaphoreSlim System::IO::System__IO__Stream____c::_EnsureAsyncActiveSemaphoreInitialized_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<EnsureAsyncActiveSemaphoreInitialized>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SemaphoreSlim, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::System__IO__Stream____c::_FlushAsync_b__37_0(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<FlushAsync>b__37_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 int32_t System::IO::System__IO__Stream____c::_BeginReadInternal_b__40_0(::bs_hook::Il2CppWrapperType _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginReadInternal>b__40_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, _p0_);
}
 System::IAsyncResult System::IO::System__IO__Stream____c::_BeginEndReadAsync_b__45_0(System::IO::Stream stream, System::IO::System__IO__Stream__ReadWriteParameters args, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginEndReadAsync>b__45_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::System__IO__Stream__ReadWriteParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, stream, args, callback, state);
}
 int32_t System::IO::System__IO__Stream____c::_BeginEndReadAsync_b__45_1(System::IO::Stream stream, System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginEndReadAsync>b__45_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, stream, asyncResult);
}
 int32_t System::IO::System__IO__Stream____c::_BeginWriteInternal_b__48_0(::bs_hook::Il2CppWrapperType _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginWriteInternal>b__48_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, _p0_);
}
 void System::IO::System__IO__Stream____c::_RunReadWriteTaskWhenReady_b__49_0(System::Threading::Tasks::Task t, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<RunReadWriteTaskWhenReady>b__49_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t, state);
}
 System::IAsyncResult System::IO::System__IO__Stream____c::_BeginEndWriteAsync_b__58_0(System::IO::Stream stream, System::IO::System__IO__Stream__ReadWriteParameters args, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginEndWriteAsync>b__58_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::System__IO__Stream__ReadWriteParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, stream, args, callback, state);
}
 System::Threading::Tasks::VoidTaskResult System::IO::System__IO__Stream____c::_BeginEndWriteAsync_b__58_1(System::IO::Stream stream, System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____c>::get(),
                            "<BeginEndWriteAsync>b__58_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::VoidTaskResult, false>(const_cast<void*>(instance), ___internal_method, stream, asyncResult);
}
//  Writing Method size for method: System::IO::System__IO__Stream___CopyToAsyncInternal_d__28.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::*)()>(&System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x23c718c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream___CopyToAsyncInternal_d__28>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream___CopyToAsyncInternal_d__28.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23c7868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream___CopyToAsyncInternal_d__28>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::IO::Stream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "destination", ty: "System::IO::Stream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::System__IO__Stream___CopyToAsyncInternal_d__28(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t bufferSize, System::IO::Stream __4__this, System::Threading::CancellationToken cancellationToken, System::IO::Stream destination, ::ArrayW<uint8_t> _buffer_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->bufferSize = bufferSize;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->destination = destination;
this->_buffer_5__2 = _buffer_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__set_bufferSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__get_bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__set___4__this(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x28>(this->__instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x28>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__set_destination(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x38>(this->__instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__get_destination() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x38>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__set__buffer_5__2(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__get__buffer_5__2() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x48>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x58>(this->__instance);
}
 void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream___CopyToAsyncInternal_d__28>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::IO::System__IO__Stream___CopyToAsyncInternal_d__28::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream___CopyToAsyncInternal_d__28>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::IO::System__IO__Stream___FinishWriteAsync_d__57.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream___FinishWriteAsync_d__57::*)()>(&System::IO::System__IO__Stream___FinishWriteAsync_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x23c7874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream___FinishWriteAsync_d__57>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream___FinishWriteAsync_d__57.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream___FinishWriteAsync_d__57::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::IO::System__IO__Stream___FinishWriteAsync_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23c7a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream___FinishWriteAsync_d__57>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::IO::System__IO__Stream___FinishWriteAsync_d__57::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "writeTask", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: Some("csnull") }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::System__IO__Stream___FinishWriteAsync_d__57::System__IO__Stream___FinishWriteAsync_d__57(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Threading::Tasks::Task writeTask, ::ArrayW<uint8_t> localBuffer, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->writeTask = writeTask;
this->localBuffer = localBuffer;
this->__u__1 = __u__1;
}
constexpr void System::IO::System__IO__Stream___FinishWriteAsync_d__57::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__Stream___FinishWriteAsync_d__57::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___FinishWriteAsync_d__57::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::IO::System__IO__Stream___FinishWriteAsync_d__57::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___FinishWriteAsync_d__57::__set_writeTask(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x20>(this->__instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task System::IO::System__IO__Stream___FinishWriteAsync_d__57::__get_writeTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x20>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___FinishWriteAsync_d__57::__set_localBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::IO::System__IO__Stream___FinishWriteAsync_d__57::__get_localBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void System::IO::System__IO__Stream___FinishWriteAsync_d__57::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::IO::System__IO__Stream___FinishWriteAsync_d__57::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance);
}
 void System::IO::System__IO__Stream___FinishWriteAsync_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream___FinishWriteAsync_d__57>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::IO::System__IO__Stream___FinishWriteAsync_d__57::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream___FinishWriteAsync_d__57>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::*)()>(&System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x23c7a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23c7e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "readTask", ty: "System::Threading::Tasks::Task_1<int32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "localDestination", ty: "System::Memory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder, System::Threading::Tasks::Task_1<int32_t> readTask, ::ArrayW<uint8_t> localBuffer, System::Memory_1<uint8_t> localDestination, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->readTask = readTask;
this->localBuffer = localBuffer;
this->localDestination = localDestination;
this->__u__1 = __u__1;
}
constexpr void System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__set___t__builder(System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__set_readTask(System::Threading::Tasks::Task_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<int32_t>, 0x28>(this->__instance, std::forward<System::Threading::Tasks::Task_1<int32_t>>(value));
}
constexpr System::Threading::Tasks::Task_1<int32_t> System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__get_readTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<int32_t>, 0x28>(this->__instance);
}
constexpr void System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__set_localBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__get_localBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__set_localDestination(System::Memory_1<uint8_t> value)  {
::cordl_internals::setInstanceField<System::Memory_1<uint8_t>, 0x38>(this->__instance, std::forward<System::Memory_1<uint8_t>>(value));
}
constexpr System::Memory_1<uint8_t> System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__get_localDestination() const {
return ::cordl_internals::getInstanceField<System::Memory_1<uint8_t>, 0x38>(this->__instance);
}
constexpr void System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance);
}
 void System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__Stream____ReadAsync_g__FinishReadAsync_44_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::IO::Stream.EnsureAsyncActiveSemaphoreInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SemaphoreSlim (System::IO::Stream::*)()>(&System::IO::Stream::EnsureAsyncActiveSemaphoreInitialized)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x23c3658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "EnsureAsyncActiveSemaphoreInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::*)()>(&System::IO::Stream::get_CanRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::*)()>(&System::IO::Stream::get_CanSeek)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.get_CanTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::*)()>(&System::IO::Stream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c3750;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::*)()>(&System::IO::Stream::get_CanWrite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Stream::*)()>(&System::IO::Stream::get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Stream::*)()>(&System::IO::Stream::get_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(int64_t)>(&System::IO::Stream::set_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.get_ReadTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Stream::*)()>(&System::IO::Stream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23c3758;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.set_ReadTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(int32_t)>(&System::IO::Stream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23c37a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.get_WriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Stream::*)()>(&System::IO::Stream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23c37f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.set_WriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(int32_t)>(&System::IO::Stream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23c3848;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.CopyToAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::Stream::*)(System::IO::Stream)>(&System::IO::Stream::CopyToAsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23c3898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.CopyToAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::Stream::*)(System::IO::Stream, int32_t)>(&System::IO::Stream::CopyToAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23c3988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.CopyToAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::Stream::*)(System::IO::Stream, int32_t, System::Threading::CancellationToken)>(&System::IO::Stream::CopyToAsync)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23c3a0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.CopyToAsyncInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::Stream::*)(System::IO::Stream, int32_t, System::Threading::CancellationToken)>(&System::IO::Stream::CopyToAsyncInternal)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x23c3a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "CopyToAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.GetCopyBufferSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Stream::*)()>(&System::IO::Stream::GetCopyBufferSize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23c38c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "GetCopyBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)()>(&System::IO::Stream::Close)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23c3b48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)()>(&System::IO::Stream::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c3bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(bool)>(&System::IO::Stream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c3bc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)()>(&System::IO::Stream::Flush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.FlushAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::Stream::*)(System::Threading::CancellationToken)>(&System::IO::Stream::FlushAsync)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x23c3bcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::Stream::BeginRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23c3d90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BeginReadInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType, bool, bool)>(&System::IO::Stream::BeginReadInternal)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23c3db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginReadInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Stream::*)(System::IAsyncResult)>(&System::IO::Stream::EndRead)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23c4310;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::Stream::ReadAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23c44dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::IO::Stream::ReadAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23c4570;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask_1<int32_t> (System::IO::Stream::*)(System::Memory_1<uint8_t>, System::Threading::CancellationToken)>(&System::IO::Stream::ReadAsync)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x23c47e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BeginEndReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::Stream::BeginEndReadAsync)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x23c462c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginEndReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::Stream::BeginWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23c4b4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BeginWriteInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType, bool, bool)>(&System::IO::Stream::BeginWriteInternal)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23c4b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginWriteInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.RunReadWriteTaskWhenReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(System::Threading::Tasks::Task, System::IO::System__IO__Stream__ReadWriteTask)>(&System::IO::Stream::RunReadWriteTaskWhenReady)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x23c40d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "RunReadWriteTaskWhenReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::System__IO__Stream__ReadWriteTask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.RunReadWriteTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(System::IO::System__IO__Stream__ReadWriteTask)>(&System::IO::Stream::RunReadWriteTask)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23c425c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "RunReadWriteTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::System__IO__Stream__ReadWriteTask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.FinishTrackingAsyncOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)()>(&System::IO::Stream::FinishTrackingAsyncOperation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23c4d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "FinishTrackingAsyncOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(System::IAsyncResult)>(&System::IO::Stream::EndWrite)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x23c4d74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::Stream::WriteAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23c4f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::IO::Stream::WriteAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23c4fc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask (System::IO::Stream::*)(System::ReadOnlyMemory_1<uint8_t>, System::Threading::CancellationToken)>(&System::IO::Stream::WriteAsync)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x23c5224;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.FinishWriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::Stream::*)(System::Threading::Tasks::Task, ::ArrayW<uint8_t>)>(&System::IO::Stream::FinishWriteAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23c549c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "FinishWriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BeginEndWriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::Stream::BeginEndWriteAsync)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x23c506c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginEndWriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Stream::*)(int64_t, System::IO::SeekOrigin)>(&System::IO::Stream::Seek)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(int64_t)>(&System::IO::Stream::SetLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::Stream::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Stream::*)(System::Span_1<uint8_t>)>(&System::IO::Stream::Read)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x23c557c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Stream::*)()>(&System::IO::Stream::ReadByte)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23c5804;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::Stream::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(System::ReadOnlySpan_1<uint8_t>)>(&System::IO::Stream::Write)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x23c5898;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)(uint8_t)>(&System::IO::Stream::WriteByte)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23c5a60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Stream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BlockingBeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::Stream::BlockingBeginRead)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x23c5aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BlockingBeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BlockingEndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::IAsyncResult)>(&System::IO::Stream::BlockingEndRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c5cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BlockingEndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BlockingBeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::Stream::BlockingBeginWrite)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x23c5de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BlockingBeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.BlockingEndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult)>(&System::IO::Stream::BlockingEndWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c5f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BlockingEndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.HasOverriddenBeginEndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::*)()>(&System::IO::Stream::HasOverriddenBeginEndRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c4b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "HasOverriddenBeginEndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream.HasOverriddenBeginEndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Stream::*)()>(&System::IO::Stream::HasOverriddenBeginEndWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c5574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "HasOverriddenBeginEndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::*)()>(&System::IO::Stream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c6080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Stream._ReadAsync_g__FinishReadAsync_44_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask_1<int32_t> (*)(System::Threading::Tasks::Task_1<int32_t>, ::ArrayW<uint8_t>, System::Memory_1<uint8_t>)>(&System::IO::Stream::_ReadAsync_g__FinishReadAsync_44_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23c4a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "<ReadAsync>g__FinishReadAsync|44_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::IO::Stream::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::IO::Stream::__set_Null(System::IO::Stream value)  {
::cordl_internals::setStaticField<System::IO::Stream, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get>(std::forward<System::IO::Stream>(value));
}
 System::IO::Stream System::IO::Stream::__get_Null()  {
return ::cordl_internals::getStaticField<System::IO::Stream, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get>();
}
constexpr void System::IO::Stream::__set__activeReadWriteTask(System::IO::System__IO__Stream__ReadWriteTask value)  {
::cordl_internals::setInstanceField<System::IO::System__IO__Stream__ReadWriteTask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::System__IO__Stream__ReadWriteTask>(value));
}
constexpr System::IO::System__IO__Stream__ReadWriteTask System::IO::Stream::__get__activeReadWriteTask() const {
return ::cordl_internals::getInstanceField<System::IO::System__IO__Stream__ReadWriteTask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Stream::__set__asyncActiveSemaphore(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::IO::Stream::__get__asyncActiveSemaphore() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::SemaphoreSlim System::IO::Stream::EnsureAsyncActiveSemaphoreInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "EnsureAsyncActiveSemaphoreInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SemaphoreSlim, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::Stream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::Stream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::Stream::get_CanTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "get_CanTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::Stream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::IO::Stream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::IO::Stream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Stream::set_Position(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::IO::Stream::get_ReadTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "get_ReadTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Stream::set_ReadTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "set_ReadTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::IO::Stream::get_WriteTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "get_WriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Stream::set_WriteTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "set_WriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Threading::Tasks::Task System::IO::Stream::CopyToAsync(System::IO::Stream destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, destination);
}
 System::Threading::Tasks::Task System::IO::Stream::CopyToAsync(System::IO::Stream destination, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, destination, bufferSize);
}
 System::Threading::Tasks::Task System::IO::Stream::CopyToAsync(System::IO::Stream destination, int32_t bufferSize, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, destination, bufferSize, cancellationToken);
}
 System::Threading::Tasks::Task System::IO::Stream::CopyToAsyncInternal(System::IO::Stream destination, int32_t bufferSize, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "CopyToAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, destination, bufferSize, cancellationToken);
}
 int32_t System::IO::Stream::GetCopyBufferSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "GetCopyBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Stream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Stream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Stream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::IO::Stream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task System::IO::Stream::FlushAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "FlushAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 System::IAsyncResult System::IO::Stream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 System::IAsyncResult System::IO::Stream::BeginReadInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, bool serializeAsynchronously, bool apm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginReadInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state, serializeAsynchronously, apm);
}
 int32_t System::IO::Stream::EndRead(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::Threading::Tasks::Task_1<int32_t> System::IO::Stream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::Threading::Tasks::Task_1<int32_t> System::IO::Stream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::ValueTask_1<int32_t> System::IO::Stream::ReadAsync(System::Memory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, cancellationToken);
}
 System::Threading::Tasks::Task_1<int32_t> System::IO::Stream::BeginEndReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginEndReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::IAsyncResult System::IO::Stream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 System::IAsyncResult System::IO::Stream::BeginWriteInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, bool serializeAsynchronously, bool apm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginWriteInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state, serializeAsynchronously, apm);
}
 void System::IO::Stream::RunReadWriteTaskWhenReady(System::Threading::Tasks::Task asyncWaiter, System::IO::System__IO__Stream__ReadWriteTask readWriteTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "RunReadWriteTaskWhenReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::System__IO__Stream__ReadWriteTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncWaiter, readWriteTask);
}
 void System::IO::Stream::RunReadWriteTask(System::IO::System__IO__Stream__ReadWriteTask readWriteTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "RunReadWriteTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::System__IO__Stream__ReadWriteTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, readWriteTask);
}
 void System::IO::Stream::FinishTrackingAsyncOperation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "FinishTrackingAsyncOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Stream::EndWrite(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::Threading::Tasks::Task System::IO::Stream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::Threading::Tasks::Task System::IO::Stream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::ValueTask System::IO::Stream::WriteAsync(System::ReadOnlyMemory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask, false>(const_cast<void*>(instance), ___internal_method, buffer, cancellationToken);
}
 System::Threading::Tasks::Task System::IO::Stream::FinishWriteAsync(System::Threading::Tasks::Task writeTask, ::ArrayW<uint8_t> localBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "FinishWriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, writeTask, localBuffer);
}
 System::Threading::Tasks::Task System::IO::Stream::BeginEndWriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BeginEndWriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 int64_t System::IO::Stream::Seek(int64_t offset, System::IO::SeekOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, offset, origin);
}
 void System::IO::Stream::SetLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::IO::Stream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 int32_t System::IO::Stream::Read(System::Span_1<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 int32_t System::IO::Stream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Stream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void System::IO::Stream::Write(System::ReadOnlySpan_1<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 void System::IO::Stream::WriteByte(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::IAsyncResult System::IO::Stream::BlockingBeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BlockingBeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 int32_t System::IO::Stream::BlockingEndRead(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BlockingEndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, asyncResult);
}
 System::IAsyncResult System::IO::Stream::BlockingBeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BlockingBeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 void System::IO::Stream::BlockingEndWrite(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "BlockingEndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
 bool System::IO::Stream::HasOverriddenBeginEndRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "HasOverriddenBeginEndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::Stream::HasOverriddenBeginEndWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "HasOverriddenBeginEndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::Stream System::IO::Stream::New_ctor()  {
System::IO::Stream o{THROW_UNLESS(::il2cpp_utils::New<System::IO::Stream>())};
return o;
}
 void System::IO::Stream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::ValueTask_1<int32_t> System::IO::Stream::_ReadAsync_g__FinishReadAsync_44_0(System::Threading::Tasks::Task_1<int32_t> readTask, ::ArrayW<uint8_t> localBuffer, System::Memory_1<uint8_t> localDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Stream>::get(),
                            "<ReadAsync>g__FinishReadAsync|44_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask_1<int32_t>, false>(nullptr, ___internal_method, readTask, localBuffer, localDestination);
}

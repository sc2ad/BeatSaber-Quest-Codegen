#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::*)(System::Collections::Generic::IList_1<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x24bf014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::Invoke)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x24bf128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise.get_InvokeMayRunArbitraryCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bf354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::Tasks::ITaskCompletionAction
constexpr  System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::operator System::Threading::Tasks::ITaskCompletionAction() const noexcept {
return System::Threading::Tasks::ITaskCompletionAction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::__set__tasks(System::Collections::Generic::IList_1<System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IList_1<System::Threading::Tasks::Task>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IList_1<System::Threading::Tasks::Task>>(value));
}
constexpr System::Collections::Generic::IList_1<System::Threading::Tasks::Task> System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::__get__tasks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IList_1<System::Threading::Tasks::Task>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::New_ctor(System::Collections::Generic::IList_1<System::Threading::Tasks::Task> tasks)  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise>(tasks))};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::_ctor(System::Collections::Generic::IList_1<System::Threading::Tasks::Task> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tasks);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::Invoke(System::Threading::Tasks::Task completingTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, completingTask);
}
 bool System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory::*)()>(&System::Threading::Tasks::TaskFactory::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24bca4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24bec4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory.CheckCreationOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory::CheckCreationOptions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24beda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "CheckCreationOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory.StartNew
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Threading::Tasks::TaskFactory::*)(System::Action, System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory::StartNew)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24bee04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "StartNew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory.StartNew
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Threading::Tasks::TaskFactory::*)(System::Action_1<::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory::StartNew)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24bee90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "StartNew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory.CheckFromAsyncOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::TaskCreationOptions, bool)>(&System::Threading::Tasks::TaskFactory::CheckFromAsyncOptions)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x24bef20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "CheckFromAsyncOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory.CommonCWAnyLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> (*)(System::Collections::Generic::IList_1<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::TaskFactory::CommonCWAnyLogic)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x24bbde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "CommonCWAnyLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory.CheckMultiTaskContinuationOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::TaskContinuationOptions)>(&System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x24bec9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "CheckMultiTaskContinuationOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory System::Threading::Tasks::TaskFactory::New_ctor()  {
System::Threading::Tasks::TaskFactory o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory>())};
return o;
}
 void System::Threading::Tasks::TaskFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory System::Threading::Tasks::TaskFactory::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory::CheckCreationOptions(System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "CheckCreationOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, creationOptions);
}
 System::Threading::Tasks::Task System::Threading::Tasks::TaskFactory::StartNew(System::Action action, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "StartNew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, action, cancellationToken, creationOptions, scheduler);
}
 System::Threading::Tasks::Task System::Threading::Tasks::TaskFactory::StartNew(System::Action_1<::bs_hook::Il2CppWrapperType> action, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "StartNew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, action, state, cancellationToken, creationOptions, scheduler);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory::StartNew(System::Func_1<TResult> function, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                        "StartNew",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(const_cast<void*>(instance), ___internal_method, function, cancellationToken, creationOptions, scheduler);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory::StartNew(System::Func_2<::bs_hook::Il2CppWrapperType,TResult> function, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                        "StartNew",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<::bs_hook::Il2CppWrapperType,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(const_cast<void*>(instance), ___internal_method, function, state, cancellationToken, creationOptions, scheduler);
}
template<typename TArg1>
 System::Threading::Tasks::Task System::Threading::Tasks::TaskFactory::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Action_1<System::IAsyncResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task System::Threading::Tasks::TaskFactory::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Action_1<System::IAsyncResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task System::Threading::Tasks::TaskFactory::FromAsync(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Action_1<System::IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, arg2, state);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task System::Threading::Tasks::TaskFactory::FromAsync(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Action_1<System::IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, arg2, state, creationOptions);
}
 void System::Threading::Tasks::TaskFactory::CheckFromAsyncOptions(System::Threading::Tasks::TaskCreationOptions creationOptions, bool hasBeginMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "CheckFromAsyncOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, creationOptions, hasBeginMethod);
}
 System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> System::Threading::Tasks::TaskFactory::CommonCWAnyLogic(System::Collections::Generic::IList_1<System::Threading::Tasks::Task> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "CommonCWAnyLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task>, false>(nullptr, ___internal_method, tasks);
}
 void System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions(System::Threading::Tasks::TaskContinuationOptions continuationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory>::get(),
                            "CheckMultiTaskContinuationOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, continuationOptions);
}

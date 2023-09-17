#pragma once
namespace {
#include "System/Threading/zzzz__ThreadPool_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__RegisteredWaitHandle_def.hpp"
#include "System/Threading/zzzz__WaitOrTimerCallback_def.hpp"
//  Writing Method size for method: ::System::Threading::ThreadPool.RegisterWaitForSingleObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::RegisteredWaitHandle (*)(::System::Threading::WaitHandle, ::System::Threading::WaitOrTimerCallback, ::bs_hook::Il2CppWrapperType, uint32_t, bool, ByRef<::System::Threading::StackCrawlMark>, bool)>(&::System::Threading::ThreadPool::RegisterWaitForSingleObject)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x24af0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "RegisterWaitForSingleObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitOrTimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.RegisterWaitForSingleObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::RegisteredWaitHandle (*)(::System::Threading::WaitHandle, ::System::Threading::WaitOrTimerCallback, ::bs_hook::Il2CppWrapperType, int32_t, bool)>(&::System::Threading::ThreadPool::RegisterWaitForSingleObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24af37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "RegisterWaitForSingleObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitOrTimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.RegisterWaitForSingleObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::RegisteredWaitHandle (*)(::System::Threading::WaitHandle, ::System::Threading::WaitOrTimerCallback, ::bs_hook::Il2CppWrapperType, ::System::TimeSpan, bool)>(&::System::Threading::ThreadPool::RegisterWaitForSingleObject)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x24af400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "RegisterWaitForSingleObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitOrTimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.QueueUserWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::WaitCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Threading::ThreadPool::QueueUserWorkItem)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24af32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "QueueUserWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.QueueUserWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::WaitCallback)>(&::System::Threading::ThreadPool::QueueUserWorkItem)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24af618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "QueueUserWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.UnsafeQueueUserWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::WaitCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Threading::ThreadPool::UnsafeQueueUserWorkItem)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24af354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "UnsafeQueueUserWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.QueueUserWorkItemHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::WaitCallback, ::bs_hook::Il2CppWrapperType, ByRef<::System::Threading::StackCrawlMark>, bool, bool)>(&::System::Threading::ThreadPool::QueueUserWorkItemHelper)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x24af4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "QueueUserWorkItemHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.UnsafeQueueCustomWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::IThreadPoolWorkItem, bool)>(&::System::Threading::ThreadPool::UnsafeQueueCustomWorkItem)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24af6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "UnsafeQueueCustomWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.TryPopCustomWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::IThreadPoolWorkItem)>(&::System::Threading::ThreadPool::TryPopCustomWorkItem)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24af758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "TryPopCustomWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.RequestWorkerThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::ThreadPool::RequestWorkerThread)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24af7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "RequestWorkerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.EnsureVMInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::ThreadPool::EnsureVMInitialized)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24af644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "EnsureVMInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.NotifyWorkItemComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::ThreadPool::NotifyWorkItemComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24af800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "NotifyWorkItemComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.ReportThreadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::System::Threading::ThreadPool::ReportThreadStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24af804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "ReportThreadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.NotifyWorkItemProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::ThreadPool::NotifyWorkItemProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24af80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "NotifyWorkItemProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.NotifyWorkItemProgressNative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::ThreadPool::NotifyWorkItemProgressNative)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24af81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "NotifyWorkItemProgressNative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.NotifyWorkItemQueued
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::ThreadPool::NotifyWorkItemQueued)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24af820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "NotifyWorkItemQueued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.InitializeVMTp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<bool>)>(&::System::Threading::ThreadPool::InitializeVMTp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24af7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "InitializeVMTp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.get_IsThreadPoolThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::ThreadPool::get_IsThreadPoolThread)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24af824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "get_IsThreadPoolThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::System::Threading::RegisteredWaitHandle ::System::Threading::ThreadPool::RegisterWaitForSingleObject(::System::Threading::WaitHandle waitObject, ::System::Threading::WaitOrTimerCallback callBack, ::bs_hook::Il2CppWrapperType state, uint32_t millisecondsTimeOutInterval, bool executeOnlyOnce, ByRef<::System::Threading::StackCrawlMark> stackMark, bool compressStack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "RegisterWaitForSingleObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitOrTimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::RegisteredWaitHandle, false>(nullptr, ___internal_method, waitObject, callBack, state, millisecondsTimeOutInterval, executeOnlyOnce, stackMark, compressStack);
}
 ::System::Threading::RegisteredWaitHandle ::System::Threading::ThreadPool::RegisterWaitForSingleObject(::System::Threading::WaitHandle waitObject, ::System::Threading::WaitOrTimerCallback callBack, ::bs_hook::Il2CppWrapperType state, int32_t millisecondsTimeOutInterval, bool executeOnlyOnce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "RegisterWaitForSingleObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitOrTimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::RegisteredWaitHandle, false>(nullptr, ___internal_method, waitObject, callBack, state, millisecondsTimeOutInterval, executeOnlyOnce);
}
 ::System::Threading::RegisteredWaitHandle ::System::Threading::ThreadPool::RegisterWaitForSingleObject(::System::Threading::WaitHandle waitObject, ::System::Threading::WaitOrTimerCallback callBack, ::bs_hook::Il2CppWrapperType state, ::System::TimeSpan timeout, bool executeOnlyOnce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "RegisterWaitForSingleObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitOrTimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::RegisteredWaitHandle, false>(nullptr, ___internal_method, waitObject, callBack, state, timeout, executeOnlyOnce);
}
 bool ::System::Threading::ThreadPool::QueueUserWorkItem(::System::Threading::WaitCallback callBack, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "QueueUserWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, callBack, state);
}
 bool ::System::Threading::ThreadPool::QueueUserWorkItem(::System::Threading::WaitCallback callBack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "QueueUserWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, callBack);
}
 bool ::System::Threading::ThreadPool::UnsafeQueueUserWorkItem(::System::Threading::WaitCallback callBack, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "UnsafeQueueUserWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, callBack, state);
}
template<typename TState>
 bool ::System::Threading::ThreadPool::QueueUserWorkItem(::System::Action_1<TState> callBack, TState state, bool preferLocal)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                        "QueueUserWorkItem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, callBack, state, preferLocal);
}
/// @param forceGlobal: bool (default: true)
 bool ::System::Threading::ThreadPool::QueueUserWorkItemHelper(::System::Threading::WaitCallback callBack, ::bs_hook::Il2CppWrapperType state, ByRef<::System::Threading::StackCrawlMark> stackMark, bool compressStack, bool forceGlobal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "QueueUserWorkItemHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, callBack, state, stackMark, compressStack, forceGlobal);
}
 void ::System::Threading::ThreadPool::UnsafeQueueCustomWorkItem(::System::Threading::IThreadPoolWorkItem workItem, bool forceGlobal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "UnsafeQueueCustomWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, workItem, forceGlobal);
}
 bool ::System::Threading::ThreadPool::TryPopCustomWorkItem(::System::Threading::IThreadPoolWorkItem workItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "TryPopCustomWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, workItem);
}
 bool ::System::Threading::ThreadPool::RequestWorkerThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "RequestWorkerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::System::Threading::ThreadPool::EnsureVMInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "EnsureVMInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool ::System::Threading::ThreadPool::NotifyWorkItemComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "NotifyWorkItemComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void ::System::Threading::ThreadPool::ReportThreadStatus(bool isWorking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "ReportThreadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isWorking);
}
 void ::System::Threading::ThreadPool::NotifyWorkItemProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "NotifyWorkItemProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::System::Threading::ThreadPool::NotifyWorkItemProgressNative()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "NotifyWorkItemProgressNative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::System::Threading::ThreadPool::NotifyWorkItemQueued()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "NotifyWorkItemQueued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::System::Threading::ThreadPool::InitializeVMTp(ByRef<bool> enableWorkerTracking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "InitializeVMTp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enableWorkerTracking);
}
 bool ::System::Threading::ThreadPool::get_IsThreadPoolThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPool>::get(),
                            "get_IsThreadPoolThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1::*)()>(&::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1._QueueUserWorkItem_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1::*)(::bs_hook::Il2CppWrapperType)>(&::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1::_QueueUserWorkItem_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1>::get(),
                            "<QueueUserWorkItem>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1::__set_callBack(::System::Action_1<TState> value)  {
::cordl_internals::setInstanceField<::System::Action_1<TState>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<TState>>(value));
}
constexpr ::System::Action_1<TState> ::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1::__get_callBack() const {
return ::cordl_internals::getInstanceField<::System::Action_1<TState>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1::____System__Threading__ThreadPool____c__DisplayClass17_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Threading__ThreadPool____c__DisplayClass17_0_1>())) {}
 void ::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1::_QueueUserWorkItem_b__0(::bs_hook::Il2CppWrapperType x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__ThreadPool____c__DisplayClass17_0_1>::get(),
                            "<QueueUserWorkItem>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
} // end anonymous namespace

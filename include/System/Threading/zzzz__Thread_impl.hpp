#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Security/Principal/zzzz__IPrincipal_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/Threading/zzzz__InternalThread_def.hpp"
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
#include "System/Threading/zzzz__ThreadState_def.hpp"
#include "System/Threading/zzzz__ParameterizedThreadStart_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Threading/zzzz__ThreadStart_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
//  Writing Method size for method: System::Threading::Thread.AsyncLocalSetCurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::AsyncLocalValueChangedArgs_1<System::Globalization::CultureInfo>)>(&System::Threading::Thread::AsyncLocalSetCurrentCulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24ac16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "AsyncLocalSetCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::AsyncLocalValueChangedArgs_1<System::Globalization::CultureInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(System::Threading::ThreadStart)>(&System::Threading::Thread::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24ac1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadStart>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(System::Threading::ParameterizedThreadStart)>(&System::Threading::Thread::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24ac374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ParameterizedThreadStart>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(System::Threading::ParameterizedThreadStart, int32_t)>(&System::Threading::Thread::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x24ac3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ParameterizedThreadStart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)()>(&System::Threading::Thread::Start)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24ac4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Thread::Start)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24ac5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(ByRef<System::Threading::StackCrawlMark>)>(&System::Threading::Thread::Start)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24ac4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetExecutionContextReader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::System__Threading__ExecutionContext__Reader (System::Threading::Thread::*)()>(&System::Threading::Thread::GetExecutionContextReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a9864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetExecutionContextReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_ExecutionContextBelongsToCurrentScope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Thread::*)()>(&System::Threading::Thread::get_ExecutionContextBelongsToCurrentScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24aa7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_ExecutionContextBelongsToCurrentScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.set_ExecutionContextBelongsToCurrentScope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(bool)>(&System::Threading::Thread::set_ExecutionContextBelongsToCurrentScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24aa7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_ExecutionContextBelongsToCurrentScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetMutableExecutionContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ExecutionContext (System::Threading::Thread::*)()>(&System::Threading::Thread::GetMutableExecutionContext)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24aa06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetMutableExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SetExecutionContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(System::Threading::ExecutionContext, bool)>(&System::Threading::Thread::SetExecutionContext)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24aa814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SetExecutionContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(System::Threading::System__Threading__ExecutionContext__Reader, bool)>(&System::Threading::Thread::SetExecutionContext)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24a986c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::System__Threading__ExecutionContext__Reader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_Priority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ThreadPriority (System::Threading::Thread::*)()>(&System::Threading::Thread::get_Priority)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24ac6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_Priority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.set_Priority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(System::Threading::ThreadPriority)>(&System::Threading::Thread::set_Priority)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24ac6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_Priority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadPriority>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetPriorityNative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::Thread::*)()>(&System::Threading::Thread::GetPriorityNative)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24ac6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetPriorityNative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SetPriorityNative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(int32_t)>(&System::Threading::Thread::SetPriorityNative)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24ac6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetPriorityNative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.JoinInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Thread::*)(int32_t)>(&System::Threading::Thread::JoinInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24ac700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "JoinInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Join
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)()>(&System::Threading::Thread::Join)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24ac704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SleepInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&System::Threading::Thread::SleepInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24ac70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SleepInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Sleep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&System::Threading::Thread::Sleep)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24a915c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Sleep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.YieldInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::Thread::YieldInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24ac710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "YieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Yield
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::Thread::Yield)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24a91d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Yield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SetStartHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(System::Delegate, int32_t)>(&System::Threading::Thread::SetStartHelper)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24ac24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetStartHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_CurrentUICulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (System::Threading::Thread::*)()>(&System::Threading::Thread::get_CurrentUICulture)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24ac7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetCurrentUICultureNoAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (System::Threading::Thread::*)()>(&System::Threading::Thread::GetCurrentUICultureNoAppX)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24ac828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetCurrentUICultureNoAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_CurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (System::Threading::Thread::*)()>(&System::Threading::Thread::get_CurrentCulture)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24ac8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.set_CurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(System::Globalization::CultureInfo)>(&System::Threading::Thread::set_CurrentCulture)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x24ac9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_CurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetCurrentCultureNoAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (System::Threading::Thread::*)()>(&System::Threading::Thread::GetCurrentCultureNoAppX)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24ac900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetCurrentCultureNoAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.nativeInitCultureAccessors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Thread::nativeInitCultureAccessors)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24acb98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "nativeInitCultureAccessors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.MemoryBarrier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Thread::MemoryBarrier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24acc3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "MemoryBarrier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.ConstructInternalThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)()>(&System::Threading::Thread::ConstructInternalThread)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24acc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "ConstructInternalThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::InternalThread (System::Threading::Thread::*)()>(&System::Threading::Thread::get_Internal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24acc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_CurrentContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::Context (*)()>(&System::Threading::Thread::get_CurrentContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24acc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetCurrentThread_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Threading::Thread>)>(&System::Threading::Thread::GetCurrentThread_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24acc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetCurrentThread_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Thread>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetCurrentThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Thread (*)()>(&System::Threading::Thread::GetCurrentThread)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24acc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetCurrentThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_CurrentThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Thread (*)()>(&System::Threading::Thread::get_CurrentThread)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24a91dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_CurrentThreadId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Threading::Thread::get_CurrentThreadId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24acc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentThreadId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetDomainID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Threading::Thread::GetDomainID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24accb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetDomainID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Thread_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Thread::*)(System::MulticastDelegate)>(&System::Threading::Thread::Thread_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24accb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Thread_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MulticastDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)()>(&System::Threading::Thread::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24accbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Thread),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_IsThreadPoolThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Thread::*)()>(&System::Threading::Thread::get_IsThreadPoolThread)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24accc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_IsThreadPoolThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_IsThreadPoolThreadInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Thread::*)()>(&System::Threading::Thread::get_IsThreadPoolThreadInternal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24accc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_IsThreadPoolThreadInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_IsAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Thread::*)()>(&System::Threading::Thread::get_IsAlive)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24accf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_IsAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.set_IsBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(bool)>(&System::Threading::Thread::set_IsBackground)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24acd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_IsBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SetName_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::InternalThread, void*, int32_t)>(&System::Threading::Thread::SetName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24ace00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetName_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SetName_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::InternalThread, ::StringW)>(&System::Threading::Thread::SetName_internal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24ace04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetName_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.set_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(::StringW)>(&System::Threading::Thread::set_Name)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24ace44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Abort_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::InternalThread, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Thread::Abort_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24ace78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Abort_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.Abort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)()>(&System::Threading::Thread::Abort)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24ace7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SpinWait_nop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Thread::SpinWait_nop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24acea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SpinWait_nop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SpinWait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&System::Threading::Thread::SpinWait)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24a9134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SpinWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.StartInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(::bs_hook::Il2CppWrapperType, ByRef<System::Threading::StackCrawlMark>)>(&System::Threading::Thread::StartInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24ac684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "StartInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::InternalThread, System::Threading::ThreadState)>(&System::Threading::Thread::SetState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24acdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.ClrState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::InternalThread, System::Threading::ThreadState)>(&System::Threading::Thread::ClrState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24acdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "ClrState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ThreadState (*)(System::Threading::InternalThread)>(&System::Threading::Thread::GetState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24acd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SystemMaxStackStize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Threading::Thread::SystemMaxStackStize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24acea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SystemMaxStackStize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetProcessDefaultStackSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::Threading::Thread::GetProcessDefaultStackSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24ac714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetProcessDefaultStackSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.SetStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Thread::*)(System::MulticastDelegate, int32_t)>(&System::Threading::Thread::SetStart)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24ac7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MulticastDelegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.get_ManagedThreadId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::Thread::*)()>(&System::Threading::Thread::get_ManagedThreadId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24a9238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_ManagedThreadId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.BeginCriticalRegion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Thread::BeginCriticalRegion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24a89d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "BeginCriticalRegion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.EndCriticalRegion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Thread::EndCriticalRegion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24a8f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "EndCriticalRegion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::Thread::*)()>(&System::Threading::Thread::GetHashCode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24aceac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Thread),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Thread.ValidateThreadState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ThreadState (System::Threading::Thread::*)()>(&System::Threading::Thread::ValidateThreadState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24acd84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "ValidateThreadState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Threading::Thread::__set_s_LocalDataStoreMgr(System::LocalDataStoreMgr value)  {
::cordl_internals::setStaticField<System::LocalDataStoreMgr, "s_LocalDataStoreMgr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>(std::forward<System::LocalDataStoreMgr>(value));
}
 System::LocalDataStoreMgr System::Threading::Thread::__get_s_LocalDataStoreMgr()  {
return ::cordl_internals::getStaticField<System::LocalDataStoreMgr, "s_LocalDataStoreMgr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>();
}
 void System::Threading::Thread::__set_s_LocalDataStore(System::LocalDataStoreHolder value)  {
::cordl_internals::setStaticField<System::LocalDataStoreHolder, "s_LocalDataStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>(std::forward<System::LocalDataStoreHolder>(value));
}
 System::LocalDataStoreHolder System::Threading::Thread::__get_s_LocalDataStore()  {
return ::cordl_internals::getStaticField<System::LocalDataStoreHolder, "s_LocalDataStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>();
}
 void System::Threading::Thread::__set_m_CurrentCulture(System::Globalization::CultureInfo value)  {
::cordl_internals::setStaticField<System::Globalization::CultureInfo, "m_CurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>(std::forward<System::Globalization::CultureInfo>(value));
}
 System::Globalization::CultureInfo System::Threading::Thread::__get_m_CurrentCulture()  {
return ::cordl_internals::getStaticField<System::Globalization::CultureInfo, "m_CurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>();
}
 void System::Threading::Thread::__set_m_CurrentUICulture(System::Globalization::CultureInfo value)  {
::cordl_internals::setStaticField<System::Globalization::CultureInfo, "m_CurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>(std::forward<System::Globalization::CultureInfo>(value));
}
 System::Globalization::CultureInfo System::Threading::Thread::__get_m_CurrentUICulture()  {
return ::cordl_internals::getStaticField<System::Globalization::CultureInfo, "m_CurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>();
}
 void System::Threading::Thread::__set_s_asyncLocalCurrentCulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> value)  {
::cordl_internals::setStaticField<System::Threading::AsyncLocal_1<System::Globalization::CultureInfo>, "s_asyncLocalCurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>(std::forward<System::Threading::AsyncLocal_1<System::Globalization::CultureInfo>>(value));
}
 System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> System::Threading::Thread::__get_s_asyncLocalCurrentCulture()  {
return ::cordl_internals::getStaticField<System::Threading::AsyncLocal_1<System::Globalization::CultureInfo>, "s_asyncLocalCurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>();
}
 void System::Threading::Thread::__set_s_asyncLocalCurrentUICulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> value)  {
::cordl_internals::setStaticField<System::Threading::AsyncLocal_1<System::Globalization::CultureInfo>, "s_asyncLocalCurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>(std::forward<System::Threading::AsyncLocal_1<System::Globalization::CultureInfo>>(value));
}
 System::Threading::AsyncLocal_1<System::Globalization::CultureInfo> System::Threading::Thread::__get_s_asyncLocalCurrentUICulture()  {
return ::cordl_internals::getStaticField<System::Threading::AsyncLocal_1<System::Globalization::CultureInfo>, "s_asyncLocalCurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>();
}
constexpr void System::Threading::Thread::__set_internal_thread(System::Threading::InternalThread value)  {
::cordl_internals::setInstanceField<System::Threading::InternalThread, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::InternalThread>(value));
}
constexpr System::Threading::InternalThread System::Threading::Thread::__get_internal_thread() const {
return ::cordl_internals::getInstanceField<System::Threading::InternalThread, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Thread::__set_m_ThreadStartArg(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Threading::Thread::__get_m_ThreadStartArg() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Thread::__set_pending_exception(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Threading::Thread::__get_pending_exception() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::Thread::__set_current_thread(System::Threading::Thread value)  {
::cordl_internals::setStaticField<System::Threading::Thread, "current_thread", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>(std::forward<System::Threading::Thread>(value));
}
 System::Threading::Thread System::Threading::Thread::__get_current_thread()  {
return ::cordl_internals::getStaticField<System::Threading::Thread, "current_thread", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get>();
}
constexpr void System::Threading::Thread::__set_m_Delegate(System::MulticastDelegate value)  {
::cordl_internals::setInstanceField<System::MulticastDelegate, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::MulticastDelegate>(value));
}
constexpr System::MulticastDelegate System::Threading::Thread::__get_m_Delegate() const {
return ::cordl_internals::getInstanceField<System::MulticastDelegate, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Thread::__set_m_ExecutionContext(System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<System::Threading::ExecutionContext, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ExecutionContext>(value));
}
constexpr System::Threading::ExecutionContext System::Threading::Thread::__get_m_ExecutionContext() const {
return ::cordl_internals::getInstanceField<System::Threading::ExecutionContext, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Thread::__set_m_ExecutionContextBelongsToOuterScope(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::Thread::__get_m_ExecutionContextBelongsToOuterScope() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Thread::__set_principal(System::Security::Principal::IPrincipal value)  {
::cordl_internals::setInstanceField<System::Security::Principal::IPrincipal, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Principal::IPrincipal>(value));
}
constexpr System::Security::Principal::IPrincipal System::Threading::Thread::__get_principal() const {
return ::cordl_internals::getInstanceField<System::Security::Principal::IPrincipal, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Thread::__set_principal_version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Thread::__get_principal_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::Thread::AsyncLocalSetCurrentCulture(System::Threading::AsyncLocalValueChangedArgs_1<System::Globalization::CultureInfo> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "AsyncLocalSetCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::AsyncLocalValueChangedArgs_1<System::Globalization::CultureInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, args);
}
// Ctor Parameters [CppParam { name: "start", ty: "System::Threading::ThreadStart", modifiers: "", def_value: None }]
 System::Threading::Thread::Thread(System::Threading::ThreadStart start)  : System::Runtime::ConstrainedExecution::CriticalFinalizerObject(THROW_UNLESS(::il2cpp_utils::New<Thread>(start))) {}
 void System::Threading::Thread::_ctor(System::Threading::ThreadStart start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadStart>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start);
}
// Ctor Parameters [CppParam { name: "start", ty: "System::Threading::ParameterizedThreadStart", modifiers: "", def_value: None }]
 System::Threading::Thread::Thread(System::Threading::ParameterizedThreadStart start)  : System::Runtime::ConstrainedExecution::CriticalFinalizerObject(THROW_UNLESS(::il2cpp_utils::New<Thread>(start))) {}
 void System::Threading::Thread::_ctor(System::Threading::ParameterizedThreadStart start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ParameterizedThreadStart>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start);
}
// Ctor Parameters [CppParam { name: "start", ty: "System::Threading::ParameterizedThreadStart", modifiers: "", def_value: None }, CppParam { name: "maxStackSize", ty: "int32_t", modifiers: "", def_value: None }]
 System::Threading::Thread::Thread(System::Threading::ParameterizedThreadStart start, int32_t maxStackSize)  : System::Runtime::ConstrainedExecution::CriticalFinalizerObject(THROW_UNLESS(::il2cpp_utils::New<Thread>(start, maxStackSize))) {}
 void System::Threading::Thread::_ctor(System::Threading::ParameterizedThreadStart start, int32_t maxStackSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ParameterizedThreadStart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, maxStackSize);
}
 void System::Threading::Thread::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::Start(::bs_hook::Il2CppWrapperType parameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameter);
}
 void System::Threading::Thread::Start(ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stackMark);
}
 System::Threading::System__Threading__ExecutionContext__Reader System::Threading::Thread::GetExecutionContextReader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetExecutionContextReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::System__Threading__ExecutionContext__Reader, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Thread::get_ExecutionContextBelongsToCurrentScope()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_ExecutionContextBelongsToCurrentScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::set_ExecutionContextBelongsToCurrentScope(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_ExecutionContextBelongsToCurrentScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Threading::ExecutionContext System::Threading::Thread::GetMutableExecutionContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetMutableExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::ExecutionContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::SetExecutionContext(System::Threading::ExecutionContext value, bool belongsToCurrentScope)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, belongsToCurrentScope);
}
 void System::Threading::Thread::SetExecutionContext(System::Threading::System__Threading__ExecutionContext__Reader value, bool belongsToCurrentScope)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetExecutionContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::System__Threading__ExecutionContext__Reader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, belongsToCurrentScope);
}
 System::Threading::ThreadPriority System::Threading::Thread::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_Priority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::ThreadPriority, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::set_Priority(System::Threading::ThreadPriority value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_Priority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Threading::Thread::GetPriorityNative()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetPriorityNative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::SetPriorityNative(int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetPriorityNative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, priority);
}
 bool System::Threading::Thread::JoinInternal(int32_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "JoinInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, millisecondsTimeout);
}
 void System::Threading::Thread::Join()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Join",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::SleepInternal(int32_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SleepInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, millisecondsTimeout);
}
 void System::Threading::Thread::Sleep(int32_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Sleep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, millisecondsTimeout);
}
 bool System::Threading::Thread::YieldInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "YieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool System::Threading::Thread::Yield()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Yield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void System::Threading::Thread::SetStartHelper(System::Delegate start, int32_t maxStackSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetStartHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, maxStackSize);
}
 System::Globalization::CultureInfo System::Threading::Thread::get_CurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::CultureInfo System::Threading::Thread::GetCurrentUICultureNoAppX()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetCurrentUICultureNoAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::CultureInfo System::Threading::Thread::get_CurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::set_CurrentCulture(System::Globalization::CultureInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_CurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Globalization::CultureInfo System::Threading::Thread::GetCurrentCultureNoAppX()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetCurrentCultureNoAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::nativeInitCultureAccessors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "nativeInitCultureAccessors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Threading::Thread::MemoryBarrier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "MemoryBarrier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Threading::Thread::ConstructInternalThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "ConstructInternalThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::InternalThread System::Threading::Thread::get_Internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::InternalThread, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Contexts::Context System::Threading::Thread::get_CurrentContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::Context, false>(nullptr, ___internal_method);
}
 void System::Threading::Thread::GetCurrentThread_icall(ByRef<System::Threading::Thread> thread)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetCurrentThread_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Thread>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread);
}
 System::Threading::Thread System::Threading::Thread::GetCurrentThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetCurrentThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Thread, false>(nullptr, ___internal_method);
}
 System::Threading::Thread System::Threading::Thread::get_CurrentThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Thread, false>(nullptr, ___internal_method);
}
 int32_t System::Threading::Thread::get_CurrentThreadId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_CurrentThreadId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t System::Threading::Thread::GetDomainID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetDomainID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 bool System::Threading::Thread::Thread_internal(System::MulticastDelegate start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Thread_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MulticastDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, start);
}
 void System::Threading::Thread::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Thread::get_IsThreadPoolThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_IsThreadPoolThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Thread::get_IsThreadPoolThreadInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_IsThreadPoolThreadInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Thread::get_IsAlive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_IsAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::set_IsBackground(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_IsBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Threading::Thread::SetName_icall(System::Threading::InternalThread thread, void* name, int32_t nameLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetName_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, name, nameLength);
}
 void System::Threading::Thread::SetName_internal(System::Threading::InternalThread thread, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetName_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, name);
}
 void System::Threading::Thread::set_Name(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "set_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Threading::Thread::Abort_internal(System::Threading::InternalThread thread, ::bs_hook::Il2CppWrapperType stateInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Abort_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, stateInfo);
}
 void System::Threading::Thread::Abort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::SpinWait_nop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SpinWait_nop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Threading::Thread::SpinWait(int32_t iterations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SpinWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iterations);
}
 void System::Threading::Thread::StartInternal(::bs_hook::Il2CppWrapperType principal, ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "StartInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, principal, stackMark);
}
 void System::Threading::Thread::SetState(System::Threading::InternalThread thread, System::Threading::ThreadState set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, set);
}
 void System::Threading::Thread::ClrState(System::Threading::InternalThread thread, System::Threading::ThreadState clr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "ClrState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, clr);
}
 System::Threading::ThreadState System::Threading::Thread::GetState(System::Threading::InternalThread thread)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::InternalThread>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::ThreadState, false>(nullptr, ___internal_method, thread);
}
 int32_t System::Threading::Thread::SystemMaxStackStize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SystemMaxStackStize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t System::Threading::Thread::GetProcessDefaultStackSize(int32_t maxStackSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetProcessDefaultStackSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, maxStackSize);
}
 void System::Threading::Thread::SetStart(System::MulticastDelegate start, int32_t maxStackSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "SetStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MulticastDelegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, maxStackSize);
}
 int32_t System::Threading::Thread::get_ManagedThreadId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "get_ManagedThreadId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Thread::BeginCriticalRegion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "BeginCriticalRegion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Threading::Thread::EndCriticalRegion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "EndCriticalRegion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 int32_t System::Threading::Thread::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::ThreadState System::Threading::Thread::ValidateThreadState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Thread>::get(),
                            "ValidateThreadState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::ThreadState, false>(const_cast<void*>(instance), ___internal_method);
}

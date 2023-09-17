#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::*)()>(&::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2370590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::*)(::System::Action)>(&::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2370598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter.QueueContinuation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action, bool)>(&::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::QueueContinuation)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x23705f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "QueueContinuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter.RunAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::RunAction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2370890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "RunAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::*)()>(&::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23708fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return ::System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
 void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::__set_s_waitCallbackRunAction(::System::Threading::WaitCallback value)  {
::cordl_internals::setStaticField<::System::Threading::WaitCallback, "s_waitCallbackRunAction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get>(std::forward<::System::Threading::WaitCallback>(value));
}
 ::System::Threading::WaitCallback ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::__get_s_waitCallbackRunAction()  {
return ::cordl_internals::getStaticField<::System::Threading::WaitCallback, "s_waitCallbackRunAction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get>();
}
 void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::__set_s_sendOrPostCallbackRunAction(::System::Threading::SendOrPostCallback value)  {
::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback, "s_sendOrPostCallbackRunAction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get>(std::forward<::System::Threading::SendOrPostCallback>(value));
}
 ::System::Threading::SendOrPostCallback ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::__get_s_sendOrPostCallbackRunAction()  {
return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback, "s_sendOrPostCallbackRunAction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get>();
}
 bool ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::UnsafeOnCompleted(::System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::QueueContinuation(::System::Action continuation, bool flowContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "QueueContinuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, continuation, flowContext);
}
 void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::RunAction(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "RunAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
 void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::System::Runtime::CompilerServices::YieldAwaitable.GetAwaiter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter (::System::Runtime::CompilerServices::YieldAwaitable::*)()>(&::System::Runtime::CompilerServices::YieldAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2370588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::YieldAwaitable>::get(),
                            "GetAwaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter ::System::Runtime::CompilerServices::YieldAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::YieldAwaitable>::get(),
                            "GetAwaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace

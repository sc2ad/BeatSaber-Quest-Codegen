#pragma once
#include "Internal/Runtime/Augments/zzzz__RuntimeThread_def.hpp"
#include "System/Threading/zzzz__ParameterizedThreadStart_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeThread._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Internal::Runtime::Augments::RuntimeThread::*)(System::Threading::Thread)>(&Internal::Runtime::Augments::RuntimeThread::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22bf100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Thread>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeThread.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Internal::Runtime::Augments::RuntimeThread (*)(System::Threading::ParameterizedThreadStart, int32_t)>(&Internal::Runtime::Augments::RuntimeThread::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22bf128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ParameterizedThreadStart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeThread.set_IsBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Internal::Runtime::Augments::RuntimeThread::*)(bool)>(&Internal::Runtime::Augments::RuntimeThread::set_IsBackground)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bf1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "set_IsBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeThread.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Internal::Runtime::Augments::RuntimeThread::*)(::bs_hook::Il2CppWrapperType)>(&Internal::Runtime::Augments::RuntimeThread::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bf1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeThread.Sleep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&Internal::Runtime::Augments::RuntimeThread::Sleep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bf208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "Sleep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeThread.Yield
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Internal::Runtime::Augments::RuntimeThread::Yield)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bf210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "Yield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeThread.SpinWait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&Internal::Runtime::Augments::RuntimeThread::SpinWait)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22bf218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "SpinWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeThread.GetCurrentProcessorId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&Internal::Runtime::Augments::RuntimeThread::GetCurrentProcessorId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bf230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "GetCurrentProcessorId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Internal::Runtime::Augments::RuntimeThread::__set_OptimalMaxSpinWaitsPerSpinIteration(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "OptimalMaxSpinWaitsPerSpinIteration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get>(std::forward<int32_t>(value));
}
 int32_t Internal::Runtime::Augments::RuntimeThread::__get_OptimalMaxSpinWaitsPerSpinIteration()  {
return ::cordl_internals::getStaticField<int32_t, "OptimalMaxSpinWaitsPerSpinIteration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get>();
}
constexpr void Internal::Runtime::Augments::RuntimeThread::__set_thread(System::Threading::Thread value)  {
::cordl_internals::setInstanceField<System::Threading::Thread, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Thread>(value));
}
constexpr System::Threading::Thread Internal::Runtime::Augments::RuntimeThread::__get_thread() const {
return ::cordl_internals::getInstanceField<System::Threading::Thread, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Internal::Runtime::Augments::RuntimeThread Internal::Runtime::Augments::RuntimeThread::New_ctor(System::Threading::Thread t)  {
Internal::Runtime::Augments::RuntimeThread o{THROW_UNLESS(::il2cpp_utils::New<Internal::Runtime::Augments::RuntimeThread>(t))};
return o;
}
 void Internal::Runtime::Augments::RuntimeThread::_ctor(System::Threading::Thread t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Thread>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
 Internal::Runtime::Augments::RuntimeThread Internal::Runtime::Augments::RuntimeThread::Create(System::Threading::ParameterizedThreadStart start, int32_t maxStackSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ParameterizedThreadStart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Internal::Runtime::Augments::RuntimeThread, false>(nullptr, ___internal_method, start, maxStackSize);
}
 void Internal::Runtime::Augments::RuntimeThread::set_IsBackground(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "set_IsBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Internal::Runtime::Augments::RuntimeThread::Start(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void Internal::Runtime::Augments::RuntimeThread::Sleep(int32_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "Sleep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, millisecondsTimeout);
}
 bool Internal::Runtime::Augments::RuntimeThread::Yield()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "Yield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Internal::Runtime::Augments::RuntimeThread::SpinWait(int32_t iterations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "SpinWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, iterations);
}
 int32_t Internal::Runtime::Augments::RuntimeThread::GetCurrentProcessorId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeThread>::get(),
                            "GetCurrentProcessorId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}

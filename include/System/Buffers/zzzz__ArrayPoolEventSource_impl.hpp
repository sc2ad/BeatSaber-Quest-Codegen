#pragma once
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/Buffers/zzzz__ArrayPoolEventSource_def.hpp"
#include "System/Buffers/zzzz__ArrayPoolEventSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason  System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason::Pooled{0};
constexpr System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason  System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason::OverMaximumSize{1};
constexpr System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason  System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason::PoolExhausted{2};
//  Writing Method size for method: System::Buffers::ArrayPoolEventSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPoolEventSource::*)()>(&System::Buffers::ArrayPoolEventSource::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x241e440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPoolEventSource.BufferRented
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t, int32_t)>(&System::Buffers::ArrayPoolEventSource::BufferRented)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x241e4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferRented",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPoolEventSource.BufferAllocated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t, int32_t, System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason)>(&System::Buffers::ArrayPoolEventSource::BufferAllocated)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x241e5d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPoolEventSource.BufferReturned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t)>(&System::Buffers::ArrayPoolEventSource::BufferReturned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x241e6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferReturned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPoolEventSource.BufferTrimmed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t)>(&System::Buffers::ArrayPoolEventSource::BufferTrimmed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x241e6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferTrimmed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPoolEventSource.BufferTrimPoll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t)>(&System::Buffers::ArrayPoolEventSource::BufferTrimPoll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x241e700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferTrimPoll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Buffers::ArrayPoolEventSource::__set_Log(System::Buffers::ArrayPoolEventSource value)  {
::cordl_internals::setStaticField<System::Buffers::ArrayPoolEventSource, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get>(std::forward<System::Buffers::ArrayPoolEventSource>(value));
}
 System::Buffers::ArrayPoolEventSource System::Buffers::ArrayPoolEventSource::__get_Log()  {
return ::cordl_internals::getStaticField<System::Buffers::ArrayPoolEventSource, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get>();
}
 System::Buffers::ArrayPoolEventSource System::Buffers::ArrayPoolEventSource::New_ctor()  {
System::Buffers::ArrayPoolEventSource o{THROW_UNLESS(::il2cpp_utils::New<System::Buffers::ArrayPoolEventSource>())};
return o;
}
 void System::Buffers::ArrayPoolEventSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Buffers::ArrayPoolEventSource::BufferRented(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferRented",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bufferId, bufferSize, poolId, bucketId);
}
 void System::Buffers::ArrayPoolEventSource::BufferAllocated(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId, System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Buffers::System__Buffers__ArrayPoolEventSource__BufferAllocatedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bufferId, bufferSize, poolId, bucketId, reason);
}
 void System::Buffers::ArrayPoolEventSource::BufferReturned(int32_t bufferId, int32_t bufferSize, int32_t poolId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferReturned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bufferId, bufferSize, poolId);
}
 void System::Buffers::ArrayPoolEventSource::BufferTrimmed(int32_t bufferId, int32_t bufferSize, int32_t poolId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferTrimmed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bufferId, bufferSize, poolId);
}
 void System::Buffers::ArrayPoolEventSource::BufferTrimPoll(int32_t milliseconds, int32_t pressure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPoolEventSource>::get(),
                            "BufferTrimPoll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, milliseconds, pressure);
}

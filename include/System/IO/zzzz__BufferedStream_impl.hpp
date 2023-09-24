#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/IO/zzzz__BufferedStream_def.hpp"
#include "System/IO/zzzz__BufferedStream_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: System::IO::System__IO__BufferedStream____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream____c::*)()>(&System::IO::System__IO__BufferedStream____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a2f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__BufferedStream____c._LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SemaphoreSlim (System::IO::System__IO__BufferedStream____c::*)()>(&System::IO::System__IO__BufferedStream____c::_LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23a2f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream____c>::get(),
                            "<LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::IO::System__IO__BufferedStream____c::__set___9(System::IO::System__IO__BufferedStream____c value)  {
::cordl_internals::setStaticField<System::IO::System__IO__BufferedStream____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream____c>::get>(std::forward<System::IO::System__IO__BufferedStream____c>(value));
}
 System::IO::System__IO__BufferedStream____c System::IO::System__IO__BufferedStream____c::__get___9()  {
return ::cordl_internals::getStaticField<System::IO::System__IO__BufferedStream____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream____c>::get>();
}
 void System::IO::System__IO__BufferedStream____c::__set___9__10_0(System::Func_1<System::Threading::SemaphoreSlim> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Threading::SemaphoreSlim>, "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream____c>::get>(std::forward<System::Func_1<System::Threading::SemaphoreSlim>>(value));
}
 System::Func_1<System::Threading::SemaphoreSlim> System::IO::System__IO__BufferedStream____c::__get___9__10_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Threading::SemaphoreSlim>, "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream____c>::get>();
}
 System::IO::System__IO__BufferedStream____c System::IO::System__IO__BufferedStream____c::New_ctor()  {
System::IO::System__IO__BufferedStream____c o{THROW_UNLESS(::il2cpp_utils::New<System::IO::System__IO__BufferedStream____c>())};
return o;
}
 void System::IO::System__IO__BufferedStream____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::SemaphoreSlim System::IO::System__IO__BufferedStream____c::_LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream____c>::get(),
                            "<LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SemaphoreSlim, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::*)()>(&System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x23a2fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23a3500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::IO::BufferedStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sem_5__2", ty: "System::Threading::SemaphoreSlim", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::System__IO__BufferedStream___FlushAsyncInternal_d__38(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::IO::BufferedStream __4__this, System::Threading::CancellationToken cancellationToken, System::Threading::SemaphoreSlim _sem_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_sem_5__2 = _sem_5__2;
this->__u__1 = __u__1;
}
constexpr void System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__set___4__this(System::IO::BufferedStream value)  {
::cordl_internals::setInstanceField<System::IO::BufferedStream, 0x20>(this->__instance, std::forward<System::IO::BufferedStream>(value));
}
constexpr System::IO::BufferedStream System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::IO::BufferedStream, 0x20>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__set__sem_5__2(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x30>(this->__instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__get__sem_5__2() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x30>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance);
}
 void System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___FlushAsyncInternal_d__38>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::*)()>(&System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x23a350c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23a3988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::IO::BufferedStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::System__IO__BufferedStream___FlushWriteAsync_d__42(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::IO::BufferedStream __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__set___4__this(System::IO::BufferedStream value)  {
::cordl_internals::setInstanceField<System::IO::BufferedStream, 0x20>(this->__instance, std::forward<System::IO::BufferedStream>(value));
}
constexpr System::IO::BufferedStream System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::IO::BufferedStream, 0x20>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x30>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->__instance);
}
 void System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___FlushWriteAsync_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::*)()>(&System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x23a3994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23a41d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "semaphoreLockTask", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "System::IO::BufferedStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "System::Memory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesAlreadySatisfied", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51(int32_t __1__state, System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder, System::Threading::Tasks::Task semaphoreLockTask, System::IO::BufferedStream __4__this, System::Memory_1<uint8_t> buffer, int32_t bytesAlreadySatisfied, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, int32_t __7__wrap1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->semaphoreLockTask = semaphoreLockTask;
this->__4__this = __4__this;
this->buffer = buffer;
this->bytesAlreadySatisfied = bytesAlreadySatisfied;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__7__wrap1 = __7__wrap1;
this->__u__2 = __u__2;
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___t__builder(System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set_semaphoreLockTask(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x28>(this->__instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_semaphoreLockTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x28>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___4__this(System::IO::BufferedStream value)  {
::cordl_internals::setInstanceField<System::IO::BufferedStream, 0x30>(this->__instance, std::forward<System::IO::BufferedStream>(value));
}
constexpr System::IO::BufferedStream System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::IO::BufferedStream, 0x30>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set_buffer(System::Memory_1<uint8_t> value)  {
::cordl_internals::setInstanceField<System::Memory_1<uint8_t>, 0x38>(this->__instance, std::forward<System::Memory_1<uint8_t>>(value));
}
constexpr System::Memory_1<uint8_t> System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_buffer() const {
return ::cordl_internals::getInstanceField<System::Memory_1<uint8_t>, 0x38>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set_bytesAlreadySatisfied(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_bytesAlreadySatisfied() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x50>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x50>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x58>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___7__wrap1(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x70>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x70>(this->__instance);
}
 void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___ReadFromUnderlyingStreamAsync_d__51>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::*)()>(&System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::MoveNext)> {
  constexpr static std::size_t size = 0xfd4;
  constexpr static std::size_t addrs = 0x23a4230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::SetStateMachine)> {
  constexpr static std::size_t size = 0x100c;
  constexpr static std::size_t addrs = 0x23a5204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "semaphoreLockTask", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "System::IO::BufferedStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "System::ReadOnlyMemory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Threading::Tasks::Task semaphoreLockTask, System::IO::BufferedStream __4__this, System::ReadOnlyMemory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->semaphoreLockTask = semaphoreLockTask;
this->__4__this = __4__this;
this->buffer = buffer;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set_semaphoreLockTask(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x20>(this->__instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get_semaphoreLockTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x20>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___4__this(System::IO::BufferedStream value)  {
::cordl_internals::setInstanceField<System::IO::BufferedStream, 0x28>(this->__instance, std::forward<System::IO::BufferedStream>(value));
}
constexpr System::IO::BufferedStream System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::IO::BufferedStream, 0x28>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set_buffer(System::ReadOnlyMemory_1<uint8_t> value)  {
::cordl_internals::setInstanceField<System::ReadOnlyMemory_1<uint8_t>, 0x30>(this->__instance, std::forward<System::ReadOnlyMemory_1<uint8_t>>(value));
}
constexpr System::ReadOnlyMemory_1<uint8_t> System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get_buffer() const {
return ::cordl_internals::getInstanceField<System::ReadOnlyMemory_1<uint8_t>, 0x30>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x58>(this->__instance);
}
 void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___WriteToUnderlyingStreamAsync_d__63>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::*)()>(&System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x23c2f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23c364c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::IO::BufferedStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "destination", ty: "System::IO::Stream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::System__IO__BufferedStream___CopyToAsyncCore_d__71(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::IO::BufferedStream __4__this, System::IO::Stream destination, System::Threading::CancellationToken cancellationToken, int32_t bufferSize, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->destination = destination;
this->cancellationToken = cancellationToken;
this->bufferSize = bufferSize;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__set___4__this(System::IO::BufferedStream value)  {
::cordl_internals::setInstanceField<System::IO::BufferedStream, 0x20>(this->__instance, std::forward<System::IO::BufferedStream>(value));
}
constexpr System::IO::BufferedStream System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::IO::BufferedStream, 0x20>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__set_destination(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x28>(this->__instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__get_destination() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x28>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__set_bufferSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__get_bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->__instance);
}
constexpr void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x50>(this->__instance);
}
 void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::System__IO__BufferedStream___CopyToAsyncCore_d__71>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::IO::BufferedStream.LazyEnsureAsyncActiveSemaphoreInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SemaphoreSlim (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::LazyEnsureAsyncActiveSemaphoreInitialized)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x23a0010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "LazyEnsureAsyncActiveSemaphoreInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(System::IO::Stream)>(&System::IO::BufferedStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a0108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(System::IO::Stream, int32_t)>(&System::IO::BufferedStream::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x23a0110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.EnsureNotClosed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::EnsureNotClosed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23a02ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureNotClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.EnsureCanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::EnsureCanSeek)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23a0350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureCanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.EnsureCanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::EnsureCanRead)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23a03c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureCanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.EnsureCanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::EnsureCanWrite)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23a0438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureCanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.EnsureShadowBufferAllocated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::EnsureShadowBufferAllocated)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23a04ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureShadowBufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.EnsureBufferAllocated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::EnsureBufferAllocated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23a0580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureBufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23a05d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23a05f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23a0608;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::get_Length)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23a0620;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::get_Position)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23a06ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(int64_t)>(&System::IO::BufferedStream::set_Position)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23a06f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(bool)>(&System::IO::BufferedStream::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x23a07b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::Flush)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23a0914;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.FlushAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::BufferedStream::*)(System::Threading::CancellationToken)>(&System::IO::BufferedStream::FlushAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23a0a14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.FlushAsyncInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::BufferedStream::*)(System::Threading::CancellationToken)>(&System::IO::BufferedStream::FlushAsyncInternal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23a0ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "FlushAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.FlushRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::FlushRead)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23a09d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "FlushRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.ClearReadBufferBeforeWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::ClearReadBufferBeforeWrite)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23a0b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ClearReadBufferBeforeWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.FlushWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::FlushWrite)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23a065c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "FlushWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.FlushWriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::BufferedStream::*)(System::Threading::CancellationToken)>(&System::IO::BufferedStream::FlushWriteAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23a0c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "FlushWriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.ReadFromBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::BufferedStream::ReadFromBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23a0d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.ReadFromBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::BufferedStream::*)(System::Span_1<uint8_t>)>(&System::IO::BufferedStream::ReadFromBuffer)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x23a0d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.ReadFromBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ByRef<System::Exception>)>(&System::IO::BufferedStream::ReadFromBuffer)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23a0ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Exception>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::BufferedStream::Read)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x23a0f40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::BufferedStream::*)(System::Span_1<uint8_t>)>(&System::IO::BufferedStream::Read)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x23a1164;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.LastSyncCompletedReadTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::IO::BufferedStream::*)(int32_t)>(&System::IO::BufferedStream::LastSyncCompletedReadTask)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23a12c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "LastSyncCompletedReadTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::IO::BufferedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x23a1378;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask_1<int32_t> (System::IO::BufferedStream::*)(System::Memory_1<uint8_t>, System::Threading::CancellationToken)>(&System::IO::BufferedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x23a185c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.ReadFromUnderlyingStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask_1<int32_t> (System::IO::BufferedStream::*)(System::Memory_1<uint8_t>, System::Threading::CancellationToken, int32_t, System::Threading::Tasks::Task)>(&System::IO::BufferedStream::ReadFromUnderlyingStreamAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a1740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadFromUnderlyingStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::BufferedStream::BeginRead)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23a1af8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::BufferedStream::*)(System::IAsyncResult)>(&System::IO::BufferedStream::EndRead)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23a1bac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::ReadByte)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23a1bf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.ReadByteSlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::BufferedStream::*)()>(&System::IO::BufferedStream::ReadByteSlow)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23a1c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadByteSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.WriteToBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(::ArrayW<uint8_t>, ByRef<int32_t>, ByRef<int32_t>)>(&System::IO::BufferedStream::WriteToBuffer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23a1cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "WriteToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.WriteToBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::BufferedStream::*)(System::ReadOnlySpan_1<uint8_t>)>(&System::IO::BufferedStream::WriteToBuffer)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x23a1db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "WriteToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::IO::BufferedStream::Write)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x23a1f4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(System::ReadOnlySpan_1<uint8_t>)>(&System::IO::BufferedStream::Write)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x23a2258;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::IO::BufferedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x23a2528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask (System::IO::BufferedStream::*)(System::ReadOnlyMemory_1<uint8_t>, System::Threading::CancellationToken)>(&System::IO::BufferedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x23a26fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.WriteToUnderlyingStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::BufferedStream::*)(System::ReadOnlyMemory_1<uint8_t>, System::Threading::CancellationToken, System::Threading::Tasks::Task)>(&System::IO::BufferedStream::WriteToUnderlyingStreamAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x23a2910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "WriteToUnderlyingStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.BeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::IO::BufferedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::IO::BufferedStream::BeginWrite)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23a2a0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(System::IAsyncResult)>(&System::IO::BufferedStream::EndWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23a2ac0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(uint8_t)>(&System::IO::BufferedStream::WriteByte)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23a2acc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::BufferedStream::*)(int64_t, System::IO::SeekOrigin)>(&System::IO::BufferedStream::Seek)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23a2b58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BufferedStream::*)(int64_t)>(&System::IO::BufferedStream::SetLength)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23a2c7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.CopyToAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::BufferedStream::*)(System::IO::Stream, int32_t, System::Threading::CancellationToken)>(&System::IO::BufferedStream::CopyToAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x23a2d40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::BufferedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::BufferedStream.CopyToAsyncCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::IO::BufferedStream::*)(System::IO::Stream, int32_t, System::Threading::CancellationToken)>(&System::IO::BufferedStream::CopyToAsyncCore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23a2e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "CopyToAsyncCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::IO::BufferedStream::__set__stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::IO::BufferedStream::__get__stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::BufferedStream::__set__buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::IO::BufferedStream::__get__buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::BufferedStream::__set__bufferSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::BufferedStream::__get__bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::BufferedStream::__set__readPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::BufferedStream::__get__readPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::BufferedStream::__set__readLen(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::BufferedStream::__get__readLen() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::BufferedStream::__set__writePos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::BufferedStream::__get__writePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::BufferedStream::__set__lastSyncCompletedReadTask(System::Threading::Tasks::Task_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<int32_t>>(value));
}
constexpr System::Threading::Tasks::Task_1<int32_t> System::IO::BufferedStream::__get__lastSyncCompletedReadTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::BufferedStream::__set__asyncActiveSemaphore(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::IO::BufferedStream::__get__asyncActiveSemaphore() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::SemaphoreSlim System::IO::BufferedStream::LazyEnsureAsyncActiveSemaphoreInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "LazyEnsureAsyncActiveSemaphoreInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SemaphoreSlim, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::BufferedStream System::IO::BufferedStream::New_ctor(System::IO::Stream stream)  {
System::IO::BufferedStream o{THROW_UNLESS(::il2cpp_utils::New<System::IO::BufferedStream>(stream))};
return o;
}
 void System::IO::BufferedStream::_ctor(System::IO::Stream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 System::IO::BufferedStream System::IO::BufferedStream::New_ctor(System::IO::Stream stream, int32_t bufferSize)  {
System::IO::BufferedStream o{THROW_UNLESS(::il2cpp_utils::New<System::IO::BufferedStream>(stream, bufferSize))};
return o;
}
 void System::IO::BufferedStream::_ctor(System::IO::Stream stream, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, bufferSize);
}
 void System::IO::BufferedStream::EnsureNotClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureNotClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::BufferedStream::EnsureCanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureCanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::BufferedStream::EnsureCanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureCanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::BufferedStream::EnsureCanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureCanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::BufferedStream::EnsureShadowBufferAllocated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureShadowBufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::BufferedStream::EnsureBufferAllocated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EnsureBufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::BufferedStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::BufferedStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::BufferedStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::IO::BufferedStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::IO::BufferedStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::BufferedStream::set_Position(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::IO::BufferedStream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::IO::BufferedStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task System::IO::BufferedStream::FlushAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "FlushAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 System::Threading::Tasks::Task System::IO::BufferedStream::FlushAsyncInternal(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "FlushAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void System::IO::BufferedStream::FlushRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "FlushRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::BufferedStream::ClearReadBufferBeforeWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ClearReadBufferBeforeWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::BufferedStream::FlushWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "FlushWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task System::IO::BufferedStream::FlushWriteAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "FlushWriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 int32_t System::IO::BufferedStream::ReadFromBuffer(::ArrayW<uint8_t> array, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, array, offset, count);
}
 int32_t System::IO::BufferedStream::ReadFromBuffer(System::Span_1<uint8_t> destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, destination);
}
 int32_t System::IO::BufferedStream::ReadFromBuffer(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ByRef<System::Exception> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Exception>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, array, offset, count, error);
}
 int32_t System::IO::BufferedStream::Read(::ArrayW<uint8_t> array, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, array, offset, count);
}
 int32_t System::IO::BufferedStream::Read(System::Span_1<uint8_t> destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, destination);
}
 System::Threading::Tasks::Task_1<int32_t> System::IO::BufferedStream::LastSyncCompletedReadTask(int32_t val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "LastSyncCompletedReadTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, val);
}
 System::Threading::Tasks::Task_1<int32_t> System::IO::BufferedStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::ValueTask_1<int32_t> System::IO::BufferedStream::ReadAsync(System::Memory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, cancellationToken);
}
 System::Threading::Tasks::ValueTask_1<int32_t> System::IO::BufferedStream::ReadFromUnderlyingStreamAsync(System::Memory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken, int32_t bytesAlreadySatisfied, System::Threading::Tasks::Task semaphoreLockTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadFromUnderlyingStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, cancellationToken, bytesAlreadySatisfied, semaphoreLockTask);
}
 System::IAsyncResult System::IO::BufferedStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 int32_t System::IO::BufferedStream::EndRead(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 int32_t System::IO::BufferedStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::IO::BufferedStream::ReadByteSlow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "ReadByteSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::BufferedStream::WriteToBuffer(::ArrayW<uint8_t> array, ByRef<int32_t> offset, ByRef<int32_t> count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "WriteToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, offset, count);
}
 int32_t System::IO::BufferedStream::WriteToBuffer(System::ReadOnlySpan_1<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "WriteToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 void System::IO::BufferedStream::Write(::ArrayW<uint8_t> array, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, offset, count);
}
 void System::IO::BufferedStream::Write(System::ReadOnlySpan_1<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 System::Threading::Tasks::Task System::IO::BufferedStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::ValueTask System::IO::BufferedStream::WriteAsync(System::ReadOnlyMemory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask, false>(const_cast<void*>(instance), ___internal_method, buffer, cancellationToken);
}
 System::Threading::Tasks::Task System::IO::BufferedStream::WriteToUnderlyingStreamAsync(System::ReadOnlyMemory_1<uint8_t> buffer, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::Task semaphoreLockTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "WriteToUnderlyingStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, cancellationToken, semaphoreLockTask);
}
 System::IAsyncResult System::IO::BufferedStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "BeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 void System::IO::BufferedStream::EndWrite(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 void System::IO::BufferedStream::WriteByte(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int64_t System::IO::BufferedStream::Seek(int64_t offset, System::IO::SeekOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, offset, origin);
}
 void System::IO::BufferedStream::SetLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Threading::Tasks::Task System::IO::BufferedStream::CopyToAsync(System::IO::Stream destination, int32_t bufferSize, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, destination, bufferSize, cancellationToken);
}
 System::Threading::Tasks::Task System::IO::BufferedStream::CopyToAsyncCore(System::IO::Stream destination, int32_t bufferSize, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::BufferedStream>::get(),
                            "CopyToAsyncCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, destination, bufferSize, cancellationToken);
}

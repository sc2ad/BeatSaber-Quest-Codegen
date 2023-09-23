#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ForceAsyncAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::*)()>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x22ec500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22ec8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::Security::Cryptography::CryptoStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_semaphore_5__2", ty: "System::Threading::SemaphoreSlim", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, System::Security::Cryptography::CryptoStream __4__this, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken, System::Threading::SemaphoreSlim _semaphore_5__2, System::Threading::Tasks::ForceAsyncAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->buffer = buffer;
this->offset = offset;
this->count = count;
this->cancellationToken = cancellationToken;
this->_semaphore_5__2 = _semaphore_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set___4__this(System::Security::Cryptography::CryptoStream value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::CryptoStream, 0x20>(this->__instance, std::forward<System::Security::Cryptography::CryptoStream>(value));
}
constexpr System::Security::Cryptography::CryptoStream System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::CryptoStream, 0x20>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set__semaphore_5__2(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x40>(this->__instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get__semaphore_5__2() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x40>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set___u__1(System::Threading::Tasks::ForceAsyncAwaiter value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::ForceAsyncAwaiter, 0x48>(this->__instance, std::forward<System::Threading::Tasks::ForceAsyncAwaiter>(value));
}
constexpr System::Threading::Tasks::ForceAsyncAwaiter System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::ForceAsyncAwaiter, 0x48>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>, 0x50>(this->__instance);
}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncInternal_d__37>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::*)()>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x1100;
  constexpr static std::size_t addrs = 0x22ec91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22eda84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::Security::Cryptography::CryptoStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bytesToDeliver_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_currentOutputIndex_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numWholeBlocksInBytes_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tempInputBuffer_5__5", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_tempOutputBuffer_5__6", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, int32_t count, int32_t offset, System::Security::Cryptography::CryptoStream __4__this, ::ArrayW<uint8_t> buffer, bool useAsync, System::Threading::CancellationToken cancellationToken, int32_t _bytesToDeliver_5__2, int32_t _currentOutputIndex_5__3, int32_t _numWholeBlocksInBytes_5__4, ::ArrayW<uint8_t> _tempInputBuffer_5__5, ::ArrayW<uint8_t> _tempOutputBuffer_5__6, System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->count = count;
this->offset = offset;
this->__4__this = __4__this;
this->buffer = buffer;
this->useAsync = useAsync;
this->cancellationToken = cancellationToken;
this->_bytesToDeliver_5__2 = _bytesToDeliver_5__2;
this->_currentOutputIndex_5__3 = _currentOutputIndex_5__3;
this->_numWholeBlocksInBytes_5__4 = _numWholeBlocksInBytes_5__4;
this->_tempInputBuffer_5__5 = _tempInputBuffer_5__5;
this->_tempOutputBuffer_5__6 = _tempOutputBuffer_5__6;
this->__u__1 = __u__1;
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set___4__this(System::Security::Cryptography::CryptoStream value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::CryptoStream, 0x28>(this->__instance, std::forward<System::Security::Cryptography::CryptoStream>(value));
}
constexpr System::Security::Cryptography::CryptoStream System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::CryptoStream, 0x28>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set_useAsync(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get_useAsync() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set__bytesToDeliver_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get__bytesToDeliver_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set__currentOutputIndex_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get__currentOutputIndex_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set__numWholeBlocksInBytes_5__4(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get__numWholeBlocksInBytes_5__4() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set__tempInputBuffer_5__5(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x58>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get__tempInputBuffer_5__5() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x58>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set__tempOutputBuffer_5__6(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x60>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get__tempOutputBuffer_5__6() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x60>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__set___u__1(System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>, 0x68>(this->__instance, std::forward<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>, 0x68>(this->__instance);
}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___ReadAsyncCore_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::*)()>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x22edadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22eddfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::Security::Cryptography::CryptoStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_semaphore_5__2", ty: "System::Threading::SemaphoreSlim", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Security::Cryptography::CryptoStream __4__this, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken, System::Threading::SemaphoreSlim _semaphore_5__2, System::Threading::Tasks::ForceAsyncAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->buffer = buffer;
this->offset = offset;
this->count = count;
this->cancellationToken = cancellationToken;
this->_semaphore_5__2 = _semaphore_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set___4__this(System::Security::Cryptography::CryptoStream value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::CryptoStream, 0x20>(this->__instance, std::forward<System::Security::Cryptography::CryptoStream>(value));
}
constexpr System::Security::Cryptography::CryptoStream System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::CryptoStream, 0x20>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set__semaphore_5__2(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x40>(this->__instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get__semaphore_5__2() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x40>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set___u__1(System::Threading::Tasks::ForceAsyncAwaiter value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::ForceAsyncAwaiter, 0x48>(this->__instance, std::forward<System::Threading::Tasks::ForceAsyncAwaiter>(value));
}
constexpr System::Threading::Tasks::ForceAsyncAwaiter System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::ForceAsyncAwaiter, 0x48>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance);
}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncInternal_d__46>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::*)()>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::MoveNext)> {
  constexpr static std::size_t size = 0x11cc;
  constexpr static std::size_t addrs = 0x22ede08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22eefd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::Security::Cryptography::CryptoStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bytesToWrite_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_currentInputIndex_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numOutputBytes_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numWholeBlocksInBytes_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tempOutputBuffer_5__6", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t count, int32_t offset, System::Security::Cryptography::CryptoStream __4__this, ::ArrayW<uint8_t> buffer, bool useAsync, System::Threading::CancellationToken cancellationToken, int32_t _bytesToWrite_5__2, int32_t _currentInputIndex_5__3, int32_t _numOutputBytes_5__4, System::Runtime::CompilerServices::ValueTaskAwaiter __u__1, int32_t _numWholeBlocksInBytes_5__5, ::ArrayW<uint8_t> _tempOutputBuffer_5__6) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->count = count;
this->offset = offset;
this->__4__this = __4__this;
this->buffer = buffer;
this->useAsync = useAsync;
this->cancellationToken = cancellationToken;
this->_bytesToWrite_5__2 = _bytesToWrite_5__2;
this->_currentInputIndex_5__3 = _currentInputIndex_5__3;
this->_numOutputBytes_5__4 = _numOutputBytes_5__4;
this->__u__1 = __u__1;
this->_numWholeBlocksInBytes_5__5 = _numWholeBlocksInBytes_5__5;
this->_tempOutputBuffer_5__6 = _tempOutputBuffer_5__6;
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set___4__this(System::Security::Cryptography::CryptoStream value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::CryptoStream, 0x28>(this->__instance, std::forward<System::Security::Cryptography::CryptoStream>(value));
}
constexpr System::Security::Cryptography::CryptoStream System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::CryptoStream, 0x28>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set_useAsync(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get_useAsync() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set__bytesToWrite_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get__bytesToWrite_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set__currentInputIndex_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get__currentInputIndex_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set__numOutputBytes_5__4(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get__numOutputBytes_5__4() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set___u__1(System::Runtime::CompilerServices::ValueTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::ValueTaskAwaiter, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::ValueTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::ValueTaskAwaiter System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::ValueTaskAwaiter, 0x58>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set__numWholeBlocksInBytes_5__5(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get__numWholeBlocksInBytes_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->__instance);
}
constexpr void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__set__tempOutputBuffer_5__6(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x70>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::__get__tempOutputBuffer_5__6() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x70>(this->__instance);
}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream___WriteAsyncCore_d__49>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::*)()>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ef044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c._get_AsyncActiveSemaphore_b__54_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SemaphoreSlim (System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::*)()>(&System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::_get_AsyncActiveSemaphore_b__54_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22ef04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c>::get(),
                            "<get_AsyncActiveSemaphore>b__54_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::__set___9(System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c value)  {
::cordl_internals::setStaticField<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c>::get>(std::forward<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c>(value));
}
 System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c>::get>();
}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::__set___9__54_0(System::Func_1<System::Threading::SemaphoreSlim> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Threading::SemaphoreSlim>, "<>9__54_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c>::get>(std::forward<System::Func_1<System::Threading::SemaphoreSlim>>(value));
}
 System::Func_1<System::Threading::SemaphoreSlim> System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::__get___9__54_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Threading::SemaphoreSlim>, "<>9__54_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c>::get>();
}
// Ctor Parameters []
 System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::System__Security__Cryptography__CryptoStream____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Security__Cryptography__CryptoStream____c>())) {}
 void System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::SemaphoreSlim System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c::_get_AsyncActiveSemaphore_b__54_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::System__Security__Cryptography__CryptoStream____c>::get(),
                            "<get_AsyncActiveSemaphore>b__54_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SemaphoreSlim, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Security::Cryptography::CryptoStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(System::IO::Stream, System::Security::Cryptography::ICryptoTransform, System::Security::Cryptography::CryptoStreamMode)>(&System::Security::Cryptography::CryptoStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eaf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::ICryptoTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::CryptoStreamMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(System::IO::Stream, System::Security::Cryptography::ICryptoTransform, System::Security::Cryptography::CryptoStreamMode, bool)>(&System::Security::Cryptography::CryptoStream::_ctor)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x22eaf88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::ICryptoTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::CryptoStreamMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb29c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb2a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb2ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_Length)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22eb2b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22eb304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(int64_t)>(&System::Security::Cryptography::CryptoStream::set_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22eb354;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.get_HasFlushedFinalBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "get_HasFlushedFinalBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.FlushFinalBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::FlushFinalBlock)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x22eb3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "FlushFinalBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22eb5dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.FlushAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Security::Cryptography::CryptoStream::*)(System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::FlushAsync)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22eb5e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Security::Cryptography::CryptoStream::*)(int64_t, System::IO::SeekOrigin)>(&System::Security::Cryptography::CryptoStream::Seek)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22eb748;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(int64_t)>(&System::Security::Cryptography::CryptoStream::SetLength)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22eb798;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::ReadAsync)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22eb7e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Security::Cryptography::CryptoStream::BeginRead)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22eba9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Cryptography::CryptoStream::*)(System::IAsyncResult)>(&System::Security::Cryptography::CryptoStream::EndRead)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22ebb50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.ReadAsyncInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::ReadAsyncInternal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x22eb978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "ReadAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::ReadByte)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22ebb98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(uint8_t)>(&System::Security::Cryptography::CryptoStream::WriteByte)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22ebc14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Security::Cryptography::CryptoStream::Read)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22ebc68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.CheckReadArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Security::Cryptography::CryptoStream::CheckReadArguments)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x22eb830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "CheckReadArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.ReadAsyncCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken, bool)>(&System::Security::Cryptography::CryptoStream::ReadAsyncCore)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x22ebd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "ReadAsyncCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::WriteAsync)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22ebe70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.BeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Security::Cryptography::CryptoStream::BeginWrite)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22ec0fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(System::IAsyncResult)>(&System::Security::Cryptography::CryptoStream::EndWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22ec1b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.WriteAsyncInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::WriteAsyncInternal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22ec000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "WriteAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Security::Cryptography::CryptoStream::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22ec1bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.CheckWriteArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Security::Cryptography::CryptoStream::CheckWriteArguments)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x22ebeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "CheckWriteArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.WriteAsyncCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken, bool)>(&System::Security::Cryptography::CryptoStream::WriteAsyncCore)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22ec22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "WriteAsyncCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22ec348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(bool)>(&System::Security::Cryptography::CryptoStream::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ec358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::CryptoStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.InitializeBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::InitializeBuffer)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x22eb150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "InitializeBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::CryptoStream.get_AsyncActiveSemaphore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SemaphoreSlim (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_AsyncActiveSemaphore)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22ec408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "get_AsyncActiveSemaphore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Security::Cryptography::CryptoStream::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Security::Cryptography::CryptoStream::__get__stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__transform(System::Security::Cryptography::ICryptoTransform value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::ICryptoTransform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::ICryptoTransform>(value));
}
constexpr System::Security::Cryptography::ICryptoTransform System::Security::Cryptography::CryptoStream::__get__transform() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::ICryptoTransform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__transformMode(System::Security::Cryptography::CryptoStreamMode value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::CryptoStreamMode, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::CryptoStreamMode>(value));
}
constexpr System::Security::Cryptography::CryptoStreamMode System::Security::Cryptography::CryptoStream::__get__transformMode() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::CryptoStreamMode, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__inputBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::CryptoStream::__get__inputBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__inputBufferIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::CryptoStream::__get__inputBufferIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__inputBlockSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::CryptoStream::__get__inputBlockSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__outputBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::CryptoStream::__get__outputBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__outputBufferIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::CryptoStream::__get__outputBufferIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__outputBlockSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::CryptoStream::__get__outputBlockSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__canRead(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Security::Cryptography::CryptoStream::__get__canRead() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__canWrite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Security::Cryptography::CryptoStream::__get__canWrite() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__finalBlockTransformed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x62>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Security::Cryptography::CryptoStream::__get__finalBlockTransformed() const {
return ::cordl_internals::getInstanceField<bool, 0x62>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__lazyAsyncActiveSemaphore(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::Security::Cryptography::CryptoStream::__get__lazyAsyncActiveSemaphore() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::CryptoStream::__set__leaveOpen(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Security::Cryptography::CryptoStream::__get__leaveOpen() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "System::Security::Cryptography::ICryptoTransform", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::Security::Cryptography::CryptoStreamMode", modifiers: "", def_value: None }]
 System::Security::Cryptography::CryptoStream::CryptoStream(System::IO::Stream stream, System::Security::Cryptography::ICryptoTransform transform, System::Security::Cryptography::CryptoStreamMode mode)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<CryptoStream>(stream, transform, mode))) {}
 void System::Security::Cryptography::CryptoStream::_ctor(System::IO::Stream stream, System::Security::Cryptography::ICryptoTransform transform, System::Security::Cryptography::CryptoStreamMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::ICryptoTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::CryptoStreamMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, transform, mode);
}
// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "System::Security::Cryptography::ICryptoTransform", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::Security::Cryptography::CryptoStreamMode", modifiers: "", def_value: None }, CppParam { name: "leaveOpen", ty: "bool", modifiers: "", def_value: None }]
 System::Security::Cryptography::CryptoStream::CryptoStream(System::IO::Stream stream, System::Security::Cryptography::ICryptoTransform transform, System::Security::Cryptography::CryptoStreamMode mode, bool leaveOpen)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<CryptoStream>(stream, transform, mode, leaveOpen))) {}
 void System::Security::Cryptography::CryptoStream::_ctor(System::IO::Stream stream, System::Security::Cryptography::ICryptoTransform transform, System::Security::Cryptography::CryptoStreamMode mode, bool leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::ICryptoTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::CryptoStreamMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, transform, mode, leaveOpen);
}
 bool System::Security::Cryptography::CryptoStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::Cryptography::CryptoStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::Cryptography::CryptoStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Security::Cryptography::CryptoStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Security::Cryptography::CryptoStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::CryptoStream::set_Position(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "get_HasFlushedFinalBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::CryptoStream::FlushFinalBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "FlushFinalBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::CryptoStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task System::Security::Cryptography::CryptoStream::FlushAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "FlushAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 int64_t System::Security::Cryptography::CryptoStream::Seek(int64_t offset, System::IO::SeekOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, offset, origin);
}
 void System::Security::Cryptography::CryptoStream::SetLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Threading::Tasks::Task_1<int32_t> System::Security::Cryptography::CryptoStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 System::IAsyncResult System::Security::Cryptography::CryptoStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 int32_t System::Security::Cryptography::CryptoStream::EndRead(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::Threading::Tasks::Task_1<int32_t> System::Security::Cryptography::CryptoStream::ReadAsyncInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "ReadAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 int32_t System::Security::Cryptography::CryptoStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::CryptoStream::WriteByte(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Security::Cryptography::CryptoStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void System::Security::Cryptography::CryptoStream::CheckReadArguments(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "CheckReadArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::Threading::Tasks::Task_1<int32_t> System::Security::Cryptography::CryptoStream::ReadAsyncCore(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken, bool useAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "ReadAsyncCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken, useAsync);
}
 System::Threading::Tasks::Task System::Security::Cryptography::CryptoStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 System::IAsyncResult System::Security::Cryptography::CryptoStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "BeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 void System::Security::Cryptography::CryptoStream::EndWrite(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::Threading::Tasks::Task System::Security::Cryptography::CryptoStream::WriteAsyncInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "WriteAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 void System::Security::Cryptography::CryptoStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void System::Security::Cryptography::CryptoStream::CheckWriteArguments(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "CheckWriteArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::Threading::Tasks::Task System::Security::Cryptography::CryptoStream::WriteAsyncCore(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken, bool useAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "WriteAsyncCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken, useAsync);
}
 void System::Security::Cryptography::CryptoStream::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::CryptoStream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Security::Cryptography::CryptoStream::InitializeBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "InitializeBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::SemaphoreSlim System::Security::Cryptography::CryptoStream::get_AsyncActiveSemaphore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptoStream>::get(),
                            "get_AsyncActiveSemaphore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SemaphoreSlim, false>(const_cast<void*>(instance), ___internal_method);
}

#pragma once
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/zzzz__BufferedReadStream_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
//  Writing Method size for method: ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::*)()>(&::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2829b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2829dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::BufferedReadStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::____System__Net__BufferedReadStream___ProcessReadAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::System::Net::BufferedReadStream __4__this, int32_t size, ::ArrayW<uint8_t> buffer, int32_t offset, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->size = size;
this->buffer = buffer;
this->offset = offset;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__set___4__this(::System::Net::BufferedReadStream value)  {
::cordl_internals::setInstanceField<::System::Net::BufferedReadStream, 0x28>(this->__instance, std::forward<::System::Net::BufferedReadStream>(value));
}
constexpr ::System::Net::BufferedReadStream ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::BufferedReadStream, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__set_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance);
}
 void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__BufferedReadStream___ProcessReadAsync_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::BufferedReadStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::BufferedReadStream::*)(::System::Net::WebOperation, ::System::IO::Stream, ::System::Net::BufferOffsetSize)>(&::System::Net::BufferedReadStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2829934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferedReadStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BufferedReadStream.ProcessReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::System::Net::BufferedReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::BufferedReadStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x282995c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::BufferedReadStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferedReadStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BufferedReadStream.TryReadFromBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::BufferedReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ByRef<int32_t>)>(&::System::Net::BufferedReadStream::TryReadFromBuffer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2829a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferedReadStream>::get(),
                            "TryReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::BufferedReadStream::__set_readBuffer(::System::Net::BufferOffsetSize value)  {
::cordl_internals::setInstanceField<::System::Net::BufferOffsetSize, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::BufferOffsetSize>(value));
}
constexpr ::System::Net::BufferOffsetSize ::System::Net::BufferedReadStream::__get_readBuffer() const {
return ::cordl_internals::getInstanceField<::System::Net::BufferOffsetSize, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "innerStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "readBuffer", ty: "::System::Net::BufferOffsetSize", modifiers: "", def_value: None }]
 ::System::Net::BufferedReadStream::BufferedReadStream(::System::Net::WebOperation operation, ::System::IO::Stream innerStream, ::System::Net::BufferOffsetSize readBuffer)  : ::System::Net::WebReadStream(THROW_UNLESS(::il2cpp_utils::New<BufferedReadStream>(operation, innerStream, readBuffer))) {}
 void ::System::Net::BufferedReadStream::_ctor(::System::Net::WebOperation operation, ::System::IO::Stream innerStream, ::System::Net::BufferOffsetSize readBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferedReadStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operation, innerStream, readBuffer);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::System::Net::BufferedReadStream::ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferedReadStream>::get(),
                            "ProcessReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, cancellationToken);
}
 bool ::System::Net::BufferedReadStream::TryReadFromBuffer(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferedReadStream>::get(),
                            "TryReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, result);
}
} // end anonymous namespace

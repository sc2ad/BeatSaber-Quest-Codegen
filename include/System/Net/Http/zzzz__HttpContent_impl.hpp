#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpContentHeaders_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::*)(int64_t)>(&::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26a0f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream.CheckOverflow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::*)(int32_t)>(&::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::CheckOverflow)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26a118c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream>::get(),
                            "CheckOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::*)(uint8_t)>(&::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::WriteByte)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26a12a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::Write)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26a12d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::__set_maxSize(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::__get_maxSize() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "maxSize", ty: "int64_t", modifiers: "", def_value: None }]
 ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::____System__Net__Http__HttpContent__FixedMemoryStream(int64_t maxSize)  : ::System::IO::MemoryStream(THROW_UNLESS(::il2cpp_utils::New<____System__Net__Http__HttpContent__FixedMemoryStream>(maxSize))) {}
 void ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::_ctor(int64_t maxSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxSize);
}
 void ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::CheckOverflow(int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream>::get(),
                            "CheckOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, count);
}
 void ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::WriteByte(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::*)()>(&::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x26a131c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26a1580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "maxBufferSize", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::Http::HttpContent __4__this, int64_t maxBufferSize, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->maxBufferSize = maxBufferSize;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__set___4__this(::System::Net::Http::HttpContent value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpContent, 0x20>(this->__instance, std::forward<::System::Net::Http::HttpContent>(value));
}
constexpr ::System::Net::Http::HttpContent ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpContent, 0x20>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__set_maxBufferSize(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__get_maxBufferSize() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance);
}
 void ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::*)()>(&::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x26a158c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26a1a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::System::Net::Http::HttpContent __4__this, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::__set___4__this(::System::Net::Http::HttpContent value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpContent, 0x20>(this->__instance, std::forward<::System::Net::Http::HttpContent>(value));
}
constexpr ::System::Net::Http::HttpContent ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpContent, 0x20>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x28>(this->__instance);
}
 void ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpContent___ReadAsStringAsync_d__20>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::Http::HttpContent.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::HttpContentHeaders (::System::Net::Http::HttpContent::*)()>(&::System::Net::Http::HttpContent::get_Headers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x269ca5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.get_LoadedBufferLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (::System::Net::Http::HttpContent::*)()>(&::System::Net::Http::HttpContent::get_LoadedBufferLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26a0dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "get_LoadedBufferLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.CopyToAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::Http::HttpContent::*)(::System::IO::Stream)>(&::System::Net::Http::HttpContent::CopyToAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269eb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.CopyToAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::Http::HttpContent::*)(::System::IO::Stream, ::System::Net::TransportContext)>(&::System::Net::Http::HttpContent::CopyToAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26a0e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TransportContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.CreateFixedMemoryStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream (*)(int64_t)>(&::System::Net::Http::HttpContent::CreateFixedMemoryStream)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26a0ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "CreateFixedMemoryStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpContent::*)()>(&::System::Net::Http::HttpContent::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26a0f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpContent::*)(bool)>(&::System::Net::Http::HttpContent::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26a0f6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Http::HttpContent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.LoadIntoBufferAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::Http::HttpContent::*)()>(&::System::Net::Http::HttpContent::LoadIntoBufferAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a0f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "LoadIntoBufferAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.LoadIntoBufferAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::Http::HttpContent::*)(int64_t)>(&::System::Net::Http::HttpContent::LoadIntoBufferAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x269ea98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "LoadIntoBufferAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.ReadAsStringAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW> (::System::Net::Http::HttpContent::*)()>(&::System::Net::Http::HttpContent::ReadAsStringAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26a0c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "ReadAsStringAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.GetEncodingFromBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding (*)(::ArrayW<uint8_t>, int32_t, ByRef<int32_t>)>(&::System::Net::Http::HttpContent::GetEncodingFromBuffer)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x26a0fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "GetEncodingFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.StartsWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::System::Net::Http::HttpContent::StartsWith)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26a1118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "StartsWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.SerializeToStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::Http::HttpContent::*)(::System::IO::Stream, ::System::Net::TransportContext)>(&::System::Net::Http::HttpContent::SerializeToStreamAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Http::HttpContent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent.TryComputeLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::HttpContent::*)(ByRef<int64_t>)>(&::System::Net::Http::HttpContent::TryComputeLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Http::HttpContent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpContent::*)()>(&::System::Net::Http::HttpContent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269f244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Net::Http::HttpContent::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpContent::__set_buffer(::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream value)  {
::cordl_internals::setInstanceField<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream>(value));
}
constexpr ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream ::System::Net::Http::HttpContent::__get_buffer() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpContent::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::Http::HttpContent::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpContent::__set_headers(::System::Net::Http::Headers::HttpContentHeaders value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::HttpContentHeaders, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Http::Headers::HttpContentHeaders>(value));
}
constexpr ::System::Net::Http::Headers::HttpContentHeaders ::System::Net::Http::HttpContent::__get_headers() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::HttpContentHeaders, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::Http::Headers::HttpContentHeaders ::System::Net::Http::HttpContent::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpContentHeaders, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Nullable_1<int64_t> ::System::Net::Http::HttpContent::get_LoadedBufferLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "get_LoadedBufferLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::System::Net::Http::HttpContent::CopyToAsync(::System::IO::Stream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 ::System::Threading::Tasks::Task ::System::Net::Http::HttpContent::CopyToAsync(::System::IO::Stream stream, ::System::Net::TransportContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TransportContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, stream, context);
}
 ::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream ::System::Net::Http::HttpContent::CreateFixedMemoryStream(int64_t maxBufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "CreateFixedMemoryStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::____System__Net__Http__HttpContent__FixedMemoryStream, false>(nullptr, ___internal_method, maxBufferSize);
}
 void ::System::Net::Http::HttpContent::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Http::HttpContent::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 ::System::Threading::Tasks::Task ::System::Net::Http::HttpContent::LoadIntoBufferAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "LoadIntoBufferAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::System::Net::Http::HttpContent::LoadIntoBufferAsync(int64_t maxBufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "LoadIntoBufferAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, maxBufferSize);
}
 ::System::Threading::Tasks::Task_1<::StringW> ::System::Net::Http::HttpContent::ReadAsStringAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "ReadAsStringAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Text::Encoding ::System::Net::Http::HttpContent::GetEncodingFromBuffer(::ArrayW<uint8_t> buffer, int32_t length, ByRef<int32_t> preambleLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "GetEncodingFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding, false>(nullptr, ___internal_method, buffer, length, preambleLength);
}
 int32_t ::System::Net::Http::HttpContent::StartsWith(::ArrayW<uint8_t> array, int32_t length, ::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "StartsWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, length, value);
}
 ::System::Threading::Tasks::Task ::System::Net::Http::HttpContent::SerializeToStreamAsync(::System::IO::Stream stream, ::System::Net::TransportContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "SerializeToStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TransportContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, stream, context);
}
 bool ::System::Net::Http::HttpContent::TryComputeLength(ByRef<int64_t> length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            "TryComputeLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, length);
}
// Ctor Parameters []
 ::System::Net::Http::HttpContent::HttpContent()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HttpContent>())) {}
 void ::System::Net::Http::HttpContent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

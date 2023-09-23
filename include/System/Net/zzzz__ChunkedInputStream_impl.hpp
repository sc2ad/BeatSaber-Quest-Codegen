#pragma once
#include "System/Net/zzzz__RequestStream_impl.hpp"
#include "System/Net/zzzz__ChunkedInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/zzzz__HttpStreamAsyncResult_def.hpp"
//  Writing Method size for method: System::Net::System__Net__ChunkedInputStream__ReadBufferState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__ChunkedInputStream__ReadBufferState::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::HttpStreamAsyncResult)>(&System::Net::System__Net__ChunkedInputStream__ReadBufferState::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x282a3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ChunkedInputStream__ReadBufferState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpStreamAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::System__Net__ChunkedInputStream__ReadBufferState::__set_Buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Net::System__Net__ChunkedInputStream__ReadBufferState::__get_Buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ChunkedInputStream__ReadBufferState::__set_Offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__ChunkedInputStream__ReadBufferState::__get_Offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ChunkedInputStream__ReadBufferState::__set_Count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__ChunkedInputStream__ReadBufferState::__get_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ChunkedInputStream__ReadBufferState::__set_InitialCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__ChunkedInputStream__ReadBufferState::__get_InitialCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ChunkedInputStream__ReadBufferState::__set_Ares(System::Net::HttpStreamAsyncResult value)  {
::cordl_internals::setInstanceField<System::Net::HttpStreamAsyncResult, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpStreamAsyncResult>(value));
}
constexpr System::Net::HttpStreamAsyncResult System::Net::System__Net__ChunkedInputStream__ReadBufferState::__get_Ares() const {
return ::cordl_internals::getInstanceField<System::Net::HttpStreamAsyncResult, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ares", ty: "System::Net::HttpStreamAsyncResult", modifiers: "", def_value: None }]
 System::Net::System__Net__ChunkedInputStream__ReadBufferState::System__Net__ChunkedInputStream__ReadBufferState(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Net::HttpStreamAsyncResult ares)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__ChunkedInputStream__ReadBufferState>(buffer, offset, count, ares))) {}
 void System::Net::System__Net__ChunkedInputStream__ReadBufferState::_ctor(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Net::HttpStreamAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ChunkedInputStream__ReadBufferState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpStreamAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, ares);
}
//  Writing Method size for method: System::Net::ChunkedInputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ChunkedInputStream::*)(System::Net::HttpListenerContext, System::IO::Stream, ::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Net::ChunkedInputStream::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2829e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ChunkedInputStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::ChunkedInputStream::*)(ByRef<::ArrayW<uint8_t>>, int32_t, int32_t)>(&System::Net::ChunkedInputStream::Read)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2829f20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ChunkedInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ChunkedInputStream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::ChunkedInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::ChunkedInputStream::BeginRead)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2829f5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ChunkedInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ChunkedInputStream.OnRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ChunkedInputStream::*)(System::IAsyncResult)>(&System::Net::ChunkedInputStream::OnRead)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x282a414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                            "OnRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ChunkedInputStream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::ChunkedInputStream::*)(System::IAsyncResult)>(&System::Net::ChunkedInputStream::EndRead)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x282a998;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ChunkedInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ChunkedInputStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ChunkedInputStream::*)()>(&System::Net::ChunkedInputStream::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x282ac38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ChunkedInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::ChunkedInputStream::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::ChunkedInputStream::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ChunkedInputStream::__set_decoder(System::Net::MonoChunkParser value)  {
::cordl_internals::setInstanceField<System::Net::MonoChunkParser, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::MonoChunkParser>(value));
}
constexpr System::Net::MonoChunkParser System::Net::ChunkedInputStream::__get_decoder() const {
return ::cordl_internals::getInstanceField<System::Net::MonoChunkParser, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ChunkedInputStream::__set_context(System::Net::HttpListenerContext value)  {
::cordl_internals::setInstanceField<System::Net::HttpListenerContext, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpListenerContext>(value));
}
constexpr System::Net::HttpListenerContext System::Net::ChunkedInputStream::__get_context() const {
return ::cordl_internals::getInstanceField<System::Net::HttpListenerContext, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ChunkedInputStream::__set_no_more_data(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::ChunkedInputStream::__get_no_more_data() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "context", ty: "System::Net::HttpListenerContext", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
 System::Net::ChunkedInputStream::ChunkedInputStream(System::Net::HttpListenerContext context, System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t length)  : System::Net::RequestStream(THROW_UNLESS(::il2cpp_utils::New<ChunkedInputStream>(context, stream, buffer, offset, length))) {}
 void System::Net::ChunkedInputStream::_ctor(System::Net::HttpListenerContext context, System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, stream, buffer, offset, length);
}
 int32_t System::Net::ChunkedInputStream::Read(ByRef<::ArrayW<uint8_t>> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::IAsyncResult System::Net::ChunkedInputStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback cback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cback, state);
}
 void System::Net::ChunkedInputStream::OnRead(System::IAsyncResult base_ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                            "OnRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, base_ares);
}
 int32_t System::Net::ChunkedInputStream::EndRead(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::ChunkedInputStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ChunkedInputStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/zzzz__ResponseStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__HttpListenerResponse_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
//  Writing Method size for method: System::Net::ResponseStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ResponseStream::*)(System::IO::Stream, System::Net::HttpListenerResponse, bool)>(&System::Net::ResponseStream::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2843b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ResponseStream::*)()>(&System::Net::ResponseStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2843bfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ResponseStream::*)()>(&System::Net::ResponseStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2843c04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ResponseStream::*)()>(&System::Net::ResponseStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2843c0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::ResponseStream::*)()>(&System::Net::ResponseStream::get_Length)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2843c14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::ResponseStream::*)()>(&System::Net::ResponseStream::get_Position)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2843c54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ResponseStream::*)(int64_t)>(&System::Net::ResponseStream::set_Position)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2843c94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ResponseStream::*)()>(&System::Net::ResponseStream::Close)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2843cd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.GetHeaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::MemoryStream (System::Net::ResponseStream::*)(bool)>(&System::Net::ResponseStream::GetHeaders)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2843f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "GetHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ResponseStream::*)()>(&System::Net::ResponseStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x284423c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.GetChunkSizeBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int32_t, bool)>(&System::Net::ResponseStream::GetChunkSizeBytes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2844090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "GetChunkSizeBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.InternalWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Net::ResponseStream::InternalWrite)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2844180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "InternalWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Net::ResponseStream::Write)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2844240;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.BeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::ResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::ResponseStream::BeginWrite)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2844540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ResponseStream::*)(System::IAsyncResult)>(&System::Net::ResponseStream::EndWrite)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x284477c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::ResponseStream::*)(ByRef<::ArrayW<uint8_t>>, int32_t, int32_t)>(&System::Net::ResponseStream::Read)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28449a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::ResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::ResponseStream::BeginRead)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28449e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::ResponseStream::*)(System::IAsyncResult)>(&System::Net::ResponseStream::EndRead)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2844a28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::ResponseStream::*)(int64_t, System::IO::SeekOrigin)>(&System::Net::ResponseStream::Seek)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2844a68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ResponseStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ResponseStream::*)(int64_t)>(&System::Net::ResponseStream::SetLength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2844aa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::ResponseStream::__set_response(System::Net::HttpListenerResponse value)  {
::cordl_internals::setInstanceField<System::Net::HttpListenerResponse, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpListenerResponse>(value));
}
constexpr System::Net::HttpListenerResponse System::Net::ResponseStream::__get_response() const {
return ::cordl_internals::getInstanceField<System::Net::HttpListenerResponse, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ResponseStream::__set_ignore_errors(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::ResponseStream::__get_ignore_errors() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ResponseStream::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::ResponseStream::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ResponseStream::__set_trailer_sent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x32>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::ResponseStream::__get_trailer_sent() const {
return ::cordl_internals::getInstanceField<bool, 0x32>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ResponseStream::__set_stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Net::ResponseStream::__get_stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::ResponseStream::__set_crlf(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "crlf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Net::ResponseStream::__get_crlf()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "crlf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get>();
}
// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "response", ty: "System::Net::HttpListenerResponse", modifiers: "", def_value: None }, CppParam { name: "ignore_errors", ty: "bool", modifiers: "", def_value: None }]
 System::Net::ResponseStream::ResponseStream(System::IO::Stream stream, System::Net::HttpListenerResponse response, bool ignore_errors)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<ResponseStream>(stream, response, ignore_errors))) {}
 void System::Net::ResponseStream::_ctor(System::IO::Stream stream, System::Net::HttpListenerResponse response, bool ignore_errors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, response, ignore_errors);
}
 bool System::Net::ResponseStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::ResponseStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::ResponseStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Net::ResponseStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Net::ResponseStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::ResponseStream::set_Position(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::ResponseStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::MemoryStream System::Net::ResponseStream::GetHeaders(bool closing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "GetHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::MemoryStream, false>(const_cast<void*>(instance), ___internal_method, closing);
}
 void System::Net::ResponseStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::Net::ResponseStream::GetChunkSizeBytes(int32_t size, bool final)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "GetChunkSizeBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, size, final);
}
 void System::Net::ResponseStream::InternalWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "InternalWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void System::Net::ResponseStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::IAsyncResult System::Net::ResponseStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback cback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "BeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cback, state);
}
 void System::Net::ResponseStream::EndWrite(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 int32_t System::Net::ResponseStream::Read(ByRef<::ArrayW<uint8_t>> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::IAsyncResult System::Net::ResponseStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback cback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cback, state);
}
 int32_t System::Net::ResponseStream::EndRead(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 int64_t System::Net::ResponseStream::Seek(int64_t offset, System::IO::SeekOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, offset, origin);
}
 void System::Net::ResponseStream::SetLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ResponseStream>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}

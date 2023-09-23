#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
//  Writing Method size for method: System::Net::WebConnectionStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)(System::Net::WebConnection, System::Net::WebOperation)>(&System::Net::WebConnectionStream::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x284cfcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_Request
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpWebRequest (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284d088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_Connection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebConnection (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284d090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_Connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_Operation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebOperation (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_Operation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284d098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_Operation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_ServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServicePoint (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_ServicePoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x284d0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_CanTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284d0bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_ReadTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284d0c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.set_ReadTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)(int32_t)>(&System::Net::WebConnectionStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x284d0cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_WriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284d130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.set_WriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)(int32_t)>(&System::Net::WebConnectionStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x284d138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.GetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (System::Net::WebConnectionStream::*)(System::Exception)>(&System::Net::WebConnectionStream::GetException)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x284d19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.TryReadFromBufferedContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ByRef<int32_t>)>(&System::Net::WebConnectionStream::TryReadFromBufferedContent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::WebConnectionStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Net::WebConnectionStream::Read)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x284d304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::WebConnectionStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::WebConnectionStream::BeginRead)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x284d608;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::WebConnectionStream::*)(System::IAsyncResult)>(&System::Net::WebConnectionStream::EndRead)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x284d7d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.BeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::WebConnectionStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::WebConnectionStream::BeginWrite)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x284d8fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)(System::IAsyncResult)>(&System::Net::WebConnectionStream::EndWrite)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x284dacc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Net::WebConnectionStream::Write)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x284dbc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x284ddbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.FlushAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Net::WebConnectionStream::*)(System::Threading::CancellationToken)>(&System::Net::WebConnectionStream::FlushAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x284ddc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.InternalClose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::InternalClose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x284de80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "InternalClose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.Close_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)(ByRef<bool>)>(&System::Net::WebConnectionStream::Close_internal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::Close)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x284de8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::WebConnectionStream::*)(int64_t, System::IO::SeekOrigin)>(&System::Net::WebConnectionStream::Seek)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x284dea0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)(int64_t)>(&System::Net::WebConnectionStream::SetLength)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x284def0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284df40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_Length)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x284df48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::WebConnectionStream::*)()>(&System::Net::WebConnectionStream::get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x284df98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::*)(int64_t)>(&System::Net::WebConnectionStream::set_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x284dfe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::WebConnectionStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::WebConnectionStream::__set_closed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::WebConnectionStream::__get_closed() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionStream::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::WebConnectionStream::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionStream::__set_locker(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Net::WebConnectionStream::__get_locker() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionStream::__set_read_timeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::WebConnectionStream::__get_read_timeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionStream::__set_write_timeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::WebConnectionStream::__get_write_timeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionStream::__set__Request_k__BackingField(System::Net::HttpWebRequest value)  {
::cordl_internals::setInstanceField<System::Net::HttpWebRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpWebRequest>(value));
}
constexpr System::Net::HttpWebRequest System::Net::WebConnectionStream::__get__Request_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::HttpWebRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionStream::__set__Connection_k__BackingField(System::Net::WebConnection value)  {
::cordl_internals::setInstanceField<System::Net::WebConnection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebConnection>(value));
}
constexpr System::Net::WebConnection System::Net::WebConnectionStream::__get__Connection_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::WebConnection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionStream::__set__Operation_k__BackingField(System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<System::Net::WebOperation, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebOperation>(value));
}
constexpr System::Net::WebOperation System::Net::WebConnectionStream::__get__Operation_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::WebOperation, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "cnc", ty: "System::Net::WebConnection", modifiers: "", def_value: None }, CppParam { name: "operation", ty: "System::Net::WebOperation", modifiers: "", def_value: None }]
 System::Net::WebConnectionStream::WebConnectionStream(System::Net::WebConnection cnc, System::Net::WebOperation operation)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<WebConnectionStream>(cnc, operation))) {}
 void System::Net::WebConnectionStream::_ctor(System::Net::WebConnection cnc, System::Net::WebOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cnc, operation);
}
 System::Net::HttpWebRequest System::Net::WebConnectionStream::get_Request()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpWebRequest, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::WebConnection System::Net::WebConnectionStream::get_Connection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_Connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebConnection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::WebOperation System::Net::WebConnectionStream::get_Operation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_Operation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebOperation, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::ServicePoint System::Net::WebConnectionStream::get_ServicePoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ServicePoint, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::WebConnectionStream::get_CanTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_CanTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Net::WebConnectionStream::get_ReadTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_ReadTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionStream::set_ReadTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "set_ReadTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Net::WebConnectionStream::get_WriteTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_WriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionStream::set_WriteTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "set_WriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Exception System::Net::WebConnectionStream::GetException(System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method, e);
}
 bool System::Net::WebConnectionStream::TryReadFromBufferedContent(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "TryReadFromBufferedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, result);
}
 int32_t System::Net::WebConnectionStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::IAsyncResult System::Net::WebConnectionStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cb, state);
}
 int32_t System::Net::WebConnectionStream::EndRead(System::IAsyncResult r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, r);
}
 System::IAsyncResult System::Net::WebConnectionStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "BeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cb, state);
}
 void System::Net::WebConnectionStream::EndWrite(System::IAsyncResult r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, r);
}
 void System::Net::WebConnectionStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void System::Net::WebConnectionStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task System::Net::WebConnectionStream::FlushAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "FlushAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void System::Net::WebConnectionStream::InternalClose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "InternalClose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionStream::Close_internal(ByRef<bool> disposed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "Close_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposed);
}
 void System::Net::WebConnectionStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Net::WebConnectionStream::Seek(int64_t a, System::IO::SeekOrigin b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
 void System::Net::WebConnectionStream::SetLength(int64_t a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a);
}
 bool System::Net::WebConnectionStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Net::WebConnectionStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Net::WebConnectionStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionStream::set_Position(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionStream>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}

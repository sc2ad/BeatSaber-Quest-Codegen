#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
namespace {
#include "System/Xml/zzzz__XmlRegisteredNonCachedStream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Xml/zzzz__XmlDownloadManager_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRegisteredNonCachedStream::*)(::System::IO::Stream, ::System::Xml::XmlDownloadManager, ::StringW)>(&::System::Xml::XmlRegisteredNonCachedStream::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27108e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDownloadManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRegisteredNonCachedStream::*)()>(&::System::Xml::XmlRegisteredNonCachedStream::Finalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x271172c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRegisteredNonCachedStream::*)(bool)>(&::System::Xml::XmlRegisteredNonCachedStream::Dispose)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x27117d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::System::Xml::XmlRegisteredNonCachedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Xml::XmlRegisteredNonCachedStream::BeginRead)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2711908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.BeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::System::Xml::XmlRegisteredNonCachedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Xml::XmlRegisteredNonCachedStream::BeginWrite)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x271192c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlRegisteredNonCachedStream::*)(::System::IAsyncResult)>(&::System::Xml::XmlRegisteredNonCachedStream::EndRead)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2711950;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRegisteredNonCachedStream::*)(::System::IAsyncResult)>(&::System::Xml::XmlRegisteredNonCachedStream::EndWrite)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2711974;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRegisteredNonCachedStream::*)()>(&::System::Xml::XmlRegisteredNonCachedStream::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2711998;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlRegisteredNonCachedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlRegisteredNonCachedStream::Read)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27119bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlRegisteredNonCachedStream::*)()>(&::System::Xml::XmlRegisteredNonCachedStream::ReadByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27119e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::XmlRegisteredNonCachedStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Xml::XmlRegisteredNonCachedStream::Seek)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2711a04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRegisteredNonCachedStream::*)(int64_t)>(&::System::Xml::XmlRegisteredNonCachedStream::SetLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2711a28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRegisteredNonCachedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlRegisteredNonCachedStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2711a4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRegisteredNonCachedStream::*)(uint8_t)>(&::System::Xml::XmlRegisteredNonCachedStream::WriteByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2711a70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlRegisteredNonCachedStream::*)()>(&::System::Xml::XmlRegisteredNonCachedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2711a94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlRegisteredNonCachedStream::*)()>(&::System::Xml::XmlRegisteredNonCachedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2711ab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlRegisteredNonCachedStream::*)()>(&::System::Xml::XmlRegisteredNonCachedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2711ad4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::XmlRegisteredNonCachedStream::*)()>(&::System::Xml::XmlRegisteredNonCachedStream::get_Length)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2711af4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::XmlRegisteredNonCachedStream::*)()>(&::System::Xml::XmlRegisteredNonCachedStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2711b14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRegisteredNonCachedStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlRegisteredNonCachedStream::*)(int64_t)>(&::System::Xml::XmlRegisteredNonCachedStream::set_Position)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2711b34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::XmlRegisteredNonCachedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::XmlRegisteredNonCachedStream::__set_stream(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::System::Xml::XmlRegisteredNonCachedStream::__get_stream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::XmlRegisteredNonCachedStream::__set_downloadManager(::System::Xml::XmlDownloadManager value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlDownloadManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlDownloadManager>(value));
}
constexpr ::System::Xml::XmlDownloadManager ::System::Xml::XmlRegisteredNonCachedStream::__get_downloadManager() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlDownloadManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::XmlRegisteredNonCachedStream::__set_host(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Xml::XmlRegisteredNonCachedStream::__get_host() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "downloadManager", ty: "::System::Xml::XmlDownloadManager", modifiers: "", def_value: None }, CppParam { name: "host", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Xml::XmlRegisteredNonCachedStream::XmlRegisteredNonCachedStream(::System::IO::Stream stream, ::System::Xml::XmlDownloadManager downloadManager, ::StringW host)  : ::System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<XmlRegisteredNonCachedStream>(stream, downloadManager, host))) {}
 void ::System::Xml::XmlRegisteredNonCachedStream::_ctor(::System::IO::Stream stream, ::System::Xml::XmlDownloadManager downloadManager, ::StringW host)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDownloadManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, downloadManager, host);
}
 void ::System::Xml::XmlRegisteredNonCachedStream::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::XmlRegisteredNonCachedStream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 ::System::IAsyncResult ::System::Xml::XmlRegisteredNonCachedStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 ::System::IAsyncResult ::System::Xml::XmlRegisteredNonCachedStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "BeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 int32_t ::System::Xml::XmlRegisteredNonCachedStream::EndRead(::System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 void ::System::Xml::XmlRegisteredNonCachedStream::EndWrite(::System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 void ::System::Xml::XmlRegisteredNonCachedStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Xml::XmlRegisteredNonCachedStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 int32_t ::System::Xml::XmlRegisteredNonCachedStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::System::Xml::XmlRegisteredNonCachedStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, offset, origin);
}
 void ::System::Xml::XmlRegisteredNonCachedStream::SetLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Xml::XmlRegisteredNonCachedStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void ::System::Xml::XmlRegisteredNonCachedStream::WriteByte(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Xml::XmlRegisteredNonCachedStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Xml::XmlRegisteredNonCachedStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Xml::XmlRegisteredNonCachedStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::System::Xml::XmlRegisteredNonCachedStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::System::Xml::XmlRegisteredNonCachedStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::XmlRegisteredNonCachedStream::set_Position(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlRegisteredNonCachedStream>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace

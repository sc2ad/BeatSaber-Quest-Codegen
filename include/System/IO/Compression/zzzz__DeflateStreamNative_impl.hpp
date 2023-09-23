#pragma once
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/IO/Compression/zzzz__DeflateStreamNative_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/IO/Compression/zzzz__CompressionMode_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27b18c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite::*)(::cordl_internals::intptr_t, int32_t, ::cordl_internals::intptr_t)>(&System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27b211c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite>(object, method))) {}
 void System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 int32_t System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite::Invoke(::cordl_internals::intptr_t buffer, int32_t length, ::cordl_internals::intptr_t data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, length, data);
}
//  Writing Method size for method: System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle.get_IsInvalid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::*)()>(&System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27b2130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::*)()>(&System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27b20c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle.ReleaseHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::*)()>(&System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27b2184;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
 bool System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::get_IsInvalid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(),
                            "get_IsInvalid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle()  : System::Runtime::InteropServices::SafeHandle(THROW_UNLESS(::il2cpp_utils::New<System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>())) {}
 void System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle::ReleaseHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(),
                            "ReleaseHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)()>(&System::IO::Compression::DeflateStreamNative::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b18bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Compression::DeflateStreamNative (*)(System::IO::Stream, System::IO::Compression::CompressionMode, bool)>(&System::IO::Compression::DeflateStreamNative::Create)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x27b00a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::CompressionMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)()>(&System::IO::Compression::DeflateStreamNative::Finalize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27b1a20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::Compression::DeflateStreamNative),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)(bool)>(&System::IO::Compression::DeflateStreamNative::Dispose)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x27b0334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)()>(&System::IO::Compression::DeflateStreamNative::Flush)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27b0a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.ReadZStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Compression::DeflateStreamNative::*)(::cordl_internals::intptr_t, int32_t)>(&System::IO::Compression::DeflateStreamNative::ReadZStream)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27b0480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "ReadZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.WriteZStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)(::cordl_internals::intptr_t, int32_t)>(&System::IO::Compression::DeflateStreamNative::WriteZStream)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27b0728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "WriteZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.UnmanagedRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, int32_t, ::cordl_internals::intptr_t)>(&System::IO::Compression::DeflateStreamNative::UnmanagedRead)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27b1744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "UnmanagedRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.UnmanagedRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Compression::DeflateStreamNative::*)(::cordl_internals::intptr_t, int32_t)>(&System::IO::Compression::DeflateStreamNative::UnmanagedRead)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x27b1d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "UnmanagedRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.UnmanagedWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, int32_t, ::cordl_internals::intptr_t)>(&System::IO::Compression::DeflateStreamNative::UnmanagedWrite)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27b1800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "UnmanagedWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.UnmanagedWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::Compression::DeflateStreamNative::*)(::cordl_internals::intptr_t, int32_t)>(&System::IO::Compression::DeflateStreamNative::UnmanagedWrite)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x27b1eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "UnmanagedWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.CheckResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)(int32_t, ::StringW)>(&System::IO::Compression::DeflateStreamNative::CheckResult)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x27b1b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "CheckResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.CreateZStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle (*)(System::IO::Compression::CompressionMode, bool, System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite, ::cordl_internals::intptr_t)>(&System::IO::Compression::DeflateStreamNative::CreateZStream)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27b1988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "CreateZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::CompressionMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.CloseZStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t)>(&System::IO::Compression::DeflateStreamNative::CloseZStream)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27b2118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "CloseZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle)>(&System::IO::Compression::DeflateStreamNative::Flush)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27b1ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.ReadZStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle, ::cordl_internals::intptr_t, int32_t)>(&System::IO::Compression::DeflateStreamNative::ReadZStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27b1c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "ReadZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::Compression::DeflateStreamNative.WriteZStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle, ::cordl_internals::intptr_t, int32_t)>(&System::IO::Compression::DeflateStreamNative::WriteZStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27b1ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "WriteZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::IO::Compression::DeflateStreamNative::__set_feeder(System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite value)  {
::cordl_internals::setInstanceField<System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite>(value));
}
constexpr System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite System::IO::Compression::DeflateStreamNative::__get_feeder() const {
return ::cordl_internals::getInstanceField<System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_base_stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::IO::Compression::DeflateStreamNative::__get_base_stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_z_stream(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle value)  {
::cordl_internals::setInstanceField<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>(value));
}
constexpr System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle System::IO::Compression::DeflateStreamNative::__get_z_stream() const {
return ::cordl_internals::getInstanceField<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_data(System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::GCHandle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::GCHandle>(value));
}
constexpr System::Runtime::InteropServices::GCHandle System::IO::Compression::DeflateStreamNative::__get_data() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::GCHandle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::IO::Compression::DeflateStreamNative::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_io_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::IO::Compression::DeflateStreamNative::__get_io_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_last_error(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Exception>(value));
}
constexpr System::Exception System::IO::Compression::DeflateStreamNative::__get_last_error() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::IO::Compression::DeflateStreamNative::DeflateStreamNative()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DeflateStreamNative>())) {}
 void System::IO::Compression::DeflateStreamNative::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::Compression::DeflateStreamNative System::IO::Compression::DeflateStreamNative::Create(System::IO::Stream compressedStream, System::IO::Compression::CompressionMode mode, bool gzip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::CompressionMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Compression::DeflateStreamNative, false>(nullptr, ___internal_method, compressedStream, mode, gzip);
}
 void System::IO::Compression::DeflateStreamNative::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Compression::DeflateStreamNative::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::IO::Compression::DeflateStreamNative::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::IO::Compression::DeflateStreamNative::ReadZStream(::cordl_internals::intptr_t buffer, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "ReadZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, length);
}
 void System::IO::Compression::DeflateStreamNative::WriteZStream(::cordl_internals::intptr_t buffer, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "WriteZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, length);
}
 int32_t System::IO::Compression::DeflateStreamNative::UnmanagedRead(::cordl_internals::intptr_t buffer, int32_t length, ::cordl_internals::intptr_t data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "UnmanagedRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, buffer, length, data);
}
 int32_t System::IO::Compression::DeflateStreamNative::UnmanagedRead(::cordl_internals::intptr_t buffer, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "UnmanagedRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, length);
}
 int32_t System::IO::Compression::DeflateStreamNative::UnmanagedWrite(::cordl_internals::intptr_t buffer, int32_t length, ::cordl_internals::intptr_t data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "UnmanagedWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, buffer, length, data);
}
 int32_t System::IO::Compression::DeflateStreamNative::UnmanagedWrite(::cordl_internals::intptr_t buffer, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "UnmanagedWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, length);
}
 void System::IO::Compression::DeflateStreamNative::CheckResult(int32_t result, ::StringW where)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "CheckResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, where);
}
 System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle System::IO::Compression::DeflateStreamNative::CreateZStream(System::IO::Compression::CompressionMode compress, bool gzip, System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite feeder, ::cordl_internals::intptr_t data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "CreateZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::CompressionMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle, false>(nullptr, ___internal_method, compress, gzip, feeder, data);
}
 int32_t System::IO::Compression::DeflateStreamNative::CloseZStream(::cordl_internals::intptr_t stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "CloseZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, stream);
}
 int32_t System::IO::Compression::DeflateStreamNative::Flush(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, stream);
}
 int32_t System::IO::Compression::DeflateStreamNative::ReadZStream(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle stream, ::cordl_internals::intptr_t buffer, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "ReadZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, stream, buffer, length);
}
 int32_t System::IO::Compression::DeflateStreamNative::WriteZStream(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle stream, ::cordl_internals::intptr_t buffer, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Compression::DeflateStreamNative>::get(),
                            "WriteZStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, stream, buffer, length);
}

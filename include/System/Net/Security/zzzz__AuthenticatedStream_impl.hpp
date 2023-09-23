#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/Security/zzzz__AuthenticatedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: System::Net::Security::AuthenticatedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::AuthenticatedStream::*)(System::IO::Stream, bool)>(&System::Net::Security::AuthenticatedStream::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x276cdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::AuthenticatedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::AuthenticatedStream.get_InnerStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (System::Net::Security::AuthenticatedStream::*)()>(&System::Net::Security::AuthenticatedStream::get_InnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276cf8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::AuthenticatedStream>::get(),
                            "get_InnerStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::AuthenticatedStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::AuthenticatedStream::*)(bool)>(&System::Net::Security::AuthenticatedStream::Dispose)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x276cf94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::AuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::AuthenticatedStream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::AuthenticatedStream.get_IsAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::AuthenticatedStream::*)()>(&System::Net::Security::AuthenticatedStream::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::AuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::AuthenticatedStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::Security::AuthenticatedStream::__set__InnerStream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Net::Security::AuthenticatedStream::__get__InnerStream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::AuthenticatedStream::__set__LeaveStreamOpen(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Security::AuthenticatedStream::__get__LeaveStreamOpen() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }]
 System::Net::Security::AuthenticatedStream::AuthenticatedStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen)  : System::IO::Stream(THROW_UNLESS(::il2cpp_utils::New<AuthenticatedStream>(innerStream, leaveInnerStreamOpen))) {}
 void System::Net::Security::AuthenticatedStream::_ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::AuthenticatedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, innerStream, leaveInnerStreamOpen);
}
 System::IO::Stream System::Net::Security::AuthenticatedStream::get_InnerStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::AuthenticatedStream>::get(),
                            "get_InnerStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Security::AuthenticatedStream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::AuthenticatedStream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 bool System::Net::Security::AuthenticatedStream::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::AuthenticatedStream>::get(),
                            "get_IsAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}

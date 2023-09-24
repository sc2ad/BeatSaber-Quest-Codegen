#pragma once
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncHandshakeRequest_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
//  Writing Method size for method: Mono::Net::Security::AsyncHandshakeRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::AsyncHandshakeRequest::*)(Mono::Net::Security::MobileAuthenticatedStream, bool)>(&Mono::Net::Security::AsyncHandshakeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268dd08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::AsyncHandshakeRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::AsyncHandshakeRequest.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::AsyncOperationStatus (Mono::Net::Security::AsyncHandshakeRequest::*)(Mono::Net::Security::AsyncOperationStatus)>(&Mono::Net::Security::AsyncHandshakeRequest::Run)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x268dd10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::AsyncHandshakeRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::AsyncHandshakeRequest>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
 Mono::Net::Security::AsyncHandshakeRequest Mono::Net::Security::AsyncHandshakeRequest::New_ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync)  {
Mono::Net::Security::AsyncHandshakeRequest o{THROW_UNLESS(::il2cpp_utils::New<Mono::Net::Security::AsyncHandshakeRequest>(parent, sync))};
return o;
}
 void Mono::Net::Security::AsyncHandshakeRequest::_ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::AsyncHandshakeRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, sync);
}
 Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::AsyncHandshakeRequest::Run(Mono::Net::Security::AsyncOperationStatus status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::AsyncHandshakeRequest>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::AsyncOperationStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Net::Security::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method, status);
}

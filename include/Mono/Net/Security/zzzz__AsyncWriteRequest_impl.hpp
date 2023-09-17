#pragma once
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_impl.hpp"
namespace {
#include "Mono/Net/Security/zzzz__AsyncWriteRequest_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncWriteRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncWriteRequest::*)(::Mono::Net::Security::MobileAuthenticatedStream, bool, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::AsyncWriteRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268e3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncWriteRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncWriteRequest.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::AsyncOperationStatus (::Mono::Net::Security::AsyncWriteRequest::*)(::Mono::Net::Security::AsyncOperationStatus)>(&::Mono::Net::Security::AsyncWriteRequest::Run)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x268e3f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::AsyncWriteRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncWriteRequest>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "parent", ty: "::Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
 ::Mono::Net::Security::AsyncWriteRequest::AsyncWriteRequest(::Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  : ::Mono::Net::Security::AsyncReadOrWriteRequest(THROW_UNLESS(::il2cpp_utils::New<AsyncWriteRequest>(parent, sync, buffer, offset, size))) {}
 void ::Mono::Net::Security::AsyncWriteRequest::_ctor(::Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncWriteRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, sync, buffer, offset, size);
}
 ::Mono::Net::Security::AsyncOperationStatus ::Mono::Net::Security::AsyncWriteRequest::Run(::Mono::Net::Security::AsyncOperationStatus status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncWriteRequest>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncOperationStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method, status);
}
} // end anonymous namespace

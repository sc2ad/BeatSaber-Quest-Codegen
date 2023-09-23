#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/Security/zzzz__LocalCertSelectionCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: System::Net::Security::LocalCertSelectionCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::LocalCertSelectionCallback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::Net::Security::LocalCertSelectionCallback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x276d304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::LocalCertSelectionCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::LocalCertSelectionCallback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (System::Net::Security::LocalCertSelectionCallback::*)(::StringW, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Security::Cryptography::X509Certificates::X509Certificate, ::ArrayW<::StringW>)>(&System::Net::Security::LocalCertSelectionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x276d3dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::LocalCertSelectionCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::LocalCertSelectionCallback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 System::Net::Security::LocalCertSelectionCallback::LocalCertSelectionCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LocalCertSelectionCallback>(object, method))) {}
 void System::Net::Security::LocalCertSelectionCallback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::LocalCertSelectionCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate System::Net::Security::LocalCertSelectionCallback::Invoke(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::LocalCertSelectionCallback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, targetHost, localCertificates, remoteCertificate, acceptableIssuers);
}

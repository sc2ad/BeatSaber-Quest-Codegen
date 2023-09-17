#pragma once
namespace {
#include "Mono/zzzz__ISystemDependencyProvider_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
//  Writing Method size for method: ::Mono::ISystemDependencyProvider.get_CertificateProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::ISystemCertificateProvider (::Mono::ISystemDependencyProvider::*)()>(&::Mono::ISystemDependencyProvider::get_CertificateProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::ISystemDependencyProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemDependencyProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::Mono::ISystemCertificateProvider ::Mono::ISystemDependencyProvider::get_CertificateProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemDependencyProvider>::get(),
                            "get_CertificateProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::ISystemCertificateProvider, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

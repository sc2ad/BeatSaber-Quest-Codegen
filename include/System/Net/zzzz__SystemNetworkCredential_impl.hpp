#pragma once
#include "System/Net/zzzz__NetworkCredential_impl.hpp"
namespace {
#include "System/Net/zzzz__SystemNetworkCredential_def.hpp"
//  Writing Method size for method: ::System::Net::SystemNetworkCredential._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::SystemNetworkCredential::*)()>(&::System::Net::SystemNetworkCredential::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2809f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SystemNetworkCredential>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::SystemNetworkCredential::__set_defaultCredential(::System::Net::SystemNetworkCredential value)  {
::cordl_internals::setStaticField<::System::Net::SystemNetworkCredential, "defaultCredential", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SystemNetworkCredential>::get>(std::forward<::System::Net::SystemNetworkCredential>(value));
}
 ::System::Net::SystemNetworkCredential ::System::Net::SystemNetworkCredential::__get_defaultCredential()  {
return ::cordl_internals::getStaticField<::System::Net::SystemNetworkCredential, "defaultCredential", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SystemNetworkCredential>::get>();
}
// Ctor Parameters []
 ::System::Net::SystemNetworkCredential::SystemNetworkCredential()  : ::System::Net::NetworkCredential(THROW_UNLESS(::il2cpp_utils::New<SystemNetworkCredential>())) {}
 void ::System::Net::SystemNetworkCredential::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SystemNetworkCredential>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

#pragma once
#include "System/Net/NetworkInformation/zzzz__IPAddressInformation_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformation_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnicastIPAddressInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnicastIPAddressInformation::*)()>(&::System::Net::NetworkInformation::UnicastIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2859610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnicastIPAddressInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Net::NetworkInformation::UnicastIPAddressInformation::UnicastIPAddressInformation()  : ::System::Net::NetworkInformation::IPAddressInformation(THROW_UNLESS(::il2cpp_utils::New<UnicastIPAddressInformation>())) {}
 void ::System::Net::NetworkInformation::UnicastIPAddressInformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnicastIPAddressInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

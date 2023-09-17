#pragma once
namespace {
#include "System/Net/NetworkInformation/zzzz__IPGlobalPropertiesFactoryPal_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPGlobalProperties (*)()>(&::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2858fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::System::Net::NetworkInformation::IPGlobalProperties ::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPGlobalProperties, false>(nullptr, ___internal_method);
}
} // end anonymous namespace

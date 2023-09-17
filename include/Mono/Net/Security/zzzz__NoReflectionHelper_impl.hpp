#pragma once
namespace {
#include "Mono/Net/Security/zzzz__NoReflectionHelper_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::NoReflectionHelper.GetProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)()>(&::Mono::Net::Security::NoReflectionHelper::GetProvider)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26943d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::NoReflectionHelper>::get(),
                            "GetProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType ::Mono::Net::Security::NoReflectionHelper::GetProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::NoReflectionHelper>::get(),
                            "GetProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method);
}
} // end anonymous namespace

#pragma once
#include "System/Net/Cache/zzzz__RequestCacheValidator_def.hpp"
//  Writing Method size for method: System::Net::Cache::RequestCacheValidator.CreateValidator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Net::Cache::RequestCacheValidator::*)()>(&System::Net::Cache::RequestCacheValidator::CreateValidator)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x285ed4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheValidator>::get(),
                            "CreateValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType System::Net::Cache::RequestCacheValidator::CreateValidator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheValidator>::get(),
                            "CreateValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}

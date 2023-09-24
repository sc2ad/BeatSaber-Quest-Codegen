#pragma once
#include "System/Net/Cache/zzzz__RequestCachingSectionInternal_def.hpp"
//  Writing Method size for method: System::Net::Cache::RequestCachingSectionInternal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cache::RequestCachingSectionInternal::*)()>(&System::Net::Cache::RequestCachingSectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x285ebd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCachingSectionInternal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Cache::RequestCachingSectionInternal::__set_DisableAllCaching(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Cache::RequestCachingSectionInternal::__get_DisableAllCaching() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::Cache::RequestCachingSectionInternal System::Net::Cache::RequestCachingSectionInternal::New_ctor()  {
System::Net::Cache::RequestCachingSectionInternal o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Cache::RequestCachingSectionInternal>())};
return o;
}
 void System::Net::Cache::RequestCachingSectionInternal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCachingSectionInternal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

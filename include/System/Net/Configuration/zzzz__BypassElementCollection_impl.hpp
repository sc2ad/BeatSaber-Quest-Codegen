#pragma once
#include "System/Configuration/zzzz__ConfigurationElementCollection_impl.hpp"
#include "System/Net/Configuration/zzzz__BypassElementCollection_def.hpp"
//  Writing Method size for method: System::Net::Configuration::BypassElementCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::BypassElementCollection::*)()>(&System::Net::Configuration::BypassElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27b220c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::BypassElementCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Net::Configuration::BypassElementCollection::BypassElementCollection()  : System::Configuration::ConfigurationElementCollection(THROW_UNLESS(::il2cpp_utils::New<BypassElementCollection>())) {}
 void System::Net::Configuration::BypassElementCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::BypassElementCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

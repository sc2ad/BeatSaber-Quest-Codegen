#pragma once
#include "System/Configuration/zzzz__ConfigurationSectionGroup_impl.hpp"
#include "System/Net/Configuration/zzzz__NetSectionGroup_def.hpp"
//  Writing Method size for method: System::Net::Configuration::NetSectionGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::NetSectionGroup::*)()>(&System::Net::Configuration::NetSectionGroup::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27b24e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::NetSectionGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Net::Configuration::NetSectionGroup::NetSectionGroup()  : System::Configuration::ConfigurationSectionGroup(THROW_UNLESS(::il2cpp_utils::New<NetSectionGroup>())) {}
 void System::Net::Configuration::NetSectionGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::NetSectionGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

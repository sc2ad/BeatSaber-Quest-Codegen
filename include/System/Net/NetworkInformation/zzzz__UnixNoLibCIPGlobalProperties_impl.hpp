#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/zzzz__UnixNoLibCIPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties.get_DomainName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::*)()>(&::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::get_DomainName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x285df18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::*)()>(&::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285df60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::get_DomainName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties>::get(),
                            "get_DomainName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::UnixNoLibCIPGlobalProperties()  : ::System::Net::NetworkInformation::UnixIPGlobalProperties(THROW_UNLESS(::il2cpp_utils::New<UnixNoLibCIPGlobalProperties>())) {}
 void ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
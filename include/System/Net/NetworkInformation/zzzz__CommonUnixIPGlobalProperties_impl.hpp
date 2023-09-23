#pragma once
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__CommonUnixIPGlobalProperties_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::CommonUnixIPGlobalProperties.getdomainname
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x285dd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::CommonUnixIPGlobalProperties>::get(),
                            "getdomainname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::CommonUnixIPGlobalProperties.get_DomainName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkInformation::CommonUnixIPGlobalProperties::*)()>(&System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x285dd8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::CommonUnixIPGlobalProperties),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::CommonUnixIPGlobalProperties>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::CommonUnixIPGlobalProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::CommonUnixIPGlobalProperties::*)()>(&System::Net::NetworkInformation::CommonUnixIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285df08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::CommonUnixIPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 int32_t System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname(::ArrayW<uint8_t> name, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::CommonUnixIPGlobalProperties>::get(),
                            "getdomainname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name, len);
}
 ::StringW System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::CommonUnixIPGlobalProperties>::get(),
                            "get_DomainName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Net::NetworkInformation::CommonUnixIPGlobalProperties::CommonUnixIPGlobalProperties()  : System::Net::NetworkInformation::IPGlobalProperties(THROW_UNLESS(::il2cpp_utils::New<CommonUnixIPGlobalProperties>())) {}
 void System::Net::NetworkInformation::CommonUnixIPGlobalProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::CommonUnixIPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

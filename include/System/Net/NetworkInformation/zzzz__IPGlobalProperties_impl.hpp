#pragma once
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::IPGlobalProperties.GetIPGlobalProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::IPGlobalProperties (*)()>(&System::Net::NetworkInformation::IPGlobalProperties::GetIPGlobalProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2858fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPGlobalProperties>::get(),
                            "GetIPGlobalProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::IPGlobalProperties.InternalGetIPGlobalProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::IPGlobalProperties (*)()>(&System::Net::NetworkInformation::IPGlobalProperties::InternalGetIPGlobalProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2859020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPGlobalProperties>::get(),
                            "InternalGetIPGlobalProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::IPGlobalProperties.get_DomainName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NetworkInformation::IPGlobalProperties::*)()>(&System::Net::NetworkInformation::IPGlobalProperties::get_DomainName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::IPGlobalProperties),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPGlobalProperties>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::IPGlobalProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::IPGlobalProperties::*)()>(&System::Net::NetworkInformation::IPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2859024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Net::NetworkInformation::IPGlobalProperties System::Net::NetworkInformation::IPGlobalProperties::GetIPGlobalProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPGlobalProperties>::get(),
                            "GetIPGlobalProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::IPGlobalProperties, false>(nullptr, ___internal_method);
}
 System::Net::NetworkInformation::IPGlobalProperties System::Net::NetworkInformation::IPGlobalProperties::InternalGetIPGlobalProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPGlobalProperties>::get(),
                            "InternalGetIPGlobalProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::IPGlobalProperties, false>(nullptr, ___internal_method);
}
 ::StringW System::Net::NetworkInformation::IPGlobalProperties::get_DomainName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPGlobalProperties>::get(),
                            "get_DomainName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Net::NetworkInformation::IPGlobalProperties::IPGlobalProperties()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IPGlobalProperties>())) {}
 void System::Net::NetworkInformation::IPGlobalProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

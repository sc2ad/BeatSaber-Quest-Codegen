#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalPropertiesFactoryPal_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal.get_PlatformNeedsLibCWorkaround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::get_PlatformNeedsLibCWorkaround)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x285e164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal>::get(),
                            "get_PlatformNeedsLibCWorkaround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::IPGlobalProperties (*)()>(&System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::Create)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x285b2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::__set__PlatformNeedsLibCWorkaround_k__BackingField(bool value)  {
::cordl_internals::setStaticField<bool, "<PlatformNeedsLibCWorkaround>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal>::get>(std::forward<bool>(value));
}
 bool System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::__get__PlatformNeedsLibCWorkaround_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<PlatformNeedsLibCWorkaround>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal>::get>();
}
 bool System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::get_PlatformNeedsLibCWorkaround()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal>::get(),
                            "get_PlatformNeedsLibCWorkaround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 System::Net::NetworkInformation::IPGlobalProperties System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::IPGlobalProperties, false>(nullptr, ___internal_method);
}

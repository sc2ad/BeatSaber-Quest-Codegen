#pragma once
#include "System/Net/Configuration/zzzz__SettingsSectionInternal_def.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
//  Writing Method size for method: System::Net::Configuration::SettingsSectionInternal.get_Section
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Configuration::SettingsSectionInternal (*)()>(&System::Net::Configuration::SettingsSectionInternal::get_Section)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x285e6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::SettingsSectionInternal>::get(),
                            "get_Section",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Configuration::SettingsSectionInternal.get_Ipv6Enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::SettingsSectionInternal>::get(),
                            "get_Ipv6Enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Configuration::SettingsSectionInternal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x285e730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::SettingsSectionInternal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Net::Configuration::SettingsSectionInternal::__set_instance(System::Net::Configuration::SettingsSectionInternal value)  {
::cordl_internals::setStaticField<System::Net::Configuration::SettingsSectionInternal, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::SettingsSectionInternal>::get>(std::forward<System::Net::Configuration::SettingsSectionInternal>(value));
}
 System::Net::Configuration::SettingsSectionInternal System::Net::Configuration::SettingsSectionInternal::__get_instance()  {
return ::cordl_internals::getStaticField<System::Net::Configuration::SettingsSectionInternal, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::SettingsSectionInternal>::get>();
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__set_HttpListenerUnescapeRequestUrl(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Configuration::SettingsSectionInternal::__get_HttpListenerUnescapeRequestUrl() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__set_IPProtectionLevel(System::Net::Sockets::IPProtectionLevel value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::IPProtectionLevel, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::IPProtectionLevel>(value));
}
constexpr System::Net::Sockets::IPProtectionLevel System::Net::Configuration::SettingsSectionInternal::__get_IPProtectionLevel() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::IPProtectionLevel, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::Configuration::SettingsSectionInternal System::Net::Configuration::SettingsSectionInternal::get_Section()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::SettingsSectionInternal>::get(),
                            "get_Section",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Configuration::SettingsSectionInternal, false>(nullptr, ___internal_method);
}
 bool System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::SettingsSectionInternal>::get(),
                            "get_Ipv6Enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Configuration::SettingsSectionInternal System::Net::Configuration::SettingsSectionInternal::New_ctor()  {
System::Net::Configuration::SettingsSectionInternal o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Configuration::SettingsSectionInternal>())};
return o;
}
 void System::Net::Configuration::SettingsSectionInternal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Configuration::SettingsSectionInternal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

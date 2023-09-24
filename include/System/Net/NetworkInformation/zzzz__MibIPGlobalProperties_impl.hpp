#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MibIPGlobalProperties_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::MibIPGlobalProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::MibIPGlobalProperties::*)(::StringW)>(&System::Net::NetworkInformation::MibIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x285df68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MibIPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::NetworkInformation::MibIPGlobalProperties::__set_StatisticsFile(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::NetworkInformation::MibIPGlobalProperties::__get_StatisticsFile() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::NetworkInformation::MibIPGlobalProperties::__set_StatisticsFileIPv6(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::NetworkInformation::MibIPGlobalProperties::__get_StatisticsFileIPv6() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::NetworkInformation::MibIPGlobalProperties::__set_TcpFile(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::NetworkInformation::MibIPGlobalProperties::__get_TcpFile() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::NetworkInformation::MibIPGlobalProperties::__set_Tcp6File(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::NetworkInformation::MibIPGlobalProperties::__get_Tcp6File() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::NetworkInformation::MibIPGlobalProperties::__set_UdpFile(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::NetworkInformation::MibIPGlobalProperties::__get_UdpFile() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::NetworkInformation::MibIPGlobalProperties::__set_Udp6File(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::NetworkInformation::MibIPGlobalProperties::__get_Udp6File() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::NetworkInformation::MibIPGlobalProperties::__set_wsChars(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "wsChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MibIPGlobalProperties>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> System::Net::NetworkInformation::MibIPGlobalProperties::__get_wsChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "wsChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MibIPGlobalProperties>::get>();
}
 System::Net::NetworkInformation::MibIPGlobalProperties System::Net::NetworkInformation::MibIPGlobalProperties::New_ctor(::StringW procDir)  {
System::Net::NetworkInformation::MibIPGlobalProperties o{THROW_UNLESS(::il2cpp_utils::New<System::Net::NetworkInformation::MibIPGlobalProperties>(procDir))};
return o;
}
 void System::Net::NetworkInformation::MibIPGlobalProperties::_ctor(::StringW procDir)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MibIPGlobalProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, procDir);
}

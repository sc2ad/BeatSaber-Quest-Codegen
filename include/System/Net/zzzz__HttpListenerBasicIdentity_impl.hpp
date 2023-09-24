#pragma once
#include "System/Security/Principal/zzzz__GenericIdentity_impl.hpp"
#include "System/Net/zzzz__HttpListenerBasicIdentity_def.hpp"
//  Writing Method size for method: System::Net::HttpListenerBasicIdentity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerBasicIdentity::*)(::StringW, ::StringW)>(&System::Net::HttpListenerBasicIdentity::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2836e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerBasicIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::HttpListenerBasicIdentity::__set_password(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpListenerBasicIdentity::__get_password() const {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::HttpListenerBasicIdentity System::Net::HttpListenerBasicIdentity::New_ctor(::StringW username, ::StringW password)  {
System::Net::HttpListenerBasicIdentity o{THROW_UNLESS(::il2cpp_utils::New<System::Net::HttpListenerBasicIdentity>(username, password))};
return o;
}
 void System::Net::HttpListenerBasicIdentity::_ctor(::StringW username, ::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerBasicIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, username, password);
}

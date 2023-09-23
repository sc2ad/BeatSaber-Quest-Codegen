#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__CallContextSecurityData_def.hpp"
#include "System/Security/Principal/zzzz__IPrincipal_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::CallContextSecurityData.get_HasInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::CallContextSecurityData::*)()>(&System::Runtime::Remoting::Messaging::CallContextSecurityData::get_HasInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x233b1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CallContextSecurityData>::get(),
                            "get_HasInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::CallContextSecurityData.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Remoting::Messaging::CallContextSecurityData::*)()>(&System::Runtime::Remoting::Messaging::CallContextSecurityData::Clone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x233b164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CallContextSecurityData>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::CallContextSecurityData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::CallContextSecurityData::*)()>(&System::Runtime::Remoting::Messaging::CallContextSecurityData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233b338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CallContextSecurityData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ICloneable
constexpr  System::Runtime::Remoting::Messaging::CallContextSecurityData::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Messaging::CallContextSecurityData::__set__principal(System::Security::Principal::IPrincipal value)  {
::cordl_internals::setInstanceField<System::Security::Principal::IPrincipal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Principal::IPrincipal>(value));
}
constexpr System::Security::Principal::IPrincipal System::Runtime::Remoting::Messaging::CallContextSecurityData::__get__principal() const {
return ::cordl_internals::getInstanceField<System::Security::Principal::IPrincipal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool System::Runtime::Remoting::Messaging::CallContextSecurityData::get_HasInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CallContextSecurityData>::get(),
                            "get_HasInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::Messaging::CallContextSecurityData::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CallContextSecurityData>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Runtime::Remoting::Messaging::CallContextSecurityData::CallContextSecurityData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CallContextSecurityData>())) {}
 void System::Runtime::Remoting::Messaging::CallContextSecurityData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CallContextSecurityData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

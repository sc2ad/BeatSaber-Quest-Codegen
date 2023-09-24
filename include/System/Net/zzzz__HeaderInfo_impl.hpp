#pragma once
#include "System/Net/zzzz__HeaderInfo_def.hpp"
#include "System/Net/zzzz__HeaderParser_def.hpp"
//  Writing Method size for method: System::Net::HeaderInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HeaderInfo::*)(::StringW, bool, bool, bool, System::Net::HeaderParser)>(&System::Net::HeaderInfo::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x281483c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HeaderParser>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::HeaderInfo::__set_IsRequestRestricted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::HeaderInfo::__get_IsRequestRestricted() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HeaderInfo::__set_IsResponseRestricted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::HeaderInfo::__get_IsResponseRestricted() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HeaderInfo::__set_Parser(System::Net::HeaderParser value)  {
::cordl_internals::setInstanceField<System::Net::HeaderParser, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HeaderParser>(value));
}
constexpr System::Net::HeaderParser System::Net::HeaderInfo::__get_Parser() const {
return ::cordl_internals::getInstanceField<System::Net::HeaderParser, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HeaderInfo::__set_HeaderName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HeaderInfo::__get_HeaderName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HeaderInfo::__set_AllowMultiValues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::HeaderInfo::__get_AllowMultiValues() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::HeaderInfo System::Net::HeaderInfo::New_ctor(::StringW name, bool requestRestricted, bool responseRestricted, bool multi, System::Net::HeaderParser p)  {
System::Net::HeaderInfo o{THROW_UNLESS(::il2cpp_utils::New<System::Net::HeaderInfo>(name, requestRestricted, responseRestricted, multi, p))};
return o;
}
 void System::Net::HeaderInfo::_ctor(::StringW name, bool requestRestricted, bool responseRestricted, bool multi, System::Net::HeaderParser p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HeaderParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, requestRestricted, responseRestricted, multi, p);
}

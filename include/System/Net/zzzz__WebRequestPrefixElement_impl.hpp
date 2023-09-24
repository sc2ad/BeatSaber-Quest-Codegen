#pragma once
#include "System/Net/zzzz__WebRequestPrefixElement_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
//  Writing Method size for method: System::Net::WebRequestPrefixElement.get_Creator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IWebRequestCreate (System::Net::WebRequestPrefixElement::*)()>(&System::Net::WebRequestPrefixElement::get_Creator)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x280cbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebRequestPrefixElement>::get(),
                            "get_Creator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebRequestPrefixElement.set_Creator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequestPrefixElement::*)(System::Net::IWebRequestCreate)>(&System::Net::WebRequestPrefixElement::set_Creator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280cdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebRequestPrefixElement>::get(),
                            "set_Creator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IWebRequestCreate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebRequestPrefixElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebRequestPrefixElement::*)(::StringW, System::Net::IWebRequestCreate)>(&System::Net::WebRequestPrefixElement::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x280cdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebRequestPrefixElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IWebRequestCreate>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::WebRequestPrefixElement::__set_Prefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::WebRequestPrefixElement::__get_Prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebRequestPrefixElement::__set_creator(System::Net::IWebRequestCreate value)  {
::cordl_internals::setInstanceField<System::Net::IWebRequestCreate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IWebRequestCreate>(value));
}
constexpr System::Net::IWebRequestCreate System::Net::WebRequestPrefixElement::__get_creator() const {
return ::cordl_internals::getInstanceField<System::Net::IWebRequestCreate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebRequestPrefixElement::__set_creatorType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Net::WebRequestPrefixElement::__get_creatorType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::IWebRequestCreate System::Net::WebRequestPrefixElement::get_Creator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebRequestPrefixElement>::get(),
                            "get_Creator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IWebRequestCreate, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebRequestPrefixElement::set_Creator(System::Net::IWebRequestCreate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebRequestPrefixElement>::get(),
                            "set_Creator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IWebRequestCreate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::WebRequestPrefixElement System::Net::WebRequestPrefixElement::New_ctor(::StringW P, System::Net::IWebRequestCreate C)  {
System::Net::WebRequestPrefixElement o{THROW_UNLESS(::il2cpp_utils::New<System::Net::WebRequestPrefixElement>(P, C))};
return o;
}
 void System::Net::WebRequestPrefixElement::_ctor(::StringW P, System::Net::IWebRequestCreate C)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebRequestPrefixElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IWebRequestCreate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, P, C);
}

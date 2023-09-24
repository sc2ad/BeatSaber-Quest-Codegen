#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__AuthenticationSchemeSelector_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "System/Net/zzzz__HttpListenerRequest_def.hpp"
//  Writing Method size for method: System::Net::AuthenticationSchemeSelector._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::AuthenticationSchemeSelector::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::Net::AuthenticationSchemeSelector::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2809ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::AuthenticationSchemeSelector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::AuthenticationSchemeSelector.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::AuthenticationSchemes (System::Net::AuthenticationSchemeSelector::*)(System::Net::HttpListenerRequest)>(&System::Net::AuthenticationSchemeSelector::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2809d7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::AuthenticationSchemeSelector),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::AuthenticationSchemeSelector>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 System::Net::AuthenticationSchemeSelector System::Net::AuthenticationSchemeSelector::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
System::Net::AuthenticationSchemeSelector o{THROW_UNLESS(::il2cpp_utils::New<System::Net::AuthenticationSchemeSelector>(object, method))};
return o;
}
 void System::Net::AuthenticationSchemeSelector::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::AuthenticationSchemeSelector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 System::Net::AuthenticationSchemes System::Net::AuthenticationSchemeSelector::Invoke(System::Net::HttpListenerRequest httpRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::AuthenticationSchemeSelector>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::AuthenticationSchemes, false>(const_cast<void*>(instance), ___internal_method, httpRequest);
}

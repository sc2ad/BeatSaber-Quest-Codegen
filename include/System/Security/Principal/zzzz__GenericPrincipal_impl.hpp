#pragma once
#include "System/Security/Claims/zzzz__ClaimsPrincipal_impl.hpp"
#include "System/Security/Principal/zzzz__GenericPrincipal_def.hpp"
#include "System/Security/Principal/zzzz__IIdentity_def.hpp"
//  Writing Method size for method: System::Security::Principal::GenericPrincipal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::GenericPrincipal::*)(System::Security::Principal::IIdentity, ::ArrayW<::StringW>)>(&System::Security::Principal::GenericPrincipal::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x230b97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::GenericPrincipal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::IIdentity>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Principal::GenericPrincipal::__set_m_identity(System::Security::Principal::IIdentity value)  {
::cordl_internals::setInstanceField<System::Security::Principal::IIdentity, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Principal::IIdentity>(value));
}
constexpr System::Security::Principal::IIdentity System::Security::Principal::GenericPrincipal::__get_m_identity() const {
return ::cordl_internals::getInstanceField<System::Security::Principal::IIdentity, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Principal::GenericPrincipal::__set_m_roles(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Security::Principal::GenericPrincipal::__get_m_roles() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "identity", ty: "System::Security::Principal::IIdentity", modifiers: "", def_value: None }, CppParam { name: "roles", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
 System::Security::Principal::GenericPrincipal::GenericPrincipal(System::Security::Principal::IIdentity identity, ::ArrayW<::StringW> roles)  : System::Security::Claims::ClaimsPrincipal(THROW_UNLESS(::il2cpp_utils::New<GenericPrincipal>(identity, roles))) {}
 void System::Security::Principal::GenericPrincipal::_ctor(System::Security::Principal::IIdentity identity, ::ArrayW<::StringW> roles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Principal::GenericPrincipal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::IIdentity>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, identity, roles);
}

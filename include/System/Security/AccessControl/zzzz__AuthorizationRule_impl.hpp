#pragma once
#include "System/Security/AccessControl/zzzz__AuthorizationRule_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
//  Writing Method size for method: System::Security::AccessControl::AuthorizationRule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::AuthorizationRule::*)(System::Security::Principal::IdentityReference, int32_t, bool, System::Security::AccessControl::InheritanceFlags, System::Security::AccessControl::PropagationFlags)>(&System::Security::AccessControl::AuthorizationRule::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2315534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::AuthorizationRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::IdentityReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::PropagationFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::AuthorizationRule.get_AccessMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::AccessControl::AuthorizationRule::*)()>(&System::Security::AccessControl::AuthorizationRule::get_AccessMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23157a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::AuthorizationRule>::get(),
                            "get_AccessMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::AccessControl::AuthorizationRule::__set_identity(System::Security::Principal::IdentityReference value)  {
::cordl_internals::setInstanceField<System::Security::Principal::IdentityReference, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Principal::IdentityReference>(value));
}
constexpr System::Security::Principal::IdentityReference System::Security::AccessControl::AuthorizationRule::__get_identity() const {
return ::cordl_internals::getInstanceField<System::Security::Principal::IdentityReference, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::AccessControl::AuthorizationRule::__set_accessMask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::AccessControl::AuthorizationRule::__get_accessMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::AccessControl::AuthorizationRule::__set_isInherited(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Security::AccessControl::AuthorizationRule::__get_isInherited() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::AccessControl::AuthorizationRule::__set_inheritanceFlags(System::Security::AccessControl::InheritanceFlags value)  {
::cordl_internals::setInstanceField<System::Security::AccessControl::InheritanceFlags, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::AccessControl::InheritanceFlags>(value));
}
constexpr System::Security::AccessControl::InheritanceFlags System::Security::AccessControl::AuthorizationRule::__get_inheritanceFlags() const {
return ::cordl_internals::getInstanceField<System::Security::AccessControl::InheritanceFlags, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::AccessControl::AuthorizationRule::__set_propagationFlags(System::Security::AccessControl::PropagationFlags value)  {
::cordl_internals::setInstanceField<System::Security::AccessControl::PropagationFlags, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::AccessControl::PropagationFlags>(value));
}
constexpr System::Security::AccessControl::PropagationFlags System::Security::AccessControl::AuthorizationRule::__get_propagationFlags() const {
return ::cordl_internals::getInstanceField<System::Security::AccessControl::PropagationFlags, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Security::AccessControl::AuthorizationRule System::Security::AccessControl::AuthorizationRule::New_ctor(System::Security::Principal::IdentityReference identity, int32_t accessMask, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags)  {
System::Security::AccessControl::AuthorizationRule o{THROW_UNLESS(::il2cpp_utils::New<System::Security::AccessControl::AuthorizationRule>(identity, accessMask, isInherited, inheritanceFlags, propagationFlags))};
return o;
}
 void System::Security::AccessControl::AuthorizationRule::_ctor(System::Security::Principal::IdentityReference identity, int32_t accessMask, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::AuthorizationRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::IdentityReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::PropagationFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, identity, accessMask, isInherited, inheritanceFlags, propagationFlags);
}
 int32_t System::Security::AccessControl::AuthorizationRule::get_AccessMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::AuthorizationRule>::get(),
                            "get_AccessMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}

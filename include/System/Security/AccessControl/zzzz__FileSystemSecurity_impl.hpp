#pragma once
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_impl.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessRule_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
//  Writing Method size for method: System::Security::AccessControl::FileSystemSecurity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::FileSystemSecurity::*)(bool, ::StringW, System::Security::AccessControl::AccessControlSections)>(&System::Security::AccessControl::FileSystemSecurity::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2318174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::FileSystemSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::FileSystemSecurity.AccessRuleFactory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::AccessControl::AccessRule (System::Security::AccessControl::FileSystemSecurity::*)(System::Security::Principal::IdentityReference, int32_t, bool, System::Security::AccessControl::InheritanceFlags, System::Security::AccessControl::PropagationFlags, System::Security::AccessControl::AccessControlType)>(&System::Security::AccessControl::FileSystemSecurity::AccessRuleFactory)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2318390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::FileSystemSecurity>::get(),
                            "AccessRuleFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::IdentityReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::PropagationFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlType>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "includeSections", ty: "System::Security::AccessControl::AccessControlSections", modifiers: "", def_value: None }]
 System::Security::AccessControl::FileSystemSecurity::FileSystemSecurity(bool isContainer, ::StringW name, System::Security::AccessControl::AccessControlSections includeSections)  : System::Security::AccessControl::NativeObjectSecurity(THROW_UNLESS(::il2cpp_utils::New<FileSystemSecurity>(isContainer, name, includeSections))) {}
 void System::Security::AccessControl::FileSystemSecurity::_ctor(bool isContainer, ::StringW name, System::Security::AccessControl::AccessControlSections includeSections)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::FileSystemSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isContainer, name, includeSections);
}
 System::Security::AccessControl::AccessRule System::Security::AccessControl::FileSystemSecurity::AccessRuleFactory(System::Security::Principal::IdentityReference identityReference, int32_t accessMask, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AccessControlType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::FileSystemSecurity>::get(),
                            "AccessRuleFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::IdentityReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::PropagationFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::AccessControl::AccessRule, false>(const_cast<void*>(instance), ___internal_method, identityReference, accessMask, isInherited, inheritanceFlags, propagationFlags, type);
}

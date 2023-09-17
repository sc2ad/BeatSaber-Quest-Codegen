#pragma once
#include "System/Security/AccessControl/zzzz__ObjectSecurity_impl.hpp"
namespace {
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRuleCollection_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::CommonObjectSecurity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonObjectSecurity::*)(bool)>(&::System::Security::AccessControl::CommonObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2317998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonObjectSecurity.GetAccessRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AuthorizationRuleCollection (::System::Security::AccessControl::CommonObjectSecurity::*)(bool, bool, ::System::Type)>(&::System::Security::AccessControl::CommonObjectSecurity::GetAccessRules)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2317aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonObjectSecurity>::get(),
                            "GetAccessRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }]
 ::System::Security::AccessControl::CommonObjectSecurity::CommonObjectSecurity(bool isContainer)  : ::System::Security::AccessControl::ObjectSecurity(THROW_UNLESS(::il2cpp_utils::New<CommonObjectSecurity>(isContainer))) {}
 void ::System::Security::AccessControl::CommonObjectSecurity::_ctor(bool isContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isContainer);
}
 ::System::Security::AccessControl::AuthorizationRuleCollection ::System::Security::AccessControl::CommonObjectSecurity::GetAccessRules(bool includeExplicit, bool includeInherited, ::System::Type targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonObjectSecurity>::get(),
                            "GetAccessRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AuthorizationRuleCollection, false>(const_cast<void*>(instance), ___internal_method, includeExplicit, includeInherited, targetType);
}
} // end anonymous namespace

#pragma once
#include "System/Security/AccessControl/zzzz__AuthorizationRule_impl.hpp"
namespace {
#include "System/Security/AccessControl/zzzz__AccessRule_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::AccessRule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::AccessRule::*)(::System::Security::Principal::IdentityReference, int32_t, bool, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AccessControlType)>(&::System::Security::AccessControl::AccessRule::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23154a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AccessRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::AccessRule.get_AccessControlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AccessControlType (::System::Security::AccessControl::AccessRule::*)()>(&::System::Security::AccessControl::AccessRule::get_AccessControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23156d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AccessRule>::get(),
                            "get_AccessControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Security::AccessControl::AccessRule::__set_type(::System::Security::AccessControl::AccessControlType value)  {
::cordl_internals::setInstanceField<::System::Security::AccessControl::AccessControlType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::AccessControl::AccessControlType>(value));
}
constexpr ::System::Security::AccessControl::AccessControlType ::System::Security::AccessControl::AccessRule::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Security::AccessControl::AccessControlType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "identity", ty: "::System::Security::Principal::IdentityReference", modifiers: "", def_value: None }, CppParam { name: "accessMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isInherited", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "inheritanceFlags", ty: "::System::Security::AccessControl::InheritanceFlags", modifiers: "", def_value: None }, CppParam { name: "propagationFlags", ty: "::System::Security::AccessControl::PropagationFlags", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::Security::AccessControl::AccessControlType", modifiers: "", def_value: None }]
 ::System::Security::AccessControl::AccessRule::AccessRule(::System::Security::Principal::IdentityReference identity, int32_t accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type)  : ::System::Security::AccessControl::AuthorizationRule(THROW_UNLESS(::il2cpp_utils::New<AccessRule>(identity, accessMask, isInherited, inheritanceFlags, propagationFlags, type))) {}
 void ::System::Security::AccessControl::AccessRule::_ctor(::System::Security::Principal::IdentityReference identity, int32_t accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AccessRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, identity, accessMask, isInherited, inheritanceFlags, propagationFlags, type);
}
 ::System::Security::AccessControl::AccessControlType ::System::Security::AccessControl::AccessRule::get_AccessControlType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AccessRule>::get(),
                            "get_AccessControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AccessControlType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

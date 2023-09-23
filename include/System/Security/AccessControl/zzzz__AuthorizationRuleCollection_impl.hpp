#pragma once
#include "System/Collections/zzzz__ReadOnlyCollectionBase_impl.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRuleCollection_def.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRule_def.hpp"
//  Writing Method size for method: System::Security::AccessControl::AuthorizationRuleCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::AuthorizationRuleCollection::*)(::ArrayW<System::Security::AccessControl::AuthorizationRule>)>(&System::Security::AccessControl::AuthorizationRuleCollection::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23157ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::AuthorizationRuleCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Security::AccessControl::AuthorizationRule>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "rules", ty: "::ArrayW<System::Security::AccessControl::AuthorizationRule>", modifiers: "", def_value: None }]
 System::Security::AccessControl::AuthorizationRuleCollection::AuthorizationRuleCollection(::ArrayW<System::Security::AccessControl::AuthorizationRule> rules)  : System::Collections::ReadOnlyCollectionBase(THROW_UNLESS(::il2cpp_utils::New<AuthorizationRuleCollection>(rules))) {}
 void System::Security::AccessControl::AuthorizationRuleCollection::_ctor(::ArrayW<System::Security::AccessControl::AuthorizationRule> rules)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::AuthorizationRuleCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Security::AccessControl::AuthorizationRule>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rules);
}

#pragma once
#include "System/Security/AccessControl/zzzz__CommonAcl_impl.hpp"
namespace {
#include "System/Security/AccessControl/zzzz__SystemAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::SystemAcl.ApplyCanonicalSortToExplicitAces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::SystemAcl::*)()>(&::System::Security::AccessControl::SystemAcl::ApplyCanonicalSortToExplicitAces)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2319890;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::AccessControl::SystemAcl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::SystemAcl.GetAceInsertPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::SystemAcl::*)(::System::Security::AccessControl::AceQualifier)>(&::System::Security::AccessControl::SystemAcl::GetAceInsertPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23198b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::AccessControl::SystemAcl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 void ::System::Security::AccessControl::SystemAcl::ApplyCanonicalSortToExplicitAces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl>::get(),
                            "ApplyCanonicalSortToExplicitAces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Security::AccessControl::SystemAcl::GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl>::get(),
                            "GetAceInsertPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, aceQualifier);
}
} // end anonymous namespace

#pragma once
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_impl.hpp"
namespace {
#include "System/Security/AccessControl/zzzz__FileSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::FileSecurity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::FileSecurity::*)(::StringW, ::System::Security::AccessControl::AccessControlSections)>(&::System::Security::AccessControl::FileSecurity::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2318358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::FileSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "includeSections", ty: "::System::Security::AccessControl::AccessControlSections", modifiers: "", def_value: None }]
 ::System::Security::AccessControl::FileSecurity::FileSecurity(::StringW fileName, ::System::Security::AccessControl::AccessControlSections includeSections)  : ::System::Security::AccessControl::FileSystemSecurity(THROW_UNLESS(::il2cpp_utils::New<FileSecurity>(fileName, includeSections))) {}
 void ::System::Security::AccessControl::FileSecurity::_ctor(::StringW fileName, ::System::Security::AccessControl::AccessControlSections includeSections)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::FileSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fileName, includeSections);
}
} // end anonymous namespace

#pragma once
#include "System/Security/AccessControl/zzzz__AccessRule_impl.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemAccessRule_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemRights_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
//  Writing Method size for method: System::Security::AccessControl::FileSystemAccessRule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::FileSystemAccessRule::*)(System::Security::Principal::IdentityReference, System::Security::AccessControl::FileSystemRights, bool, System::Security::AccessControl::InheritanceFlags, System::Security::AccessControl::PropagationFlags, System::Security::AccessControl::AccessControlType)>(&System::Security::AccessControl::FileSystemAccessRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2318370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::FileSystemAccessRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::IdentityReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::FileSystemRights>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::PropagationFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::FileSystemAccessRule.get_FileSystemRights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::AccessControl::FileSystemRights (System::Security::AccessControl::FileSystemAccessRule::*)()>(&System::Security::AccessControl::FileSystemAccessRule::get_FileSystemRights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2318378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::FileSystemAccessRule>::get(),
                            "get_FileSystemRights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "identity", ty: "System::Security::Principal::IdentityReference", modifiers: "", def_value: None }, CppParam { name: "fileSystemRights", ty: "System::Security::AccessControl::FileSystemRights", modifiers: "", def_value: None }, CppParam { name: "isInherited", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "inheritanceFlags", ty: "System::Security::AccessControl::InheritanceFlags", modifiers: "", def_value: None }, CppParam { name: "propagationFlags", ty: "System::Security::AccessControl::PropagationFlags", modifiers: "", def_value: None }, CppParam { name: "type", ty: "System::Security::AccessControl::AccessControlType", modifiers: "", def_value: None }]
 System::Security::AccessControl::FileSystemAccessRule::FileSystemAccessRule(System::Security::Principal::IdentityReference identity, System::Security::AccessControl::FileSystemRights fileSystemRights, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AccessControlType type)  : System::Security::AccessControl::AccessRule(THROW_UNLESS(::il2cpp_utils::New<FileSystemAccessRule>(identity, fileSystemRights, isInherited, inheritanceFlags, propagationFlags, type))) {}
 void System::Security::AccessControl::FileSystemAccessRule::_ctor(System::Security::Principal::IdentityReference identity, System::Security::AccessControl::FileSystemRights fileSystemRights, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AccessControlType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::FileSystemAccessRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::IdentityReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::FileSystemRights>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::PropagationFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, identity, fileSystemRights, isInherited, inheritanceFlags, propagationFlags, type);
}
 System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemAccessRule::get_FileSystemRights()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::FileSystemAccessRule>::get(),
                            "get_FileSystemRights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::AccessControl::FileSystemRights, false>(const_cast<void*>(instance), ___internal_method);
}

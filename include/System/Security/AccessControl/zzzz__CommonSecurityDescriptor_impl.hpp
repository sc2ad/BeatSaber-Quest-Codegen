#pragma once
#include "System/Security/AccessControl/zzzz__GenericSecurityDescriptor_impl.hpp"
namespace {
#include "System/Security/AccessControl/zzzz__CommonSecurityDescriptor_def.hpp"
#include "System/Security/AccessControl/zzzz__SystemAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__ControlFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__DiscretionaryAcl_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(bool, bool, ::System::Security::AccessControl::ControlFlags, ::System::Security::Principal::SecurityIdentifier, ::System::Security::Principal::SecurityIdentifier, ::System::Security::AccessControl::SystemAcl, ::System::Security::AccessControl::DiscretionaryAcl)>(&::System::Security::AccessControl::CommonSecurityDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2317dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ControlFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(bool, bool, ::System::Security::AccessControl::ControlFlags, ::System::Security::Principal::SecurityIdentifier, ::System::Security::Principal::SecurityIdentifier, ::System::Security::AccessControl::SystemAcl, ::System::Security::AccessControl::DiscretionaryAcl)>(&::System::Security::AccessControl::CommonSecurityDescriptor::Init)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2317e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ControlFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.get_DiscretionaryAcl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::DiscretionaryAcl (::System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&::System::Security::AccessControl::CommonSecurityDescriptor::get_DiscretionaryAcl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2318004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "get_DiscretionaryAcl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_DiscretionaryAcl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::DiscretionaryAcl)>(&::System::Security::AccessControl::CommonSecurityDescriptor::set_DiscretionaryAcl)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2317f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "set_DiscretionaryAcl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_Group
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier)>(&::System::Security::AccessControl::CommonSecurityDescriptor::set_Group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231813c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::AccessControl::CommonSecurityDescriptor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.get_IsContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&::System::Security::AccessControl::CommonSecurityDescriptor::get_IsContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2318144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "get_IsContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.get_IsDS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&::System::Security::AccessControl::CommonSecurityDescriptor::get_IsDS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231814c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "get_IsDS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_Owner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier)>(&::System::Security::AccessControl::CommonSecurityDescriptor::set_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2318154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::AccessControl::CommonSecurityDescriptor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_SystemAcl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::SystemAcl)>(&::System::Security::AccessControl::CommonSecurityDescriptor::set_SystemAcl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2317ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "set_SystemAcl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.CheckAclConsistency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::CommonAcl)>(&::System::Security::AccessControl::CommonSecurityDescriptor::CheckAclConsistency)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2318078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "CheckAclConsistency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::CommonAcl>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Security::AccessControl::CommonSecurityDescriptor::__set_is_container(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Security::AccessControl::CommonSecurityDescriptor::__get_is_container() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::AccessControl::CommonSecurityDescriptor::__set_is_ds(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Security::AccessControl::CommonSecurityDescriptor::__get_is_ds() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::AccessControl::CommonSecurityDescriptor::__set_flags(::System::Security::AccessControl::ControlFlags value)  {
::cordl_internals::setInstanceField<::System::Security::AccessControl::ControlFlags, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::AccessControl::ControlFlags>(value));
}
constexpr ::System::Security::AccessControl::ControlFlags ::System::Security::AccessControl::CommonSecurityDescriptor::__get_flags() const {
return ::cordl_internals::getInstanceField<::System::Security::AccessControl::ControlFlags, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::AccessControl::CommonSecurityDescriptor::__set_owner(::System::Security::Principal::SecurityIdentifier value)  {
::cordl_internals::setInstanceField<::System::Security::Principal::SecurityIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Principal::SecurityIdentifier>(value));
}
constexpr ::System::Security::Principal::SecurityIdentifier ::System::Security::AccessControl::CommonSecurityDescriptor::__get_owner() const {
return ::cordl_internals::getInstanceField<::System::Security::Principal::SecurityIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::AccessControl::CommonSecurityDescriptor::__set_group(::System::Security::Principal::SecurityIdentifier value)  {
::cordl_internals::setInstanceField<::System::Security::Principal::SecurityIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Principal::SecurityIdentifier>(value));
}
constexpr ::System::Security::Principal::SecurityIdentifier ::System::Security::AccessControl::CommonSecurityDescriptor::__get_group() const {
return ::cordl_internals::getInstanceField<::System::Security::Principal::SecurityIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::AccessControl::CommonSecurityDescriptor::__set_system_acl(::System::Security::AccessControl::SystemAcl value)  {
::cordl_internals::setInstanceField<::System::Security::AccessControl::SystemAcl, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::AccessControl::SystemAcl>(value));
}
constexpr ::System::Security::AccessControl::SystemAcl ::System::Security::AccessControl::CommonSecurityDescriptor::__get_system_acl() const {
return ::cordl_internals::getInstanceField<::System::Security::AccessControl::SystemAcl, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::AccessControl::CommonSecurityDescriptor::__set_discretionary_acl(::System::Security::AccessControl::DiscretionaryAcl value)  {
::cordl_internals::setInstanceField<::System::Security::AccessControl::DiscretionaryAcl, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::AccessControl::DiscretionaryAcl>(value));
}
constexpr ::System::Security::AccessControl::DiscretionaryAcl ::System::Security::AccessControl::CommonSecurityDescriptor::__get_discretionary_acl() const {
return ::cordl_internals::getInstanceField<::System::Security::AccessControl::DiscretionaryAcl, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDS", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::System::Security::AccessControl::ControlFlags", modifiers: "", def_value: None }, CppParam { name: "owner", ty: "::System::Security::Principal::SecurityIdentifier", modifiers: "", def_value: None }, CppParam { name: "group", ty: "::System::Security::Principal::SecurityIdentifier", modifiers: "", def_value: None }, CppParam { name: "systemAcl", ty: "::System::Security::AccessControl::SystemAcl", modifiers: "", def_value: None }, CppParam { name: "discretionaryAcl", ty: "::System::Security::AccessControl::DiscretionaryAcl", modifiers: "", def_value: None }]
 ::System::Security::AccessControl::CommonSecurityDescriptor::CommonSecurityDescriptor(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags, ::System::Security::Principal::SecurityIdentifier owner, ::System::Security::Principal::SecurityIdentifier group, ::System::Security::AccessControl::SystemAcl systemAcl, ::System::Security::AccessControl::DiscretionaryAcl discretionaryAcl)  : ::System::Security::AccessControl::GenericSecurityDescriptor(THROW_UNLESS(::il2cpp_utils::New<CommonSecurityDescriptor>(isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl))) {}
 void ::System::Security::AccessControl::CommonSecurityDescriptor::_ctor(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags, ::System::Security::Principal::SecurityIdentifier owner, ::System::Security::Principal::SecurityIdentifier group, ::System::Security::AccessControl::SystemAcl systemAcl, ::System::Security::AccessControl::DiscretionaryAcl discretionaryAcl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ControlFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl);
}
 void ::System::Security::AccessControl::CommonSecurityDescriptor::Init(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags, ::System::Security::Principal::SecurityIdentifier owner, ::System::Security::Principal::SecurityIdentifier group, ::System::Security::AccessControl::SystemAcl systemAcl, ::System::Security::AccessControl::DiscretionaryAcl discretionaryAcl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ControlFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl);
}
 ::System::Security::AccessControl::DiscretionaryAcl ::System::Security::AccessControl::CommonSecurityDescriptor::get_DiscretionaryAcl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "get_DiscretionaryAcl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::DiscretionaryAcl, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::AccessControl::CommonSecurityDescriptor::set_DiscretionaryAcl(::System::Security::AccessControl::DiscretionaryAcl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "set_DiscretionaryAcl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Security::AccessControl::CommonSecurityDescriptor::set_Group(::System::Security::Principal::SecurityIdentifier value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "set_Group",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Security::AccessControl::CommonSecurityDescriptor::get_IsContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "get_IsContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Security::AccessControl::CommonSecurityDescriptor::get_IsDS()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "get_IsDS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::AccessControl::CommonSecurityDescriptor::set_Owner(::System::Security::Principal::SecurityIdentifier value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "set_Owner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Security::AccessControl::CommonSecurityDescriptor::set_SystemAcl(::System::Security::AccessControl::SystemAcl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "set_SystemAcl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Security::AccessControl::CommonSecurityDescriptor::CheckAclConsistency(::System::Security::AccessControl::CommonAcl acl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor>::get(),
                            "CheckAclConsistency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::CommonAcl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, acl);
}
} // end anonymous namespace

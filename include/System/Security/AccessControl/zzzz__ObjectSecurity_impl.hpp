#pragma once
#include "System/Security/AccessControl/zzzz__ObjectSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__CommonSecurityDescriptor_def.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRuleCollection_def.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessRule_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLock_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)(System::Security::AccessControl::CommonSecurityDescriptor)>(&System::Security::AccessControl::ObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x231958c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::CommonSecurityDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)(bool, bool)>(&System::Security::AccessControl::ObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x23179a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity.set_AccessControlSectionsModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)(System::Security::AccessControl::AccessControlSections)>(&System::Security::AccessControl::ObjectSecurity::set_AccessControlSectionsModified)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2318ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "set_AccessControlSectionsModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity.AccessRuleFactory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::AccessControl::AccessRule (System::Security::AccessControl::ObjectSecurity::*)(System::Security::Principal::IdentityReference, int32_t, bool, System::Security::AccessControl::InheritanceFlags, System::Security::AccessControl::PropagationFlags, System::Security::AccessControl::AccessControlType)>(&System::Security::AccessControl::ObjectSecurity::AccessRuleFactory)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::AccessControl::ObjectSecurity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity.ReadLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::ReadLock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23196c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "ReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity.ReadUnlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::ReadUnlock)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23196e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "ReadUnlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity.Writing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::Writing)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2319650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "Writing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity.WriteLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::WriteLock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2318ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "WriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity.WriteUnlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::ObjectSecurity::*)()>(&System::Security::AccessControl::ObjectSecurity::WriteUnlock)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23196fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "WriteUnlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity.InternalGetAccessRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::AccessControl::AuthorizationRuleCollection (System::Security::AccessControl::ObjectSecurity::*)(bool, bool, System::Type)>(&System::Security::AccessControl::ObjectSecurity::InternalGetAccessRules)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2317aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "InternalGetAccessRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::ObjectSecurity.InternalAccessRuleFactory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::AccessControl::AccessRule (System::Security::AccessControl::ObjectSecurity::*)(System::Security::AccessControl::QualifiedAce, System::Type, System::Security::AccessControl::AccessControlType)>(&System::Security::AccessControl::ObjectSecurity::InternalAccessRuleFactory)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2319718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::AccessControl::ObjectSecurity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::AccessControl::ObjectSecurity::__set_descriptor(System::Security::AccessControl::CommonSecurityDescriptor value)  {
::cordl_internals::setInstanceField<System::Security::AccessControl::CommonSecurityDescriptor, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::AccessControl::CommonSecurityDescriptor>(value));
}
constexpr System::Security::AccessControl::CommonSecurityDescriptor System::Security::AccessControl::ObjectSecurity::__get_descriptor() const {
return ::cordl_internals::getInstanceField<System::Security::AccessControl::CommonSecurityDescriptor, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::AccessControl::ObjectSecurity::__set_sections_modified(System::Security::AccessControl::AccessControlSections value)  {
::cordl_internals::setInstanceField<System::Security::AccessControl::AccessControlSections, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::AccessControl::AccessControlSections>(value));
}
constexpr System::Security::AccessControl::AccessControlSections System::Security::AccessControl::ObjectSecurity::__get_sections_modified() const {
return ::cordl_internals::getInstanceField<System::Security::AccessControl::AccessControlSections, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::AccessControl::ObjectSecurity::__set_rw_lock(System::Threading::ReaderWriterLock value)  {
::cordl_internals::setInstanceField<System::Threading::ReaderWriterLock, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ReaderWriterLock>(value));
}
constexpr System::Threading::ReaderWriterLock System::Security::AccessControl::ObjectSecurity::__get_rw_lock() const {
return ::cordl_internals::getInstanceField<System::Threading::ReaderWriterLock, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Security::AccessControl::ObjectSecurity System::Security::AccessControl::ObjectSecurity::New_ctor(System::Security::AccessControl::CommonSecurityDescriptor securityDescriptor)  {
System::Security::AccessControl::ObjectSecurity o{THROW_UNLESS(::il2cpp_utils::New<System::Security::AccessControl::ObjectSecurity>(securityDescriptor))};
return o;
}
 void System::Security::AccessControl::ObjectSecurity::_ctor(System::Security::AccessControl::CommonSecurityDescriptor securityDescriptor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::CommonSecurityDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, securityDescriptor);
}
 System::Security::AccessControl::ObjectSecurity System::Security::AccessControl::ObjectSecurity::New_ctor(bool isContainer, bool isDS)  {
System::Security::AccessControl::ObjectSecurity o{THROW_UNLESS(::il2cpp_utils::New<System::Security::AccessControl::ObjectSecurity>(isContainer, isDS))};
return o;
}
 void System::Security::AccessControl::ObjectSecurity::_ctor(bool isContainer, bool isDS)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isContainer, isDS);
}
 void System::Security::AccessControl::ObjectSecurity::set_AccessControlSectionsModified(System::Security::AccessControl::AccessControlSections value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "set_AccessControlSectionsModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlSections>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Security::AccessControl::AccessRule System::Security::AccessControl::ObjectSecurity::AccessRuleFactory(System::Security::Principal::IdentityReference identityReference, int32_t accessMask, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AccessControlType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "AccessRuleFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Principal::IdentityReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::PropagationFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::AccessControl::AccessRule, false>(const_cast<void*>(instance), ___internal_method, identityReference, accessMask, isInherited, inheritanceFlags, propagationFlags, type);
}
 void System::Security::AccessControl::ObjectSecurity::ReadLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "ReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::AccessControl::ObjectSecurity::ReadUnlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "ReadUnlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::AccessControl::ObjectSecurity::Writing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "Writing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::AccessControl::ObjectSecurity::WriteLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "WriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::AccessControl::ObjectSecurity::WriteUnlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "WriteUnlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::AccessControl::AuthorizationRuleCollection System::Security::AccessControl::ObjectSecurity::InternalGetAccessRules(bool includeExplicit, bool includeInherited, System::Type targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "InternalGetAccessRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::AccessControl::AuthorizationRuleCollection, false>(const_cast<void*>(instance), ___internal_method, includeExplicit, includeInherited, targetType);
}
 System::Security::AccessControl::AccessRule System::Security::AccessControl::ObjectSecurity::InternalAccessRuleFactory(System::Security::AccessControl::QualifiedAce ace, System::Type targetType, System::Security::AccessControl::AccessControlType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::ObjectSecurity>::get(),
                            "InternalAccessRuleFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::QualifiedAce>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::AccessControlType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::AccessControl::AccessRule, false>(const_cast<void*>(instance), ___internal_method, ace, targetType, type);
}

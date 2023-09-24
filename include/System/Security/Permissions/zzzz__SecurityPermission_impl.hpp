#pragma once
#include "System/Security/zzzz__CodeAccessPermission_impl.hpp"
#include "System/Security/Permissions/zzzz__SecurityPermission_def.hpp"
#include "System/Security/Permissions/zzzz__SecurityPermissionFlag_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: System::Security::Permissions::SecurityPermission._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Permissions::SecurityPermission::*)(System::Security::Permissions::PermissionState)>(&System::Security::Permissions::SecurityPermission::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22eac50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::PermissionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::SecurityPermission._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Permissions::SecurityPermission::*)(System::Security::Permissions::SecurityPermissionFlag)>(&System::Security::Permissions::SecurityPermission::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22eac90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::SecurityPermissionFlag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::SecurityPermission.set_Flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Permissions::SecurityPermission::*)(System::Security::Permissions::SecurityPermissionFlag)>(&System::Security::Permissions::SecurityPermission::set_Flags)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22eacbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "set_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::SecurityPermissionFlag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::SecurityPermission.IsUnrestricted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Permissions::SecurityPermission::*)()>(&System::Security::Permissions::SecurityPermission::IsUnrestricted)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22ead74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "IsUnrestricted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::SecurityPermission.IsSubsetOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Permissions::SecurityPermission::*)(System::Security::IPermission)>(&System::Security::Permissions::SecurityPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22ead88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Permissions::SecurityPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::SecurityPermission.ToXml
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement (System::Security::Permissions::SecurityPermission::*)()>(&System::Security::Permissions::SecurityPermission::ToXml)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22eae94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Permissions::SecurityPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::SecurityPermission.IsEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Permissions::SecurityPermission::*)()>(&System::Security::Permissions::SecurityPermission::IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22eae84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::SecurityPermission.Cast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Permissions::SecurityPermission (System::Security::Permissions::SecurityPermission::*)(System::Security::IPermission)>(&System::Security::Permissions::SecurityPermission::Cast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22eade0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "Cast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Permissions::SecurityPermission::__set_flags(System::Security::Permissions::SecurityPermissionFlag value)  {
::cordl_internals::setInstanceField<System::Security::Permissions::SecurityPermissionFlag, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Permissions::SecurityPermissionFlag>(value));
}
constexpr System::Security::Permissions::SecurityPermissionFlag System::Security::Permissions::SecurityPermission::__get_flags() const {
return ::cordl_internals::getInstanceField<System::Security::Permissions::SecurityPermissionFlag, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Security::Permissions::SecurityPermission System::Security::Permissions::SecurityPermission::New_ctor(System::Security::Permissions::PermissionState state)  {
System::Security::Permissions::SecurityPermission o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Permissions::SecurityPermission>(state))};
return o;
}
 void System::Security::Permissions::SecurityPermission::_ctor(System::Security::Permissions::PermissionState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::PermissionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 System::Security::Permissions::SecurityPermission System::Security::Permissions::SecurityPermission::New_ctor(System::Security::Permissions::SecurityPermissionFlag flag)  {
System::Security::Permissions::SecurityPermission o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Permissions::SecurityPermission>(flag))};
return o;
}
 void System::Security::Permissions::SecurityPermission::_ctor(System::Security::Permissions::SecurityPermissionFlag flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::SecurityPermissionFlag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flag);
}
 void System::Security::Permissions::SecurityPermission::set_Flags(System::Security::Permissions::SecurityPermissionFlag value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "set_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::SecurityPermissionFlag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Security::Permissions::SecurityPermission::IsUnrestricted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "IsUnrestricted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::Permissions::SecurityPermission::IsSubsetOf(System::Security::IPermission target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "IsSubsetOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, target);
}
 System::Security::SecurityElement System::Security::Permissions::SecurityPermission::ToXml()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "ToXml",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::SecurityElement, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::Permissions::SecurityPermission::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Permissions::SecurityPermission System::Security::Permissions::SecurityPermission::Cast(System::Security::IPermission target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::SecurityPermission>::get(),
                            "Cast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Permissions::SecurityPermission, false>(const_cast<void*>(instance), ___internal_method, target);
}

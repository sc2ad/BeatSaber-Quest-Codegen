#pragma once
#include "System/Security/zzzz__CodeAccessPermission_impl.hpp"
#include "System/Security/Permissions/zzzz__ReflectionPermission_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/Security/Permissions/zzzz__ReflectionPermissionFlag_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
//  Writing Method size for method: System::Security::Permissions::ReflectionPermission._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Permissions::ReflectionPermission::*)(System::Security::Permissions::ReflectionPermissionFlag)>(&System::Security::Permissions::ReflectionPermission::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22ea878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::ReflectionPermissionFlag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::ReflectionPermission.get_Flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Permissions::ReflectionPermissionFlag (System::Security::Permissions::ReflectionPermission::*)()>(&System::Security::Permissions::ReflectionPermission::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ea95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "get_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::ReflectionPermission.set_Flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Permissions::ReflectionPermission::*)(System::Security::Permissions::ReflectionPermissionFlag)>(&System::Security::Permissions::ReflectionPermission::set_Flags)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22ea8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "set_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::ReflectionPermissionFlag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::ReflectionPermission.IsSubsetOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Permissions::ReflectionPermission::*)(System::Security::IPermission)>(&System::Security::Permissions::ReflectionPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22ea964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Permissions::ReflectionPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::ReflectionPermission.IsUnrestricted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Permissions::ReflectionPermission::*)()>(&System::Security::Permissions::ReflectionPermission::IsUnrestricted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22eaa58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "IsUnrestricted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::ReflectionPermission.ToXml
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement (System::Security::Permissions::ReflectionPermission::*)()>(&System::Security::Permissions::ReflectionPermission::ToXml)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x22eaa68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Permissions::ReflectionPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Permissions::ReflectionPermission.Cast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Permissions::ReflectionPermission (System::Security::Permissions::ReflectionPermission::*)(System::Security::IPermission)>(&System::Security::Permissions::ReflectionPermission::Cast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22ea9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "Cast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Permissions::ReflectionPermission::__set_flags(System::Security::Permissions::ReflectionPermissionFlag value)  {
::cordl_internals::setInstanceField<System::Security::Permissions::ReflectionPermissionFlag, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Permissions::ReflectionPermissionFlag>(value));
}
constexpr System::Security::Permissions::ReflectionPermissionFlag System::Security::Permissions::ReflectionPermission::__get_flags() const {
return ::cordl_internals::getInstanceField<System::Security::Permissions::ReflectionPermissionFlag, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "flag", ty: "System::Security::Permissions::ReflectionPermissionFlag", modifiers: "", def_value: None }]
 System::Security::Permissions::ReflectionPermission::ReflectionPermission(System::Security::Permissions::ReflectionPermissionFlag flag)  : System::Security::CodeAccessPermission(THROW_UNLESS(::il2cpp_utils::New<ReflectionPermission>(flag))) {}
 void System::Security::Permissions::ReflectionPermission::_ctor(System::Security::Permissions::ReflectionPermissionFlag flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::ReflectionPermissionFlag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flag);
}
 System::Security::Permissions::ReflectionPermissionFlag System::Security::Permissions::ReflectionPermission::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "get_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Permissions::ReflectionPermissionFlag, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Permissions::ReflectionPermission::set_Flags(System::Security::Permissions::ReflectionPermissionFlag value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "set_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::ReflectionPermissionFlag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Security::Permissions::ReflectionPermission::IsSubsetOf(System::Security::IPermission target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "IsSubsetOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, target);
}
 bool System::Security::Permissions::ReflectionPermission::IsUnrestricted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "IsUnrestricted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::SecurityElement System::Security::Permissions::ReflectionPermission::ToXml()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "ToXml",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::SecurityElement, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Permissions::ReflectionPermission System::Security::Permissions::ReflectionPermission::Cast(System::Security::IPermission target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Permissions::ReflectionPermission>::get(),
                            "Cast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Permissions::ReflectionPermission, false>(const_cast<void*>(instance), ___internal_method, target);
}

#pragma once
#include "System/Security/zzzz__CodeAccessPermission_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
//  Writing Method size for method: System::Security::CodeAccessPermission._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e4ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.Demand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::Demand)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22e4ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "Demand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::CodeAccessPermission::*)(::bs_hook::Il2CppWrapperType)>(&System::Security::CodeAccessPermission::Equals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x22e4fe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::CodeAccessPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e510c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::CodeAccessPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.IsSubsetOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::CodeAccessPermission::*)(System::Security::IPermission)>(&System::Security::CodeAccessPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::CodeAccessPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::ToString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22e5114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::CodeAccessPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.ToXml
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::ToXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::CodeAccessPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.Element
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement (System::Security::CodeAccessPermission::*)(int32_t)>(&System::Security::CodeAccessPermission::Element)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22e513c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "Element",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.CheckPermissionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Permissions::PermissionState (*)(System::Security::Permissions::PermissionState, bool)>(&System::Security::CodeAccessPermission::CheckPermissionState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e52a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "CheckPermissionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::PermissionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.ThrowInvalidPermission
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::IPermission, System::Type)>(&System::Security::CodeAccessPermission::ThrowInvalidPermission)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22e5354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "ThrowInvalidPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::CodeAccessPermission.System_Security_IPermission_Demand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::CodeAccessPermission::*)()>(&System::Security::CodeAccessPermission::System_Security_IPermission_Demand)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22e53f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "System.Security.IPermission.Demand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Security::IPermission
constexpr  System::Security::CodeAccessPermission::operator System::Security::IPermission() const noexcept {
return System::Security::IPermission(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Security::ISecurityEncodable
constexpr  System::Security::CodeAccessPermission::operator System::Security::ISecurityEncodable() const noexcept {
return System::Security::ISecurityEncodable(::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Security::CodeAccessPermission::CodeAccessPermission()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CodeAccessPermission>())) {}
 void System::Security::CodeAccessPermission::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::CodeAccessPermission::Demand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "Demand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::CodeAccessPermission::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Security::CodeAccessPermission::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::CodeAccessPermission::IsSubsetOf(System::Security::IPermission target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "IsSubsetOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, target);
}
 ::StringW System::Security::CodeAccessPermission::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::SecurityElement System::Security::CodeAccessPermission::ToXml()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "ToXml",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::SecurityElement, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::SecurityElement System::Security::CodeAccessPermission::Element(int32_t version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "Element",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::SecurityElement, false>(const_cast<void*>(instance), ___internal_method, version);
}
 System::Security::Permissions::PermissionState System::Security::CodeAccessPermission::CheckPermissionState(System::Security::Permissions::PermissionState state, bool allowUnrestricted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "CheckPermissionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Permissions::PermissionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Permissions::PermissionState, false>(nullptr, ___internal_method, state, allowUnrestricted);
}
 void System::Security::CodeAccessPermission::ThrowInvalidPermission(System::Security::IPermission target, System::Type expected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "ThrowInvalidPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, target, expected);
}
 void System::Security::CodeAccessPermission::System_Security_IPermission_Demand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::CodeAccessPermission>::get(),
                            "System.Security.IPermission.Demand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

#pragma once
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
//  Writing Method size for method: System::Security::IPermission.Demand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::IPermission::*)()>(&System::Security::IPermission::Demand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::IPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::IPermission>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::IPermission.IsSubsetOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::IPermission::*)(System::Security::IPermission)>(&System::Security::IPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::IPermission),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::IPermission>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Security::ISecurityEncodable
constexpr  System::Security::IPermission::operator System::Security::ISecurityEncodable() const noexcept {
return System::Security::ISecurityEncodable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::IPermission::Demand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::IPermission>::get(),
                            "Demand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::IPermission::IsSubsetOf(System::Security::IPermission target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::IPermission>::get(),
                            "IsSubsetOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::IPermission>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, target);
}

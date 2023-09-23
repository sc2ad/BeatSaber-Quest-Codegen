#pragma once
#include "GlobalNamespace/zzzz__DisconnectedReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
//  Writing Method size for method: GlobalNamespace::DisconnectedReasonMethods.LocalizedKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::DisconnectedReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21f2e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisconnectedReasonMethods>::get(),
                            "LocalizedKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DisconnectedReasonMethods.ErrorCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::DisconnectedReasonMethods::ErrorCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21f2f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisconnectedReasonMethods>::get(),
                            "ErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW GlobalNamespace::DisconnectedReasonMethods::LocalizedKey(GlobalNamespace::DisconnectedReason connectionFailedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisconnectedReasonMethods>::get(),
                            "LocalizedKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, connectionFailedReason);
}
 ::StringW GlobalNamespace::DisconnectedReasonMethods::ErrorCode(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisconnectedReasonMethods>::get(),
                            "ErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, disconnectedReason);
}

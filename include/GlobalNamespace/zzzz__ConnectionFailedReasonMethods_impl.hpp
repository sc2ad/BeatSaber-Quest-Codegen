#pragma once
#include "GlobalNamespace/zzzz__ConnectionFailedReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
//  Writing Method size for method: GlobalNamespace::ConnectionFailedReasonMethods.LocalizedKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::ConnectionFailedReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21f2d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectionFailedReasonMethods>::get(),
                            "LocalizedKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectionFailedReasonMethods.ErrorCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::ConnectionFailedReasonMethods::ErrorCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21f2df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectionFailedReasonMethods>::get(),
                            "ErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW GlobalNamespace::ConnectionFailedReasonMethods::LocalizedKey(GlobalNamespace::ConnectionFailedReason connectionFailedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectionFailedReasonMethods>::get(),
                            "LocalizedKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, connectionFailedReason);
}
 ::StringW GlobalNamespace::ConnectionFailedReasonMethods::ErrorCode(GlobalNamespace::ConnectionFailedReason connectionFailedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectionFailedReasonMethods>::get(),
                            "ErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, connectionFailedReason);
}

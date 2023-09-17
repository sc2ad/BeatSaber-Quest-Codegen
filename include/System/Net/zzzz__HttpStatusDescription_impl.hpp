#pragma once
namespace {
#include "System/Net/zzzz__HttpStatusDescription_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
//  Writing Method size for method: ::System::Net::HttpStatusDescription.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::HttpStatusCode)>(&::System::Net::HttpStatusDescription::Get)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27f6f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpStatusDescription>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpStatusDescription.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::System::Net::HttpStatusDescription::Get)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x27f6f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpStatusDescription>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::System::Net::HttpStatusDescription::Get(::System::Net::HttpStatusCode code)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpStatusDescription>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, code);
}
 ::StringW ::System::Net::HttpStatusDescription::Get(int32_t code)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpStatusDescription>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, code);
}
} // end anonymous namespace

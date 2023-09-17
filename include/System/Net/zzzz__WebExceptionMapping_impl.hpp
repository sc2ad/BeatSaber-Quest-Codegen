#pragma once
namespace {
#include "System/Net/zzzz__WebExceptionMapping_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
//  Writing Method size for method: ::System::Net::WebExceptionMapping.GetWebStatusString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::WebExceptionStatus)>(&::System::Net::WebExceptionMapping::GetWebStatusString)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x280e470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebExceptionMapping>::get(),
                            "GetWebStatusString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::WebExceptionMapping::__set_s_Mapping(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_Mapping", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebExceptionMapping>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::System::Net::WebExceptionMapping::__get_s_Mapping()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_Mapping", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebExceptionMapping>::get>();
}
 ::StringW ::System::Net::WebExceptionMapping::GetWebStatusString(::System::Net::WebExceptionStatus status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebExceptionMapping>::get(),
                            "GetWebStatusString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, status);
}
} // end anonymous namespace

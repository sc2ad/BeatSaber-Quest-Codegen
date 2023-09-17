#pragma once
namespace {
#include "System/Net/zzzz__HttpValidationHelpers_def.hpp"
//  Writing Method size for method: ::System::Net::HttpValidationHelpers.IsInvalidMethodOrHeaderString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x27f7620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers>::get(),
                            "IsInvalidMethodOrHeaderString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::HttpValidationHelpers::__set_s_httpTrimCharacters(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_httpTrimCharacters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> ::System::Net::HttpValidationHelpers::__get_s_httpTrimCharacters()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_httpTrimCharacters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers>::get>();
}
 bool ::System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString(::StringW stringValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers>::get(),
                            "IsInvalidMethodOrHeaderString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stringValue);
}
} // end anonymous namespace

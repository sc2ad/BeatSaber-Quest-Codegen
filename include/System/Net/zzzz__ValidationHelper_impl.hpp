#pragma once
namespace {
#include "System/Net/zzzz__ValidationHelper_def.hpp"
//  Writing Method size for method: ::System::Net::ValidationHelper.MakeStringNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::ValidationHelper::MakeStringNull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x280c720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get(),
                            "MakeStringNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.IsBlankString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::ValidationHelper::IsBlankString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x280c734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get(),
                            "IsBlankString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.ValidateTcpPort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::Net::ValidationHelper::ValidateTcpPort)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x280c750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get(),
                            "ValidateTcpPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::ValidationHelper::__set_EmptyArray(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "EmptyArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::System::Net::ValidationHelper::__get_EmptyArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "EmptyArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get>();
}
 void ::System::Net::ValidationHelper::__set_InvalidMethodChars(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "InvalidMethodChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> ::System::Net::ValidationHelper::__get_InvalidMethodChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "InvalidMethodChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get>();
}
 void ::System::Net::ValidationHelper::__set_InvalidParamChars(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "InvalidParamChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> ::System::Net::ValidationHelper::__get_InvalidParamChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "InvalidParamChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get>();
}
 ::StringW ::System::Net::ValidationHelper::MakeStringNull(::StringW stringValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get(),
                            "MakeStringNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, stringValue);
}
 bool ::System::Net::ValidationHelper::IsBlankString(::StringW stringValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get(),
                            "IsBlankString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stringValue);
}
 bool ::System::Net::ValidationHelper::ValidateTcpPort(int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ValidationHelper>::get(),
                            "ValidateTcpPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, port);
}
} // end anonymous namespace

#pragma once
#include "BeatSaberAPI/DataTransferObjects/zzzz__AccessToken_def.hpp"
//  Writing Method size for method: BeatSaberAPI::DataTransferObjects::AccessToken._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatSaberAPI::DataTransferObjects::AccessToken::*)()>(&BeatSaberAPI::DataTransferObjects::AccessToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d7384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::AccessToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaberAPI::DataTransferObjects::AccessToken::__set_token(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BeatSaberAPI::DataTransferObjects::AccessToken::__get_token() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::AccessToken::__set_expiration(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BeatSaberAPI::DataTransferObjects::AccessToken::__get_expiration() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BeatSaberAPI::DataTransferObjects::AccessToken::AccessToken()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AccessToken>())) {}
 void BeatSaberAPI::DataTransferObjects::AccessToken::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::AccessToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

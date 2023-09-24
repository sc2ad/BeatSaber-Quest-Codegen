#pragma once
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserAuthenticationResult_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__AccessToken_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserInfo_def.hpp"
//  Writing Method size for method: BeatSaberAPI::DataTransferObjects::UserAuthenticationResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::*)()>(&BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d737c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::UserAuthenticationResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__set_userInfo(BeatSaberAPI::DataTransferObjects::UserInfo value)  {
::cordl_internals::setInstanceField<BeatSaberAPI::DataTransferObjects::UserInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatSaberAPI::DataTransferObjects::UserInfo>(value));
}
constexpr BeatSaberAPI::DataTransferObjects::UserInfo BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__get_userInfo() const {
return ::cordl_internals::getInstanceField<BeatSaberAPI::DataTransferObjects::UserInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__set_accessToken(BeatSaberAPI::DataTransferObjects::AccessToken value)  {
::cordl_internals::setInstanceField<BeatSaberAPI::DataTransferObjects::AccessToken, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatSaberAPI::DataTransferObjects::AccessToken>(value));
}
constexpr BeatSaberAPI::DataTransferObjects::AccessToken BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__get_accessToken() const {
return ::cordl_internals::getInstanceField<BeatSaberAPI::DataTransferObjects::AccessToken, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 BeatSaberAPI::DataTransferObjects::UserAuthenticationResult BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::New_ctor()  {
BeatSaberAPI::DataTransferObjects::UserAuthenticationResult o{THROW_UNLESS(::il2cpp_utils::New<BeatSaberAPI::DataTransferObjects::UserAuthenticationResult>())};
return o;
}
 void BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatSaberAPI::DataTransferObjects::UserAuthenticationResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

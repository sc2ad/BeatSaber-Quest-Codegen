#pragma once
namespace {
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserAuthenticationData_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserPlatform_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__PlatformEnviroment_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::*)()>(&::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d7374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_userPlatform(::BeatSaberAPI::DataTransferObjects::UserPlatform value)  {
::cordl_internals::setInstanceField<::BeatSaberAPI::DataTransferObjects::UserPlatform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::BeatSaberAPI::DataTransferObjects::UserPlatform>(value));
}
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_userPlatform() const {
return ::cordl_internals::getInstanceField<::BeatSaberAPI::DataTransferObjects::UserPlatform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_platformEnviroment(::BeatSaberAPI::DataTransferObjects::PlatformEnviroment value)  {
::cordl_internals::setInstanceField<::BeatSaberAPI::DataTransferObjects::PlatformEnviroment, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::BeatSaberAPI::DataTransferObjects::PlatformEnviroment>(value));
}
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_platformEnviroment() const {
return ::cordl_internals::getInstanceField<::BeatSaberAPI::DataTransferObjects::PlatformEnviroment, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_platformUserId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_platformUserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_platformAuthToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_platformAuthToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_bsAuthToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_bsAuthToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_gameBuildVersion(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_gameBuildVersion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__set_publicUserDisplayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::__get_publicUserDisplayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::UserAuthenticationData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UserAuthenticationData>())) {}
 void ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

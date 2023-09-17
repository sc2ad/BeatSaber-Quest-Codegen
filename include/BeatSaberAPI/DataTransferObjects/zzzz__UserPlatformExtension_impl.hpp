#pragma once
namespace {
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserPlatformExtension_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserPlatform_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::UserPlatformExtension.GetUserPlatformFromSerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaberAPI::DataTransferObjects::UserPlatform (*)(::StringW)>(&::BeatSaberAPI::DataTransferObjects::UserPlatformExtension::GetUserPlatformFromSerializedName)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x21d7394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserPlatformExtension>::get(),
                            "GetUserPlatformFromSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::UserPlatformExtension.GetUserPlatformSerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BeatSaberAPI::DataTransferObjects::UserPlatform)>(&::BeatSaberAPI::DataTransferObjects::UserPlatformExtension::GetUserPlatformSerializedName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21d74b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserPlatformExtension>::get(),
                            "GetUserPlatformSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaberAPI::DataTransferObjects::UserPlatform>::get()}
                        )));
    return ___internal_method;
  }
};
 ::BeatSaberAPI::DataTransferObjects::UserPlatform ::BeatSaberAPI::DataTransferObjects::UserPlatformExtension::GetUserPlatformFromSerializedName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserPlatformExtension>::get(),
                            "GetUserPlatformFromSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaberAPI::DataTransferObjects::UserPlatform, false>(nullptr, ___internal_method, name);
}
 ::StringW ::BeatSaberAPI::DataTransferObjects::UserPlatformExtension::GetUserPlatformSerializedName(::BeatSaberAPI::DataTransferObjects::UserPlatform userPlatform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserPlatformExtension>::get(),
                            "GetUserPlatformSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaberAPI::DataTransferObjects::UserPlatform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, userPlatform);
}
} // end anonymous namespace

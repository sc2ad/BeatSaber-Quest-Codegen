#pragma once
#include "Oculus/Platform/zzzz__Application_def.hpp"
#include "Oculus/Platform/zzzz__ApplicationOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
//  Writing Method size for method: Oculus::Platform::Application.GetVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ApplicationVersion> (*)()>(&Oculus::Platform::Application::GetVersion)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2590538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Application>::get(),
                            "GetVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Application.LaunchOtherApp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<::StringW> (*)(uint64_t, Oculus::Platform::ApplicationOptions)>(&Oculus::Platform::Application::LaunchOtherApp)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2590690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Application>::get(),
                            "LaunchOtherApp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::ApplicationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
 Oculus::Platform::Request_1<Oculus::Platform::Models::ApplicationVersion> Oculus::Platform::Application::GetVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Application>::get(),
                            "GetVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ApplicationVersion>, false>(nullptr, ___internal_method);
}
/// @param deeplink_options: Oculus::Platform::ApplicationOptions (default: csnull)
 Oculus::Platform::Request_1<::StringW> Oculus::Platform::Application::LaunchOtherApp(uint64_t appID, Oculus::Platform::ApplicationOptions deeplink_options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Application>::get(),
                            "LaunchOtherApp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::ApplicationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<::StringW>, false>(nullptr, ___internal_method, appID, deeplink_options);
}

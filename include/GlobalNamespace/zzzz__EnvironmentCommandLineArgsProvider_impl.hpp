#pragma once
namespace {
#include "GlobalNamespace/zzzz__EnvironmentCommandLineArgsProvider_def.hpp"
#include "GlobalNamespace/zzzz__ICommandLineArgsProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCommandLineArgsProvider.GetCommandLineArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::EnvironmentCommandLineArgsProvider::*)()>(&::GlobalNamespace::EnvironmentCommandLineArgsProvider::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCommandLineArgsProvider>::get(),
                            "GetCommandLineArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCommandLineArgsProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentCommandLineArgsProvider::*)()>(&::GlobalNamespace::EnvironmentCommandLineArgsProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCommandLineArgsProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::ICommandLineArgsProvider
constexpr  ::GlobalNamespace::EnvironmentCommandLineArgsProvider::operator ::GlobalNamespace::ICommandLineArgsProvider() const noexcept {
return ::GlobalNamespace::ICommandLineArgsProvider(::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<::StringW> ::GlobalNamespace::EnvironmentCommandLineArgsProvider::GetCommandLineArgs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCommandLineArgsProvider>::get(),
                            "GetCommandLineArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::EnvironmentCommandLineArgsProvider::EnvironmentCommandLineArgsProvider()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnvironmentCommandLineArgsProvider>())) {}
 void ::GlobalNamespace::EnvironmentCommandLineArgsProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCommandLineArgsProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace

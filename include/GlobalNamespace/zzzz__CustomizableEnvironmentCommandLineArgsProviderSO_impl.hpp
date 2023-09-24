#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__CustomizableEnvironmentCommandLineArgsProviderSO_def.hpp"
#include "GlobalNamespace/zzzz__ICommandLineArgsProvider_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentCommandLineArgsProvider_def.hpp"
//  Writing Method size for method: GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO.GetCommandLineArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::*)()>(&GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x21a8cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO>::get(),
                            "GetCommandLineArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::*)()>(&GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ICommandLineArgsProvider
constexpr  GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::operator GlobalNamespace::ICommandLineArgsProvider() const noexcept {
return GlobalNamespace::ICommandLineArgsProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__useCustomCommandLineArgs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useCustomCommandLineArgs() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__useEnvironmentCommandLineArgs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useEnvironmentCommandLineArgs() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__customCommandLineArgs(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__customCommandLineArgs() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__environmentCommandLineArgsProvider(GlobalNamespace::EnvironmentCommandLineArgsProvider value)  {
::cordl_internals::setStaticField<GlobalNamespace::EnvironmentCommandLineArgsProvider, "_environmentCommandLineArgsProvider", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO>::get>(std::forward<GlobalNamespace::EnvironmentCommandLineArgsProvider>(value));
}
 GlobalNamespace::EnvironmentCommandLineArgsProvider GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__environmentCommandLineArgsProvider()  {
return ::cordl_internals::getStaticField<GlobalNamespace::EnvironmentCommandLineArgsProvider, "_environmentCommandLineArgsProvider", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO>::get>();
}
 ::ArrayW<::StringW> GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::GetCommandLineArgs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO>::get(),
                            "GetCommandLineArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::New_ctor()  {
GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO>())};
return o;
}
 void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

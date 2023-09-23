#pragma once
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentTypeSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::OverrideEnvironmentSettings.SetEnvironmentInfoForType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OverrideEnvironmentSettings::*)(GlobalNamespace::EnvironmentTypeSO, GlobalNamespace::EnvironmentInfoSO)>(&GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22201ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OverrideEnvironmentSettings>::get(),
                            "SetEnvironmentInfoForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentTypeSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentInfoSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OverrideEnvironmentSettings.GetOverrideEnvironmentInfoForType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO (GlobalNamespace::OverrideEnvironmentSettings::*)(GlobalNamespace::EnvironmentTypeSO)>(&GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2220254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OverrideEnvironmentSettings>::get(),
                            "GetOverrideEnvironmentInfoForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentTypeSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OverrideEnvironmentSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OverrideEnvironmentSettings::*)()>(&GlobalNamespace::OverrideEnvironmentSettings::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22202cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OverrideEnvironmentSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OverrideEnvironmentSettings::__set_overrideEnvironments(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OverrideEnvironmentSettings::__get_overrideEnvironments() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OverrideEnvironmentSettings::__set__data(System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO,GlobalNamespace::EnvironmentInfoSO> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO,GlobalNamespace::EnvironmentInfoSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO,GlobalNamespace::EnvironmentInfoSO>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO,GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::OverrideEnvironmentSettings::__get__data() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentTypeSO,GlobalNamespace::EnvironmentInfoSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType(GlobalNamespace::EnvironmentTypeSO environmentType, GlobalNamespace::EnvironmentInfoSO environmentInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OverrideEnvironmentSettings>::get(),
                            "SetEnvironmentInfoForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentTypeSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentInfoSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, environmentType, environmentInfo);
}
 GlobalNamespace::EnvironmentInfoSO GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType(GlobalNamespace::EnvironmentTypeSO environmentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OverrideEnvironmentSettings>::get(),
                            "GetOverrideEnvironmentInfoForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentTypeSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method, environmentType);
}
// Ctor Parameters []
 GlobalNamespace::OverrideEnvironmentSettings::OverrideEnvironmentSettings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OverrideEnvironmentSettings>())) {}
 void GlobalNamespace::OverrideEnvironmentSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OverrideEnvironmentSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

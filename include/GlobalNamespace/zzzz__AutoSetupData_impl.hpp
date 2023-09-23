#pragma once
#include "GlobalNamespace/zzzz__AutoSetupData_def.hpp"
//  Writing Method size for method: GlobalNamespace::AutoSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupData::*)()>(&GlobalNamespace::AutoSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214b760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AutoSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AutoSetupData::__set_selectBasedOnSuggestions(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::AutoSetupData::__get_selectBasedOnSuggestions() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AutoSetupData::__set_autoStartWhenAllReady(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::AutoSetupData::__get_autoStartWhenAllReady() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AutoSetupData::__set_forceAutoStartAfterSongSelection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::AutoSetupData::__get_forceAutoStartAfterSongSelection() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AutoSetupData::__set_randomSongIfNoneSuggested(bool value)  {
::cordl_internals::setInstanceField<bool, 0x13>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::AutoSetupData::__get_randomSongIfNoneSuggested() const {
return ::cordl_internals::getInstanceField<bool, 0x13>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::AutoSetupData::AutoSetupData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AutoSetupData>())) {}
 void GlobalNamespace::AutoSetupData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AutoSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TutorialSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialSceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSceneSetupData::*)(::GlobalNamespace::ColorScheme, ::GlobalNamespace::PlayerSpecificSettings)>(&::GlobalNamespace::TutorialSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21cfac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::TutorialSceneSetupData::__set_colorScheme(::GlobalNamespace::ColorScheme value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorScheme, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorScheme>(value));
}
constexpr ::GlobalNamespace::ColorScheme ::GlobalNamespace::TutorialSceneSetupData::__get_colorScheme() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorScheme, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TutorialSceneSetupData::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings ::GlobalNamespace::TutorialSceneSetupData::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "colorScheme", ty: "::GlobalNamespace::ColorScheme", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: None }]
 ::GlobalNamespace::TutorialSceneSetupData::TutorialSceneSetupData(::GlobalNamespace::ColorScheme colorScheme, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings)  : ::GlobalNamespace::SceneSetupData(THROW_UNLESS(::il2cpp_utils::New<TutorialSceneSetupData>(colorScheme, playerSpecificSettings))) {}
 void ::GlobalNamespace::TutorialSceneSetupData::_ctor(::GlobalNamespace::ColorScheme colorScheme, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, colorScheme, playerSpecificSettings);
}
} // end anonymous namespace

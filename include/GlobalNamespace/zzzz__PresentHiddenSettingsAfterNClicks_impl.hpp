#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PresentHiddenSettingsAfterNClicks_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
//  Writing Method size for method: GlobalNamespace::PresentHiddenSettingsAfterNClicks.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(&GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2154774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PresentHiddenSettingsAfterNClicks>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PresentHiddenSettingsAfterNClicks.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(&GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2154810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PresentHiddenSettingsAfterNClicks>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PresentHiddenSettingsAfterNClicks._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(&GlobalNamespace::PresentHiddenSettingsAfterNClicks::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x215482c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PresentHiddenSettingsAfterNClicks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PresentHiddenSettingsAfterNClicks._OnEnable_b__6_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(&GlobalNamespace::PresentHiddenSettingsAfterNClicks::_OnEnable_b__6_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x215489c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PresentHiddenSettingsAfterNClicks>::get(),
                            "<OnEnable>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__hiddenSettingsButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__hiddenSettingsButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__hiddenSettingsViewController(HMUI::ViewController value)  {
::cordl_internals::setInstanceField<HMUI::ViewController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ViewController>(value));
}
constexpr HMUI::ViewController GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__hiddenSettingsViewController() const {
return ::cordl_internals::getInstanceField<HMUI::ViewController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__numberOfClicksRequired(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__numberOfClicksRequired() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__settingsFlowCoordinator(GlobalNamespace::SettingsFlowCoordinator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SettingsFlowCoordinator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SettingsFlowCoordinator>(value));
}
constexpr GlobalNamespace::SettingsFlowCoordinator GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__settingsFlowCoordinator() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SettingsFlowCoordinator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__currentNumberOfClicks(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__currentNumberOfClicks() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__buttonBinder(HMUI::ButtonBinder value)  {
::cordl_internals::setInstanceField<HMUI::ButtonBinder, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ButtonBinder>(value));
}
constexpr HMUI::ButtonBinder GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__buttonBinder() const {
return ::cordl_internals::getInstanceField<HMUI::ButtonBinder, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PresentHiddenSettingsAfterNClicks>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PresentHiddenSettingsAfterNClicks>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::PresentHiddenSettingsAfterNClicks GlobalNamespace::PresentHiddenSettingsAfterNClicks::New_ctor()  {
GlobalNamespace::PresentHiddenSettingsAfterNClicks o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::PresentHiddenSettingsAfterNClicks>())};
return o;
}
 void GlobalNamespace::PresentHiddenSettingsAfterNClicks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PresentHiddenSettingsAfterNClicks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PresentHiddenSettingsAfterNClicks::_OnEnable_b__6_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PresentHiddenSettingsAfterNClicks>::get(),
                            "<OnEnable>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

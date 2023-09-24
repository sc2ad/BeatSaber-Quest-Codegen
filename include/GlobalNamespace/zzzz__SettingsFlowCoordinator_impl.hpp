#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsMenuViewController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction::GlobalNamespace__SettingsFlowCoordinator__FinishAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction  GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction::Cancel{0};
constexpr GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction  GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction::Ok{1};
constexpr GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction  GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction::Apply{2};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction>)>(&GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21449e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction>)>(&GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2144a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::SettingsFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2144b44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SettingsFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::SettingsFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2144df4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SettingsFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.ShowSecretViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(HMUI::ViewController)>(&GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2144f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "ShowSecretViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.HandleDidSelectSettingsSubMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(GlobalNamespace::SettingsSubMenuInfo, int32_t)>(&GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2144f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "HandleDidSelectSettingsSubMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SettingsSubMenuInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.ReplaceViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(HMUI::ViewController)>(&GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2144f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "ReplaceViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.HandleSettingsNavigationControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)(GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction)>(&GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinish)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2145004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "HandleSettingsNavigationControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.ApplySettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)()>(&GlobalNamespace::SettingsFlowCoordinator::ApplySettings)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21450a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "ApplySettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator.CancelSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)()>(&GlobalNamespace::SettingsFlowCoordinator::CancelSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21450dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "CancelSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsFlowCoordinator::*)()>(&GlobalNamespace::SettingsFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2145104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SettingsFlowCoordinator::__set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainSettingsModelSO, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainSettingsModelSO>(value));
}
constexpr GlobalNamespace::MainSettingsModelSO GlobalNamespace::SettingsFlowCoordinator::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainSettingsModelSO, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__set__mainSettingsMenuViewController(GlobalNamespace::MainSettingsMenuViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainSettingsMenuViewController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainSettingsMenuViewController>(value));
}
constexpr GlobalNamespace::MainSettingsMenuViewController GlobalNamespace::SettingsFlowCoordinator::__get__mainSettingsMenuViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainSettingsMenuViewController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__set__settingsNavigationController(GlobalNamespace::SettingsNavigationController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SettingsNavigationController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SettingsNavigationController>(value));
}
constexpr GlobalNamespace::SettingsNavigationController GlobalNamespace::SettingsFlowCoordinator::__get__settingsNavigationController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SettingsNavigationController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__set__saveData(GlobalNamespace::ISaveData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ISaveData, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ISaveData>(value));
}
constexpr GlobalNamespace::ISaveData GlobalNamespace::SettingsFlowCoordinator::__get__saveData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ISaveData, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__set_didFinishEvent(System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction>>(value));
}
constexpr System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction> GlobalNamespace::SettingsFlowCoordinator::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SettingsFlowCoordinator::__set__selectedSettingsSubMenuInfoIdx(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_selectedSettingsSubMenuInfoIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::SettingsFlowCoordinator::__get__selectedSettingsSubMenuInfoIdx()  {
return ::cordl_internals::getStaticField<int32_t, "_selectedSettingsSubMenuInfoIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get>();
}
 void GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent(System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent(System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::SettingsFlowCoordinator,GlobalNamespace::GlobalNamespace__SettingsFlowCoordinator__FinishAction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::SettingsFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::SettingsFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController(HMUI::ViewController viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "ShowSecretViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController);
}
 void GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu(GlobalNamespace::SettingsSubMenuInfo settingsSubMenuInfo, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "HandleDidSelectSettingsSubMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SettingsSubMenuInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, settingsSubMenuInfo, idx);
}
 void GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController(HMUI::ViewController viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "ReplaceViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController);
}
 void GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinish(GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction finishAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "HandleSettingsNavigationControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SettingsNavigationController__FinishAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, finishAction);
}
 void GlobalNamespace::SettingsFlowCoordinator::ApplySettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "ApplySettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SettingsFlowCoordinator::CancelSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            "CancelSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SettingsFlowCoordinator GlobalNamespace::SettingsFlowCoordinator::New_ctor()  {
GlobalNamespace::SettingsFlowCoordinator o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SettingsFlowCoordinator>())};
return o;
}
 void GlobalNamespace::SettingsFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}

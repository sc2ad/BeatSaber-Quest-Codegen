#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersPanelController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierToggle_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::*)()>(&GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bcd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0._Awake_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::*)(bool)>(&GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::_Awake_b__0)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x215c15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0>::get(),
                            "<Awake>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::__set_gameplayModifierToggle(GlobalNamespace::GameplayModifierToggle value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifierToggle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifierToggle>(value));
}
constexpr GlobalNamespace::GameplayModifierToggle GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::__get_gameplayModifierToggle() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifierToggle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::__set___4__this(GlobalNamespace::GameplayModifiersPanelController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiersPanelController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiersPanelController>(value));
}
constexpr GlobalNamespace::GameplayModifiersPanelController GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiersPanelController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0>())) {}
 void GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0::_Awake_b__0(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayModifiersPanelController____c__DisplayClass16_0>::get(),
                            "<Awake>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.add_didChangeGameplayModifiersEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)(System::Action)>(&GlobalNamespace::GameplayModifiersPanelController::add_didChangeGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x215ba08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "add_didChangeGameplayModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.remove_didChangeGameplayModifiersEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)(System::Action)>(&GlobalNamespace::GameplayModifiersPanelController::remove_didChangeGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x215baa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "remove_didChangeGameplayModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.get_gameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)(GlobalNamespace::GameplayModifiers)>(&GlobalNamespace::GameplayModifiersPanelController::SetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::Awake)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x215bb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x215bcdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.SetToggleValueWithGameplayModifierParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)(GlobalNamespace::GameplayModifierParamsSO, bool)>(&GlobalNamespace::GameplayModifiersPanelController::SetToggleValueWithGameplayModifierParams)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x215bcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "SetToggleValueWithGameplayModifierParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierParamsSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.GetToggleValueWithGameplayModifierParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiersPanelController::*)(GlobalNamespace::GameplayModifierParamsSO)>(&GlobalNamespace::GameplayModifiersPanelController::GetToggleValueWithGameplayModifierParams)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x215bd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "GetToggleValueWithGameplayModifierParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierParamsSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.RefreshTotalMultiplierAndRankUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::RefreshTotalMultiplierAndRankUI)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x215be04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "RefreshTotalMultiplierAndRankUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController.IRefreshable_Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::IRefreshable_Refresh)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x215bfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "IRefreshable.Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiersPanelController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x215c0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IRefreshable
constexpr  GlobalNamespace::GameplayModifiersPanelController::operator GlobalNamespace::IRefreshable() const noexcept {
return GlobalNamespace::IRefreshable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiersModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiersModelSO>(value));
}
constexpr GlobalNamespace::GameplayModifiersModelSO GlobalNamespace::GameplayModifiersPanelController::__get__gameplayModifiersModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiersModelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__totalMultiplierValueText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::GameplayModifiersPanelController::__get__totalMultiplierValueText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__maxRankValueText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::GameplayModifiersPanelController::__get__maxRankValueText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__positiveColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::GameplayModifiersPanelController::__get__positiveColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__negativeColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::GameplayModifiersPanelController::__get__negativeColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set_didChangeGameplayModifiersEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GameplayModifiersPanelController::__get_didChangeGameplayModifiersEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__gameplayModifiers(GlobalNamespace::GameplayModifiers value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiers, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiers>(value));
}
constexpr GlobalNamespace::GameplayModifiers GlobalNamespace::GameplayModifiersPanelController::__get__gameplayModifiers() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiers, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__toggleBinder(HMUI::ToggleBinder value)  {
::cordl_internals::setInstanceField<HMUI::ToggleBinder, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ToggleBinder>(value));
}
constexpr HMUI::ToggleBinder GlobalNamespace::GameplayModifiersPanelController::__get__toggleBinder() const {
return ::cordl_internals::getInstanceField<HMUI::ToggleBinder, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__gameplayModifierToggles(::ArrayW<GlobalNamespace::GameplayModifierToggle> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GameplayModifierToggle>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GameplayModifierToggle>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GameplayModifierToggle> GlobalNamespace::GameplayModifiersPanelController::__get__gameplayModifierToggles() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GameplayModifierToggle>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__changingGameplayModifierToggles(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiersPanelController::__get__changingGameplayModifierToggles() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiersPanelController::__set__toggleForGameplayModifierParam(System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,UnityEngine::UI::Toggle> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,UnityEngine::UI::Toggle>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,UnityEngine::UI::Toggle>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,UnityEngine::UI::Toggle> GlobalNamespace::GameplayModifiersPanelController::__get__toggleForGameplayModifierParam() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,UnityEngine::UI::Toggle>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GameplayModifiersPanelController::add_didChangeGameplayModifiersEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "add_didChangeGameplayModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplayModifiersPanelController::remove_didChangeGameplayModifiersEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "remove_didChangeGameplayModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GameplayModifiers GlobalNamespace::GameplayModifiersPanelController::get_gameplayModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifiers, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayModifiersPanelController::SetData(GlobalNamespace::GameplayModifiers newGameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newGameplayModifiers);
}
 void GlobalNamespace::GameplayModifiersPanelController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayModifiersPanelController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayModifiersPanelController::SetToggleValueWithGameplayModifierParams(GlobalNamespace::GameplayModifierParamsSO gameplayModifierParams, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "SetToggleValueWithGameplayModifierParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierParamsSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameplayModifierParams, value);
}
 bool GlobalNamespace::GameplayModifiersPanelController::GetToggleValueWithGameplayModifierParams(GlobalNamespace::GameplayModifierParamsSO gameplayModifierParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "GetToggleValueWithGameplayModifierParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierParamsSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, gameplayModifierParams);
}
 void GlobalNamespace::GameplayModifiersPanelController::RefreshTotalMultiplierAndRankUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "RefreshTotalMultiplierAndRankUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayModifiersPanelController::IRefreshable_Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            "IRefreshable.Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GameplayModifiersPanelController::GameplayModifiersPanelController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<GameplayModifiersPanelController>())) {}
 void GlobalNamespace::GameplayModifiersPanelController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiersPanelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
